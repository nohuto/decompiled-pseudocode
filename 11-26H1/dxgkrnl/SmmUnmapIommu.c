/*
 * XREFs of SmmUnmapIommu @ 0x1400647DC
 * Callers:
 *     SmmUnmapPagesFromIommuInternal @ 0x14006D4E4 (SmmUnmapPagesFromIommuInternal.c)
 *     SmmIoMmuUnmapStagingArray @ 0x14009BE10 (SmmIoMmuUnmapStagingArray.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmUnmapIommu(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+50h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  if ( a2 )
  {
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_140169620)(v4, a2, a4);
  }
  else
  {
    v6[0] = 2LL;
    v6[1] = a3;
    v6[2] = a4;
    result = ((__int64 (__fastcall *)(__int64, _QWORD *))qword_140169630)(v4, v6);
  }
  if ( (int)result < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 330;
    return DxgkLogInternalTriageEvent(
             0LL,
             262146,
             -1,
             (__int64)L"(((NTSTATUS)(Status)) >= 0)",
             330LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
