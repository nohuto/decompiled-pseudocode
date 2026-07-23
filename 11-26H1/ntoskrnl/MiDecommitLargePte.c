/*
 * XREFs of MiDecommitLargePte @ 0x140340E3C
 * Callers:
 *     MiDecommitHandleValidPte @ 0x14029EDAC (MiDecommitHandleValidPte.c)
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiDecommitHandleTransitionPte @ 0x14033FE54 (MiDecommitHandleTransitionPte.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiDecommitAddTbFlushEntries @ 0x1403447B8 (MiDecommitAddTbFlushEntries.c)
 */

__int64 __fastcall MiDecommitLargePte(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 *v3; // r13
  __int64 v4; // rdi
  unsigned int v5; // ebp
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 *v9; // r14
  unsigned __int64 i; // r12
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  int v15; // edx
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 100);
  v3 = *(__int64 **)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 128);
  v17 = *(_QWORD *)(a1 + 24);
  v5 = (v2 >> 18) & 7;
  v6 = (-(__int64)(v5 != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
  v7 = *v3;
  v16 = *v3 & 1;
  if ( !(_BYTE)v16 && qword_140E2D8C0 )
  {
    if ( (v7 & 0x10) != 0 )
      v7 &= ~0x10uLL;
    else
      v7 &= qword_140E2D8C8;
  }
  v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
  v9 = v3;
  for ( i = 0LL; i < v6; ++i )
  {
    if ( v5 )
      MiRewritePteWithLockBit(*(_QWORD *)(a1 + 32), 0, (unsigned __int64)v9, v4);
    else
      *v9 = v4;
    ++v9;
  }
  if ( !v4 && v5 != 3 )
    *(_DWORD *)(a1 + 96) += v6;
  if ( v16 )
    MiDecommitAddTbFlushEntries(a1, v3, v5, (-(__int64)(v5 != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16);
  v11 = 48 * v8 - 0x220000000000LL;
  result = *(_QWORD *)(v11 + 40);
  if ( result >= 0 )
  {
    v13 = v17;
    LODWORD(v16) = 0;
    v14 = *(_QWORD *)(v17 + 48);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    v15 = *(unsigned __int8 *)(v11 + 34);
    *(_DWORD *)(v11 + 32) = *(_DWORD *)(v11 + 32) & 0xFFF8FFFF | 0x50000;
    *(_QWORD *)v11 = (v14 >> 3) ^ (*(_QWORD *)v11 ^ (v14 >> 3)) & 0xFFFFF00000000001uLL;
    *(_QWORD *)(v13 + 48) = v11;
    result = 0x7FFFFFFFFFFFFFFFLL;
    *(_DWORD *)(v11 + 32) = (v15 << 16) ^ (*(_DWORD *)(v11 + 32) ^ (v15 << 16)) & 0xFFF8FFFF;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
