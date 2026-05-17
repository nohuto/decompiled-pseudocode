/*
 * XREFs of RtlpSetSecurityObject @ 0x18005BF70
 * Callers:
 *     RtlSetSecurityObject @ 0x18005BB10 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x180111340 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     RtlValidSid @ 0x18003D140 (RtlValidSid.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005AD80 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x18005AFEC (RtlpCreateServerAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x18005B27C (RtlpValidLabelSubjectContext.c)
 *     RtlpNormalizeAcl @ 0x18005BB50 (RtlpNormalizeAcl.c)
 *     RtlpComputeMergedAcl @ 0x18005BE2C (RtlpComputeMergedAcl.c)
 *     RtlSidDominatesForTrust @ 0x18005D530 (RtlSidDominatesForTrust.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x18005DBF0 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x18005DDC0 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x18005DEB0 (RtlpCombineAcls.c)
 *     RtlpValidFilterAclSubjectContext @ 0x18005E5B4 (RtlpValidFilterAclSubjectContext.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1801615B0 (NtOpenProcessToken.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        __int16 a5,
        int a6,
        _DWORD *a7,
        void *a8)
{
  __int16 v9; // r9
  unsigned int v10; // edi
  __int64 v11; // r12
  __int16 v12; // r13
  unsigned __int8 *v13; // r11
  __int64 v14; // rcx
  __int16 v15; // ax
  unsigned __int8 *v16; // r15
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rax
  bool v20; // zf
  _BYTE *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int8 *v24; // r14
  unsigned __int8 *v25; // rsi
  __int64 v26; // r15
  __int16 v27; // cx
  __int16 *v28; // rdx
  unsigned __int16 *v29; // r12
  __int64 v30; // r15
  int v31; // eax
  unsigned int v32; // r14d
  __int64 Heap_0; // rbx
  unsigned __int16 *v34; // rdi
  __int16 v35; // cx
  void *v36; // rcx
  __int64 v37; // rdx
  int v38; // r15d
  __int64 *v39; // r15
  __int64 v40; // rcx
  char *v41; // rsi
  __int64 v42; // rdi
  char *v43; // rdi
  int DefaultTrustSubjectContext; // ebx
  __int64 v45; // rsi
  __int64 v46; // r13
  unsigned __int8 *v47; // r14
  __int64 v48; // r12
  __int64 v50; // rax
  __int64 v51; // rax
  void *v52; // r12
  __int64 v53; // r12
  unsigned __int8 *v54; // rax
  char v55; // bl
  void *v56; // rsi
  unsigned int v57; // edx
  int v58; // r14d
  unsigned int v59; // edx
  int v60; // esi
  unsigned int v61; // edx
  unsigned __int8 *v62; // r8
  unsigned int v63; // edx
  unsigned int v64; // edx
  int v65; // eax
  __int64 v66; // rcx
  __int16 v67; // ax
  unsigned int v68; // r13d
  int v69; // edx
  __int16 v70; // ax
  __int64 v71; // rax
  __int64 v72; // rcx
  unsigned int v73; // r12d
  unsigned __int8 *v74; // rsi
  unsigned int k; // r15d
  unsigned int v76; // ecx
  unsigned __int8 *v77; // rcx
  unsigned int v78; // eax
  __int64 v79; // rax
  void *v80; // rax
  __int64 v81; // rax
  unsigned __int8 **v82; // rdi
  __int64 v83; // rbx
  __int64 v84; // rax
  unsigned __int8 *v85; // r8
  __int16 v86; // r9
  __int64 v87; // rcx
  __int16 v88; // ax
  __int16 v89; // dx
  unsigned __int8 *v90; // rax
  unsigned int v91; // r14d
  unsigned __int8 *v92; // rsi
  HANDLE v93; // rcx
  int v94; // edi
  unsigned int v95; // eax
  int v96; // eax
  unsigned int v97; // edx
  unsigned __int8 *v98; // rbx
  unsigned int j; // r14d
  unsigned int i; // ecx
  __int16 v101; // cx
  int v102; // eax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  char v106; // [rsp+50h] [rbp-B0h] BYREF
  char v107; // [rsp+51h] [rbp-AFh]
  char v108; // [rsp+52h] [rbp-AEh]
  char v109; // [rsp+53h] [rbp-ADh] BYREF
  size_t Size; // [rsp+54h] [rbp-ACh] BYREF
  char v111; // [rsp+5Ch] [rbp-A4h]
  char v112; // [rsp+5Dh] [rbp-A3h]
  char v113; // [rsp+5Eh] [rbp-A2h]
  char v114; // [rsp+5Fh] [rbp-A1h]
  void *ProcessHeap; // [rsp+60h] [rbp-A0h]
  unsigned __int8 *v116; // [rsp+68h] [rbp-98h]
  char v117; // [rsp+70h] [rbp-90h]
  int v118; // [rsp+74h] [rbp-8Ch] BYREF
  void *v119; // [rsp+78h] [rbp-88h]
  void *v120; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v121; // [rsp+88h] [rbp-78h]
  unsigned __int8 *v122; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v123; // [rsp+98h] [rbp-68h]
  __int64 *v124; // [rsp+A0h] [rbp-60h]
  __int64 v125; // [rsp+A8h] [rbp-58h]
  unsigned __int8 *v126; // [rsp+B0h] [rbp-50h]
  __int64 v127; // [rsp+B8h] [rbp-48h]
  _DWORD *v128; // [rsp+C0h] [rbp-40h]
  unsigned int v129; // [rsp+C8h] [rbp-38h]
  int v130; // [rsp+CCh] [rbp-34h]
  HANDLE Handle; // [rsp+D0h] [rbp-30h] BYREF
  void *Src; // [rsp+D8h] [rbp-28h]
  int v133; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v134; // [rsp+E4h] [rbp-1Ch]
  unsigned __int8 *v135; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v136; // [rsp+F0h] [rbp-10h]
  unsigned __int8 *v137; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int8 *v138; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int8 *v139; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int8 *v140; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int8 *v141; // [rsp+118h] [rbp+18h] BYREF
  __int64 v142; // [rsp+120h] [rbp+20h] BYREF
  __int64 v143; // [rsp+128h] [rbp+28h]
  _DWORD *v144; // [rsp+130h] [rbp+30h]
  void *v145; // [rsp+138h] [rbp+38h]
  __int64 *v146; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int16 *v147; // [rsp+148h] [rbp+48h] BYREF
  _DWORD Buf2[12]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v149; // [rsp+180h] [rbp+80h] BYREF
  __int128 v150; // [rsp+190h] [rbp+90h]
  __int128 v151; // [rsp+1A0h] [rbp+A0h]
  __int64 v152; // [rsp+1B0h] [rbp+B0h]

  v9 = *(_WORD *)(a3 + 2);
  v10 = a2;
  v128 = a7;
  v124 = a4;
  v125 = a3;
  v11 = a3;
  v145 = a8;
  v12 = 0x8000;
  v108 = 0;
  v109 = 0;
  v107 = 0;
  v114 = 0;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  v136 = 0LL;
  v147 = 0LL;
  Src = 0LL;
  v135 = 0LL;
  v123 = 0LL;
  v137 = 0LL;
  v126 = 0LL;
  v139 = 0LL;
  v121 = 0LL;
  v138 = 0LL;
  v122 = 0LL;
  v140 = 0LL;
  v127 = 0LL;
  v141 = 0LL;
  v144 = 0LL;
  v106 = 0;
  LOBYTE(v134) = 0;
  LOBYTE(v130) = 0;
  Size = 0LL;
  v143 = 0LL;
  v142 = 0LL;
  if ( (v9 & 0x10) != 0 )
  {
    if ( v9 >= 0 )
    {
      v13 = *(unsigned __int8 **)(a3 + 24);
    }
    else
    {
      v51 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v51 )
        v13 = (unsigned __int8 *)(a3 + v51);
      else
        v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = *a4;
  v116 = v13;
  v15 = *(_WORD *)(v14 + 2);
  if ( (v15 & 0x10) != 0 )
  {
    if ( v15 >= 0 )
    {
      v16 = *(unsigned __int8 **)(v14 + 24);
    }
    else
    {
      v50 = *(unsigned int *)(v14 + 12);
      if ( (_DWORD)v50 )
        v16 = (unsigned __int8 *)(v14 + v50);
      else
        v16 = 0LL;
    }
  }
  else
  {
    v16 = 0LL;
  }
  v133 = 0;
  v152 = 0LL;
  v149 = 0LL;
  Handle = 0LL;
  v150 = 0LL;
  v146 = 0LL;
  v151 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( (*(_WORD *)(v14 + 2) & 0x8000) == 0 )
    return (unsigned int)-1073741593;
  LOWORD(v129) = v9 & 0x80;
  v17 = a2 & 0x80;
  v18 = v10 & 0x100;
  v117 = (v9 & 0x40) != 0;
  if ( (v10 & 0x10000) != 0 )
  {
    v94 = v10 | 0x1FF;
    v95 = v94 & 0xFFFFFF7F;
    if ( v17 )
      v95 = v94;
    v10 = v95 & 0xFFFFFEFF;
    if ( v18 )
      v10 = v95;
    if ( !v16 && !v13 )
    {
      v10 &= 0xFFFFFE07;
      if ( (v9 & 0x10) != 0 )
      {
        v10 |= 8u;
      }
      else
      {
        v96 = (unsigned __int8)v130;
        if ( (v9 & 0x800) != 0 )
          v96 = 1;
        v130 = v96;
      }
    }
  }
  if ( (v10 & 1) == 0 )
  {
    v19 = *(unsigned int *)(v14 + 4);
    if ( !(_DWORD)v19 )
      return (unsigned int)-1073741734;
    v20 = v14 + v19 == 0;
    v21 = (_BYTE *)(v14 + v19);
    v120 = v21;
    if ( v20 )
      return (unsigned int)-1073741734;
    goto LABEL_10;
  }
  v78 = v10 >> 2;
  LOBYTE(v78) = (v10 & 4) == 0;
  v134 = v78;
  if ( v9 >= 0 )
  {
    v80 = *(void **)(v11 + 8);
  }
  else
  {
    v79 = *(unsigned int *)(v11 + 4);
    if ( !(_DWORD)v79 )
    {
      v120 = 0LL;
      goto LABEL_136;
    }
    v80 = (void *)(v11 + v79);
  }
  v120 = v80;
LABEL_136:
  BYTE4(Size) = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !a8 )
      return (unsigned int)-1073741734;
    v118 = NtQueryInformationToken(a8, 10LL, &v149, 56LL, &v133);
    DefaultTrustSubjectContext = v118;
    if ( v118 < 0 )
      return (unsigned int)DefaultTrustSubjectContext;
    if ( SHIDWORD(v150) < 1 && DWORD2(v150) == 2 )
      return (unsigned int)-1073741659;
    if ( !RtlpValidOwnerSubjectContext(a8, v120, (_WORD)v129 != 0, &v118) )
      return (unsigned int)-1073741734;
    a4 = v124;
  }
  v21 = v120;
LABEL_10:
  if ( !RtlValidSid(v21) )
    return (unsigned int)-1073741734;
  if ( (v10 & 2) != 0 )
  {
    if ( *(__int16 *)(v11 + 2) >= 0 )
    {
      v24 = *(unsigned __int8 **)(v11 + 16);
    }
    else
    {
      v81 = *(unsigned int *)(v11 + 8);
      if ( !(_DWORD)v81 )
      {
        v24 = 0LL;
        BYTE5(Size) = 1;
        goto LABEL_15;
      }
      v24 = (unsigned __int8 *)(v11 + v81);
    }
    BYTE5(Size) = 1;
  }
  else
  {
    v22 = *a4;
    if ( *(__int16 *)(*a4 + 2) >= 0 )
    {
      v24 = *(unsigned __int8 **)(v22 + 16);
    }
    else
    {
      v23 = *(unsigned int *)(v22 + 8);
      if ( !(_DWORD)v23 )
        return (unsigned int)-1073741733;
      v24 = (unsigned __int8 *)(v22 + v23);
    }
  }
LABEL_15:
  v119 = v24;
  if ( !v24 || !RtlValidSid(v24) )
    return (unsigned int)-1073741733;
  if ( (v10 & 0x1F8) == 0 )
  {
    v25 = v16;
    Src = v16;
    v26 = (__int64)v126;
    goto LABEL_19;
  }
  v52 = v145;
  if ( (v10 & 0x10) != 0 )
  {
    v91 = 0;
    while ( 1 )
    {
      if ( v116 )
      {
        v92 = v116 + 8;
        for ( i = 0; ; ++i )
        {
          if ( i >= *((unsigned __int16 *)v116 + 2) )
            goto LABEL_166;
          if ( i >= v91 && *v92 == 17 )
            break;
          v92 += *((unsigned __int16 *)v92 + 1);
        }
        v20 = (*((_DWORD *)v92 + 1) & 0xFFFFFFF8) == 0;
        v144 = v92 + 8;
        v91 = i;
        v106 = v92[1];
        if ( !v20 )
          return (unsigned int)-1073740730;
      }
      else
      {
LABEL_166:
        v92 = 0LL;
      }
      if ( v52 )
      {
        v118 = NtQueryInformationToken(v52, 10LL, &v149, 56LL, &v133);
        DefaultTrustSubjectContext = v118;
        if ( v118 < 0 )
          return (unsigned int)DefaultTrustSubjectContext;
        if ( DWORD2(v150) == 2 && SHIDWORD(v150) < 1 )
          return (unsigned int)-1073741659;
        v93 = v52;
      }
      else
      {
        v118 = NtOpenProcessToken(-1LL, 8LL, &Handle);
        DefaultTrustSubjectContext = v118;
        if ( v118 < 0 )
          return (unsigned int)DefaultTrustSubjectContext;
        v93 = Handle;
      }
      if ( !RtlpValidLabelSubjectContext((__int64)v93, v144, v106, &v118) )
        break;
      NtClose(Handle);
      ++v91;
      if ( !v92 )
        goto LABEL_84;
    }
    NtClose(Handle);
    return (unsigned int)-1073740730;
  }
LABEL_84:
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(v52, &v146);
  if ( DefaultTrustSubjectContext < 0 )
    return (unsigned int)DefaultTrustSubjectContext;
  v53 = *v146;
  if ( (v10 & 0x80u) != 0 )
  {
    v97 = 0;
    if ( !v53 )
    {
      DefaultTrustSubjectContext = -1073741790;
      RtlFreeHeap_0();
      return (unsigned int)DefaultTrustSubjectContext;
    }
    v54 = v116;
    if ( v116 )
    {
      while ( 1 )
      {
        v98 = v54 + 8;
        for ( j = 0; ; ++j )
        {
          if ( j >= *((unsigned __int16 *)v54 + 2) )
            goto LABEL_86;
          if ( j >= v97 && *v98 == 20 )
            break;
          v98 += *((unsigned __int16 *)v98 + 1);
        }
        if ( (*((_DWORD *)v98 + 1) & 0xFF000000) != 0 )
        {
          DefaultTrustSubjectContext = -1073740730;
          goto LABEL_71;
        }
        v106 = 0;
        RtlSidDominatesForTrust(v53, v98 + 8, &v106);
        if ( !v106 )
          break;
        v54 = v116;
        v97 = j + 1;
        if ( !v98 )
          goto LABEL_87;
      }
      DefaultTrustSubjectContext = -1073741790;
      RtlFreeHeap_0();
      return (unsigned int)DefaultTrustSubjectContext;
    }
  }
  else
  {
LABEL_86:
    v54 = v116;
  }
LABEL_87:
  if ( (v10 & 0x100) == 0 )
    goto LABEL_88;
  DefaultTrustSubjectContext = RtlpValidFilterAclSubjectContext(v54, v53);
  if ( DefaultTrustSubjectContext < 0 )
  {
LABEL_71:
    RtlFreeHeap_0();
    return (unsigned int)DefaultTrustSubjectContext;
  }
  v55 = a5;
  if ( (a5 & 2) == 0 )
  {
    DefaultTrustSubjectContext = RtlpValidFilterAclSubjectContext(v16, v53);
    if ( DefaultTrustSubjectContext >= 0 )
    {
LABEL_88:
      v55 = a5;
      goto LABEL_89;
    }
    goto LABEL_71;
  }
LABEL_89:
  RtlFreeHeap_0();
  v11 = v125;
  v56 = v119;
  if ( (v10 & 8) == 0 )
  {
    v123 = v16;
    v58 = v55 & 2;
    goto LABEL_93;
  }
  v57 = *(unsigned __int16 *)(v125 + 2);
  v58 = v55 & 2;
  if ( (v55 & 2) == 0 )
  {
    v123 = v116;
    v12 = v57 & 0x2000 | 0x8010;
    if ( (v57 & 0xA00) == 0xA00 )
      v12 = v57 & 0x2000 | 0x8810;
    goto LABEL_93;
  }
  DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                 v16,
                                 (*(_WORD *)(*v124 + 2) & 0x2800 | (*(unsigned __int16 *)(*v124 + 2) >> 1) & 0x18u) >> 1,
                                 v116,
                                 (v57 & 0x2800 | (v57 >> 1) & 0x18) >> 1,
                                 (__int64)v120,
                                 (__int64)v119,
                                 (__int64)v128,
                                 2,
                                 (__int64 *)&v137,
                                 &Size);
  if ( DefaultTrustSubjectContext >= 0 )
  {
    v55 = a5;
    BYTE6(Size) = 1;
    v123 = v137;
    v12 = 2 * (Size & 0x1400 | (2 * (Size & 8 | 0x2004)));
LABEL_93:
    if ( (v10 & 0x20) != 0 )
    {
      v59 = *(unsigned __int16 *)(v11 + 2);
      if ( v58 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       v16,
                                       (*(_WORD *)(*v124 + 2) & 0x800 | (*(unsigned __int16 *)(*v124 + 2) >> 1) & 0x18u) >> 1,
                                       v116,
                                       (v59 & 0x800 | (v59 >> 1) & 0x18) >> 1,
                                       (__int64)v120,
                                       (__int64)v56,
                                       (__int64)v128,
                                       2,
                                       (__int64 *)&v138,
                                       &Size);
        if ( DefaultTrustSubjectContext < 0 )
        {
          v46 = (__int64)v138;
          v45 = (__int64)v123;
          v26 = (__int64)v126;
          goto LABEL_62;
        }
        v55 = a5;
        HIBYTE(Size) = 1;
        v12 |= 2 * (Size & 0x1400 | (2 * (Size & 8 | 4)));
        v121 = v138;
      }
      else
      {
        v121 = v116;
        v12 |= v59 & 0x2000 | 0x10;
        if ( (v59 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v60 = v55 & 2;
    }
    else
    {
      v121 = v16;
      v60 = v58;
    }
    if ( (v10 & 0x40) != 0 )
    {
      v61 = *(unsigned __int16 *)(v11 + 2);
      if ( v58 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       v16,
                                       (*(_WORD *)(*v124 + 2) & 0x800 | (*(unsigned __int16 *)(*v124 + 2) >> 1) & 0x18u) >> 1,
                                       v116,
                                       (v61 & 0x800 | (v61 >> 1) & 0x18) >> 1,
                                       (__int64)v120,
                                       (__int64)v119,
                                       (__int64)v128,
                                       2,
                                       (__int64 *)&v139,
                                       &Size);
        if ( DefaultTrustSubjectContext < 0 )
        {
          v26 = (__int64)v139;
          goto LABEL_163;
        }
        v55 = a5;
        v111 = 1;
        v126 = v139;
        v12 |= 2 * (Size & 0x1400 | (2 * (Size & 8 | 4)));
      }
      else
      {
        v126 = v116;
        v12 |= v61 & 0x2000 | 0x10;
        if ( (v61 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v60 = v55 & 2;
    }
    else
    {
      v126 = v16;
    }
    v62 = v116;
    v24 = (unsigned __int8 *)v119;
    if ( (v10 & 0x80u) == 0 )
    {
      v122 = v16;
    }
    else
    {
      v63 = *(unsigned __int16 *)(v11 + 2);
      if ( v60 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       v16,
                                       (*(_WORD *)(*v124 + 2) & 0x800 | (*(unsigned __int16 *)(*v124 + 2) >> 1) & 0x18u) >> 1,
                                       v116,
                                       (v63 & 0x800 | (v63 >> 1) & 0x18) >> 1,
                                       (__int64)v120,
                                       (__int64)v119,
                                       (__int64)v128,
                                       2,
                                       (__int64 *)&v140,
                                       &Size);
        if ( DefaultTrustSubjectContext < 0 )
        {
          v47 = v140;
          v45 = (__int64)v123;
          v26 = (__int64)v126;
          v46 = (__int64)v121;
          goto LABEL_63;
        }
        v62 = v116;
        v112 = 1;
        v12 |= 2 * (Size & 0x1400 | (2 * (Size & 8 | 4)));
        v122 = v140;
      }
      else
      {
        v122 = v116;
        v12 |= v63 & 0x2000 | 0x10;
        if ( (v63 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
    }
    if ( (v10 & 0x100) != 0 )
    {
      v64 = *(unsigned __int16 *)(v11 + 2);
      if ( v60 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       v16,
                                       (*(_WORD *)(*v124 + 2) & 0x800 | (*(unsigned __int16 *)(*v124 + 2) >> 1) & 0x18u) >> 1,
                                       v62,
                                       (v64 & 0x800 | (v64 >> 1) & 0x18) >> 1,
                                       (__int64)v120,
                                       (__int64)v24,
                                       (__int64)v128,
                                       2,
                                       (__int64 *)&v141,
                                       &Size);
        if ( DefaultTrustSubjectContext < 0 )
        {
          v48 = (__int64)v141;
          v45 = (__int64)v123;
          v47 = v122;
          v26 = (__int64)v126;
          v46 = (__int64)v121;
          goto LABEL_64;
        }
        v62 = v141;
        v113 = 1;
        v127 = (__int64)v141;
        v12 |= 2 * (Size & 0x1400 | (2 * (Size & 8 | 4)));
      }
      else
      {
        v127 = (__int64)v62;
        v12 |= v64 & 0x2000 | 0x10;
        if ( (v64 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
    }
    else
    {
      v62 = v16;
      v127 = (__int64)v16;
    }
    if ( (v10 & 0x10) != 0 )
    {
      v101 = 2064;
      v65 = (int)v116;
      if ( (*(_WORD *)(v11 + 2) & 0xA00) != 0xA00 )
        v101 = 16;
      v12 |= *(_WORD *)(v11 + 2) & 0x2000 | v101;
    }
    else
    {
      v65 = (int)v16;
    }
    v26 = (__int64)v126;
    v45 = (__int64)v123;
    DefaultTrustSubjectContext = RtlpCombineAcls(
                                   (_DWORD)v123,
                                   v65,
                                   (_DWORD)v121,
                                   (_DWORD)v126,
                                   (__int64)v122,
                                   (__int64)v62,
                                   (__int64)&v135,
                                   0LL);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_61;
    v25 = v135;
    Src = v135;
    if ( !v123 && v135 && !*((_WORD *)v135 + 2) )
    {
      RtlFreeHeap_0();
      v25 = 0LL;
      Src = 0LL;
      v135 = 0LL;
    }
    v114 = 1;
LABEL_19:
    if ( (v10 & 4) == 0 )
    {
      v66 = *v124;
      v67 = *(_WORD *)(*v124 + 2);
      if ( (v67 & 4) != 0 )
      {
        if ( v67 < 0 )
        {
          v84 = *(unsigned int *)(v66 + 16);
          v30 = v125;
          if ( (_DWORD)v84 )
            v29 = (unsigned __int16 *)(v66 + v84);
          else
            v29 = 0LL;
          goto LABEL_28;
        }
        v29 = *(unsigned __int16 **)(v66 + 32);
      }
      else
      {
        v29 = 0LL;
      }
      v30 = v125;
LABEL_28:
      v31 = v24[1];
      LODWORD(Size) = 4 * *((unsigned __int8 *)v120 + 1) + 8;
      v129 = 4 * v31 + 8;
      if ( v25 )
        LODWORD(v25) = (*((unsigned __int16 *)v25 + 1) + 3) & 0xFFFFFFFC;
      if ( v29 )
        v32 = (v29[1] + 3) & 0xFFFFFFFC;
      else
        v32 = 0;
      Heap_0 = RtlAllocateHeap_0();
      if ( Heap_0 )
      {
        v34 = (unsigned __int16 *)(Heap_0 + 20);
        *(_OWORD *)Heap_0 = 0LL;
        *(_DWORD *)(Heap_0 + 16) = 0;
        *(_BYTE *)Heap_0 = 1;
        if ( (_BYTE)v130 )
          v12 |= 0x800u;
        v35 = *(_WORD *)(Heap_0 + 2) | v12;
        *(_WORD *)(Heap_0 + 2) = v35;
        if ( (*(_WORD *)(v30 + 2) & 0x4000) != 0 )
        {
          *(_BYTE *)(Heap_0 + 1) = *(_BYTE *)(v30 + 1);
          *(_WORD *)(Heap_0 + 2) = v35 | 0x4000;
        }
        if ( !Src )
          goto LABEL_154;
        v36 = (void *)(Heap_0 + 20);
        if ( (a5 & 0x4000) != 0 )
        {
          RtlpNormalizeAcl((__int64)v36, (__int64)Src, v128);
          if ( !*(_WORD *)(Heap_0 + 24) )
            goto LABEL_154;
          LODWORD(v25) = *(unsigned __int16 *)(Heap_0 + 22);
        }
        else
        {
          memmove(v36, Src, *((unsigned __int16 *)Src + 1));
          RtlpApplyAclToObject(Heap_0 + 20, v128);
          v37 = *((unsigned __int16 *)Src + 1);
          if ( (unsigned int)v25 > (unsigned int)v37 )
            memset_thunk_772440563353939046((char *)v34 + v37, 0, (unsigned int)((_DWORD)v25 - v37));
        }
        if ( Heap_0 != -20 )
        {
          v34 = (unsigned __int16 *)((char *)v34 + (unsigned int)v25);
          v38 = 20;
          goto LABEL_43;
        }
LABEL_154:
        v38 = 0;
LABEL_43:
        *(_DWORD *)(Heap_0 + 12) = v38;
        v39 = v124;
        if ( (v12 & 0x10) == 0 )
          *(_WORD *)(Heap_0 + 2) |= *(_WORD *)(*v124 + 2) & 0x2830;
        if ( v29 )
        {
          memmove(v34, v29, v29[1]);
          RtlpApplyAclToObject(v34, v128);
          *(_DWORD *)(Heap_0 + 16) = (_DWORD)v34 - Heap_0;
          v40 = v29[1];
          if ( v32 > (unsigned int)v40 )
            memset_thunk_772440563353939046((char *)v34 + v40, 0, v32 - (unsigned int)v40);
        }
        else
        {
          *(_DWORD *)(Heap_0 + 16) = 0;
        }
        if ( (v12 & 4) != 0 )
          goto LABEL_49;
        *(_WORD *)(Heap_0 + 2) |= *(_WORD *)(*v39 + 2) & 0x140C;
        if ( !(_BYTE)v134 )
          goto LABEL_49;
        Buf2[0] = 257;
        v68 = 0;
        Buf2[1] = 50331648;
        v69 = 4089344;
        Buf2[2] = 4;
LABEL_121:
        v70 = *(_WORD *)(Heap_0 + 2);
        if ( (v70 & 4) != 0 )
        {
          if ( v70 >= 0 )
          {
            v72 = *(_QWORD *)(Heap_0 + 32);
LABEL_125:
            if ( v72 )
            {
              v73 = *(unsigned __int16 *)(v72 + 4);
              v74 = (unsigned __int8 *)(v72 + 8);
              for ( k = 0; ; ++k )
              {
                if ( k >= v73 )
                  goto LABEL_294;
                v76 = *v74;
                if ( (unsigned __int8)v76 <= 3u || (unsigned __int8)v76 <= 0x15u && _bittest(&v69, v76) )
                {
                  v77 = v74 + 8;
                }
                else if ( (_BYTE)v76 == 4 )
                {
                  v77 = v74 + 12;
                }
                else
                {
                  if ( (unsigned __int8)(v76 - 5) > 3u
                    && (unsigned __int8)(v76 - 11) > 1u
                    && (unsigned __int8)(v76 - 15) > 1u )
                  {
                    goto LABEL_228;
                  }
                  v77 = &v74[16 * (*((_DWORD *)v74 + 2) & 1) + ((8LL * (*((_DWORD *)v74 + 2) & 2)) | 0xC)];
                }
                if ( v77 )
                {
                  if ( k >= v68 && *(_WORD *)v77 == LOWORD(Buf2[0]) )
                  {
                    v102 = memcmp(v77, Buf2, 4 * ((unsigned __int64)*(unsigned __int16 *)v77 >> 8) + 8);
                    v69 = 4089344;
                    if ( !v102 )
                    {
                      v68 = k + 1;
                      v74[1] = v74[1] & 0xF4 | 8;
                      goto LABEL_121;
                    }
                  }
                }
LABEL_228:
                v74 += *((unsigned __int16 *)v74 + 1);
              }
            }
            goto LABEL_294;
          }
          v71 = *(unsigned int *)(Heap_0 + 16);
          if ( (_DWORD)v71 )
          {
            v72 = Heap_0 + v71;
            goto LABEL_125;
          }
        }
LABEL_294:
        v39 = v124;
LABEL_49:
        if ( *(_DWORD *)(Heap_0 + 16) && (a5 & 0x4000) != 0 )
        {
          RtlpNormalizeAcl((__int64)v34, (__int64)v34, 0LL);
          v32 = v34[1];
        }
        v41 = (char *)v34 + v32;
        v42 = (unsigned int)Size;
        memmove(v41, v120, (unsigned int)Size);
        v43 = &v41[v42];
        v20 = BYTE4(Size) == 0;
        *(_DWORD *)(Heap_0 + 4) = (_DWORD)v41 - Heap_0;
        if ( v20 )
          *(_WORD *)(Heap_0 + 2) |= *(_WORD *)(*v39 + 2) & 1;
        memmove(v43, v119, v129);
        v20 = BYTE5(Size) == 0;
        *(_DWORD *)(Heap_0 + 8) = (_DWORD)v43 - Heap_0;
        if ( v20 )
          *(_WORD *)(Heap_0 + 2) |= *(_WORD *)(*v39 + 2) & 2;
        RtlFreeHeap_0();
        *v39 = Heap_0;
        DefaultTrustSubjectContext = 0;
        goto LABEL_57;
      }
      DefaultTrustSubjectContext = -1073741801;
LABEL_57:
      if ( v107 )
        RtlFreeHeap_0();
      v45 = (__int64)v123;
      goto LABEL_60;
    }
    v27 = *(_WORD *)(v11 + 2);
    v28 = (__int16 *)(v11 + 2);
    if ( (a5 & 1) == 0 )
    {
      if ( (v27 & 4) != 0 )
      {
        if ( v27 < 0 )
        {
          v105 = *(unsigned int *)(v11 + 16);
          v30 = v125;
          if ( (_DWORD)v105 )
            v29 = (unsigned __int16 *)(v125 + v105);
          else
            v29 = 0LL;
LABEL_25:
          v12 |= v27 & 0x1000 | 4;
          if ( (v27 & 0x500) == 0x500 )
            v12 |= 0x400u;
LABEL_27:
          if ( (_WORD)v129 )
          {
            v118 = 76;
            v82 = (unsigned __int8 **)RtlAllocateHeap_0();
            if ( !v82 )
            {
              DefaultTrustSubjectContext = -1073741801;
              goto LABEL_57;
            }
            DefaultTrustSubjectContext = NtOpenProcessToken(-1LL, 8LL, &Handle);
            if ( DefaultTrustSubjectContext < 0
              || (DefaultTrustSubjectContext = NtQueryInformationToken(Handle, 4LL, v82, (unsigned int)v118, &v118),
                  NtClose(Handle),
                  DefaultTrustSubjectContext < 0) )
            {
              RtlFreeHeap_0();
              goto LABEL_57;
            }
            DefaultTrustSubjectContext = RtlpCreateServerAcl((__int64)v29, v117, *v82, &v142, &v109);
            RtlFreeHeap_0();
            v108 = v109;
            if ( DefaultTrustSubjectContext < 0 )
            {
              v143 = v142;
              goto LABEL_57;
            }
            v83 = v142;
            v143 = v142;
            if ( v109 )
            {
              if ( v107 )
                RtlFreeHeap_0();
              v108 = 0;
              v107 = 1;
              v136 = v83;
            }
            v29 = (unsigned __int16 *)v83;
          }
          goto LABEL_28;
        }
        v29 = *(unsigned __int16 **)(v11 + 32);
      }
      else
      {
        v29 = 0LL;
      }
      v30 = v125;
      goto LABEL_25;
    }
    if ( (v27 & 4) != 0 )
    {
      if ( v27 < 0 )
      {
        v103 = *(unsigned int *)(v11 + 16);
        if ( (_DWORD)v103 )
          v85 = (unsigned __int8 *)(v11 + v103);
        else
          v85 = 0LL;
        v28 = (__int16 *)(v11 + 2);
      }
      else
      {
        v85 = *(unsigned __int8 **)(v11 + 32);
      }
    }
    else
    {
      v85 = 0LL;
    }
    v86 = *v28;
    v87 = *v124;
    v88 = *(_WORD *)(*v124 + 2);
    v89 = v88;
    if ( (v88 & 4) != 0 )
    {
      if ( v88 < 0 )
      {
        v104 = *(unsigned int *)(v87 + 16);
        if ( (_DWORD)v104 )
          v90 = (unsigned __int8 *)(v87 + v104);
        else
          v90 = 0LL;
      }
      else
      {
        v90 = *(unsigned __int8 **)(v87 + 32);
      }
    }
    else
    {
      v90 = 0LL;
    }
    DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                   v90,
                                   v89 & 0x140C,
                                   v85,
                                   v86 & 0x140C,
                                   (__int64)v120,
                                   (__int64)v24,
                                   (__int64)v128,
                                   1,
                                   (__int64 *)&v147,
                                   &Size);
    if ( DefaultTrustSubjectContext >= 0 )
    {
      v30 = v125;
      v29 = v147;
      v136 = (__int64)v147;
      v107 = 1;
      v12 |= Size & 0x1408 | 4;
      goto LABEL_27;
    }
LABEL_163:
    v45 = (__int64)v123;
    goto LABEL_61;
  }
  v45 = (__int64)v137;
LABEL_60:
  v26 = (__int64)v126;
LABEL_61:
  v46 = (__int64)v121;
LABEL_62:
  v47 = v122;
LABEL_63:
  v48 = v127;
LABEL_64:
  if ( v45 && BYTE6(Size) )
    RtlFreeHeap_0();
  if ( v46 && HIBYTE(Size) )
    RtlFreeHeap_0();
  if ( v26 && v111 )
    RtlFreeHeap_0();
  if ( v47 && v112 )
    RtlFreeHeap_0();
  if ( v48 && v113 )
    RtlFreeHeap_0();
  if ( Src && v114 )
    RtlFreeHeap_0();
  if ( v108 )
    goto LABEL_71;
  return (unsigned int)DefaultTrustSubjectContext;
}
