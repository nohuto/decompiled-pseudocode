/*
 * XREFs of RaspInitializeCompositeGlyphData @ 0x14071DCE4
 * Callers:
 *     RaspLoadCompositeGlyphData @ 0x14071E19C (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140356ED0 (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x140357710 (RaspAllocateMemory.c)
 *     RaspFreeMemory @ 0x140357B8C (RaspFreeMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RaspInitializeCompositeGlyphData(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int16 a4,
        __int16 a5,
        unsigned __int16 a6,
        unsigned int a7,
        _WORD *a8,
        _QWORD *a9,
        __int64 *a10)
{
  __int64 *v10; // r12
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  char *Memory; // rax
  char *v14; // rbx
  __int64 v16; // rcx
  __int16 *v17; // rdx
  int v18; // eax
  char *v19; // r14
  _WORD *v20; // r13
  char *v21; // r15
  char *v22; // rsi
  __int16 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned __int16 *v26; // rbp
  unsigned __int16 i; // r8
  __int64 v28; // rdx
  size_t v29; // r8
  __int64 v30; // r9
  __int16 v31; // cx
  __int16 v32; // dx
  __int16 v33; // ax
  unsigned __int16 v34; // r8
  __int16 v35; // r12
  __int16 v36; // bx
  __int64 v37; // r9
  __int64 v38; // r10
  __int64 v39; // rax
  __int16 v40; // dx
  __int16 v41; // cx
  __int16 v42; // ax
  char *v43; // [rsp+20h] [rbp-58h]
  __int16 v47; // [rsp+98h] [rbp+20h]
  __int16 v48; // [rsp+A0h] [rbp+28h]
  __int16 v49; // [rsp+A8h] [rbp+30h]

  v10 = a2;
  v11 = a4;
  v12 = a4 + a6 + 8 * (unsigned int)a4 + 2 * (a5 + 41);
  Memory = (char *)RaspAllocateMemory(v12, a10);
  v43 = Memory;
  v14 = Memory;
  if ( !Memory )
    return 3221225626LL;
  memset_0(Memory, 0, v12);
  v16 = 0LL;
  *(_WORD *)v14 = a5;
  v17 = (__int16 *)(a3 + 2);
  do
  {
    v18 = *v17++;
    *(_DWORD *)&v14[v16 + 2] = v18;
    v16 += 4LL;
  }
  while ( v16 < 16 );
  *(_DWORD *)(v14 + 18) = *(_DWORD *)(v14 + 2);
  *(_QWORD *)(v14 + 26) = v14 + 66;
  v19 = &v14[2 * a5 + 66];
  *((_WORD *)v14 + 11) = a6;
  *((_WORD *)v14 + 12) = v11;
  if ( a6 )
  {
    *(_QWORD *)(v14 + 34) = v19;
    v19 += a6;
    FioFwReadBytesAtOffset(a1, a7, a6, &v14[2 * a5 + 66]);
  }
  v20 = *(_WORD **)(v14 + 26);
  v21 = &v19[v11];
  *(_QWORD *)(v14 + 42) = v19;
  *(_QWORD *)(v14 + 50) = &v19[v11];
  v22 = &v19[4 * (unsigned int)(v11 + 2) + v11];
  v48 = 0;
  *(_QWORD *)(v14 + 58) = v22;
  v23 = 0;
  v49 = 0;
  while ( 1 )
  {
    v24 = *v10;
    if ( (__int64 *)*v10 == v10 )
      break;
    if ( *(__int64 **)(v24 + 8) != v10 || (v25 = *(_QWORD *)v24, *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24) )
      __fastfail(3u);
    *v10 = v25;
    *(_QWORD *)(v25 + 8) = v10;
    v26 = *(unsigned __int16 **)(v24 + 16);
    if ( _bittest16((const signed __int16 *)(v24 + 24), 9u) )
    {
      *a8 = *(_WORD *)(v24 + 26);
      *(_DWORD *)(v14 + 18) = *(_DWORD *)(v26 + 1);
    }
    for ( i = 0; i < (__int16)*v26; ++v20 )
    {
      v28 = i++;
      *v20 = *(_WORD *)(*(_QWORD *)(v26 + 13) + 2 * v28) + v23;
    }
    v29 = v26[12];
    v47 = v29 + v23;
    memmove(v19, *(const void **)(v26 + 21), v29);
    v30 = v26[12];
    v31 = 0x4000;
    v32 = *(_WORD *)(v24 + 24);
    v19 += v30;
    v33 = 0x4000;
    if ( (v32 & 8) != 0 )
    {
      v33 = *(_WORD *)(v24 + 32);
      v31 = v33;
    }
    else if ( (v32 & 0x40) != 0 )
    {
      v33 = *(_WORD *)(v24 + 32);
      v31 = *(_WORD *)(v24 + 34);
    }
    v34 = 0;
    if ( (_WORD)v30 )
    {
      v35 = v48;
      v36 = v49;
      v37 = v33;
      v38 = v31;
      do
      {
        *(_WORD *)v21 = *(_WORD *)(*(_QWORD *)(v26 + 25) + 4LL * v34);
        *(_WORD *)v22 = *(_WORD *)(*(_QWORD *)(v26 + 29) + 4LL * v34);
        *(_WORD *)v21 = v37 * *(__int16 *)v21 / 0x4000;
        v39 = v38 * *(__int16 *)v22 / 0x4000;
        *(_WORD *)v22 = v39;
        if ( !v34 )
        {
          *(_WORD *)v21 -= v35;
          *(_WORD *)v22 -= v36;
          v40 = *(_WORD *)(v24 + 24);
          LOWORD(v39) = *(_WORD *)v22;
          if ( (v40 & 2) != 0 )
          {
            v41 = *(_WORD *)v21;
            if ( (v40 & 1) != 0 )
            {
              *(_WORD *)v21 = *(_WORD *)(v24 + 28) + v41;
              v42 = *(_WORD *)(v24 + 30);
            }
            else
            {
              *(_WORD *)v21 = v41 + *(char *)(v24 + 28);
              v42 = *(char *)(v24 + 29);
            }
            *(_WORD *)v22 += v42;
            LOWORD(v39) = *(_WORD *)v22;
          }
        }
        v35 += *(_WORD *)v21;
        v36 += v39;
        v21 += 4;
        v22 += 4;
        ++v34;
      }
      while ( v34 < v26[12] );
      v49 = v36;
      v14 = v43;
      v48 = v35;
      v10 = a2;
    }
    RaspFreeMemory((__int64)v26, a10);
    RaspFreeMemory(v24, a10);
    v23 = v47;
  }
  *a9 = v14;
  return 0LL;
}
