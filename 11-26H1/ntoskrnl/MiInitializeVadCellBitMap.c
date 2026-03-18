/*
 * XREFs of MiInitializeVadCellBitMap @ 0x140963190
 * Callers:
 *     MiSelectUserAddress @ 0x1409C4FA0 (MiSelectUserAddress.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140315540 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403155B4 (LOCK_ADDRESS_SPACE.c)
 *     MiExpandVadBitMap @ 0x140963274 (MiExpandVadBitMap.c)
 */

__int64 __fastcall MiInitializeVadCellBitMap(_QWORD *a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // r8
  __int64 Process; // r15
  __int64 v9; // rbx
  __int64 v10; // r8
  int v11; // esi

  CurrentThread = KeGetCurrentThread();
  v7 = a1[8] >> 15 << 12;
  Process = (__int64)CurrentThread->ApcState.Process;
  v9 = *(_QWORD *)(Process + 1040);
  a1[2] = a1[8] & 0x7FFFLL;
  v10 = qword_140E2DE48 + v7;
  a1[1] = v10;
  *a1 = 0LL;
  if ( a2 )
    ++*(_QWORD *)(v9 + 1112);
  else
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, v10, a4);
  v11 = MiExpandVadBitMap(a1, 1LL, 0LL);
  if ( !v11 )
  {
    if ( a2 )
      --*(_QWORD *)(v9 + 1112);
    *a1 = 0LL;
  }
  a1[4] = a1[2];
  if ( !a2 )
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
  return v11 == 0 ? 0xC0000017 : 0;
}
