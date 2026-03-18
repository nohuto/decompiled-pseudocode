/*
 * XREFs of SepAccessCheck @ 0x1402B00F0
 * Callers:
 *     SeAccessCheckByType @ 0x1402AAD98 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepNormalAccessCheck @ 0x1402B0BC0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1402B1890 (SepMaximumAccessCheck.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SepAssemblePrivileges @ 0x140A971F8 (SepAssemblePrivileges.c)
 */

__int64 __fastcall SepAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int128 *a6,
        unsigned int a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        unsigned int *a11,
        _QWORD *a12,
        int *a13,
        char a14,
        char a15,
        __int64 a16,
        __int64 a17,
        char *a18,
        char *a19)
{
  __int64 v20; // r11
  unsigned __int8 v22; // r13
  unsigned int v23; // esi
  __int16 v24; // cx
  __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r8
  int v29; // eax
  int v30; // edi
  __int64 v31; // r9
  __int64 v32; // r10
  int v33; // eax
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  int v37; // ebx
  unsigned int v38; // edi
  int v40; // eax
  bool v41; // zf
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r10
  int v45; // eax
  int v46; // edi
  int v47; // edx
  int v48; // ecx
  int v49; // edi
  unsigned __int64 LowPart; // r8
  __int64 v51; // rdx
  unsigned __int64 v52; // rdi
  __int64 v53; // rdx
  int v54; // ecx
  int v55; // r8d
  int v56; // edi
  _QWORD *v57; // r14
  int v58; // ecx
  _DWORD *v59; // rdx
  int v60; // ecx
  __int64 v61; // r8
  char v62; // r15
  char v63; // r12
  int v64; // r9d
  unsigned int v65; // edx
  int *v66; // rcx
  _DWORD *v67; // r14
  char *v68; // rdi
  int v69; // eax
  _QWORD *v70; // r14
  unsigned int v71; // r8d
  unsigned int v72; // edx
  char *v73; // r9
  char *v74; // r14
  __int64 v75; // rax
  unsigned int v76; // eax
  unsigned int v77; // esi
  int *v78; // rdi
  unsigned __int64 k; // rcx
  __int64 v80; // r14
  char *v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned int v84; // eax
  unsigned int v85; // r8d
  int *v86; // rdi
  unsigned __int64 i; // rcx
  unsigned int *v88; // rdi
  unsigned __int64 j; // rcx
  unsigned int *v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  unsigned __int64 v93; // rdi
  __int64 v94; // rdx
  unsigned __int8 v95; // cf
  signed __int32 v96[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 v97; // [rsp+70h] [rbp-90h]
  unsigned __int8 v98; // [rsp+71h] [rbp-8Fh]
  unsigned __int8 v99; // [rsp+72h] [rbp-8Eh]
  int v100; // [rsp+74h] [rbp-8Ch]
  unsigned int v101; // [rsp+78h] [rbp-88h]
  __int64 v102; // [rsp+80h] [rbp-80h] BYREF
  __int64 v103; // [rsp+88h] [rbp-78h]
  __int64 v104; // [rsp+90h] [rbp-70h] BYREF
  __int64 v105; // [rsp+98h] [rbp-68h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v107; // [rsp+A8h] [rbp-58h]
  __int64 v108; // [rsp+B0h] [rbp-50h]
  __int64 v109; // [rsp+B8h] [rbp-48h]
  __int64 v110; // [rsp+C0h] [rbp-40h]
  __int64 v111; // [rsp+C8h] [rbp-38h]
  void *v112; // [rsp+D0h] [rbp-30h]
  int *v113; // [rsp+D8h] [rbp-28h]
  char *v114; // [rsp+E0h] [rbp-20h]
  char *v115; // [rsp+E8h] [rbp-18h]
  _QWORD *v116; // [rsp+F0h] [rbp-10h]
  __int128 v117; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v118; // [rsp+108h] [rbp+8h]
  __int128 v119; // [rsp+118h] [rbp+18h]

  v20 = a4;
  if ( !a4 )
    v20 = a3;
  v107 = a8;
  v103 = a16;
  v22 = 1;
  v116 = a12;
  v109 = a17;
  v114 = a18;
  v115 = a19;
  v110 = a3;
  v108 = a2;
  v112 = a11;
  v113 = a13;
  v100 = 0;
  v99 = 0;
  v98 = 0;
  v97 = 0;
  v111 = v20;
  LODWORD(v102) = a5;
  v101 = 1;
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  if ( (a5 & 0x1000000) != 0 )
  {
    LowPart = SeSecurityPrivilege.LowPart;
    v102 = 0LL;
    v104 = 0LL;
    if ( a10 )
    {
      _InterlockedExchange64(&v102, *(_QWORD *)(v20 + 72));
      _InterlockedExchange64(&v104, *(_QWORD *)(v20 + 64));
      v51 = v102 & v104;
      _InterlockedOr(v96, 0);
      if ( !_bittest64(&v51, LowPart) )
      {
        v23 = 0;
        v37 = -1073741727;
        goto LABEL_31;
      }
    }
    v100 = 1;
    v23 = a9 | 0x1000000;
    LODWORD(v102) = a5 & 0xFEFFFFFF;
    v99 = 1;
    if ( (a5 & 0xFEFFFFFF) == 0 )
      goto LABEL_26;
  }
  else
  {
    v23 = a9;
  }
  v24 = *(_WORD *)(a1 + 2);
  v25 = v24 & 4;
  if ( (v24 & 4) != 0 )
  {
    if ( v24 >= 0 )
    {
      v27 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v26 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v26 )
        v27 = a1 + v26;
      else
        v27 = 0LL;
    }
  }
  else
  {
    v27 = 0LL;
  }
  if ( (v24 & 0x10) != 0 )
  {
    if ( v24 >= 0 )
    {
      v28 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v43 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v43 )
        v28 = a1 + v43;
      else
        v28 = 0LL;
    }
  }
  else
  {
    v28 = 0LL;
  }
  v104 = v28;
  if ( !v25 || !v27 )
  {
    v40 = *(_DWORD *)(v20 + 200);
    v23 |= a5;
    if ( (a5 & 0x2000000) != 0 )
    {
      v23 = v107[3] | v23 & 0xFDFFFFFF;
      if ( (v40 & 0x4000) == 0 )
        goto LABEL_26;
      v41 = (v40 & 0x3000000) == 50331648;
      v42 = v103;
      if ( !v41 )
        goto LABEL_43;
    }
    else
    {
      if ( (v40 & 0x4000) == 0 )
        goto LABEL_26;
      v41 = (v40 & 0x3000000) == 50331648;
      v42 = v103;
      if ( !v41 )
      {
LABEL_43:
        v23 = 0;
        *(_DWORD *)(v42 + 4) = 0;
        *(_BYTE *)(v42 + 21) = 0;
        goto LABEL_44;
      }
    }
    *(_DWORD *)v42 = 0;
    *(_BYTE *)(v42 + 21) = 1;
    *(_DWORD *)(v42 + 4) = v23;
    *(_BYTE *)(v42 + 23) = 1;
    goto LABEL_26;
  }
  v29 = v102;
  if ( (v102 & 0x80000) == 0 )
  {
    v30 = v100;
    goto LABEL_15;
  }
  v52 = (unsigned int)SeTakeOwnershipPrivilege;
  v106 = 0LL;
  v105 = 0LL;
  if ( a10 )
  {
    _InterlockedExchange64(&v106, *(_QWORD *)(v20 + 72));
    _InterlockedExchange64(&v105, *(_QWORD *)(v20 + 64));
    v53 = v106 & v105;
    _InterlockedOr(v96, 0);
    if ( !_bittest64(&v53, v52) )
    {
      v92 = *(_QWORD *)(v20 + 72);
      v93 = (unsigned int)SeRelabelPrivilege;
      v105 = 0LL;
      v106 = 0LL;
      _InterlockedExchange64(&v105, v92);
      _InterlockedExchange64(&v106, *(_QWORD *)(v20 + 64));
      v94 = v105 & v106;
      _InterlockedOr(v96, 0);
      v29 = v102;
      v95 = _bittest64(&v94, v93);
      v30 = v100;
      if ( v95 )
      {
        v29 = v102 & 0xFFF7FFFF;
        v97 = 1;
        v30 = v100 + 1;
        LODWORD(v102) = v29;
        v23 |= 0x80000u;
        ++v100;
        if ( !v29 )
          goto LABEL_27;
      }
      goto LABEL_15;
    }
    v29 = v102;
  }
  v29 &= ~0x80000u;
  v30 = v100 + 1;
  LODWORD(v102) = v29;
  v23 |= 0x80000u;
  ++v100;
  v98 = 1;
  if ( !v29 )
    goto LABEL_27;
