/*
 * XREFs of RtlpGenerateInheritedAce @ 0x18004AF80
 * Callers:
 *     RtlpInheritAcl2 @ 0x18004A930 (RtlpInheritAcl2.c)
 * Callees:
 *     RtlpCopyEffectiveAce @ 0x18004B420 (RtlpCopyEffectiveAce.c)
 *     RtlpIsDuplicateAce @ 0x18004C270 (RtlpIsDuplicateAce.c)
 *     RtlpCompareKnownObjectAces @ 0x18004C4E0 (RtlpCompareKnownObjectAces.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

__int64 __fastcall RtlpGenerateInheritedAce(
        _BYTE *a1,
        char a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        unsigned int *a11,
        __int64 a12,
        unsigned int *a13,
        _BYTE *a14)
{
  unsigned int v14; // edi
  char v15; // r14
  unsigned __int8 *v16; // rbx
  unsigned int v18; // r10d
  unsigned __int8 *v19; // r13
  unsigned int v20; // r8d
  unsigned __int16 *v21; // rdx
  unsigned __int64 v22; // r9
  unsigned __int8 *v23; // r11
  unsigned int i; // eax
  unsigned __int16 *v25; // rcx
  char v26; // al
  unsigned __int8 v27; // cl
  int v28; // eax
  int v29; // r12d
  int v30; // r15d
  int v31; // r14d
  int v32; // ebx
  __int64 v33; // rcx
  unsigned __int8 v34; // r9
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  char v37; // al
  unsigned int v38; // r15d
  unsigned __int8 v40; // cl
  int v41; // eax
  char v42; // al
  unsigned __int8 v43; // al
  unsigned int v44; // eax
  char v45; // [rsp+80h] [rbp-69h] BYREF
  bool v46; // [rsp+81h] [rbp-68h]
  __int16 v47; // [rsp+82h] [rbp-67h] BYREF
  unsigned int v48; // [rsp+84h] [rbp-65h] BYREF
  void *v49; // [rsp+90h] [rbp-59h] BYREF
  unsigned __int8 *v50; // [rsp+98h] [rbp-51h]
  void *Src; // [rsp+A0h] [rbp-49h]
  __int64 v52; // [rsp+A8h] [rbp-41h]
  __int64 v53; // [rsp+B0h] [rbp-39h]
  __int64 v54; // [rsp+B8h] [rbp-31h]
  __int64 v55; // [rsp+C0h] [rbp-29h]
  __int64 v56; // [rsp+C8h] [rbp-21h]
  __int64 v57; // [rsp+D0h] [rbp-19h]
  unsigned int *v58; // [rsp+D8h] [rbp-11h]
  unsigned int *v59; // [rsp+E0h] [rbp-9h]

  v14 = 0;
  v15 = 0;
  v16 = 0LL;
  v56 = a5;
  v18 = 0;
  v55 = a6;
  v54 = a7;
  v53 = a8;
  v52 = a9;
  v58 = a11;
  v59 = a13;
  v57 = a4;
  v47 = a3;
  Src = a1;
  v48 = 0;
  v45 = 0;
  *a14 = 0;
  v46 = a2 && (v42 = a1[1], (v42 & 4) == 0) && ((v42 & 1) != 0 || (v42 & 2) != 0);
  v19 = (unsigned __int8 *)(a12 + 8);
  v20 = *(unsigned __int16 *)(a12 + 4);
  v21 = (unsigned __int16 *)(a12 + 8);
  v22 = a12 + *(unsigned __int16 *)(a12 + 2);
  v49 = 0LL;
  v23 = 0LL;
  for ( i = 0; i < v20; ++i )
  {
    if ( (unsigned __int64)v21 >= v22 )
      return 3221225597LL;
    v21 = (unsigned __int16 *)((char *)v21 + v21[1]);
  }
  if ( (unsigned __int64)v21 <= v22 )
  {
    v23 = (unsigned __int8 *)v21;
    v49 = v21;
  }
  if ( !v23 )
    return 3221225597LL;
  v25 = (unsigned __int16 *)Src;
  v26 = *((_BYTE *)Src + 1);
  if ( a2 )
  {
    if ( (v26 & 2) != 0 )
      goto LABEL_12;
LABEL_42:
    v38 = 0;
    goto LABEL_39;
  }
  if ( (v26 & 1) == 0 )
    goto LABEL_42;
LABEL_12:
  v16 = v23;
  v50 = v23;
  if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                           Src,
                           v56,
                           v55,
                           v54,
                           v53,
                           v52,
                           a10,
                           (__int64)&v49,
                           (__int64)&v48,
                           a12,
                           (__int64)a14,
                           (__int64)&v47 + 1,
                           (__int64)&v45) )
    return 3221225597LL;
  v18 = v48;
  if ( v45 || !v48 || *v16 > 8u || *v16 == 4 || (v27 = v16[1], (v27 & 0x10) == 0) )
  {
LABEL_37:
    v23 = (unsigned __int8 *)v49;
    v38 = 0;
    goto LABEL_38;
  }
  v28 = *((_DWORD *)v16 + 1);
  v29 = v28;
  v30 = v28;
  v31 = 0;
  if ( (v27 & 2) == 0 )
    v29 = 0;
  v32 = 0;
  if ( (v27 & 1) == 0 )
    v30 = 0;
  if ( (v27 & 8) == 0 )
    v31 = v28;
  while ( 1 )
  {
    if ( v32 >= *(unsigned __int16 *)(a12 + 4) - 1 )
    {
      v18 = v48;
      v16 = v50;
      goto LABEL_37;
    }
    v33 = *v19;
    if ( (unsigned __int8)v33 <= 8u && (_BYTE)v33 != 4 )
    {
      v34 = v19[1];
      if ( (v34 & 0x10) != 0 )
      {
        v35 = *v50;
        if ( (unsigned __int8)v33 >= 5u )
        {
          if ( (unsigned __int8)(v35 - 5) > 3u )
            goto LABEL_35;
          v37 = RtlpCompareKnownObjectAces(v19, v50);
        }
        else
        {
          if ( (unsigned __int8)(v35 - 5) <= 3u )
            goto LABEL_35;
          v37 = 0;
          if ( RtlBaseAceType[v35] == RtlBaseAceType[v33] && (!RtlIsSystemAceType[v35] || ((v50[1] ^ v34) & 0xC0) == 0) )
          {
            v36 = *((unsigned __int16 *)v50 + 4);
            if ( (_WORD)v36 == *((_WORD *)v19 + 4) && !memcmp(v50 + 8, v19 + 8, 4 * (v36 >> 8) + 8) )
              v37 = 1;
          }
        }
        if ( v37 )
        {
          v40 = v19[1];
          v41 = ~*((_DWORD *)v19 + 1);
          if ( (v40 & 2) != 0 )
            v29 &= v41;
          if ( (v40 & 1) != 0 )
            v30 &= v41;
          if ( (v40 & 8) == 0 )
            v31 &= v41;
          if ( !(v29 | v30 | v31) )
            break;
        }
      }
    }
LABEL_35:
    ++v32;
    v19 += *((unsigned __int16 *)v19 + 1);
  }
  v16 = v50;
  v18 = 0;
  v38 = v48;
  v23 = v50;
  --*(_WORD *)(a12 + 4);
  v49 = v23;
  v48 = 0;
LABEL_38:
  v15 = HIBYTE(v47);
  v14 = v18;
  v25 = (unsigned __int16 *)Src;
LABEL_39:
  if ( !v46 )
  {
LABEL_40:
    *v58 = v14;
    *v59 = v38;
    return v45 != 0 ? 0xC0000023 : 0;
  }
  if ( v18 && !v15 )
  {
    if ( !v45 )
    {
      v43 = v16[1] | *((_BYTE *)v25 + 1) & 3;
      v16[1] = v43;
      if ( (_BYTE)v47 )
        v16[1] = v43 | 0x10;
    }
    goto LABEL_40;
  }
  if ( *(_BYTE *)v25 <= 8u && !*((_DWORD *)v25 + 1) )
    goto LABEL_40;
  v14 += v25[1];
  if ( v14 <= 0xFFFF )
  {
    if ( v25[1] > a12 + *(unsigned __int16 *)(a12 + 2) - (_QWORD)v23 )
    {
      v45 = 1;
    }
    else if ( !v45 )
    {
      memmove(v23, v25, v25[1]);
      *((_BYTE *)v49 + 1) |= 8u;
      ++*(_WORD *)(a12 + 4);
      if ( (_BYTE)v47 )
      {
        *((_BYTE *)v49 + 1) |= 0x10u;
        if ( (unsigned __int8)RtlpIsDuplicateAce(a12, v49) )
        {
          --*(_WORD *)(a12 + 4);
          v44 = *((unsigned __int16 *)Src + 1);
          if ( v38 <= v44 )
            v38 = *((unsigned __int16 *)Src + 1);
          v14 -= v44;
        }
      }
    }
    goto LABEL_40;
  }
  return 3221225597LL;
}
