/*
 * XREFs of MiDeleteLargeUserPde @ 0x1404711E0
 * Callers:
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiDecommitAddTbFlushEntries @ 0x1403447B8 (MiDecommitAddTbFlushEntries.c)
 *     MiDeleteVadAwePtes @ 0x14047137C (MiDeleteVadAwePtes.c)
 */

__int64 __fastcall MiDeleteLargeUserPde(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 *v3; // r12
  unsigned int v4; // ebp
  unsigned __int64 v5; // rbx
  char v7; // r15
  __int64 v9; // rdi
  int v10; // eax
  int v11; // r15d
  __int64 v12; // rbx
  int v13; // r14d
  unsigned __int64 i; // rcx
  __int64 v15; // rbx
  int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+70h] [rbp+18h]

  v3 = *(__int64 **)(a1 + 184);
  v4 = a3;
  v5 = *a2;
  v7 = *a2;
  v9 = 16LL;
  v10 = *(_DWORD *)(*v3 + 116);
  v18 = v10;
  v11 = v7 & 1;
  if ( !v11 && qword_140E2D8C0 )
  {
    if ( (v5 & 0x10) != 0 )
      v5 &= ~0x10uLL;
    else
      v5 &= qword_140E2D8C8;
  }
  v12 = (v5 >> 12) & 0xFFFFFFFFFFLL;
  v13 = v10 & 0x10;
  if ( (v10 & 0x10) != 0 )
  {
    v9 = MiDeleteVadAwePtes(a1, a2, a3);
  }
  else if ( (_DWORD)a3 )
  {
    v9 = 1LL;
    if ( v11 )
      MiRewritePteWithLockBit(*(_QWORD *)(a1 + 32), 0, (unsigned __int64)a2, *(__int64 *)&CLFS_LSN_NULL_EXT);
    else
      *a2 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  else
  {
    for ( i = 0LL; i < 0x10; ++i )
      a2[i] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  v15 = 48 * v12 - 0x220000000000LL;
  if ( v11 )
    MiDecommitAddTbFlushEntries(*v3, (__int64)a2, v4, v9);
  if ( !v13 && *(__int64 *)(v15 + 40) >= 0 )
  {
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    *(_QWORD *)v15 = (*(_QWORD *)(v3[1] + 48) >> 3) ^ (*(_QWORD *)v15 ^ (*(_QWORD *)(v3[1] + 48) >> 3)) & 0xFFFFF00000000001uLL;
    *(_QWORD *)(v3[1] + 48) = v15;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (v18 & 0x800) != 0 && !v4 )
    *(_DWORD *)(a1 + 12) = v9 - 1;
  return (unsigned int)v9;
}
