/*
 * XREFs of RtlpCopyAces @ 0x18004BDC0
 * Callers:
 *     RtlpComputeMergedAcl2 @ 0x180045948 (RtlpComputeMergedAcl2.c)
 *     RtlpInheritAcl2 @ 0x18004A930 (RtlpInheritAcl2.c)
 * Callees:
 *     RtlpCopyEffectiveAce @ 0x18004B420 (RtlpCopyEffectiveAce.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        _DWORD *a2,
        int a3,
        char a4,
        char a5,
        unsigned __int8 *a6,
        unsigned __int16 *a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11,
        int a12,
        unsigned int *a13,
        __int64 a14)
{
  __int64 v14; // rdi
  char v15; // si
  int v16; // r14d
  _DWORD *v17; // r11
  __int64 v18; // r9
  __int64 v19; // r10
  int *v20; // rbx
  unsigned int v21; // eax
  unsigned __int64 v22; // r8
  _BYTE *v23; // r13
  unsigned int v24; // r12d
  unsigned int v25; // ecx
  unsigned int v26; // eax
  bool v27; // zf
  signed __int64 v28; // r14
  unsigned __int8 v29; // al
  int v30; // ecx
  unsigned int v31; // eax
  int v32; // eax
  int v34; // ecx
  char v35; // r8
  char v36; // al
  char v37; // dl
  char v38; // r8
  int v39; // edx
  int v40; // r8d
  unsigned int i; // edx
  char v42; // [rsp+80h] [rbp-41h]
  _BYTE v43[11]; // [rsp+81h] [rbp-40h] BYREF
  int v44; // [rsp+8Ch] [rbp-35h]
  unsigned __int16 v45; // [rsp+90h] [rbp-31h]
  void *v46; // [rsp+98h] [rbp-29h] BYREF

  v14 = a14;
  v15 = 0;
  v16 = a3;
  v17 = a2;
  v18 = a1;
  if ( (unsigned __int8)(*(_BYTE *)a14 - 2) > 2u )
    return 3221225560LL;
  v19 = a14 + 8;
  v20 = (int *)(a14 + 8);
  v21 = 0;
  v22 = a14 + *(unsigned __int16 *)(a14 + 2);
  while ( v21 < *(unsigned __int16 *)(a14 + 4) )
  {
    if ( (unsigned __int64)v20 >= v22 )
      return 3221225597LL;
    ++v21;
    v20 = (int *)((char *)v20 + *((unsigned __int16 *)v20 + 1));
  }
  v23 = (_BYTE *)(a1 + 8);
  v24 = 0;
  v25 = 0;
  if ( (unsigned __int64)v20 > v22 )
    v20 = 0LL;
  while ( 1 )
  {
    v26 = *(unsigned __int16 *)(v18 + 4);
    *(_DWORD *)&v43[7] = v25;
    if ( v25 >= v26 )
      break;
    if ( *v23 != 17 )
    {
      if ( a12 == 3 )
        goto LABEL_37;
LABEL_11:
      if ( v16 == 1 )
      {
        v27 = (v23[1] & 0x10) == 0;
LABEL_13:
        if ( !v27 )
          goto LABEL_37;
      }
      else
      {
        if ( v16 )
        {
          v27 = v16 == 2;
          goto LABEL_13;
        }
        if ( (v23[1] & 0x10) == 0 )
          goto LABEL_37;
      }
      if ( !a5 )
      {
        v28 = *((unsigned __int16 *)v23 + 1);
        if ( v20 && v28 <= v14 + *(unsigned __int16 *)(v14 + 2) - (_QWORD)v20 )
        {
          if ( !v15 )
          {
            memmove(v20, v23, *((unsigned __int16 *)v23 + 1));
            v29 = *(_BYTE *)v20;
            if ( (*(_BYTE *)v20 <= 8u || v29 <= 0xAu || (unsigned __int8)(v29 - 13) <= 1u)
              && (*((_BYTE *)v20 + 1) & 8) == 0 )
            {
              v30 = v20[1];
              if ( v30 < 0 )
                v30 |= *a2;
              if ( (v30 & 0x40000000) != 0 )
                v30 |= a2[1];
              if ( (v30 & 0x20000000) != 0 )
                v30 |= a2[2];
              if ( (v30 & 0x10000000) != 0 )
                v30 |= a2[3];
              v20[1] = v30 & 0xFFFFFFF;
              v31 = *(unsigned __int8 *)v20;
              if ( !(_BYTE)v31 || (unsigned __int8)v31 <= 0xAu && (v40 = 1650, _bittest(&v40, v31)) )
                v32 = v30 & a2[3] & 0xFFFFFFF;
              else
                v32 = v30 & (a2[3] & 0xEFFFFFF | 0x1000000);
              v20[1] = v32;
            }
            *((_BYTE *)v20 + 1) &= ~a4;
LABEL_34:
            ++*(_WORD *)(v14 + 4);
LABEL_35:
            v20 = (int *)((char *)v20 + (unsigned int)v28);
LABEL_36:
            v25 = *(_DWORD *)&v43[7];
            v24 += v28;
            v16 = a3;
            v18 = a1;
            v17 = a2;
            goto LABEL_37;
          }
LABEL_59:
          v20 = (int *)(v14 + *(unsigned __int16 *)(v14 + 2));
          goto LABEL_36;
        }
LABEL_58:
        v15 = 1;
        goto LABEL_59;
      }
      v34 = 0;
      v46 = v20;
      LODWORD(v28) = 0;
      *(_DWORD *)&v43[3] = 0;
      v43[0] = 0;
      v35 = a10 && (v23[1] & 3) != 0;
      v36 = v23[1];
      v42 = v35;
      if ( (v36 & 8) != 0 )
        goto LABEL_48;
      v37 = 0;
      LOBYTE(a14) = 0;
      if ( a11 )
        v37 = (v36 & 0x10) != 0;
      if ( !RtlpCopyEffectiveAce(
              (unsigned __int16 *)v23,
              v37,
              v35,
              a6,
              a7,
              a8,
              a9,
              v17,
              0LL,
              0,
              &v46,
              &v43[3],
              v14,
              0LL,
              v43,
              &a14) )
        return 3221225597LL;
      v34 = *(_DWORD *)&v43[3];
      LODWORD(v28) = *(_DWORD *)&v43[3];
      if ( (_BYTE)a14 )
      {
        v15 = 1;
        goto LABEL_48;
      }
      if ( v15 || !*(_DWORD *)&v43[3] )
      {
LABEL_48:
        v38 = a4;
      }
      else
      {
        v38 = a4;
        *((_BYTE *)v20 + 1) &= ~a4;
        v34 = *(_DWORD *)&v43[3];
      }
      if ( !v42 )
        goto LABEL_56;
      v39 = *(_DWORD *)(v23 + 10);
      v44 = 0;
      v45 = 768;
      if ( !v39 )
        v39 = *((unsigned __int16 *)v23 + 7) - v45;
      if ( v34 && !v43[0] )
      {
        if ( !v15 )
        {
          *((_BYTE *)v20 + 1) = ~v38 & (*((_BYTE *)v20 + 1) | v23[1] & 0x1F);
          goto LABEL_35;
        }
        goto LABEL_59;
      }
      if ( *v23 <= 8u && !*((_DWORD *)v23 + 1) && v39 )
      {
LABEL_56:
        if ( !v15 )
          goto LABEL_35;
        v20 = (int *)(v14 + *(unsigned __int16 *)(v14 + 2));
        goto LABEL_36;
      }
      LODWORD(v28) = *((unsigned __int16 *)v23 + 1) + (_DWORD)v28;
      if ( (unsigned int)v28 > 0xFFFF )
        return 3221225597LL;
      if ( *((unsigned __int16 *)v23 + 1) <= v14 + *(unsigned __int16 *)(v14 + 2) - (_QWORD)v46 )
      {
        if ( !v15 )
        {
          memmove(v46, v23, *((unsigned __int16 *)v23 + 1));
          *((_BYTE *)v46 + 1) |= 8u;
          *((_BYTE *)v46 + 1) &= ~a4;
          goto LABEL_34;
        }
        goto LABEL_59;
      }
      goto LABEL_58;
    }
    if ( a12 == 3 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(v14 + 4); ++i )
      {
        if ( *(_BYTE *)v19 == 17 )
          goto LABEL_38;
        v19 += *(unsigned __int16 *)(v19 + 2);
      }
      goto LABEL_11;
    }
LABEL_37:
    v19 = v14 + 8;
    ++v25;
    v23 += *((unsigned __int16 *)v23 + 1);
  }
LABEL_38:
  if ( v24 <= 0xFFFF )
  {
    *a13 = v24;
    return v15 != 0 ? 0xC0000023 : 0;
  }
  return 3221225597LL;
}
