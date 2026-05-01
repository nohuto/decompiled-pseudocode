/*
 * XREFs of ?HampDepGroupLogRundownEvents@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007D934
 * Callers:
 *     ?HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BE98 (-HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4334@Z @ 0x180002578 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U1@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     CempLockTrackerMarkAcquired @ 0x180046900 (CempLockTrackerMarkAcquired.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 */

void __fastcall HampDepGroupLogRundownEvents(struct _HAM_DEPENDENCY_GROUP *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // [rsp+50h] [rbp-10h] BYREF
  __int64 v8; // [rsp+58h] [rbp-8h] BYREF
  int v9; // [rsp+80h] [rbp+20h] BYREF
  int v10; // [rsp+88h] [rbp+28h] BYREF
  int v11; // [rsp+90h] [rbp+30h] BYREF
  __int64 v12; // [rsp+98h] [rbp+38h] BYREF

  CempLockTrackerMarkAcquired(HampLockTrackerId, a2, 3u, 1);
  RtlAcquireSRWLockShared((char *)a1 + 8);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
  {
    v9 = *((_DWORD *)a1 + 32);
    v12 = *((_QWORD *)a1 + 14);
    v7 = *((_QWORD *)a1 + 13);
    v10 = *((_DWORD *)a1 + 23);
    v11 = *((_DWORD *)a1 + 22);
    v8 = *(_QWORD *)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_1800D01E6,
      v4,
      v5,
      (__int64)&v8,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v7,
      (__int64)&v12,
      (__int64)&v9);
  }
  RtlReleaseSRWLockShared((char *)a1 + 8);
  CempLockTrackerMarkReleased(HampLockTrackerId, v6, 3u);
}
