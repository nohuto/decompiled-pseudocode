/*
 * XREFs of MiFindPlaceholderVadToReplace @ 0x1404C5AC8
 * Callers:
 *     MiSelectDataMapAddress @ 0x140995DF0 (MiSelectDataMapAddress.c)
 *     MiReserveUserMemoryInsertVad @ 0x140A0146C (MiReserveUserMemoryInsertVad.c)
 * Callees:
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiCheckSecuredVad @ 0x140A033E8 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiFindPlaceholderVadToReplace(unsigned __int64 a1, __int64 a2, char a3, int *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _LIST_ENTRY *Address; // rax
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // rdi
  int v14; // eax

  CurrentThread = KeGetCurrentThread();
  Address = MiLocateAddress(a1);
  v12 = (__int64)Address;
  if ( !Address )
    goto LABEL_9;
  MiLockVad((__int64)CurrentThread, (__int64)Address, v10, v11);
  if ( (*(_DWORD *)(v12 + 48) & 1) != 0
    || (*(unsigned int *)(v12 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 34) << 32)) != 0x7FFFFFFFDLL
    || (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) << 12 != a1
    || (((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF) != a2 )
  {
    MiUnlockVad((__int64)CurrentThread, v12);
LABEL_9:
    *a4 = -1073741800;
    return 0LL;
  }
  if ( (*(_DWORD *)(v12 + 48) & 2) == 0
    || (v14 = MiCheckSecuredVad(
                v12,
                *(_DWORD *)(v12 + 24) << 12,
                (*(_DWORD *)(v12 + 28) - *(_DWORD *)(v12 + 24) + 1) << 12,
                85,
                a3,
                0LL),
        *a4 = v14,
        v14 >= 0) )
  {
    *a4 = 0;
    return v12;
  }
  MiUnlockVad((__int64)CurrentThread, v12);
  return 0LL;
}
