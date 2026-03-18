/*
 * XREFs of HmgIsProcessCleanupRequired @ 0x1400F2E38
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1400855F0 (-vGarbageCollectObjects@@YAXXZ.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1400F2D7C (HmgIsProcessCleanupRequiredByW32Pid.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgIsProcessCleanupRequired(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || *(_DWORD *)(a1 + 64) )
    return 1LL;
  return result;
}
