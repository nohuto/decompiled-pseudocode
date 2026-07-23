/*
 * XREFs of sub_140554F64 @ 0x140554F64
 * Callers:
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C68010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_140553D6C @ 0x140553D6C (sub_140553D6C.c)
 *     sub_140C7F03C @ 0x140C7F03C (sub_140C7F03C.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 */

char __fastcall sub_140554F64(__int64 a1, int *a2)
{
  unsigned __int64 j; // rax
  _QWORD *v5; // r11
  __int64 v6; // r8
  _QWORD *v7; // r9
  const char *v8; // rax
  int v9; // r10d
  unsigned __int64 v10; // r14
  unsigned int v11; // ebp
  unsigned __int64 i; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int8 v16; // dl
  int v17; // edx
  unsigned int v18; // r8d
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // edi
  __int64 v22; // r8
  BOOL v23; // ebp
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // r14
  __int64 v28; // r13
  unsigned __int64 v29; // r12
  int v30; // eax
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // r10
  __int64 v36; // r8
  _QWORD *v37; // rdx
  unsigned __int64 v38; // r9
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rdi
  unsigned int v42; // edx
  _BYTE *v43; // r8
  char *v44; // r9
  __int64 v45; // rcx
  char v46; // cl
  int v47; // r12d
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned __int64 v50; // r14
  __int64 v51; // r13
  unsigned __int64 v52; // r15
  __int64 v53; // rcx
  int v54; // ecx
  __int64 v55; // rcx
  __int64 v56; // r10
  __int64 v57; // r8
  _QWORD *v58; // rdx
  unsigned __int64 v59; // r9
  int v60; // ecx
  __int64 v61; // rax
  _BYTE v63[56]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 CurrentIrql; // [rsp+68h] [rbp+10h]
  unsigned __int8 v65; // [rsp+68h] [rbp+10h]

  LODWORD(j) = a2[10];
  if ( (j & 4) != 0 )
    return j;
  v5 = (_QWORD *)*((_QWORD *)a2 + 1);
  v6 = (unsigned int)a2[4];
  v7 = v5;
  v8 = (const char *)v5;
  v9 = *(_DWORD *)(a1 + 2100);
  v10 = *(_QWORD *)(a1 + 2104);
  *(_DWORD *)(a1 + 2120) += v6;
  if ( v5 < (_QWORD *)((char *)v5 + v6) )
  {
    do
    {
      _mm_prefetch(v8, 0);
      v8 += 64;
    }
    while ( v8 < (const char *)v5 + v6 );
  }
  v11 = (unsigned int)v6 >> 7;
  for ( i = v10; v11; --v11 )
  {
    v13 = 8LL;
    do
    {
      v14 = v7[1] ^ __ROL8__(*v7 ^ i, v9);
      v7 += 2;
      i = __ROL8__(v14, v9);
      --v13;
    }
    while ( v13 );
    v15 = __ROL8__(v10 ^ ((char *)v7 - (char *)v5), 17) ^ v10 ^ ((char *)v7 - (char *)v5);
    v16 = v9 ^ ((v15 * (unsigned __int128)0x7010008004002001uLL) >> 64);
    LOBYTE(v9) = 1;
    v17 = ((unsigned __int8)v15 ^ v16) & 0x3F;
    if ( v17 )
      LOBYTE(v9) = v17;
  }
  v18 = v6 & 0x7F;
  if ( v18 >= 8 )
  {
    v19 = (unsigned __int64)v18 >> 3;
    do
    {
      i = __ROL8__(*v7++ ^ i, v9);
      v18 -= 8;
      --v19;
    }
    while ( v19 );
  }
  for ( ; v18; --v18 )
  {
    v20 = *(unsigned __int8 *)v7;
    v7 = (_QWORD *)((char *)v7 + 1);
    i = __ROL8__(v20 ^ i, v9);
  }
  for ( j = i; ; LODWORD(i) = j ^ i )
  {
    j >>= 31;
    if ( !j )
      break;
  }
  v21 = i & 0x7FFFFFFF;
  v22 = 2LL;
  v23 = 0;
  v24 = 0xA3A03F5891C8B4E8uLL;
  if ( v21 != a2[5] )
  {
    if ( !*a2 )
      v23 = a2[6] != 0;
    v25 = (unsigned int)a2[4];
    v26 = *((_QWORD *)a2 + 1);
    if ( a2[4] && (*(_DWORD *)(a1 + 2524) & 0x40) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v27 = v26 & 0xFFFFFFFFFFFFF000uLL;
      v28 = (v26 + v25 - 1) | 0xFFF;
      v29 = (v26 & 0xFFFFFFFFFFFFF000uLL) - 1;
      while ( 1 )
      {
        while ( 1 )
        {
          v30 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(a1 + 1128))(
                  v27,
                  0LL,
                  v22,
                  v24);
          if ( v30 == -1073741267 )
            break;
          if ( v30 < 0 )
          {
LABEL_31:
            __writecr8(CurrentIrql);
            goto LABEL_32;
          }
LABEL_29:
          LOBYTE(j) = 0;
          v27 += 4096LL;
          v29 += 4096LL;
          if ( v29 == v28 )
          {
            __writecr8(CurrentIrql);
            goto LABEL_45;
          }
        }
        if ( v23 )
          goto LABEL_31;
        if ( CurrentIrql > 1u )
          goto LABEL_29;
        __writecr8(CurrentIrql);
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
    }
LABEL_32:
    LODWORD(j) = a2[5];
    if ( !*(_DWORD *)(a1 + 2328) )
    {
      v31 = v21 ^ (unsigned __int64)(unsigned int)j;
      j = *(_QWORD *)(a1 + 1416);
      *(_QWORD *)(j + 24) = v31;
    }
    v32 = *((_QWORD *)a2 + 1);
    if ( !*(_DWORD *)(a1 + 2328) )
    {
      *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(a1 + 2344) = (char *)a2 - 0x4C48B4211BBACBEBLL;
      j = *a2;
      *(_QWORD *)(a1 + 2352) = j;
      *(_QWORD *)(a1 + 2360) = v32;
      v33 = *(_DWORD *)(a1 + 2520);
      *(_DWORD *)(a1 + 2328) = 1;
      if ( (v33 & 0x20000000) == 0 && (*(_DWORD *)(a1 + 2524) & 0x200000) != 0 && (v33 & 1) != 0 )
      {
        v34 = *(unsigned int *)(a1 + 2676);
        v35 = *(_QWORD *)(a1 + 2104);
        LODWORD(j) = *(_DWORD *)(a1 + 2052) - v34;
        v36 = *(_QWORD *)(a1 + 2680);
        v37 = (_QWORD *)(v34 + a1);
        v38 = v34 + a1 + 8 * ((unsigned __int64)(unsigned int)j >> 3);
        while ( v37 != (_QWORD *)v38 )
        {
          *v37 ^= v36;
          j = v35 ^ *v37;
          v36 = (j + __ROR8__(v36, v36 & 0x3F)) ^ 0xF05;
          ++v37;
        }
        *(_DWORD *)(a1 + 2524) &= ~0x200000u;
        if ( v36 != *(_QWORD *)(a1 + 2688) )
        {
          v39 = *(_DWORD *)(a1 + 2052);
          v40 = *(_QWORD *)(a1 + 1416);
          *(_QWORD *)v40 = a1;
          *(_DWORD *)(v40 + 16) = v39;
          if ( !*(_DWORD *)(a1 + 2328) )
            *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v36 ^ *(_QWORD *)(a1 + 2688);
          LOBYTE(j) = sub_140C7F03C(a1, 0LL, v36, 256LL);
        }
      }
    }
  }
LABEL_45:
  v41 = (unsigned int)a2[4];
  if ( !(_DWORD)v41 )
    return j;
  sub_140553D6C(a1, *((_QWORD *)a2 + 1), v41, (__int64)v63);
  v42 = 16;
  v43 = a2 + 6;
  v44 = v63;
  while ( 1 )
  {
    v45 = *(_QWORD *)v44;
    v44 += 8;
    j = *(_QWORD *)v43;
    v43 += 8;
    if ( v45 != j )
      break;
    v42 -= 8;
    if ( v42 < 8 )
    {
      if ( !v42 )
        goto LABEL_74;
      while ( 1 )
      {
        v46 = *v44++;
        LOBYTE(j) = *v43++;
        if ( v46 != (_BYTE)j )
          goto LABEL_53;
        if ( !--v42 )
          goto LABEL_74;
      }
    }
  }
LABEL_53:
  LODWORD(j) = *(_DWORD *)(a1 + 2524);
  v47 = a2[10] & 1;
  v48 = *((_QWORD *)a2 + 1);
  if ( (j & 0x40) == 0 )
    goto LABEL_63;
  v65 = KeGetCurrentIrql();
  v49 = 2LL;
  __writecr8(2uLL);
  v50 = v48 & 0xFFFFFFFFFFFFF000uLL;
  v51 = (v41 + v48 - 1) | 0xFFF;
  v52 = (v48 & 0xFFFFFFFFFFFFF000uLL) - 1;
  while ( 1 )
  {
    LODWORD(j) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, char *))(a1 + 1128))(v50, 0LL, v49, v44);
    if ( (_DWORD)j != -1073741267 )
      break;
    if ( v47 )
      goto LABEL_62;
    if ( v65 > 1u )
    {
LABEL_60:
      LOBYTE(j) = 0;
      v50 += 4096LL;
      v52 += 4096LL;
      if ( v52 == v51 )
      {
        __writecr8(v65);
        goto LABEL_74;
      }
    }
    else
    {
      __writecr8(v65);
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
  }
  if ( (j & 0x80000000) == 0LL )
    goto LABEL_60;
