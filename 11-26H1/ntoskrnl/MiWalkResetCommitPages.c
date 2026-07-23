/*
 * XREFs of MiWalkResetCommitPages @ 0x1406E9FCC
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x1406E9B50 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiWalkResetCommitPages(__int64 a1)
{
  struct _LIST_ENTRY **p_Blink; // rdi
  unsigned __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rdx
  _DWORD v7[2]; // [rsp+20h] [rbp-69h] BYREF
  char v8; // [rsp+29h] [rbp-60h]
  struct _LIST_ENTRY **v9; // [rsp+40h] [rbp-49h]
  unsigned __int64 v10; // [rsp+48h] [rbp-41h]
  unsigned __int64 v11; // [rsp+50h] [rbp-39h]
  void *v12; // [rsp+C8h] [rbp+3Fh]
  __int64 *v13; // [rsp+D8h] [rbp+4Fh]
  __int64 v14; // [rsp+F0h] [rbp+67h] BYREF

  v14 = 0LL;
  memset_0(v7, 0, 0xC0uLL);
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v3 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
  v10 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v4 = *(unsigned int *)(a1 + 28);
  v13 = &v14;
  v7[0] = 7;
  v11 = ((v4 | v3) << 12) | 0xFFF;
  v12 = &MiWalkResetCommitPte;
  v9 = p_Blink;
  v8 = MiLockWorkingSetShared((__int64)p_Blink, v4, v11);
  MiWalkPageTables((__int64)v7);
  LOBYTE(v5) = v8;
  MiUnlockWorkingSetShared((__int64)p_Blink, v5);
  return v14;
}