LABEL_15:
  if ( !*(_WORD *)(v27 + 4) )
  {
    v59 = (_DWORD *)v103;
    *(_DWORD *)(v103 + 12) = v29;
    v60 = *(_DWORD *)(v20 + 200);
    if ( (v60 & 0x4000) != 0 )
    {
      v23 &= ~*v59;
      v29 = v102;
    }
    if ( v29 == 0x2000000 )
    {
      if ( v23 )
      {
LABEL_101:
        v37 = 0;
        goto LABEL_29;
      }
    }
    else if ( !v29 && *v59 && v23 && (v60 & 0x6000) == 0 )
    {
      goto LABEL_101;
    }
    v23 = 0;
    v37 = -1073741790;
    goto LABEL_31;
  }
  if ( a7 )
  {
    v101 = a7;
  }
  else
  {
    v118 = 0LL;
    DWORD1(v118) = -1;
    a6 = &v117;
    v117 = 0LL;
    v119 = 0LL;
  }
  if ( (a5 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(v29, v20, v110, v27, v28, v109, v108, v101, (__int64)a6, a7, 0, a15, v103);
    v31 = v103;
    *(_DWORD *)(v103 + 12) = *((_DWORD *)a6 + 6);
    if ( *((_DWORD *)a6 + 6) )
      goto LABEL_48;
    v32 = v111;
    v33 = *(_DWORD *)(v111 + 200);
    if ( (v33 & 0x10) != 0 )
    {
      if ( (v33 & 8) != 0 )
        v54 = v107[1] & ~(*v107 | v107[2]) | 0x10D0000;
      else
        v54 = v107[3] | 0x1FFFFF;
      v34 = a5;
      if ( (v54 & a5) == 0 )
      {
LABEL_23:
        v35 = *((_DWORD *)a6 + 6);
        *(_DWORD *)(v31 + 12) = v35;
        if ( !*((_DWORD *)a6 + 6) )
        {
          v36 = *(_DWORD *)(v32 + 200);
          if ( (v36 & 0x2000) != 0 )
          {
LABEL_25:
            v23 |= v34;
LABEL_26:
            v30 = v100;
LABEL_27:
            v37 = 0;
            goto LABEL_28;
          }
          v55 = v34 | v102;
          if ( (v36 & 0x4000) != 0 )
          {
            v34 = a5;
            v56 = (*(_DWORD *)v31 | v55) & ~(*(_DWORD *)(v31 + 4) | *(_DWORD *)(v31 + 8));
            if ( v56 && !v35 && (v36 & 0x3000000) == 0x3000000 )
            {
              *(_BYTE *)(v31 + 23) = 1;
              v56 = 0;
            }
          }
          else
          {
            if ( !*(_BYTE *)(v31 + 20) )
            {
              *((_DWORD *)a6 + 6) = 0;
              goto LABEL_25;
            }
            v56 = (*(_DWORD *)v31 | v55) & ~*(_DWORD *)(v31 + 4);
          }
          *((_DWORD *)a6 + 6) = v56;
          if ( v56 )
          {
            v23 = 0;
            v37 = -1073741790;
            goto LABEL_33;
          }
          goto LABEL_25;
        }
LABEL_48:
        v23 = 0;
        v37 = -1073741790;
        goto LABEL_33;
      }
      SepNormalAccessCheck(v102 & v54, v111, v110, v27, v104, v109, v108, v101, (__int64)a6, a7, 1, a15, v31);
      v32 = v111;
      v31 = v103;
    }
    v34 = a5;
    goto LABEL_23;
  }
  SepMaximumAccessCheck(v20, v110, v27, v28, v109, v108, v101, (__int64)a6, a7, 0, 0, a15, v103);
  v44 = v111;
  v45 = *(_DWORD *)(v111 + 200);
  if ( (v45 & 0x10) != 0 )
  {
    if ( (v45 & 8) != 0 )
      v58 = v107[1] & ~(*v107 | v107[2]) | 0x10D0000;
    else
      v58 = v107[3] | 0x1FFFFF;
    SepMaximumAccessCheck(v111, v110, v27, v104, v109, v108, v101, (__int64)a6, a7, v58, 1, a15, v103);
    v44 = v111;
  }
  v46 = *(_DWORD *)(v44 + 200);
  v47 = *((_DWORD *)a6 + 7);
  v48 = v47;
  if ( (v46 & 0x2000) != 0 )
  {
    v49 = a5;
    goto LABEL_57;
  }
  if ( (v46 & 0x4000) != 0 )
  {
    v48 = v47 & (*(_DWORD *)(v103 + 4) | *(_DWORD *)(v103 + 8));
    if ( v48 == v47 )
    {
      v49 = a5;
LABEL_89:
      v23 &= ~*(_DWORD *)v103;
      goto LABEL_57;
    }
    v41 = (v46 & 0x3000000) == 50331648;
    v49 = a5;
    if ( !v41 || v48 && (a5 & 0x2000000) != 0 )
      goto LABEL_89;
    *(_BYTE *)(v103 + 23) = 1;
    v48 = *((_DWORD *)a6 + 7);
  }
  else
  {
    v49 = a5;
    if ( *(_BYTE *)(v103 + 20) )
    {
      v48 = *(_DWORD *)(v103 + 4) & v47;
      v23 &= ~*(_DWORD *)v103;
    }
  }
LABEL_57:
  if ( !a14 )
  {
    if ( (~(v48 | 0x2000000) & (unsigned int)v102) == 0 )
    {
      v30 = v100;
      v23 |= v48;
      v37 = 0;
LABEL_28:
      if ( v23 )
      {
LABEL_29:
        if ( KeGetCurrentIrql() < 2u )
        {
          if ( v30 )
          {
            v57 = v116;
            SepAssemblePrivileges(v30, v99, v98, v97, (__int64)v116);
            if ( v57 )
            {
              if ( !*v57 )
              {
                v22 = 0;
                v37 = -1073741801;
                v38 = 0;
                v23 = 0;
LABEL_32:
                if ( a14 )
                {
                  if ( a7 )
                  {
                    if ( a7 < 4 )
                      goto LABEL_168;
                    v83 = a7 - 1;
                    if ( a11 <= (unsigned int *)&a13[v83] && &a11[v83] >= (unsigned int *)a13 )
                      goto LABEL_168;
                    v84 = a7 & 0xFFFFFFFC;
                    do
                    {
                      v38 += 4;
                      v85 = v38;
                    }
                    while ( v38 < v84 );
                    v86 = a13;
                    for ( i = (4 * (unsigned __int64)v84) >> 2; i; --i )
                      *v86++ = v37;
                    v88 = a11;
                    for ( j = (4 * (unsigned __int64)v84) >> 2; j; --j )
                      *v88++ = v23;
                    v38 = v85;
                    if ( v85 < a7 )
                    {
LABEL_168:
                      v90 = &a11[v38];
                      v91 = a7 - v38;
                      do
                      {
                        *(unsigned int *)((char *)v90 + (char *)a13 - (char *)a11) = v37;
                        *v90++ = v23;
                        --v91;
                      }
                      while ( v91 );
                    }
                  }
                  goto LABEL_34;
                }
LABEL_33:
                *a13 = v37;
                *a11 = v23;
LABEL_34:
                if ( v37 < 0 )
                {
                  if ( v114 )
                    *v114 = 0;
                  if ( v115 )
                    *v115 = 1;
                }
                else
                {
                  if ( v114 )
                    *v114 = 1;
                  if ( v115 )
                    *v115 = 0;
                }
                return v22;
              }
            }
          }
        }
LABEL_31:
        v38 = 0;
        goto LABEL_32;
      }
LABEL_44:
      v37 = -1073741790;
      goto LABEL_31;
    }
    goto LABEL_48;
  }
  v61 = v101;
  v62 = 0;
  v63 = 0;
  v64 = v23 | v49;
  if ( (v49 & 0x2000000) != 0 )
    v64 = -33554433;
  v65 = (v23 | v49) & 0xFDFFFFFF;
  if ( (v49 & 0x2000000) == 0 )
    v65 = v23 | v49;
  if ( v101 )
  {
    v66 = v113;
    v67 = (_DWORD *)a6 + 7;
    v68 = (char *)((_BYTE *)v112 - (_BYTE *)v113);
    do
    {
      v41 = (v64 & (*v67 | v23)) == 0;
      v69 = v64 & (*v67 | v23);
      *(_DWORD *)&v68[(_QWORD)v66] = v69;
      if ( v41 )
      {
        *v66 = -1073741790;
        v63 = 1;
      }
      else if ( (~v69 & v65) != 0 )
      {
        *v66 = -1073741790;
        v63 = 1;
      }
      else
      {
        *v66 = 0;
        v62 = 1;
      }
      v67 += 12;
      ++v66;
      --v61;
    }
    while ( v61 );
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( v62 )
    {
      if ( v100 )
      {
        v70 = v116;
        SepAssemblePrivileges(v100, v99, v98, v97, (__int64)v116);
        if ( v70 )
        {
          if ( !*v70 )
          {
            v71 = v101;
            v22 = 0;
            v62 = 0;
            v72 = 0;
            v63 = 1;
            if ( v101 )
            {
              v73 = (char *)v112;
              v74 = (char *)v113;
              if ( v101 >= 4 )
              {
                v75 = v101 - 1;
                if ( v112 > &v113[v75] || (char *)v112 + 4 * v75 < (char *)v113 )
                {
                  v76 = v101 & 0xFFFFFFFC;
                  do
                  {
                    v72 += 4;
                    v77 = v72;
                  }
                  while ( v72 < v76 );
                  v78 = v113;
                  for ( k = (4 * (unsigned __int64)v76) >> 2; k; --k )
                    *v78++ = -1073741801;
                  memset_0(v73, 0, 4LL * v76);
                  v71 = v101;
                  v72 = v77;
                  if ( v77 >= v101 )
                    goto LABEL_145;
                  v73 = (char *)v112;
                }
              }
              v80 = v74 - v73;
              v81 = &v73[4 * v72];
              v82 = v71 - v72;
              do
              {
                *(_DWORD *)&v81[v80] = -1073741801;
                *(_DWORD *)v81 = 0;
                v81 += 4;
                --v82;
              }
              while ( v82 );
            }
          }
        }
      }
    }
  }
LABEL_145:
  if ( v114 )
    *v114 = v62;
  if ( v115 )
    *v115 = v63;
  return v22;
}
