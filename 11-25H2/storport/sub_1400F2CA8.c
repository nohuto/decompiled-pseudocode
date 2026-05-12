/*
 * XREFs of sub_1400F2CA8 @ 0x1400F2CA8
 * Callers:
 *     sub_1400ED960 @ 0x1400ED960 (sub_1400ED960.c)
 *     sub_1400EEC0C @ 0x1400EEC0C (sub_1400EEC0C.c)
 * Callees:
 *     sub_14008ADD0 @ 0x14008ADD0 (sub_14008ADD0.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 */

__int64 __fastcall sub_1400F2CA8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rbx
  int v8; // r15d
  int v12; // r14d
  unsigned int v13; // ebp
  __int64 v14; // rax
  int v15; // edx
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx

  v7 = 0LL;
  v8 = (unsigned __int16)a3;
  v12 = 0;
  if ( (_WORD)a3 )
    v13 = *(_DWORD *)(a1 + 8);
  else
    v13 = *(unsigned __int16 *)(a1 + 6);
  if ( *(_BYTE *)(a1 + 1728) == 1 )
  {
    v14 = *(_QWORD *)(a1 + 1648);
    v15 = *(_DWORD *)(v14 + 12);
    v16 = *(_DWORD *)(v14 + 8);
    if ( v15 )
    {
      v12 = sub_1400E736C(a1, v13 * v15, a3, (void **)(a2 + 40), (_QWORD *)(a2 + 48), 1);
      if ( v12 < 0 )
        return (unsigned int)v12;
    }
    v17 = sub_14008ADD0(72LL, (unsigned __int64)v13 << 6, 1363370322LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL), v16);
    *(_QWORD *)(a2 + 56) = v17;
    if ( !v17 )
      return (unsigned int)-1073741670;
  }
  *(_QWORD *)(a2 + 8) = a5;
  *(_QWORD *)a2 = a4;
  v18 = (unsigned int)(2 * *(_DWORD *)(a1 + 1200) * v8);
  v19 = *(_QWORD *)(a1 + 920) + 4096LL;
  *(_WORD *)(a2 + 136) = v8;
  *(_DWORD *)(a2 + 140) = 0;
  *(_QWORD *)(a2 + 16) = v19 + v18;
  *(_DWORD *)(a2 + 124) = v13;
  if ( a6 )
    *(_QWORD *)(a2 + 24) = a6;
  if ( a7 )
    *(_QWORD *)(a2 + 32) = a7;
  if ( v13 )
  {
    v20 = 0LL;
    v21 = v13;
    do
    {
      v22 = v20 + *(_QWORD *)a2;
      v20 += 64LL;
      *(_QWORD *)(v7 + *(_QWORD *)(a2 + 24)) = v22;
      v7 += 16LL;
      --v21;
    }
    while ( v21 );
  }
  return (unsigned int)v12;
}
