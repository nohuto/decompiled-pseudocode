/*
 * XREFs of HalBuildMdlFromScatterGatherListV2 @ 0x140476C00
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 */

__int64 __fastcall HalBuildMdlFromScatterGatherListV2(__int64 a1, unsigned int *a2, struct _MDL *a3, struct _MDL **a4)
{
  __int64 v7; // rbx
  __int64 v8; // r9
  unsigned int *v9; // r15
  struct _MDL *v10; // rdi
  _QWORD *v11; // r14
  int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // r12d
  char v16; // cl
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rbp
  __int16 v20; // ax
  __int64 v21; // rax
  struct _MDL *v22; // r8
  int v23; // eax
  unsigned int *v24; // r9
  struct _MDL *v25; // r14
  char v26; // dl
  __int64 v27; // rbp
  unsigned __int64 v28; // r10
  __int64 v29; // rsi
  struct _MDL *v30; // rdx
  unsigned __int64 v31; // r11
  __int64 v32; // rax
  __int64 Mdl; // rax
  struct _MDL *Next; // rbx
  unsigned int v35; // [rsp+30h] [rbp-38h]
  __int64 v36; // [rsp+38h] [rbp-30h]
  unsigned int v37; // [rsp+80h] [rbp+18h]

  if ( !a3 )
    return 3221225485LL;
  if ( !*(_BYTE *)(a1 + 440) && *(_BYTE *)(a1 + 445) )
  {
    *a4 = a3;
    return 0LL;
  }
  v7 = *((_QWORD *)a2 + 1);
  if ( v7 && *(_QWORD *)(v7 + 16) )
    return 3221225587LL;
  v8 = *a2;
  v9 = a2 + 4;
  v10 = 0LL;
  v35 = *a2;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 1;
  while ( v15 < (unsigned int)v8 )
  {
    v17 = *(_QWORD *)v9;
    v18 = v9[2];
    v19 = *(_QWORD *)v9 & 0xFFFLL;
    v36 = *(_QWORD *)v9;
    v37 = v9[2];
    if ( !v16 && (v12 || (_DWORD)v19) )
    {
      Mdl = IopAllocateMdl(v13, v14, 1, v18, 0LL, 0);
      if ( !Mdl )
        goto LABEL_33;
      *(_WORD *)(Mdl + 10) |= 0x2802u;
      if ( v10 )
        *v11 = Mdl;
      else
        v10 = (struct _MDL *)Mdl;
      LODWORD(v18) = v37;
      v14 = 0;
      LOWORD(v17) = v36;
      v16 = 0;
      v11 = (_QWORD *)Mdl;
    }
    else
    {
      v16 = 0;
      if ( v14 )
        goto LABEL_14;
    }
    v13 = v19;
LABEL_14:
    v20 = v17 + v18;
    v14 += v18;
    v8 = v35;
    v12 = v20 & 0xFFF;
    v9 += 6;
    ++v15;
  }
  if ( v14 )
  {
    v21 = IopAllocateMdl(v13, v14, 1, v8, 0LL, 0);
    if ( !v21 )
    {
LABEL_33:
      if ( v10 )
      {
        do
        {
          Next = v10->Next;
          IoFreeMdl(v10);
          v10 = Next;
        }
        while ( Next );
      }
      return 3221225626LL;
    }
    *(_WORD *)(v21 + 10) |= 0x2802u;
    if ( v10 )
      *v11 = v21;
    else
      v10 = (struct _MDL *)v21;
  }
  v22 = v10 + 1;
  v23 = 0;
  v24 = a2 + 4;
  v25 = v10;
  v26 = 1;
  if ( *a2 )
  {
    v27 = *a2;
    do
    {
      v28 = *(_QWORD *)v24;
      v29 = v24[2];
      if ( !v26 && (v23 || (v28 & 0xFFF) != 0) )
      {
        v25 = v25->Next;
        v22 = v25 + 1;
      }
      v30 = (struct _MDL *)(v28 >> 12);
      v31 = ((*(_QWORD *)v24 & 0xFFFuLL) + v29 + 4095) >> 12;
      if ( (_DWORD)v31 )
      {
        v32 = (unsigned int)v31;
        do
        {
          v22->Next = v30;
          v22 = (struct _MDL *)((char *)v22 + 8);
          v30 = (struct _MDL *)((char *)v30 + 1);
          --v32;
        }
        while ( v32 );
      }
      v26 = 0;
      v23 = ((_WORD)v28 + (_WORD)v29) & 0xFFF;
      v24 += 6;
      --v27;
    }
    while ( v27 );
  }
  *a4 = v10;
  if ( v7 )
    *(_QWORD *)(v7 + 16) = v10;
  return 0LL;
}
