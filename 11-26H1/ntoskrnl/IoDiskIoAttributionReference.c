/*
 * XREFs of IoDiskIoAttributionReference @ 0x1404A12C0
 * Callers:
 *     IoDiskIoAttributionAllocate @ 0x140AFB68C (IoDiskIoAttributionAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoDiskIoAttributionReference(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 32));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
