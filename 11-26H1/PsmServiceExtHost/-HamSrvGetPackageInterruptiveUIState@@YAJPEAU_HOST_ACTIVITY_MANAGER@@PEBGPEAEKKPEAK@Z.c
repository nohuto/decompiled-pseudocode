/*
 * XREFs of ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18007A3C0
 * Callers:
 *     HamRpcSrvGetPackageInterruptiveUIState @ 0x18007C770 (HamRpcSrvGetPackageInterruptiveUIState.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x180017F74 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180018698 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180037EF0 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180061028 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_t_ea_180061028.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetPackageInterruptiveUIState(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  char v10; // si
  int v11; // ebx
  struct _HAM_PACKAGE *v12; // rax
  struct _HAM_PACKAGE *v13; // rdi
  unsigned int InterruptiveUIState; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 *v22; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v23; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v24[144]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[208]; // [rsp+100h] [rbp+0h] BYREF

  memset_0(v25, 0, 0xCCuLL);
  memset_0(v24, 0, 0x88uLL);
  v10 = 0;
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CE294);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  v11 = CempUtilValidateAndCapturePackageInfoWithFamilyName((__int64)a2, a3, a4, a5, (__int64)v25);
  if ( v11 >= 0 )
  {
    v12 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v25);
    v13 = v12;
    if ( v12 )
    {
      InterruptiveUIState = HampPkgGetInterruptiveUIState(v12, 0LL);
      v10 = InterruptiveUIState;
      *a6 = InterruptiveUIState;
      v11 = 0;
      CemRcObjectDereference(v13);
    }
    else
    {
      v11 = -1073741275;
    }
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
  {
    v19[0] = v10;
    v20 = a5;
    v22 = a3;
    v23 = a2;
    v21 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v15,
      byte_1800CF114,
      v16,
      v17,
      (__int64)&v21,
      &v23,
      (__int64 *)&v22,
      (__int64)&v20,
      (__int64)v19);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v11;
}
