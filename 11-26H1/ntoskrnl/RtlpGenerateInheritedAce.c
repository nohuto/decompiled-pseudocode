/*
 * XREFs of RtlpGenerateInheritedAce @ 0x1408EB060
 * Callers:
 *     RtlpInheritAcl2 @ 0x1408E9740 (RtlpInheritAcl2.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlpCompareKnownObjectAces @ 0x14077D67C (RtlpCompareKnownObjectAces.c)
 *     RtlpCopyEffectiveAce @ 0x1408EA910 (RtlpCopyEffectiveAce.c)
 *     RtlpIsDuplicateAce @ 0x1408EB4E0 (RtlpIsDuplicateAce.c)
 */

__int64 __fastcall RtlpGenerateInheritedAce(
        _BYTE *a1,
        char a2,
        char a3,
        unsigned __int8 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        int *a11,
        __int64 a12,
        unsigned int *a13,
        _BYTE *a14)
{
  unsigned int v14; // ebx
  char v15; // r14
  int v17; // edi
  unsigned __int8 *v18; // r15
  int v19; // r11d
  char v20; // r12
  __int64 v21; // r10
  unsigned int v22; // r8d
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r10
  unsigned __int8 *v25; // r9
  unsigned int i; // ecx
  unsigned __int16 *v27; // rcx
  char v28; // al
  unsigned int v29; // esi
  bool v30; // zf
  unsigned __int8 v32; // cl
  int v33; // eax
  int v34; // r14d
  int v35; // r15d
  int v36; // esi
  unsigned __int8 *v37; // r10
  unsigned __int8 v38; // cl
  unsigned __int8 v39; // r9
  __int64 v40; // rdx
  bool v41; // al
  unsigned __int8 v42; // cl
  int v43; // eax
  char v44; // al
  unsigned __int8 v45; // al
  unsigned int v46; // eax
  char v47; // [rsp+80h] [rbp-79h] BYREF
  char v48; // [rsp+81h] [rbp-78h]
  char v49; // [rsp+82h] [rbp-77h] BYREF
  int v50; // [rsp+84h] [rbp-75h] BYREF
  __int64 v51; // [rsp+90h] [rbp-69h] BYREF
  unsigned __int8 *v52; // [rsp+98h] [rbp-61h]
  unsigned __int8 *v53; // [rsp+A0h] [rbp-59h]
  void *Src; // [rsp+A8h] [rbp-51h]
  __int64 v55; // [rsp+B0h] [rbp-49h]
  __int64 v56; // [rsp+B8h] [rbp-41h]
  __int64 v57; // [rsp+C0h] [rbp-39h]
  __int64 v58; // [rsp+C8h] [rbp-31h]
  __int64 v59; // [rsp+D0h] [rbp-29h]
  __int64 v60; // [rsp+D8h] [rbp-21h]
  unsigned __int8 *v61; // [rsp+E0h] [rbp-19h]
  int *v62; // [rsp+E8h] [rbp-11h]
  unsigned int *v63; // [rsp+F0h] [rbp-9h]

  v14 = 0;
  v15 = 0;
  v60 = a5;
  v17 = 0;
  v59 = a6;
  v18 = 0LL;
  v19 = 0;
  v58 = a7;
  v57 = a8;
  v56 = a9;
  v62 = a11;
  v63 = a13;
  v61 = a4;
  v48 = a3;
  Src = a1;
  *a14 = 0;
  v55 = (__int64)a14;
  v50 = 0;
  v49 = 0;
  v47 = 0;
  v20 = 0;
  if ( a2 )
  {
    v44 = a1[1];
    if ( (v44 & 4) == 0 && ((v44 & 1) != 0 || (v44 & 2) != 0) )
      v20 = 1;
  }
  v21 = *(unsigned __int16 *)(a12 + 2);
  v22 = *(unsigned __int16 *)(a12 + 4);
  v23 = a12 + 8;
  v52 = (unsigned __int8 *)(a12 + 8);
  v24 = a12 + v21;
  v25 = 0LL;
  v51 = 0LL;
  for ( i = 0; i < v22; ++i )
  {
    if ( v23 >= v24 )
      return 3221225597LL;
    v23 += *(unsigned __int16 *)(v23 + 2);
  }
  if ( v23 <= v24 )
  {
    v25 = (unsigned __int8 *)v23;
    v51 = v23;
  }
  if ( !v25 )
    return 3221225597LL;
  v27 = (unsigned __int16 *)Src;
  v28 = *((_BYTE *)Src + 1);
  if ( a2 )
  {
    if ( (v28 & 2) == 0 )
      goto LABEL_10;
  }
  else if ( (v28 & 1) == 0 )
  {
LABEL_10:
    v29 = 0;
    goto LABEL_11;
  }
  v18 = v25;
  v53 = v25;
  if ( !RtlpCopyEffectiveAce(
          (char *)Src,
          v48,
          v20,
          v61,
          (unsigned __int8 *)v60,
          v59,
          v58,
          (_DWORD *)v57,
          v56,
          a10,
          (void **)&v51,
          &v50,
          a12,
          (_BYTE *)v55,
          &v49,
          &v47) )
    return 3221225597LL;
  v19 = v50;
  if ( v47 || !v50 || *v18 == 4 || *v18 > 8u || (v32 = v18[1], (v32 & 0x10) == 0) )
  {
LABEL_35:
    v25 = (unsigned __int8 *)v51;
    v29 = 0;
    v15 = v49;
    v17 = v19;
    v27 = (unsigned __int16 *)Src;
    goto LABEL_11;
  }
  v33 = *((_DWORD *)v18 + 1);
  v34 = v33;
  v35 = v33;
  if ( (v32 & 2) == 0 )
    v34 = 0;
  v36 = 0;
  if ( (v32 & 1) == 0 )
    v35 = 0;
  if ( (v32 & 8) == 0 )
    v36 = v33;
  while ( 1 )
  {
    if ( v17 >= *(unsigned __int16 *)(a12 + 4) - 1 )
    {
      v19 = v50;
      v18 = v53;
      goto LABEL_35;
    }
    v37 = v52;
    v38 = *v52;
    if ( *v52 <= 8u && v38 != 4 )
    {
      v39 = v52[1];
      if ( (v39 & 0x10) != 0 )
      {
        v40 = *v53;
        if ( v38 >= 5u )
        {
          if ( (unsigned __int8)(v40 - 5) > 3u )
            goto LABEL_33;
          v41 = RtlpCompareKnownObjectAces(v52, v53);
        }
        else
        {
          if ( (unsigned __int8)(v40 - 5) <= 3u )
            goto LABEL_33;
          v41 = *((_BYTE *)RtlBaseAceType + v40) == *((_BYTE *)RtlBaseAceType + *v52)
             && (!*((_BYTE *)RtlIsSystemAceType + v40) || ((v53[1] ^ v39) & 0xC0) == 0)
             && RtlEqualSid(v53 + 8, v52 + 8) != 0;
        }
        v37 = v52;
        if ( v41 )
        {
          v42 = v52[1];
          v43 = ~*((_DWORD *)v52 + 1);
          if ( (v42 & 2) != 0 )
            v34 &= v43;
          if ( (v42 & 1) != 0 )
            v35 &= v43;
          if ( (v42 & 8) == 0 )
            v36 &= v43;
          if ( !(v34 | v35 | v36) )
            break;
        }
      }
    }
LABEL_33:
    ++v17;
    v52 = &v37[*((unsigned __int16 *)v37 + 1)];
  }
  v18 = v53;
  v19 = 0;
  v29 = v50;
  v25 = v53;
  --*(_WORD *)(a12 + 4);
  v17 = 0;
  v15 = v49;
  v27 = (unsigned __int16 *)Src;
  v51 = (__int64)v25;
  v50 = 0;
LABEL_11:
  if ( v20 )
  {
    if ( v19 && !v15 )
    {
      if ( !v47 )
      {
        v45 = v18[1] | *((_BYTE *)v27 + 1) & 3;
        v18[1] = v45;
        if ( v48 )
          v18[1] = v45 | 0x10;
      }
      goto LABEL_12;
    }
    if ( *(_BYTE *)v27 <= 8u && !*((_DWORD *)v27 + 1) )
      goto LABEL_12;
    v17 += v27[1];
    if ( (unsigned int)v17 <= 0xFFFF )
    {
      if ( v27[1] > a12 + *(unsigned __int16 *)(a12 + 2) - (_QWORD)v25 )
      {
        v47 = 1;
      }
      else if ( !v47 )
      {
        memmove(v25, v27, v27[1]);
        *(_BYTE *)(v51 + 1) |= 8u;
        ++*(_WORD *)(a12 + 4);
        if ( v48 )
        {
          *(_BYTE *)(v51 + 1) |= 0x10u;
          if ( (unsigned __int8)RtlpIsDuplicateAce(a12, v51) )
          {
            --*(_WORD *)(a12 + 4);
            v46 = *((unsigned __int16 *)Src + 1);
            if ( v29 <= v46 )
              v29 = *((unsigned __int16 *)Src + 1);
            v17 -= v46;
          }
        }
      }
      goto LABEL_12;
    }
    return 3221225597LL;
  }
LABEL_12:
  v30 = v47 == 0;
  *v62 = v17;
  *v63 = v29;
  if ( !v30 )
    return (unsigned int)-1073741789;
  return v14;
}
