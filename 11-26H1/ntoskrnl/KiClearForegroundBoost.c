/*
 * XREFs of KiClearForegroundBoost @ 0x140239B00
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiSetDisableBoostThread @ 0x1404A3DC0 (KiSetDisableBoostThread.c)
 *     ?KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x14051F754 (-KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 *     ?KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x14052E188 (-KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiClearForegroundBoost(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 518) & 0xF) != 0 )
  {
    *(_DWORD *)(a1 + 872) = MEMORY[0xFFFFF78000000320];
    result = 65520LL;
    *(_WORD *)(a1 + 518) &= 0xFFF0u;
  }
  return result;
}
