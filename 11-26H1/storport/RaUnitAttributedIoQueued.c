/*
 * XREFs of RaUnitAttributedIoQueued @ 0x140099748
 * Callers:
 *     RaidUnitSubmitIrpRequest @ 0x140021420 (RaidUnitSubmitIrpRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitAttributedIoQueued(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // rax
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(unsigned __int8 **)(a2 + 184);
  v6 = 0LL;
  LODWORD(v6) = 1;
  v7 = 0LL;
  DWORD1(v6) = *v3 | 0x300;
  *((_QWORD *)&v7 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v7 + 1);
  return IoRecordIoAttribution(a3, &v6);
}
