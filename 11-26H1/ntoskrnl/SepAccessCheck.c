/*
 * XREFs of SepAccessCheck @ 0x1405196A0
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepSinglePrivilegeCheck @ 0x1403AB750 (SepSinglePrivilegeCheck.c)
 *     SepMaximumAccessCheck @ 0x14051A140 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14051BF40 (SepNormalAccessCheck.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1406185E0 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepAssemblePrivileges @ 0x140A9B378 (SepAssemblePrivileges.c)
 */

__int64 __fastcall SepAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int128 *a6,
        unsigned int a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        void *a11,
        _QWORD *a12,
        int *a13,
        char a14,
        char a15,
        __int64 a16,
        __int64 a17,
        char *a18,
        char *a19)
{
  unsigned int v19; // esi
  __int64 v20; // r12
  int v22; // r14d
  unsigned int v23; // r9d
  unsigned int v24; // ebx
  unsigned __int64 LowPart; // r10
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // ebx
  unsigned int v31; // ebp
  unsigned __int16 v32; // dx
  __int64 v33; // rcx
  __int64 v34; // r10
  __int64 v35; // rax
  __int64 v36; // r11
  __int64 v37; // rax
  int v38; // ecx
  _QWORD *v39; // rdi
  unsigned int *v40; // r10
  __int64 v41; // rax
  unsigned int v42; // eax
  int *v43; // rdi
  unsigned __int64 i; // rcx
  unsigned int *v45; // rdi
  unsigned __int64 j; // rcx
  unsigned int *v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int v52; // edx
  int v53; // ebx
  int v54; // ecx
  _DWORD *v55; // rax
  int v56; // eax
  int v57; // ecx
  int v58; // r14d
  int v59; // eax
  int v60; // edx
  char v61; // r12
  char v62; // r14
  int v63; // r10d
  unsigned int v64; // r8d
  _DWORD *v65; // rdx
  unsigned int v66; // r13d
  int *v67; // rcx
  __int64 v68; // rdi
  char *v69; // r9
  bool v70; // zf
  int v71; // eax
  _QWORD *v72; // rdi
  unsigned __int8 v73; // cl
  unsigned int v74; // edx
  char *v75; // r9
  __int64 v76; // rax
  unsigned int v77; // eax
  unsigned int v78; // ebp
  int *v79; // rdi
  unsigned __int64 k; // rcx
  char *v81; // rcx
  __int64 v82; // rax
  int v84; // eax
  int v85; // eax
  signed __int32 v86[8]; // [rsp+0h] [rbp-158h] BYREF
  unsigned __int8 v87; // [rsp+70h] [rbp-E8h]
  unsigned __int8 v88; // [rsp+71h] [rbp-E7h]
  unsigned __int8 v89; // [rsp+72h] [rbp-E6h]
  unsigned __int8 v90; // [rsp+73h] [rbp-E5h]
  int v91; // [rsp+74h] [rbp-E4h]
  unsigned int v92; // [rsp+78h] [rbp-E0h]
  __int64 v93; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v94; // [rsp+88h] [rbp-D0h] BYREF
  void *v95; // [rsp+90h] [rbp-C8h]
  _DWORD *v96; // [rsp+98h] [rbp-C0h]
  __int64 v97; // [rsp+A0h] [rbp-B8h]
  __int64 v98; // [rsp+A8h] [rbp-B0h]
  __int64 v99; // [rsp+B0h] [rbp-A8h]
  __int16 v100; // [rsp+B8h] [rbp-A0h]
  char *v101; // [rsp+C0h] [rbp-98h]
  char *v102; // [rsp+C8h] [rbp-90h]
  _QWORD *v103; // [rsp+D0h] [rbp-88h]
  __int128 v104; // [rsp+D8h] [rbp-80h] BYREF
  __int128 v105; // [rsp+E8h] [rbp-70h]
  __int128 v106; // [rsp+F8h] [rbp-60h]

  v19 = 0;
  v20 = a4;
  v95 = a11;
  v22 = 1;
  v96 = a8;
  if ( !a4 )
    v20 = a3;
  v23 = a5;
  v24 = a5;
  v103 = a12;
  v99 = a3;
  v98 = a17;
  v102 = a19;
  v97 = a2;
  v101 = a18;
  v87 = 1;
  v91 = 0;
  v90 = 0;
  v89 = 0;
  v88 = 0;
  v92 = 1;
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  if ( (a5 & 0x1000000) != 0 )
  {
    LowPart = SeSecurityPrivilege.LowPart;
    v93 = 0LL;
    v94 = 0LL;
    if ( a10 )
    {
      v27 = *(_QWORD *)(v20 + 72);
      _InterlockedExchange64(&v94, *(_QWORD *)(v20 + 64));
      v28 = v94;
      _InterlockedExchange64(&v93, v27);
      v29 = v93 & v28;
      _InterlockedOr(v86, 0);
      if ( !_bittest64(&v29, LowPart) )
      {
        v30 = -1073741727;
LABEL_44:
        v31 = 0;
        goto LABEL_45;
      }
    }
    v31 = a9 | 0x1000000;
    v91 = 1;
    v90 = 1;
    v24 = a5 & 0xFEFFFFFF;
    if ( (a5 & 0xFEFFFFFF) == 0 )
    {
LABEL_171:
      v30 = 0;
      if ( !v31 )
      {
        v30 = -1073741790;
        goto LABEL_45;
      }
LABEL_39:
      if ( KeGetCurrentIrql() < 2u )
      {
        if ( v91 )
        {
          v39 = v103;
          SepAssemblePrivileges(v91, v90, v89, v88, (__int64)v103);
          if ( v39 )
          {
            if ( !*v39 )
            {
              v87 = 0;
              v30 = -1073741801;
              goto LABEL_44;
            }
          }
        }
      }
LABEL_45:
      if ( a14 )
      {
        if ( a7 )
        {
          v40 = (unsigned int *)v95;
          if ( a7 < 4 )
            goto LABEL_59;
          v41 = a7 - 1;
          if ( v95 <= &a13[v41] && (char *)v95 + 4 * v41 >= (char *)a13 )
            goto LABEL_59;
          v42 = a7 & 0xFFFFFFFC;
          do
            v19 += 4;
          while ( v19 < v42 );
          v43 = a13;
          for ( i = (4 * (unsigned __int64)v42) >> 2; i; --i )
            *v43++ = v30;
          v45 = v40;
          for ( j = (4 * (unsigned __int64)v42) >> 2; j; --j )
            *v45++ = v31;
          if ( v19 < a7 )
          {
LABEL_59:
            v47 = &v40[v19];
            v48 = a7 - v19;
            do
            {
              *(unsigned int *)((char *)v47 + (char *)a13 - (char *)v40) = v30;
              *v47++ = v31;
              --v48;
            }
            while ( v48 );
          }
        }
        goto LABEL_97;
      }
LABEL_96:
      v55 = v95;
      *a13 = v30;
      *v55 = v31;
LABEL_97:
      if ( v30 < 0 )
      {
        if ( v101 )
          *v101 = 0;
        if ( v102 )
          *v102 = 1;
      }
      else
      {
        if ( v101 )
          *v101 = 1;
        if ( v102 )
          *v102 = 0;
      }
      return v87;
    }
  }
  else
  {
    v31 = a9;
  }
  v32 = *(_WORD *)(a1 + 2);
  v33 = v32;
  LOWORD(v33) = v32 & 0x8000;
  v100 = v32 & 4;
  if ( (v32 & 4) != 0 )
  {
    if ( (_WORD)v33 )
    {
      v35 = *(unsigned int *)(a1 + 16);
      v34 = 0LL;
      if ( (_DWORD)v35 )
        v34 = a1 + v35;
    }
    else
    {
      v34 = *(_QWORD *)(a1 + 32);
      v33 = 0LL;
    }
    v94 = v34;
  }
  else
  {
    v34 = 0LL;
    v94 = 0LL;
  }
  if ( (v32 & 0x10) != 0 )
  {
    if ( (_WORD)v33 )
    {
      v37 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v37 )
        v36 = a1 + v37;
      else
        v36 = 0LL;
    }
    else
    {
      v36 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v36 = 0LL;
  }
  v93 = v36;
  if ( !v100 || !v34 )
  {
    v31 |= a5;
    if ( (a5 & 0x2000000) != 0 )
    {
      v31 = v96[3] | v31 & 0xFDFFFFFF;
      v84 = *(_DWORD *)(v20 + 200);
      if ( (v84 & 0x4000) == 0 )
        goto LABEL_171;
      if ( (v84 & 0x3000000) != 0x3000000 )
      {
LABEL_166:
        *(_BYTE *)(a16 + 21) = 0;
        *(_DWORD *)(a16 + 4) = 0;
        goto LABEL_167;
      }
    }
    else
    {
      v85 = *(_DWORD *)(v20 + 200);
      if ( (v85 & 0x4000) == 0 )
        goto LABEL_171;
      if ( (v85 & 0x3000000) != 0x3000000 )
        goto LABEL_166;
    }
    *(_DWORD *)a16 = 0;
    *(_BYTE *)(a16 + 21) = 1;
    *(_DWORD *)(a16 + 4) = v31;
    *(_BYTE *)(a16 + 23) = 1;
    goto LABEL_171;
  }
  if ( (v24 & 0x80000) != 0 )
  {
    if ( SepSinglePrivilegeCheck(SeTakeOwnershipPrivilege, v20, a10) )
    {
      ++v91;
      v31 |= 0x80000u;
      v89 = 1;
      v24 &= ~0x80000u;
      if ( !v24 )
        goto LABEL_171;
    }
    else if ( SepSinglePrivilegeCheck(SeRelabelPrivilege, v20, a10) )
    {
      ++v91;
      v31 |= 0x80000u;
      v88 = 1;
      v24 &= ~0x80000u;
      if ( !v24 )
        goto LABEL_171;
    }
    v23 = a5;
  }
  if ( !*(_WORD *)(v34 + 4) )
  {
    *(_DWORD *)(a16 + 12) = v24;
    Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v33);
    v38 = *(_DWORD *)(v20 + 200);
    if ( (v38 & 0x4000) != 0 )
      v31 &= ~*(_DWORD *)a16;
    if ( v24 == 0x2000000 )
    {
      if ( v31 )
      {
LABEL_38:
        v30 = 0;
        goto LABEL_39;
      }
    }
    else if ( !v24 && *(_DWORD *)a16 && v31 && (v38 & 0x6000) == 0 )
    {
      goto LABEL_38;
    }
LABEL_167:
    v30 = -1073741790;
    goto LABEL_44;
  }
  if ( a7 )
  {
    v22 = a7;
    v92 = a7;
  }
  else
  {
    v105 = 0LL;
    DWORD1(v105) = -1;
    a6 = &v104;
    v104 = 0LL;
    v106 = 0LL;
  }
  if ( (v23 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(v24, v20, v99, v34, v36, v98, v97, v22, (__int64)a6, a7, 0, a15, a16);
    *(_DWORD *)(a16 + 12) = *((_DWORD *)a6 + 6);
    if ( *((_DWORD *)a6 + 6) )
      goto LABEL_95;
    v49 = *(_DWORD *)(v20 + 200);
    if ( (v49 & 0x10) != 0 )
    {
      v50 = (v49 & 8) != 0 ? v96[1] & ~(*v96 | v96[2]) | 0x10D0000 : v96[3] | 0x1FFFFF;
      if ( (v50 & a5) != 0 )
        SepNormalAccessCheck(v24 & v50, v20, v99, v94, v93, v98, v97, v22, (__int64)a6, a7, 1, a15, a16);
    }
    *(_DWORD *)(a16 + 12) = *((_DWORD *)a6 + 6);
    if ( *((_DWORD *)a6 + 6) )
      goto LABEL_95;
    v51 = ((__int64 (*)(void))Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline)();
    v52 = *(_DWORD *)(v20 + 200);
    if ( v51 )
    {
      if ( (*(_DWORD *)(v20 + 200) & 0x6000) == 0x2000 )
        goto LABEL_85;
      v53 = a5 | v24;
      if ( (v52 & 0x4000) == 0 )
      {
        if ( !*(_BYTE *)(a16 + 20) )
          goto LABEL_84;
LABEL_93:
        v54 = (*(_DWORD *)a16 | v53) & ~*(_DWORD *)(a16 + 4);
        goto LABEL_94;
      }
    }
    else
    {
      if ( (v52 & 0x2000) != 0 )
      {
LABEL_85:
        v31 |= a5;
        goto LABEL_171;
      }
      v53 = a5 | v24;
      if ( (v52 & 0x4000) == 0 )
      {
        if ( !*(_BYTE *)(a16 + 20) )
        {
LABEL_84:
          *((_DWORD *)a6 + 6) = 0;
          goto LABEL_85;
        }
        goto LABEL_93;
      }
    }
    v54 = (*(_DWORD *)a16 | v53) & ~(*(_DWORD *)(a16 + 4) | *(_DWORD *)(a16 + 8));
    if ( v54 && !*(_DWORD *)(a16 + 12) && (v52 & 0x3000000) == 0x3000000 )
    {
      *(_BYTE *)(a16 + 23) = 1;
      v54 = 0;
    }
LABEL_94:
    *((_DWORD *)a6 + 6) = v54;
    if ( !v54 )
      goto LABEL_85;
LABEL_95:
    v30 = -1073741790;
    v31 = 0;
    goto LABEL_96;
  }
  SepMaximumAccessCheck(v20, v99, v34, v36, v98, v97, v22, (__int64)a6, a7, 0, 0, a15, a16);
  v56 = *(_DWORD *)(v20 + 200);
  if ( (v56 & 0x10) != 0 )
  {
    if ( (v56 & 8) != 0 )
      v57 = v96[1] & ~(*v96 | v96[2]) | 0x10D0000;
    else
      v57 = v96[3] | 0x1FFFFF;
    SepMaximumAccessCheck(v20, v99, v94, v93, v98, v97, v22, (__int64)a6, a7, v57, 1, a15, a16);
  }
  v58 = *((_DWORD *)a6 + 7);
  v59 = ((__int64 (*)(void))Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline)();
  v60 = *(_DWORD *)(v20 + 200);
  if ( v59 )
  {
    if ( (v60 & 0x4000) != 0 )
      goto LABEL_112;
    if ( (v60 & 0x2000) != 0 )
      goto LABEL_121;
  }
  else
  {
    if ( (v60 & 0x2000) != 0 )
      goto LABEL_121;
    if ( (v60 & 0x4000) != 0 )
    {
LABEL_112:
      v58 &= *(_DWORD *)(a16 + 4) | *(_DWORD *)(a16 + 8);
      if ( v58 != *((_DWORD *)a6 + 7) && (v60 & 0x3000000) == 0x3000000 && (!v58 || (a5 & 0x2000000) == 0) )
      {
        *(_BYTE *)(a16 + 23) = 1;
        v58 = *((_DWORD *)a6 + 7);
        goto LABEL_121;
      }
      goto LABEL_120;
    }
  }
  if ( !*(_BYTE *)(a16 + 20) )
    goto LABEL_121;
  v58 &= *(_DWORD *)(a16 + 4);
LABEL_120:
  v31 &= ~*(_DWORD *)a16;
LABEL_121:
  if ( !a14 )
  {
    if ( (~(v58 | 0x2000000) & v24) == 0 )
    {
      v31 |= v58;
      goto LABEL_171;
    }
    goto LABEL_95;
  }
  v61 = 0;
  v62 = 0;
  v63 = v31 | a5;
  if ( (a5 & 0x2000000) != 0 )
    v63 = -33554433;
  v64 = (v31 | a5) & 0xFDFFFFFF;
  if ( (a5 & 0x2000000) == 0 )
    v64 = v31 | a5;
  if ( v92 )
  {
    v65 = (_DWORD *)a6 + 7;
    v66 = v92;
    v67 = a13;
    v68 = v92;
    v69 = (char *)((_BYTE *)v95 - (_BYTE *)a13);
    do
    {
      v70 = (v63 & (*v65 | v31)) == 0;
      v71 = v63 & (*v65 | v31);
      *(_DWORD *)&v69[(_QWORD)v67] = v71;
      if ( v70 )
      {
        *v67 = -1073741790;
        v62 = 1;
      }
      else if ( (~v71 & v64) != 0 )
      {
        *v67 = -1073741790;
        v62 = 1;
      }
      else
      {
        *v67 = 0;
        v61 = 1;
      }
      v65 += 12;
      ++v67;
      --v68;
    }
    while ( v68 );
  }
  else
  {
    v66 = 0;
  }
  if ( KeGetCurrentIrql() >= 2u
    || !v61
    || !v91
    || (v72 = v103, SepAssemblePrivileges(v91, v90, v89, v88, (__int64)v103), !v72)
    || *v72 )
  {
    v73 = 1;
    goto LABEL_156;
  }
  v73 = 0;
  v61 = 0;
  v62 = 1;
  v74 = 0;
  if ( v66 )
  {
    v75 = (char *)v95;
    if ( v66 >= 4 )
    {
      v76 = v66 - 1;
      if ( v95 > &a13[v76] || (char *)v95 + 4 * v76 < (char *)a13 )
      {
        v77 = v66 & 0xFFFFFFFC;
        do
        {
          v74 += 4;
          v78 = v74;
        }
        while ( v74 < v77 );
        v79 = a13;
        for ( k = (4 * (unsigned __int64)v77) >> 2; k; --k )
          *v79++ = -1073741801;
        memset_0(v75, 0, 4LL * v77);
        v74 = v78;
        if ( v78 >= v66 )
          goto LABEL_154;
        v75 = (char *)v95;
      }
    }
    v81 = &v75[4 * v74];
    v82 = v66 - v74;
    do
    {
      *(_DWORD *)&v81[(char *)a13 - v75] = -1073741801;
      *(_DWORD *)v81 = 0;
      v81 += 4;
      --v82;
    }
    while ( v82 );
LABEL_154:
    v73 = 0;
  }
LABEL_156:
  if ( v101 )
    *v101 = v61;
  if ( v102 )
    *v102 = v62;
  return v73;
}
