/*
 * XREFs of ?HamSrvCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180066B20
 * Callers:
 *     HamRpcSrvCompleteConnect @ 0x18006EBB0 (HamRpcSrvCompleteConnect.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003E804 (-HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180041190 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180043880 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvCompleteConnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int Pid; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v9; // [rsp+44h] [rbp-C4h] BYREF
  const wchar_t *v10; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v12[144]; // [rsp+60h] [rbp-A8h] BYREF

  memset_0(v12, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CE529);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  v2 = HampClientCompleteConnect(a1);
  v3 = 0;
  if ( v2 < 0 )
    v3 = v2;
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
  {
    v10 = (const wchar_t *)((char *)a1 + 220);
    v11 = *((_QWORD *)a1 + 19);
    Pid = HampClientGetPid(a1);
    v9 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      v5,
      byte_1800CF6F2,
      v6,
      v7,
      (__int64)&v9,
      (__int64)&Pid,
      (__int64)&v11,
      &v10);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v3;
}
