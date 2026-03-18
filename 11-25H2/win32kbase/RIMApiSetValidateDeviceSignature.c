/*
 * XREFs of RIMApiSetValidateDeviceSignature @ 0x1400B25A8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserLogError @ 0x1400B06D0 (UserLogError.c)
 *     EtwTraceTHQAStart @ 0x1400B0790 (EtwTraceTHQAStart.c)
 *     EtwTraceTHQAStop @ 0x1400B07C0 (EtwTraceTHQAStop.c)
 *     ?_GetLicensingType@@YAKXZ @ 0x1400B07EC (-_GetLicensingType@@YAKXZ.c)
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400B09BC (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 *     RIMIsRunningOnDesktop @ 0x1400B29E8 (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?CheckForSegmentedSignatureBlob@@YAJPEAXGPEAU_HIDP_VALUE_CAPS@@PEAG@Z @ 0x140159294 (-CheckForSegmentedSignatureBlob@@YAJPEAXGPEAU_HIDP_VALUE_CAPS@@PEAG@Z.c)
 */

__int64 __fastcall RIMApiSetValidateDeviceSignature(
        struct _DEVICE_OBJECT *a1,
        struct _FILE_OBJECT *a2,
        struct _HIDP_PREPARSED_DATA *a3,
        struct _HIDP_CAPS *a4,
        __int64 a5,
        __int64 *a6)
{
  unsigned int v7; // r12d
  unsigned __int16 v8; // r14
  USAGE v10; // r15
  __int64 v11; // rcx
  int v13; // edi
  int LicensingType; // eax
  bool v15; // zf
  __int64 NumberFeatureValueCaps; // rax
  __int64 v17; // rcx
  struct _HIDP_VALUE_CAPS *ValueCaps; // rax
  NTSTATUS SpecificValueCaps; // ebx
  __int64 v20; // xmm0_8
  __int64 v21; // rdx
  int v22; // eax
  bool v23; // r15
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  __int16 PreparsedData; // [rsp+30h] [rbp-50h]
  char v28; // [rsp+40h] [rbp-40h]
  USHORT ValueCapsLength[2]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int16 v30; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v31; // [rsp+58h] [rbp-28h] BYREF
  ULONG ReturnLength; // [rsp+5Ch] [rbp-24h] BYREF
  __int64 SystemInformation; // [rsp+60h] [rbp-20h] BYREF
  PVOID Buffer; // [rsp+68h] [rbp-18h]
  _HID_COLLECTION_INFORMATION v35; // [rsp+70h] [rbp-10h] BYREF

  v7 = 0;
  v30 = 0;
  v8 = 0;
  v10 = 197;
  if ( !(unsigned int)RIMIsRunningOnDesktop() )
    return 0LL;
  EtwTraceTHQAStart(v11);
  SystemInformation = 8LL;
  ReturnLength = 0;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength) >= 0
    && (SystemInformation & 0x200000000LL) != 0 )
  {
    LicensingType = _GetLicensingType();
    v13 = 1;
    v7 = 4;
  }
  else
  {
    v13 = 0;
    LicensingType = _GetLicensingType();
  }
  v15 = LicensingType == 0;
  NumberFeatureValueCaps = a4->NumberFeatureValueCaps;
  v17 = 3LL;
  if ( v15 )
    v7 = 3;
  ValueCapsLength[0] = a4->NumberFeatureValueCaps;
  v31 = v7;
  if ( (_WORD)NumberFeatureValueCaps )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72 * NumberFeatureValueCaps, 0x63767355u);
    Buffer = ValueCaps;
    if ( ValueCaps )
    {
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0, 0, 0xC5u, ValueCaps, ValueCapsLength, a3);
      if ( SpecificValueCaps >= 0 )
      {
LABEL_10:
        v20 = *a6;
        *(_DWORD *)&v35.ProductID = *((_DWORD *)a6 + 2);
        *(_QWORD *)&v35.DescriptorSize = v20;
        RetrieveAndVerifySignature(a1, a2, v10, (struct _HIDP_VALUE_CAPS *)Buffer, a4, a3, &v35, v8, &v31);
        v7 = v31;
LABEL_11:
        GreDeleteFastMutex((char *)Buffer);
        goto LABEL_12;
      }
      v15 = *(_DWORD *)(a5 + 24) == 7;
      v21 = a4->NumberFeatureValueCaps;
      ValueCapsLength[0] = a4->NumberFeatureValueCaps;
      if ( v15 )
      {
        v22 = CheckForSegmentedSignatureBlob(a3, v21, (struct _HIDP_VALUE_CAPS *)Buffer, &v30);
        SpecificValueCaps = v22;
        if ( v22 >= 0 )
        {
          v8 = v30;
          v10 = 199;
          goto LABEL_10;
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
        {
          LOBYTE(v8) = 1;
        }
        v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_32:
          SpecificValueCaps = -1073741668;
          goto LABEL_11;
        }
        v28 = v22;
        v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, 0LL) + 19336);
        PreparsedData = 31;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
        {
          LOBYTE(v8) = 1;
        }
        v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_32;
        v28 = SpecificValueCaps;
        v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v21) + 19336);
        PreparsedData = 32;
      }
      LOBYTE(v25) = v23;
      LOBYTE(v24) = v8;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v25,
        v26,
        3,
        1,
        PreparsedData,
        (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
        v28);
      goto LABEL_32;
    }
  }
  SpecificValueCaps = -1073741668;
LABEL_12:
  if ( v7 == 1 || v7 == 2 && *(_DWORD *)(a5 + 24) == 7 || v13 )
    *(_DWORD *)(a5 + 368) |= 0x100u;
  EtwTraceTHQAStop(v17);
  if ( v13 )
    return 0LL;
  if ( SpecificValueCaps < 0 )
  {
    if ( *(_DWORD *)(a5 + 24) != 7 )
      return 0LL;
    UserLogError(-1073741554);
  }
  UserLogError(1073742091);
  return (unsigned int)SpecificValueCaps;
}