LABEL_62:
  __writecr8(v65);
LABEL_63:
  v53 = *((_QWORD *)a2 + 1);
  if ( !*(_DWORD *)(a1 + 2328) )
  {
    *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a1 + 2344) = (char *)a2 - 0x4C48B4211BBACBEBLL;
    j = *a2;
    *(_QWORD *)(a1 + 2352) = j;
    *(_QWORD *)(a1 + 2360) = v53;
    v54 = *(_DWORD *)(a1 + 2520);
    *(_DWORD *)(a1 + 2328) = 1;
    if ( (v54 & 0x20000000) == 0 && (*(_DWORD *)(a1 + 2524) & 0x200000) != 0 && (v54 & 1) != 0 )
    {
      v55 = *(unsigned int *)(a1 + 2676);
      v56 = *(_QWORD *)(a1 + 2104);
      LODWORD(j) = *(_DWORD *)(a1 + 2052) - v55;
      v57 = *(_QWORD *)(a1 + 2680);
      v58 = (_QWORD *)(v55 + a1);
      v59 = v55 + a1 + 8 * ((unsigned __int64)(unsigned int)j >> 3);
      while ( v58 != (_QWORD *)v59 )
      {
        *v58 ^= v57;
        j = v56 ^ *v58;
        v57 = (j + __ROR8__(v57, v57 & 0x3F)) ^ 0xF05;
        ++v58;
      }
      *(_DWORD *)(a1 + 2524) &= ~0x200000u;
      if ( v57 != *(_QWORD *)(a1 + 2688) )
      {
        v60 = *(_DWORD *)(a1 + 2052);
        v61 = *(_QWORD *)(a1 + 1416);
        *(_QWORD *)v61 = a1;
        *(_DWORD *)(v61 + 16) = v60;
        if ( !*(_DWORD *)(a1 + 2328) )
          *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v57 ^ *(_QWORD *)(a1 + 2688);
        LOBYTE(j) = sub_140C7F03C(a1, 0LL, v57, 256LL);
      }
    }
  }
LABEL_74:
  *(_DWORD *)(a1 + 2120) += 16 * v41;
  return j;
}
