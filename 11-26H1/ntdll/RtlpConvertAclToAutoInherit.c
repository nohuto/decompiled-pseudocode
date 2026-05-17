/*
 * XREFs of RtlpConvertAclToAutoInherit @ 0x180124AB8
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x18013D7FC (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlValidAcl @ 0x18003D180 (RtlValidAcl.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpCompareAces @ 0x180059660 (RtlpCompareAces.c)
 *     RtlCreateAcl @ 0x18005D4F0 (RtlCreateAcl.c)
 *     RtlpInheritAcl @ 0x180061620 (RtlpInheritAcl.c)
 *     RtlInitializeSid @ 0x1800CDAB0 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpConvertAclToAutoInherit(
        unsigned __int8 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 *a8,
        _DWORD *a9)
{
  _DWORD *v10; // r14
  __int64 *v11; // r12
  _DWORD *v12; // rdi
  unsigned __int8 *v13; // r15
  void *ProcessHeap; // rsi
  int v15; // ebx
  unsigned __int8 *v16; // rbx
  __int64 Heap_0; // rax
  int v18; // r11d
  int v19; // esi
  unsigned __int16 *v20; // rbx
  int *v21; // r8
  int v22; // ecx
  int v23; // edx
  char v24; // cl
  int v25; // r10d
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  unsigned __int16 *v29; // r11
  int v30; // r10d
  __int64 v31; // r15
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  char v35; // cl
  unsigned __int16 *v36; // r12
  int v37; // r8d
  int v38; // r9d
  int v39; // ebx
  int v40; // edi
  _DWORD *v41; // rsi
  int v42; // r14d
  int v43; // eax
  unsigned __int8 *v44; // rcx
  _DWORD *v45; // r8
  char v46; // dl
  char v47; // r11
  int v48; // esi
  int i; // r10d
  __int64 v50; // rax
  __int64 v51; // rax
  bool v52; // zf
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // r9
  unsigned __int8 v57; // al
  unsigned __int16 *v58; // rsi
  _BYTE *v59; // r14
  int v60; // r12d
  _DWORD *v61; // rdi
  _DWORD *v62; // r15
  int v63; // ebx
  _BYTE *v64; // rdx
  int v65; // ecx
  int j; // ebx
  int v67; // eax
  int v68; // eax
  void *v69; // rax
  char v70; // [rsp+90h] [rbp-80h] BYREF
  unsigned __int8 v71; // [rsp+91h] [rbp-7Fh]
  int v72; // [rsp+94h] [rbp-7Ch] BYREF
  __int16 v73; // [rsp+98h] [rbp-78h]
  void *v74; // [rsp+A0h] [rbp-70h]
  int v75; // [rsp+A8h] [rbp-68h]
  int v76; // [rsp+ACh] [rbp-64h]
  __int64 *v77; // [rsp+B0h] [rbp-60h]
  __int64 v78; // [rsp+B8h] [rbp-58h]
  char *v79; // [rsp+C0h] [rbp-50h]
  __int64 v80; // [rsp+C8h] [rbp-48h] BYREF
  int v81; // [rsp+D0h] [rbp-40h]
  int v82; // [rsp+D4h] [rbp-3Ch]
  int v83; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v84; // [rsp+E0h] [rbp-30h] BYREF
  int v85; // [rsp+E8h] [rbp-28h]
  int v86; // [rsp+ECh] [rbp-24h]
  char *v87; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v88; // [rsp+F8h] [rbp-18h]
  __int64 v89; // [rsp+100h] [rbp-10h]
  unsigned __int8 *v90; // [rsp+108h] [rbp-8h]
  _DWORD *v91; // [rsp+110h] [rbp+0h]
  _DWORD *v92; // [rsp+118h] [rbp+8h]
  int v93; // [rsp+120h] [rbp+10h] BYREF
  __int64 v94; // [rsp+124h] [rbp+14h]
  char v95[8]; // [rsp+150h] [rbp+40h] BYREF
  int v96; // [rsp+158h] [rbp+48h]

  v10 = a7;
  v11 = a8;
  v12 = a9;
  v84 = a3;
  v89 = a5;
  v90 = a1;
  v88 = a6;
  v13 = 0LL;
  v80 = 0LL;
  v79 = 0LL;
  v87 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v70 = 0;
  v83 = 0;
  v78 = 0LL;
  v72 = 0;
  v74 = ProcessHeap;
  v71 = a4;
  v91 = a7;
  v77 = a8;
  v92 = a9;
  v73 = 768;
  v93 = 257;
  v94 = 50331648LL;
  v15 = RtlInitializeSid((__int64)v95, (__int64)&v72, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v16 = v90;
  *a9 = 1024;
  v96 = 1;
  *a8 = 0LL;
  if ( v16 && !RtlValidAcl((__int64)v16) || !RtlValidAcl((__int64)a2) )
    return (unsigned int)-1073741705;
  v15 = RtlpInheritAcl(
          v16,
          0LL,
          0,
          v71,
          1u,
          0,
          (__int64)&v93,
          (__int64)v95,
          (__int64)&v93,
          (__int64)v95,
          (__int64)a7,
          2,
          (unsigned __int64)&v84 & -(__int64)(v84 != 0),
          v84 != 0,
          &v80,
          &v70,
          &v83);
  if ( v15 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_109;
  }
  if ( v15 < 0 )
    goto LABEL_80;
  Heap_0 = RtlAllocateHeap_0();
  v18 = 0;
  v78 = Heap_0;
  if ( !Heap_0 )
  {
    v15 = -1073741801;
    goto LABEL_80;
  }
  v19 = 0;
  v20 = a2 + 4;
  v21 = (int *)(Heap_0 + 4);
  while ( v19 < a2[2] )
  {
    if ( *(_BYTE *)v20 > 8u || *(_BYTE *)v20 == 4 )
      goto LABEL_33;
    v22 = *((_DWORD *)v20 + 1);
    if ( v22 < 0 )
      v22 |= *a7;
    if ( (v22 & 0x40000000) != 0 )
      v22 |= a7[1];
    if ( (v22 & 0x20000000) != 0 )
      v22 |= a7[2];
    if ( (v22 & 0x10000000) != 0 )
      v22 |= a7[3];
    if ( (unsigned __int8)(*(_BYTE *)v20 - 2) <= 2u || *(_BYTE *)v20 >= 7u )
      v23 = v22 & (a7[3] & 0xEFFFFFF | 0x1000000);
    else
      v23 = v22 & a7[3] & 0xFFFFFFF;
    v24 = *((_BYTE *)v20 + 1) & 3 | ~*((_BYTE *)v20 + 1) & 8;
    if ( (*((_BYTE *)v20 + 1) & 2) != 0 )
    {
      v25 = v23;
      v18 = v23;
    }
    else
    {
      v25 = 0;
    }
    *(v21 - 1) = v18;
    v18 = 0;
    v21[2] = v25;
    v26 = v23;
    if ( (v24 & 1) == 0 )
      v26 = 0;
    *v21 = v26;
    v21[3] = v26;
    ++v19;
    v27 = (v24 & 8) != 0 ? v23 : 0;
    v21[1] = v27;
    v21[4] = v27;
    v21 += 6;
    v20 = (unsigned __int16 *)((char *)v20 + v20[1]);
  }
  v28 = v80;
  v29 = a2 + 4;
  v30 = 0;
  v82 = 0;
  v31 = v80 + 8;
  while ( v30 < *(unsigned __int16 *)(v28 + 4) )
  {
    if ( *(_BYTE *)v31 > 8u || *(_BYTE *)v31 == 4 )
    {
LABEL_62:
      *v12 |= 0x1000u;
      v15 = 0;
      v11 = v77;
      v13 = (unsigned __int8 *)v79;
      goto LABEL_110;
    }
    v32 = *(_DWORD *)(v31 + 4);
    if ( v32 < 0 )
      v32 |= *v10;
    if ( (v32 & 0x40000000) != 0 )
      v32 |= v10[1];
    if ( (v32 & 0x20000000) != 0 )
      v32 |= v10[2];
    if ( (v32 & 0x10000000) != 0 )
      v32 |= v10[3];
    if ( *(_BYTE *)v31 && (((*(_BYTE *)v31 - 1) & 0xFA) != 0 || *(_BYTE *)v31 == 2) )
      v33 = v32 & (v10[3] & 0xEFFFFFF | 0x1000000);
    else
      v33 = v32 & v10[3] & 0xFFFFFFF;
    if ( v33 )
    {
      v34 = *(_BYTE *)(v31 + 1) & 3;
      v35 = v34 | ~*(_BYTE *)(v31 + 1) & 8;
      if ( v34 | ~*(_BYTE *)(v31 + 1) & 8 )
      {
        v81 = 0;
        v36 = v29;
        v37 = (v35 & 2) != 0 ? v33 : 0;
        v86 = v37;
        v38 = (v35 & 1) != 0 ? v33 : 0;
        v72 = v38;
        v39 = (v35 & 8) != 0 ? v33 : 0;
        v85 = v39;
        if ( a2[2] )
        {
          v40 = (v35 & 2) != 0 ? v33 : 0;
          v41 = (_DWORD *)(v78 + 20);
          v42 = (v35 & 1) != 0 ? v33 : 0;
          do
          {
            if ( RtlpCompareAces((unsigned __int8 *)v31, (unsigned __int8 *)v36, v89, v88) )
            {
              v39 &= ~*(v41 - 3);
              v40 &= ~*(v41 - 5);
              v42 &= ~*(v41 - 4);
              *v41 &= ~v85;
              *(v41 - 2) &= ~v86;
              *(v41 - 1) &= ~v72;
            }
            v41 += 6;
            v36 = (unsigned __int16 *)((char *)v36 + v36[1]);
            v43 = a2[2];
            ++v81;
          }
          while ( v81 < v43 );
          v30 = v82;
          v29 = a2 + 4;
          v76 = v42;
          v38 = v42;
          v10 = v91;
          v75 = v40;
          v37 = v40;
          v12 = v92;
        }
        if ( v37 | v38 | v39 )
        {
          *v12 |= 0x1000u;
          v13 = (unsigned __int8 *)v79;
          v11 = v77;
          goto LABEL_109;
        }
      }
    }
    ++v30;
    v31 += *(unsigned __int16 *)(v31 + 2);
    v82 = v30;
    v28 = v80;
  }
  v44 = (unsigned __int8 *)(a2 + 4);
  v45 = (_DWORD *)(v78 + 16);
  v46 = 0;
  v47 = 0;
  v48 = 0;
  for ( i = 0; i < a2[2]; ++i )
  {
    if ( *v45 | v45[1] | *(v45 - 1) )
    {
      v48 += *((unsigned __int16 *)v44 + 1);
      v51 = *v44;
      if ( RtlBaseAceType[v51] )
      {
        if ( RtlBaseAceType[v51] != 1 )
          goto LABEL_75;
        v52 = v46 == 0;
      }
      else
      {
        v52 = v47 == 0;
      }
      if ( !v52 )
        goto LABEL_62;
    }
    else
    {
      v50 = *v44;
      if ( RtlBaseAceType[v50] )
      {
        if ( RtlBaseAceType[v50] == 1 )
          v47 = 1;
      }
      else
      {
        v46 = 1;
      }
    }
LABEL_75:
    v45 += 6;
    v44 += *((unsigned __int16 *)v44 + 1);
  }
  v53 = RtlpInheritAcl(
          v90,
          0LL,
          0,
          v71,
          1u,
          0,
          v89,
          v88,
          v89,
          v88,
          (__int64)v10,
          2,
          (unsigned __int64)&v84 & -(__int64)(v84 != 0),
          v84 != 0,
          &v87,
          &v70,
          &v83);
  v13 = (unsigned __int8 *)v87;
  v15 = v53;
  if ( v53 < 0 )
    goto LABEL_79;
  v79 = v87;
  v54 = RtlAllocateHeap_0();
  v11 = v77;
  v55 = v54;
  *v77 = v54;
  if ( !v54 )
  {
    v15 = -1073741801;
    goto LABEL_79;
  }
  v57 = *v13;
  if ( *v13 <= *(_BYTE *)a2 )
    v57 = *(_BYTE *)a2;
  if ( (int)RtlCreateAcl(v55, v48 + (unsigned int)*((unsigned __int16 *)v13 + 1), v57) < 0 )
  {
LABEL_33:
    *v12 |= 0x1000u;
    goto LABEL_109;
  }
  v58 = a2 + 4;
  v59 = (_BYTE *)(*v11 + 8);
  v60 = 0;
  if ( a2[2] )
  {
    v61 = v91;
    v62 = (_DWORD *)(v78 + 16);
    do
    {
      v63 = *v62 | v62[1] | *(v62 - 1);
      if ( v63 )
      {
        memmove(v59, v58, v58[1]);
        v59[1] &= ~0x10u;
        v64 = v59;
        v59 += v58[1];
        ++*(_WORD *)(*v77 + 4);
        v65 = 0x80000000;
        *((_DWORD *)v64 + 1) = v63 & *((_DWORD *)v58 + 1);
        for ( j = ~*((_DWORD *)v58 + 1) & v63; j; v65 = (unsigned int)v65 >> 1 )
        {
          if ( (unsigned int)v65 < 0x10000000 )
            break;
          if ( (v65 & *((_DWORD *)v58 + 1)) != 0 )
          {
            v67 = v65;
            if ( v65 < 0 )
              v67 = *v61 | v65;
            if ( (v67 & 0x40000000) != 0 )
              v67 |= v61[1];
            if ( (v67 & 0x20000000) != 0 )
              v67 |= v61[2];
            if ( (v67 & 0x10000000) != 0 )
              v67 |= v61[3];
            v68 = v67 & 0xFFFFFFF;
            if ( (v68 & j) != 0 )
            {
              *((_DWORD *)v64 + 1) |= v65;
              j &= ~v68;
            }
          }
        }
        *((_DWORD *)v64 + 1) |= j;
      }
      ++v60;
      v58 = (unsigned __int16 *)((char *)v58 + v58[1]);
      v62 += 6;
    }
    while ( v60 < a2[2] );
    v12 = v92;
    v13 = (unsigned __int8 *)v79;
  }
  memmove(v59, v13 + 8, (unsigned int)*((unsigned __int16 *)v13 + 1) - 8);
  v11 = v77;
  *(_WORD *)(*v77 + 4) += *((_WORD *)v13 + 2);
LABEL_109:
  v15 = 0;
LABEL_110:
  if ( (*v12 & 0x1000) != 0 )
  {
    if ( *v11 )
    {
      RtlFreeHeap_0();
      *v11 = 0LL;
    }
    v69 = (void *)RtlAllocateHeap_0();
    *v11 = (__int64)v69;
    if ( v69 )
      memmove(v69, a2, a2[1]);
    else
      v15 = -1073741801;
  }
  if ( v78 )
LABEL_79:
    RtlFreeHeap_0();
LABEL_80:
  if ( v80 )
    RtlFreeHeap_0();
  if ( v13 )
    RtlFreeHeap_0();
  return (unsigned int)v15;
}
