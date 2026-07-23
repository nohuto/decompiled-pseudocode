/*
 * XREFs of MiAddSystemPageTableToList @ 0x1402EB128
 * Callers:
 *     MiDeleteSystemPageTable @ 0x1402EBAE0 (MiDeleteSystemPageTable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 */

unsigned __int64 __fastcall MiAddSystemPageTableToList(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  bool v4; // zf
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD **)(a1 + 184);
  while ( 1 )
  {
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
    if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)a2 = v3[1];
  v4 = v3[2] == 0LL;
  v3[1] = a2;
  if ( v4 )
    v3[2] = a2;
  ++v3[3];
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 32) & 0xFFF8FFFF | 0x50000;
  v5 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v6 = a2 + 0x220000000000LL;
  result = (unsigned __int64)((unsigned __int128)(v6 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  if ( v5 != v6 / 48 )
    return MiLockAndDecrementShareCount(48 * v5 - 0x220000000000LL);
  return result;
}
