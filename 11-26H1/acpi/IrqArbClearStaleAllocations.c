/*
 * XREFs of IrqArbClearStaleAllocations @ 0x1400C3EB8
 * Callers:
 *     IrqArbCommitAllocation @ 0x1400C38C0 (IrqArbCommitAllocation.c)
 * Callees:
 *     <none>
 */

PRTL_RANGE __fastcall IrqArbClearStaleAllocations(__int64 a1)
{
  struct _RTL_RANGE_LIST *v1; // rcx
  PRTL_RANGE result; // rax
  _DWORD *UserData; // rax
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  Range = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  RtlGetFirstRange(v1, &Iterator, &Range);
  while ( 1 )
  {
    result = Range;
    if ( !Range )
      break;
    UserData = Range->UserData;
    if ( UserData )
      UserData[1] &= ~8u;
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return result;
}
