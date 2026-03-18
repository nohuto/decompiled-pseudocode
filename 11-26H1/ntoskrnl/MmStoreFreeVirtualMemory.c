/*
 * XREFs of MmStoreFreeVirtualMemory @ 0x140AB8860
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140382C98 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MiUnlockPageTableRange @ 0x140317220 (MiUnlockPageTableRange.c)
 *     MiFreeVadRange @ 0x1403BC958 (MiFreeVadRange.c)
 */

__int64 __fastcall MmStoreFreeVirtualMemory(unsigned __int64 a1)
{
  ULONG_PTR v2; // r14
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // r8
  unsigned __int64 v6; // rbp
  _KPROCESS *BugCheckParameter4; // rax
  int v9; // [rsp+68h] [rbp+10h] BYREF

  v2 = MiObtainReferencedVadEx(a1, 0LL, &v9);
  v3 = *(unsigned int *)(v2 + 24);
  v4 = *(unsigned __int8 *)(v2 + 32);
  v5 = *(unsigned int *)(v2 + 28);
  v6 = v5 | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32);
  MiUnlockPageTableRange(a1, (v6 << 12) | 0xFFF, v5);
  BugCheckParameter4 = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(v9) = 0;
  return MiFreeVadRange(v2, (int)&v9, v3 | ((unsigned __int64)v4 << 32), v6, (ULONG_PTR)BugCheckParameter4, 0, 0LL);
}
