/*
 * XREFs of RIMApiSetValidateDeviceSignature @ 0x1400EE9C4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400ED158 (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 *     RIMIsRunningOnDesktop @ 0x1400F0800 (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserLogError @ 0x140188BC0 (UserLogError.c)
 *     ?CheckForSegmentedSignatureBlob@@YAJPEAXGPEAU_HIDP_VALUE_CAPS@@PEAG@Z @ 0x140198898 (-CheckForSegmentedSignatureBlob@@YAJPEAXGPEAU_HIDP_VALUE_CAPS@@PEAG@Z.c)
 *     ?_GetLicensingType@@YAKXZ @ 0x140198FDC (-_GetLicensingType@@YAKXZ.c)
 *     EtwTraceTHQAStop @ 0x1401A1D40 (EtwTraceTHQAStop.c)
 *     EtwTraceTHQAStart @ 0x1401A2360 (EtwTraceTHQAStart.c)
 */

__int64 __fastcall RIMApiSetValidateDeviceSignature(
        struct _DEVICE_OBJECT *a1,
        struct _FILE_OBJECT *a2,
        struct _HIDP_PREPARSED_DATA *a3,
        struct _HIDP_CAPS *a4,
        __int64 a5,
        __int64 *a6)
{
  unsigned int v7; // r15d
  unsigned __int16 v8; // si
  USAGE v10; // r14
  int v12; // r12d
  unsigned int LicensingType; // eax
  bool v14; // zf
  __int64 NumberFeatureValueCaps; // rax
  struct _HIDP_VALUE_CAPS *ValueCaps; // rax
  NTSTATUS SpecificValueCaps; // eax
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // ebx
  __int64 v21; // xmm0_8
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  bool v26; // r14
  int v27; // edx
  int v28; // r8d
  __int64 v29; // r9
  __int16 PreparsedData; // [rsp+30h] [rbp-50h]
  char v31; // [rsp+40h] [rbp-40h]
  USHORT ValueCapsLength[2]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int16 v33; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v34; // [rsp+58h] [rbp-28h] BYREF
  ULONG ReturnLength; // [rsp+5Ch] [rbp-24h] BYREF
  __int64 SystemInformation; // [rsp+60h] [rbp-20h] BYREF
  PVOID Buffer; // [rsp+68h] [rbp-18h]
  _HID_COLLECTION_INFORMATION v38; // [rsp+70h] [rbp-10h] BYREF

  v7 = 0;
  v33 = 0;
  v8 = 0;
  v10 = 197;
  if ( !(unsigned int)RIMIsRunningOnDesktop() )
    return 0LL;
  EtwTraceTHQAStart();
  SystemInformation = 8LL;
  ReturnLength = 0;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength) >= 0
    && (SystemInformation & 0x200000000LL) != 0 )
  {
    LicensingType = _GetLicensingType();
    v7 = 4;
    v12 = 1;
  }
  else
  {
    v12 = 0;
    LicensingType = _GetLicensingType();
  }
  v14 = LicensingType == 0;
  NumberFeatureValueCaps = a4->NumberFeatureValueCaps;
  if ( v14 )
    v7 = 3;
  ValueCapsLength[0] = a4->NumberFeatureValueCaps;
  v34 = v7;
  if ( (_WORD)NumberFeatureValueCaps )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72 * NumberFeatureValueCaps, 0x63767355u);
    Buffer = ValueCaps;
    if ( ValueCaps )
    {
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0, 0, 0xC5u, ValueCaps, ValueCapsLength, a3);
      v19 = 0LL;
      v20 = SpecificValueCaps;
      if ( SpecificValueCaps >= 0 )
      {
LABEL_10:
        v21 = *a6;
        *(_DWORD *)&v38.ProductID = *((_DWORD *)a6 + 2);
        *(_QWORD *)&v38.DescriptorSize = v21;
        RetrieveAndVerifySignature(a1, a2, v10, (struct _HIDP_VALUE_CAPS *)Buffer, a4, a3, &v38, v8, &v34);
        v7 = v34;
LABEL_11:
        GreDeleteFastMutex((char *)Buffer, v22, v19, v18);
        goto LABEL_12;
      }
      v14 = *(_DWORD *)(a5 + 24) == 7;
      v22 = a4->NumberFeatureValueCaps;
      ValueCapsLength[0] = a4->NumberFeatureValueCaps;
      if ( v14 )
      {
        v25 = CheckForSegmentedSignatureBlob(a3, v22, (struct _HIDP_VALUE_CAPS *)Buffer, &v33);
        v22 = 0LL;
        v20 = v25;
        if ( v25 >= 0 )
        {
          v8 = v33;
          v10 = 199;
          goto LABEL_10;
        }
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
        {
          LOBYTE(v8) = 1;
        }
        v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_32:
          v20 = -1073741668;
          goto LABEL_11;
        }
        v31 = v25;
        v29 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v19) + 19368);
        PreparsedData = 31;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
        {
          LOBYTE(v8) = 1;
        }
        v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_32;
        v31 = SpecificValueCaps;
        v29 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, 0) + 19368);
        PreparsedData = 32;
      }
      LOBYTE(v28) = v26;
      LOBYTE(v27) = v8;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v28,
        v29,
        3,
        1,
        PreparsedData,
        (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
        v31);
      goto LABEL_32;
    }
  }
  v20 = -1073741668;
LABEL_12:
  if ( v7 == 1 || v7 == 2 && *(_DWORD *)(a5 + 24) == 7 || v12 )
    *(_DWORD *)(a5 + 368) |= 0x100u;
  EtwTraceTHQAStop();
  if ( v12 )
    return 0LL;
  if ( v20 < 0 )
  {
    if ( *(_DWORD *)(a5 + 24) != 7 )
      return 0LL;
    UserLogError(3221225742LL, v23, v24);
  }
  UserLogError(1073742091LL, v23, v24);
  return (unsigned int)v20;
}
