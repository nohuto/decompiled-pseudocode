/*
 * XREFs of ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800D2C50
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAULegacyInputInfo@@@Z @ 0x1800CE464 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAULegacyIn.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x1800D27EC (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     ?UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z @ 0x1800D3010 (-UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800DFE3C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnInputReport(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        PCHAR Report,
        ULONG a4)
{
  int Device; // ebx
  __int64 v9; // rdx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rsi
  struct _HIDP_CAPS *v12; // r15
  ULONG ReportLength; // ebx
  NTSTATUS Usages; // eax
  USHORT v15; // ax
  USHORT *v16; // rdx
  int v17; // esi
  __int64 InputReportByteLength; // rax
  __int64 v19; // rdx
  struct _HIDP_CAPS *v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h]
  ULONG UsageValue; // [rsp+50h] [rbp-B0h] BYREF
  ULONG UsageLength[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _HIDP_PREPARSED_DATA *v24; // [rsp+60h] [rbp-A0h]
  struct _HIDP_CAPS *v25; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+78h] [rbp-88h]
  struct _HIDP_CAPS *v27; // [rsp+80h] [rbp-80h] BYREF
  int v28; // [rsp+88h] [rbp-78h]
  _BYTE v29[24]; // [rsp+90h] [rbp-70h] BYREF
  int v30; // [rsp+A8h] [rbp-58h]
  char v31; // [rsp+960h] [rbp+860h]
  float v32[187]; // [rsp+964h] [rbp+864h]
  USHORT UsageList[20]; // [rsp+C50h] [rbp+B50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+CB8h] [rbp+BB8h]

  *(_QWORD *)UsageLength = 0LL;
  v20 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, (struct RIMDevice **)UsageLength, 0LL);
  if ( Device < 0 )
  {
    v9 = 181LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)UsageLength + 48LL);
  v24 = PreparsedData;
  Device = HIDDevice::GetHIDCapabilities(*(HIDDevice **)UsageLength, &v20);
  if ( Device < 0 )
  {
    v9 = 183LL;
    goto LABEL_3;
  }
  UsageValue = 0;
  v12 = v20;
  while ( 1 )
  {
    ReportLength = v12->InputReportByteLength;
    if ( a4 < ReportLength )
      return 0LL;
    memset_0(v29, 0, 0xBC0uLL);
    v30 = 3008;
    if ( *((_BYTE *)this + 2776) )
    {
      *(_QWORD *)v32 = 0LL;
    }
    else
    {
      Usages = HidP_GetUsageValue(HidP_Input, 1u, 0, 0x33u, &UsageValue, PreparsedData, Report, ReportLength);
      if ( Usages < 0 )
      {
        v19 = 213LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v19,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      v32[0] = (float)(__int16)UsageValue / 10.0;
      Usages = HidP_GetUsageValue(
                 HidP_Input,
                 1u,
                 0,
                 0x34u,
                 &UsageValue,
                 PreparsedData,
                 Report,
                 v12->InputReportByteLength);
      if ( Usages < 0 )
      {
        v19 = 228LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v19,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      v32[1] = (float)(__int16)UsageValue / 10.0;
    }
    v31 = 0;
    UsageLength[0] = 20;
    Usages = HidP_GetUsages(
               HidP_Input,
               9u,
               0,
               UsageList,
               UsageLength,
               PreparsedData,
               Report,
               v12->InputReportByteLength);
    if ( Usages < 0 )
    {
      v19 = 248LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v19,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
               (const char *)(unsigned int)Usages);
    }
    v15 = UsageList[0];
    v16 = UsageList;
    while ( v15 )
    {
      if ( v15 == 1 )
        v31 = 1;
      v15 = *++v16;
    }
    v20 = 0LL;
    v21 = 0;
    Device = AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(
               this,
               a2,
               (struct AugmentedInputCacheState *)&v20);
    if ( Device < 0 )
    {
      v9 = 263LL;
      goto LABEL_3;
    }
    if ( v31 )
    {
      if ( BYTE4(v20) )
      {
        v17 = 3;
      }
      else
      {
        BYTE4(v20) = 1;
        v25 = v20;
        v17 = 2;
        v26 = v21;
        Device = AugmentedInputDeviceCollection::UpdateCacheForDevice(this, a2, &v25);
        if ( Device < 0 )
        {
          v9 = 275LL;
          goto LABEL_3;
        }
      }
    }
    else
    {
      if ( !BYTE4(v20) )
        goto LABEL_29;
      BYTE4(v20) = 0;
      v27 = v20;
      v17 = 4;
      v28 = v21;
      Device = AugmentedInputDeviceCollection::UpdateCacheForDevice(this, a2, &v27);
      if ( Device < 0 )
      {
        v9 = 284LL;
        goto LABEL_3;
      }
    }
    MPCInputInfoHelper::PopulateAugmentedInput(v17, a2, (int)v20, SHIWORD(v20), v21, SHIWORD(v20), (__int64)v29);
    Device = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v29);
    if ( Device < 0 )
    {
      v9 = 291LL;
      goto LABEL_3;
    }
    PreparsedData = v24;
LABEL_29:
    InputReportByteLength = v12->InputReportByteLength;
    a4 -= InputReportByteLength;
    Report += InputReportByteLength;
  }
}
