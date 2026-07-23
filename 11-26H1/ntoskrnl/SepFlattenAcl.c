/*
 * XREFs of SepFlattenAcl @ 0x140510394
 * Callers:
 *     SeLogAccessFailure @ 0x1403006A0 (SeLogAccessFailure.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepFlattenAcl(__int64 a1, __int64 *a2, _DWORD *a3, _WORD *a4)
{
  unsigned int v4; // eax
  unsigned __int8 *v5; // r14
  unsigned int v6; // ebp
  __int16 v8; // si
  char *v9; // r10
  int v10; // edi
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  __int64 Pool2; // rax
  __int64 v14; // r12
  _DWORD *v16; // r15
  unsigned __int8 *v17; // r13
  char v18; // al
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-58h]

  v4 = *(unsigned __int16 *)(a1 + 4);
  v5 = (unsigned __int8 *)(a1 + 8);
  v6 = 0;
  *a2 = 0LL;
  v8 = 0;
  *a3 = 0;
  v9 = (char *)(a1 + 8);
  v10 = 0;
  if ( !(_WORD)v4 )
    return 3221226021LL;
  v11 = v4;
  do
  {
    v12 = *v9;
    v10 += 12;
    if ( (unsigned __int8)*v9 <= 3u || v12 == 17 || v12 == 20 || v12 == 21 )
    {
      v10 += 4 * (unsigned __int8)v9[9] + 8;
      ++v8;
    }
    v9 += *((unsigned __int16 *)v9 + 1);
    --v11;
  }
  while ( v11 );
  if ( !v8 )
    return 3221226021LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  v25 = Pool2;
  v14 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v16 = (_DWORD *)Pool2;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_23;
  v17 = v5 + 8;
  do
  {
    v18 = *v5;
    if ( *v5 <= 3u )
    {
      v19 = *((_DWORD *)v5 + 1);
      v16[1] = v5[1];
      v20 = *v5;
      v16[2] = v19;
      *v16 = v20;
      memmove(v16 + 3, v17, 4LL * v17[1] + 8);
      v21 = v17[1];
LABEL_20:
      v16 += v21 + 5;
      goto LABEL_21;
    }
    if ( v18 == 17 || v18 == 20 || v18 == 21 )
    {
      v22 = *((_DWORD *)v5 + 1);
      v16[1] = v5[1];
      v23 = *v5;
      v16[2] = v22;
      *v16 = v23;
      memmove(v16 + 3, v5 + 8, 4LL * v5[9] + 8);
      v21 = v5[9];
      goto LABEL_20;
    }
LABEL_21:
    v24 = *((unsigned __int16 *)v5 + 1);
    ++v6;
    v5 += v24;
    v17 += v24;
  }
  while ( v6 < *(unsigned __int16 *)(a1 + 4) );
  v14 = v25;
LABEL_23:
  *a2 = v14;
  *a3 = v10;
  *a4 = v8;
  return 0LL;
}
