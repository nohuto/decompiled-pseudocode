/*
 * XREFs of HalBuildMdlFromScatterGatherListV3 @ 0x1404B1540
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 */

__int64 __fastcall HalBuildMdlFromScatterGatherListV3(__int64 a1, unsigned int *a2, struct _MDL *a3, struct _MDL **a4)
{
  __int64 v8; // rbp
  struct _MDL *v9; // rax
  unsigned int v10; // r10d
  unsigned int *v11; // r13
  struct _MDL *v12; // rdi
  _QWORD *v13; // r12
  unsigned int v14; // r8d
  unsigned int v15; // edx
  char v16; // cl
  __int64 i; // r9
  __int64 v18; // r11
  unsigned int v19; // r10d
  __int64 v20; // r15
  __int64 Mdl; // rax
  __int16 v22; // ax
  __int64 v23; // rax
  struct _MDL *v24; // r8
  int v25; // eax
  unsigned int *v26; // r11
  struct _MDL *v27; // r12
  char v28; // dl
  __int64 v29; // r15
  unsigned __int64 v30; // r10
  __int64 v31; // r14
  struct _MDL *v32; // rdx
  unsigned __int64 v33; // r9
  __int64 v34; // rax
  struct _MDL *Next; // rbx
  unsigned int v36; // [rsp+30h] [rbp-48h]
  __int64 v37; // [rsp+38h] [rbp-40h]
  int v38; // [rsp+80h] [rbp+8h]
  unsigned int v39; // [rsp+90h] [rbp+18h]

  if ( !a3 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 520) == 3 )
  {
    if ( !*(_BYTE *)(a1 + 445) )
      return 3221225474LL;
LABEL_4:
    *a4 = a3;
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 440) && *(_BYTE *)(a1 + 445) )
    goto LABEL_4;
  v8 = *((_QWORD *)a2 + 1);
  if ( v8 )
    v9 = *(struct _MDL **)(v8 + 16);
  else
    v9 = *(struct _MDL **)(a1 + 552);
  if ( v9 )
  {
    *a4 = v9;
    return 0LL;
  }
  v10 = *a2;
  v11 = a2 + 4;
  v12 = 0LL;
  v36 = *a2;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = 1;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v38 = i;
    if ( (unsigned int)i >= v10 )
      break;
    v18 = *(_QWORD *)v11;
    v19 = v11[2];
    v20 = *(_QWORD *)v11 & 0xFFFLL;
    v37 = *(_QWORD *)v11;
    v39 = v19;
    if ( !v16 && ((_DWORD)v9 || (_DWORD)v20) )
    {
      Mdl = IopAllocateMdl(v14, v15, 1, i, 0LL, 0);
      if ( !Mdl )
        goto LABEL_40;
      *(_WORD *)(Mdl + 10) |= 0x2802u;
      if ( v12 )
        *v13 = Mdl;
      else
        v12 = (struct _MDL *)Mdl;
      LODWORD(i) = v38;
      v15 = 0;
      v19 = v39;
      v16 = 0;
      LOWORD(v18) = v37;
      v13 = (_QWORD *)Mdl;
    }
    else
    {
      v16 = 0;
      if ( v15 )
        goto LABEL_22;
    }
    v14 = v20;
LABEL_22:
    v22 = v18 + v19;
    v15 += v19;
    v10 = v36;
    LODWORD(v9) = v22 & 0xFFF;
    v11 += 6;
  }
  if ( v15 )
  {
    v23 = IopAllocateMdl(v14, v15, 1, i, 0LL, 0);
    if ( !v23 )
    {
LABEL_40:
      if ( v12 )
      {
        do
        {
          Next = v12->Next;
          IoFreeMdl(v12);
          v12 = Next;
        }
        while ( Next );
      }
      return 3221225626LL;
    }
    *(_WORD *)(v23 + 10) |= 0x2802u;
    if ( v12 )
      *v13 = v23;
    else
      v12 = (struct _MDL *)v23;
  }
  v24 = v12 + 1;
  v25 = 0;
  v26 = a2 + 4;
  v27 = v12;
  v28 = 1;
  if ( *a2 )
  {
    v29 = *a2;
    do
    {
      v30 = *(_QWORD *)v26;
      v31 = v26[2];
      if ( !v28 && (v25 || (v30 & 0xFFF) != 0) )
      {
        v27 = v27->Next;
        v24 = v27 + 1;
      }
      v32 = (struct _MDL *)(v30 >> 12);
      v33 = ((*(_QWORD *)v26 & 0xFFFuLL) + v31 + 4095) >> 12;
      if ( (_DWORD)v33 )
      {
        v34 = (unsigned int)v33;
        do
        {
          v24->Next = v32;
          v24 = (struct _MDL *)((char *)v24 + 8);
          v32 = (struct _MDL *)((char *)v32 + 1);
          --v34;
        }
        while ( v34 );
      }
      v28 = 0;
      v25 = (v30 + v31) & 0xFFF;
      v26 += 6;
      --v29;
    }
    while ( v29 );
  }
  *a4 = v12;
  if ( v8 )
    *(_QWORD *)(v8 + 16) = v12;
  else
    *(_QWORD *)(a1 + 552) = v12;
  return 0LL;
}
