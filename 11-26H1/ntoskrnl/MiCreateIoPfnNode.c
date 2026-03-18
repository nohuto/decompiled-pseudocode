/*
 * XREFs of MiCreateIoPfnNode @ 0x140511B00
 * Callers:
 *     MiReferenceIoPages @ 0x1402EFF98 (MiReferenceIoPages.c)
 * Callees:
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiInitializeIoPageNodeArray @ 0x1404D04AC (MiInitializeIoPageNodeArray.c)
 *     MiLockIoPfnTree @ 0x1406F4668 (MiLockIoPfnTree.c)
 *     MiUnlockIoPfnTree @ 0x1406F4E8C (MiUnlockIoPfnTree.c)
 */

__int64 __fastcall MiCreateIoPfnNode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  int v6; // eax
  __int64 PoolMm; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx

  v4 = *(unsigned int *)(a1 + 20);
  v5 = a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 16);
  MiUnlockIoPfnTree(a1, v4, a3, a4);
  if ( *(_BYTE *)(v5 + 16) != 17 )
    *(_BYTE *)(v5 + 17) = 1;
  v6 = MiPageToNode(*(_QWORD *)(v5 + 32));
  PoolMm = ExAllocatePoolMm(64LL, 0x4B0uLL, 1867082061, v6 | 0x80000000);
  v8 = PoolMm;
  if ( PoolMm )
  {
    *(_DWORD *)(PoolMm + 32) = 1;
    MiInitializeIoPageNodeArray(PoolMm);
    *(_QWORD *)(v5 + 8) = v8;
  }
  v9 = *(_DWORD *)(v5 + 20) & 0xFFFFFFFC | 2;
  *(_DWORD *)(v5 + 20) = v9;
  MiLockIoPfnTree(v9);
  return 0LL;
}
