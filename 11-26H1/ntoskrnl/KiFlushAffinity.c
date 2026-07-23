/*
 * XREFs of KiFlushAffinity @ 0x140477460
 * Callers:
 *     KeFlushSingleTb @ 0x1405F3764 (KeFlushSingleTb.c)
 * Callees:
 *     <none>
 */

volatile _KAFFINITY_EX *__fastcall KiFlushAffinity(int a1)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a1 )
    return 0LL;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
}
