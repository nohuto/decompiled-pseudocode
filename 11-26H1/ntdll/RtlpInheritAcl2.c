/*
 * XREFs of RtlpInheritAcl2 @ 0x18004A930
 * Callers:
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x18004BBA0 (RtlpInheritAcl.c)
 * Callees:
 *     RtlpGenerateInheritedAce @ 0x18004AF80 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x18004BDC0 (RtlpCopyAces.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpInheritAcl2(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        __int16 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        unsigned int *a15,
        _WORD *a16,
        _BYTE *a17,
        int *a18)
{
  __int64 v19; // rbx
  unsigned int v20; // edx
  __int64 v22; // r8
  unsigned int v23; // eax
  char v24; // r15
  int v26; // r10d
  int v27; // r14d
  __int64 v28; // r9
  unsigned __int8 v29; // r13
  _BYTE *v30; // r11
  int *v31; // rax
  int v32; // ecx
  unsigned int v33; // ecx
  unsigned __int8 *v34; // rbp
  char v35; // r12
  unsigned int v36; // r15d
  unsigned int i; // esi
  int InheritedAce; // ecx
  char v39; // al
  int v40; // edi
  int v41; // edx
  __int64 v42; // rax
  char v44; // al
  int v45; // eax
  int v46; // ecx
  int v47; // ecx
  unsigned int v48; // ecx
  __int64 v49; // r8
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // r10
  unsigned __int64 v52; // rcx
  unsigned int v53; // r9d
  unsigned __int16 *v54; // rcx
  __int64 v55; // r8
  unsigned int v56; // edx
  unsigned __int64 v57; // r8
  char v58; // [rsp+70h] [rbp-68h]
  int v59; // [rsp+74h] [rbp-64h]
  int v60; // [rsp+78h] [rbp-60h] BYREF
  int v61; // [rsp+7Ch] [rbp-5Ch]
  unsigned int v62; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v63; // [rsp+84h] [rbp-54h] BYREF
  unsigned int v64; // [rsp+88h] [rbp-50h]
  void *Src; // [rsp+90h] [rbp-48h]
  bool v66; // [rsp+F0h] [rbp+18h]

  v19 = (__int64)a16;
  v20 = 0;
  v60 = 0;
  v22 = 2LL;
  v59 = 0;
  v23 = *a15;
  v24 = 0;
  LOWORD(v64) = 0;
  Src = 0LL;
  v26 = 0;
  v66 = 0;
  v27 = 0;
  v58 = 1;
  v28 = 2LL;
  v61 = 2;
  if ( v23 >= 8 && v23 <= 0xFFFC )
  {
    *a16 = 2;
    *(_WORD *)(v19 + 2) = v23 & 0xFFFC;
    *(_DWORD *)(v19 + 4) = 0;
  }
  v29 = a5;
  v30 = a17;
  v31 = a18;
  v32 = a5 != 0 ? 0x400 : 0;
  *a17 = 0;
  *v31 = v32;
  if ( (a3 & 8) == 0 )
  {
    if ( (a3 & 0x1000) != 0 )
    {
      v24 = 1;
      *v31 = v32 | 0x1000;
    }
    if ( (a3 & 0x1004) == 0 )
      goto LABEL_8;
    if ( a2 )
    {
      v58 = 0;
      if ( *a2 >= 2u )
        v28 = *a2;
      v61 = v28;
      if ( v29 )
      {
        if ( (a3 & 0x1000) != 0 )
        {
          LOBYTE(v28) = 16;
        }
        else
        {
          v22 = 1LL;
          LOBYTE(v28) = 0;
        }
        v44 = 1;
      }
      else
      {
        LOBYTE(v28) = 0;
        v44 = 0;
      }
      v45 = RtlpCopyAces(a2, a11, v22, v28, v44, a7, a8, a9, a10, a4, 0, a12, &v60, v19);
      v26 = v60;
      v66 = v45 == -1073741789;
      v59 = v60;
      v46 = 0;
      if ( v45 != -1073741789 )
        v46 = v45;
      if ( v46 < 0 )
        return (unsigned int)v46;
      if ( a6 && v60 )
      {
        v53 = *(unsigned __int16 *)(v19 + 4);
        v54 = (unsigned __int16 *)(v19 + 8);
        v55 = *(unsigned __int16 *)(v19 + 2);
        v56 = 0;
        v64 = v53;
        v57 = v19 + v55;
        while ( v56 < v53 )
        {
          if ( (unsigned __int64)v54 >= v57 )
            return 3221225597LL;
          ++v56;
          v54 = (unsigned __int16 *)((char *)v54 + v54[1]);
        }
        if ( (unsigned __int64)v54 <= v57 )
          Src = v54;
      }
      LODWORD(v28) = v61;
      v30 = a17;
    }
    else if ( v29 )
    {
      v47 = a12;
      if ( a12 == 1 )
      {
        if ( (a3 & 0x1004) == 4 )
          return 3221225591LL;
        goto LABEL_52;
      }
LABEL_66:
      if ( v47 != 2 || !v26 && !v24 && (!a2 || *((_WORD *)a2 + 2)) )
        goto LABEL_8;
      goto LABEL_52;
    }
    v47 = a12;
    if ( a12 == 1 )
    {
LABEL_52:
      *v30 = 1;
LABEL_8:
      v20 = 0;
      goto LABEL_9;
    }
    goto LABEL_66;
  }
LABEL_9:
  if ( (v29 || (a3 & 4) != 0) && (a3 & 8) == 0 && (!v29 || v24) || !a1 )
  {
    v40 = v60;
    goto LABEL_33;
  }
  v33 = *a1;
  if ( (unsigned __int8)(v33 - 2) > 2u )
    return 3221225560LL;
  v62 = 0;
  v63 = 0;
  v34 = a1 + 8;
  if ( (unsigned int)v28 <= v33 )
    LODWORD(v28) = v33;
  v27 = 0;
  v35 = 0;
  v61 = v28;
  a5 = 0;
  v36 = 0;
  LOBYTE(a18) = 0;
  for ( i = 0; i < *((unsigned __int16 *)a1 + 2); ++i )
  {
    if ( *v34 == 17 )
    {
      if ( a12 != 3 )
        goto LABEL_27;
      if ( v19 )
      {
        v48 = 0;
        v49 = v19 + 8;
        while ( v48 < *(unsigned __int16 *)(v19 + 4) )
        {
          if ( *(_BYTE *)v49 == 17 )
          {
            v20 = 0;
            goto LABEL_29;
          }
          ++v48;
          v49 += *(unsigned __int16 *)(v49 + 2);
        }
      }
    }
    else if ( a12 == 3 )
    {
      goto LABEL_27;
    }
    InheritedAce = RtlpGenerateInheritedAce(
                     (_DWORD)v34,
                     a4,
                     v29,
                     a7,
                     a8,
                     a9,
                     a10,
                     a11,
                     a13,
                     a14,
                     (__int64)&v62,
                     v19,
                     (__int64)&v63,
                     (__int64)&a5);
    if ( InheritedAce == -1073741789 )
    {
      v35 = 1;
    }
    else if ( InheritedAce < 0 )
    {
      return (unsigned int)InheritedAce;
    }
    if ( a5 )
      LOBYTE(a18) = 1;
    v27 += v62;
    if ( v62 > v36 || (v36 -= v62, v36 <= v63) )
      v36 = v63;
    v20 = 0;
LABEL_27:
    v34 += *((unsigned __int16 *)v34 + 1);
  }
LABEL_29:
  if ( v35 || (v39 = v66) != 0 )
  {
    v39 = 1;
    v27 += v36;
    v66 = 1;
  }
  v40 = v60;
  if ( !a6 || !v60 || !(_BYTE)a18 || v39 )
  {
LABEL_33:
    v41 = v59;
    goto LABEL_34;
  }
  v50 = v19 + 8;
  v51 = v19 + *(unsigned __int16 *)(v19 + 2);
  v52 = 0LL;
  while ( v20 < *(unsigned __int16 *)(v19 + 4) )
  {
    if ( v50 >= v51 )
      return 3221225597LL;
    ++v20;
    v50 += *(unsigned __int16 *)(v50 + 2);
  }
  if ( v50 <= v51 )
    v52 = v50;
  if ( !v52 )
    LODWORD(v52) = v19 + *(unsigned __int16 *)(v19 + 2);
  memmove((void *)(v19 + 8), Src, (unsigned int)(v52 - (_DWORD)Src));
  *(_WORD *)(v19 + 4) -= v64;
  v41 = 0;
LABEL_34:
  v42 = (unsigned int)(v27 + v41);
  if ( !(_DWORD)v42 )
  {
    if ( !*a17 )
    {
      *a15 = 0;
      return 2147483659LL;
    }
    if ( v58 )
    {
      *a15 = 0;
      return 0LL;
    }
  }
  if ( (unsigned __int64)(v42 + 8) > 0xFFFF )
    return 3221225597LL;
  *a15 = v27 + v40 + 8;
  if ( v66 )
    return 3221225507LL;
  *(_BYTE *)v19 = v61;
  *(_WORD *)(v19 + 2) = v41 + v27 + 8;
  return 0LL;
}
