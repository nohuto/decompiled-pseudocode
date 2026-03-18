/*
 * XREFs of ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400ED158
 * Callers:
 *     RIMApiSetValidateDeviceSignature @ 0x1400EE9C4 (RIMApiSetValidateDeviceSignature.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400EC374 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 *     ?CoreSignatureVerify@@YAHGGPEAEPEAK@Z @ 0x1400EC730 (-CoreSignatureVerify@@YAHGGPEAEPEAK@Z.c)
 *     ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1400ED42C (-RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HI.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall RetrieveAndVerifySignature(
        PDEVICE_OBJECT DeviceObject,
        struct _FILE_OBJECT *a2,
        USAGE a3,
        struct _HIDP_VALUE_CAPS *a4,
        struct _HIDP_CAPS *a5,
        PHIDP_PREPARSED_DATA PreparsedData,
        struct _HID_COLLECTION_INFORMATION *a7,
        unsigned __int16 a8,
        unsigned int *a9)
{
  unsigned int v10; // edi
  USHORT ProductID; // r14
  USHORT VendorID; // r13
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __int64 UsagePage; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 *UsageValue; // rbx
  int v21; // eax
  int v22; // ecx
  char v23; // r14
  unsigned int v24; // r14d
  char v26; // bl
  bool v27; // di
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  PCHAR v31; // [rsp+58h] [rbp-51h] BYREF
  PCHAR Report; // [rsp+60h] [rbp-49h] BYREF
  struct _HIDP_VALUE_CAPS v33; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int16 v35; // [rsp+118h] [rbp+6Fh]

  v31 = 0LL;
  Report = 0LL;
  v10 = 0;
  ProductID = a7->ProductID;
  VendorID = a7->VendorID;
  v35 = ProductID;
  if ( a3 == 199 )
  {
    v13 = *(_OWORD *)&a4[a8].HasNull;
    *(_OWORD *)&v33.UsagePage = *(_OWORD *)&a4[a8].UsagePage;
    v14 = *(_OWORD *)&a4[a8].UnitsExp;
    *(_OWORD *)&v33.HasNull = v13;
    v15 = *(_OWORD *)&a4[a8].PhysicalMin;
    *(_OWORD *)&v33.UnitsExp = v14;
    *(_QWORD *)&v33.NotRange.DesignatorIndex = *(_QWORD *)&a4[a8].NotRange.DesignatorIndex;
    *(_OWORD *)&v33.PhysicalMin = v15;
    v16 = RetrieveSegmentedBlob(DeviceObject, a2, &v31, &Report, a5, PreparsedData, &v33);
    UsageValue = (unsigned __int8 *)v31;
    if ( v16 >= 0 )
      v10 = CoreSignatureVerify(VendorID, ProductID, (unsigned __int8 *)v31, a9);
    else
      *a9 = 0;
  }
  else
  {
    v21 = BuildSignatureFeatureReport(a5, a4, DeviceObject, a2, &Report, &v31);
    v23 = v21;
    if ( v21 < 0 )
    {
      UsagePage = (__int64)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v22 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v22 & 1) == 0)
        || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v26 = 0;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(v22, (_DWORD)WPP_GLOBAL_Control, v18);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v26;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v29,
          *(_QWORD *)(UserSessionState + 19368),
          3,
          1,
          30,
          (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
          v23);
      }
      v10 = 0;
      UsageValue = (unsigned __int8 *)v31;
      *a9 = 0;
    }
    else
    {
      v24 = 0;
      UsageValue = (unsigned __int8 *)v31;
      if ( a5->NumberFeatureValueCaps )
      {
        v19 = 256LL;
        do
        {
          UsagePage = a4[v24].UsagePage;
          if ( (unsigned __int16)UsagePage >= 0xFF00u && a4[v24].BitSize == 8 && a4[v24].ReportCount == 256 )
          {
            if ( HidP_GetUsageValueArray(
                   HidP_Feature,
                   UsagePage,
                   0,
                   a3,
                   (PCHAR)UsageValue,
                   0x100u,
                   PreparsedData,
                   Report,
                   a5->FeatureReportByteLength) < 0 )
            {
              v10 = 0;
              *a9 = 0;
            }
            else
            {
              v10 = CoreSignatureVerify(VendorID, v35, UsageValue, a9);
              if ( v10 )
                break;
            }
            v19 = 256LL;
          }
          ++v24;
        }
        while ( v24 < a5->NumberFeatureValueCaps );
      }
    }
  }
  if ( UsageValue )
    GreDeleteFastMutex((char *)UsageValue, UsagePage, v18, v19);
  if ( Report )
    GreDeleteFastMutex(Report, UsagePage, v18, v19);
  return v10;
}
