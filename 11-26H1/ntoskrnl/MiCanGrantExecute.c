/*
 * XREFs of MiCanGrantExecute @ 0x1404CCA70
 * Callers:
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 *     MiLargePageFault @ 0x1403A95C0 (MiLargePageFault.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 */

__int64 __fastcall MiCanGrantExecute(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  struct _LIST_ENTRY *Address; // rdi
  int Flink; // ecx

  v3 = 0;
  v4 = a2;
  if ( !*(_QWORD *)(a1 + 784) )
    return 0LL;
  if ( *(_WORD *)(a1 + 1772) != 332 )
    return 0LL;
  if ( (KeFeatureBits & 0x40000000) == 0 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 147);
    if ( (a2 & 2) == 0 && ((KeFeatureBits & 0x80000000) != 0 || (a2 & 1) != 0) )
      return 0LL;
  }
  if ( (v4 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (*(_DWORD *)(a1 + 1532) & 1) == 0 )
    return 1LL;
  MiLockVadTree(1u, a2, a3);
  Address = MiLocateAddress(v4);
  MiUnlockVadTree(1, 0x11u);
  if ( !Address )
    return 0LL;
  Flink = (int)Address[3].Flink;
  if ( (Flink & 0x1C) == 0xC )
    return 0LL;
  if ( (Flink & 0x1C) == 8 )
  {
    LOBYTE(v3) = (Flink & 0x3E0) != 32;
    return v3;
  }
  return 1LL;
}
