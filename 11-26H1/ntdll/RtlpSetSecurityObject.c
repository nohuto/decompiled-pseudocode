/*
 * XREFs of RtlpSetSecurityObject @ 0x1800464F0
 * Callers:
 *     RtlSetSecurityObject @ 0x180046090 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x180110EC0 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     RtlValidSid @ 0x1800276B0 (RtlValidSid.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpValidOwnerSubjectContext @ 0x180045300 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x18004556C (RtlpCreateServerAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800457FC (RtlpValidLabelSubjectContext.c)
 *     RtlpNormalizeAcl @ 0x1800460D0 (RtlpNormalizeAcl.c)
 *     RtlpComputeMergedAcl @ 0x1800463AC (RtlpComputeMergedAcl.c)
 *     RtlSidDominatesForTrust @ 0x180047AB0 (RtlSidDominatesForTrust.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180048170 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x180048340 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x180048430 (RtlpCombineAcls.c)
 *     RtlpValidFilterAclSubjectContext @ 0x180048B34 (RtlpValidFilterAclSubjectContext.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1801614B0 (NtOpenProcessToken.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        PVOID *a4,
        __int16 a5,
        int a6,
        __int64 a7,
        HANDLE a8)
{
  __int16 v9; // r9
  unsigned int v10; // edi
  __int64 v11; // r12
  __int16 v12; // r13
  __int64 v13; // r11
  _WORD *v14; // rcx
  __int16 v15; // ax
  unsigned __int16 *v16; // r15
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rax
  bool v20; // zf
  char *v21; // rax
  unsigned int *v22; // rax
  __int64 v23; // rcx
  unsigned __int8 *v24; // r14
  unsigned __int16 *v25; // rsi
  void *v26; // r15
  __int16 v27; // cx
  __int16 *v28; // rdx
  unsigned __int16 *v29; // r12
  __int64 v30; // r15
  PVOID v31; // rdi
  int v32; // edx
  int v33; // eax
  unsigned int v34; // r14d
  char *v35; // rbx
  unsigned __int16 *v36; // rdi
  __int16 v37; // cx
  void *v38; // rcx
  __int64 v39; // rdx
  int v40; // r15d
  PVOID *v41; // r15
  __int64 v42; // rcx
  char *v43; // rsi
  __int64 v44; // rdi
  char *v45; // rdi
  int DefaultTrustSubjectContext; // ebx
  void *v47; // rsi
  void *v48; // r13
  void *v49; // r14
  void *v50; // r12
  PVOID v51; // rdi
  __int64 v53; // rax
  __int64 v54; // rax
  HANDLE v55; // r12
  PVOID v56; // rsi
  void *v57; // r12
  unsigned __int8 *v58; // rax
  char v59; // bl
  void *v60; // rsi
  unsigned int v61; // edx
  int v62; // r14d
  unsigned int v63; // edx
  int v64; // esi
  unsigned int v65; // edx
  unsigned __int8 *v66; // r8
  unsigned int v67; // edx
  unsigned int v68; // edx
  int v69; // eax
  unsigned int *v70; // rcx
  __int16 v71; // ax
  unsigned int v72; // r13d
  int v73; // edx
  __int16 v74; // ax
  __int64 v75; // rax
  char *v76; // rcx
  unsigned int v77; // r12d
  unsigned __int8 *v78; // rsi
  unsigned int j; // r15d
  unsigned int v80; // ecx
  unsigned __int8 *v81; // rcx
  unsigned int v82; // eax
  __int64 v83; // rax
  void *v84; // rax
  __int64 v85; // rax
  unsigned __int8 **Heap_0; // rdi
  unsigned __int8 **v87; // r8
  int v88; // eax
  unsigned __int8 **v89; // r8
  ACL *v90; // rbx
  __int64 v91; // rax
  unsigned __int8 *v92; // r8
  __int16 v93; // r9
  unsigned int *v94; // rcx
  __int16 v95; // ax
  __int16 v96; // dx
  unsigned __int8 *v97; // rax
  unsigned int v98; // r14d
  __int64 v99; // rsi
  HANDLE v100; // rcx
  int v101; // edi
  unsigned int v102; // eax
  int v103; // eax
  unsigned int v104; // edx
  unsigned __int8 *v105; // rbx
  unsigned int k; // r14d
  unsigned int i; // ecx
  __int16 v108; // cx
  int v109; // eax
  unsigned __int8 **v110; // r8
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  BOOLEAN DominatesTrust; // [rsp+50h] [rbp-B0h] BYREF
  char v115; // [rsp+51h] [rbp-AFh]
  char v116; // [rsp+52h] [rbp-AEh]
  char v117; // [rsp+53h] [rbp-ADh] BYREF
  size_t Size; // [rsp+54h] [rbp-ACh] BYREF
  char v119; // [rsp+5Ch] [rbp-A4h]
  char v120; // [rsp+5Dh] [rbp-A3h]
  char v121; // [rsp+5Eh] [rbp-A2h]
  char v122; // [rsp+5Fh] [rbp-A1h]
  PVOID HeapHandle; // [rsp+60h] [rbp-A0h]
  int v124[2]; // [rsp+68h] [rbp-98h]
  char v125; // [rsp+70h] [rbp-90h]
  ULONG TokenInformationLength; // [rsp+74h] [rbp-8Ch] BYREF
  void *v127; // [rsp+78h] [rbp-88h]
  void *v128; // [rsp+80h] [rbp-80h]
  PVOID v129; // [rsp+88h] [rbp-78h]
  PVOID v130; // [rsp+90h] [rbp-70h]
  PVOID v131; // [rsp+98h] [rbp-68h]
  PVOID *v132; // [rsp+A0h] [rbp-60h]
  __int64 v133; // [rsp+A8h] [rbp-58h]
  PVOID v134; // [rsp+B0h] [rbp-50h]
  PVOID v135; // [rsp+B8h] [rbp-48h]
  __int64 v136; // [rsp+C0h] [rbp-40h]
  unsigned int v137; // [rsp+C8h] [rbp-38h]
  int v138; // [rsp+CCh] [rbp-34h]
  HANDLE TokenHandle; // [rsp+D0h] [rbp-30h] BYREF
  void *Src; // [rsp+D8h] [rbp-28h]
  ULONG ReturnLength; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v142; // [rsp+E4h] [rbp-1Ch]
  PVOID v143; // [rsp+E8h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+F0h] [rbp-10h]
  __int64 v145; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v146; // [rsp+100h] [rbp+0h] BYREF
  __int64 v147; // [rsp+108h] [rbp+8h] BYREF
  __int64 v148; // [rsp+110h] [rbp+10h] BYREF
  __int64 v149; // [rsp+118h] [rbp+18h] BYREF
  ACL *v150; // [rsp+120h] [rbp+20h] BYREF
  PVOID v151; // [rsp+128h] [rbp+28h]
  PSID Sid2; // [rsp+130h] [rbp+30h]
  HANDLE v153; // [rsp+138h] [rbp+38h]
  PVOID v154; // [rsp+140h] [rbp+40h]
  __int64 v155; // [rsp+148h] [rbp+48h] BYREF
  _DWORD Buf2[12]; // [rsp+150h] [rbp+50h] BYREF
  __int128 TokenInformation; // [rsp+180h] [rbp+80h] BYREF
  __int128 v158; // [rsp+190h] [rbp+90h]
  __int128 v159; // [rsp+1A0h] [rbp+A0h]
  __int64 v160; // [rsp+1B0h] [rbp+B0h]

  v9 = *(_WORD *)(a3 + 2);
  v10 = a2;
  v136 = a7;
  v132 = a4;
  v133 = a3;
  v11 = a3;
  v153 = a8;
  v12 = 0x8000;
  v116 = 0;
  v117 = 0;
  v115 = 0;
  v122 = 0;
  v119 = 0;
  v120 = 0;
  v121 = 0;
  BaseAddress = 0LL;
  v155 = 0LL;
  Src = 0LL;
  v143 = 0LL;
  v131 = 0LL;
  v145 = 0LL;
  v134 = 0LL;
  v147 = 0LL;
  v129 = 0LL;
  v146 = 0LL;
  v130 = 0LL;
  v148 = 0LL;
  v135 = 0LL;
  v149 = 0LL;
  Sid2 = 0LL;
  DominatesTrust = 0;
  LOBYTE(v142) = 0;
  LOBYTE(v138) = 0;
  Size = 0LL;
  v151 = 0LL;
  v150 = 0LL;
  if ( (v9 & 0x10) != 0 )
  {
    if ( v9 >= 0 )
    {
      v13 = *(_QWORD *)(a3 + 24);
    }
    else
    {
      v54 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v54 )
        v13 = a3 + v54;
      else
        v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = *a4;
  *(_QWORD *)v124 = v13;
  v15 = v14[1];
  if ( (v15 & 0x10) != 0 )
  {
    if ( v15 >= 0 )
    {
      v16 = (unsigned __int16 *)*((_QWORD *)v14 + 3);
    }
    else
    {
      v53 = *((unsigned int *)v14 + 3);
      if ( (_DWORD)v53 )
        v16 = (_WORD *)((char *)v14 + v53);
      else
        v16 = 0LL;
    }
  }
  else
  {
    v16 = 0LL;
  }
  ReturnLength = 0;
  v160 = 0LL;
  TokenInformation = 0LL;
  TokenHandle = 0LL;
  v158 = 0LL;
  v154 = 0LL;
  v159 = 0LL;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  if ( (v14[1] & 0x8000) == 0 )
    return (unsigned int)-1073741593;
  LOWORD(v137) = v9 & 0x80;
  v17 = a2 & 0x80;
  v18 = v10 & 0x100;
  v125 = (v9 & 0x40) != 0;
  if ( (v10 & 0x10000) != 0 )
  {
    v101 = v10 | 0x1FF;
    v102 = v101 & 0xFFFFFF7F;
    if ( v17 )
      v102 = v101;
    v10 = v102 & 0xFFFFFEFF;
    if ( v18 )
      v10 = v102;
    if ( !v16 && !v13 )
    {
      v10 &= 0xFFFFFE07;
      if ( (v9 & 0x10) != 0 )
      {
        v10 |= 8u;
      }
      else
      {
        v103 = (unsigned __int8)v138;
        if ( (v9 & 0x800) != 0 )
          v103 = 1;
        v138 = v103;
      }
    }
  }
  if ( (v10 & 1) == 0 )
  {
    v19 = *((unsigned int *)v14 + 1);
    if ( !(_DWORD)v19 )
      return (unsigned int)-1073741734;
    v20 = (_WORD *)((char *)v14 + v19) == 0LL;
    v21 = (char *)v14 + v19;
    v128 = v21;
    if ( v20 )
      return (unsigned int)-1073741734;
    goto LABEL_10;
  }
  v82 = v10 >> 2;
  LOBYTE(v82) = (v10 & 4) == 0;
  v142 = v82;
  if ( v9 >= 0 )
  {
    v84 = *(void **)(v11 + 8);
  }
  else
  {
    v83 = *(unsigned int *)(v11 + 4);
    if ( !(_DWORD)v83 )
    {
      v128 = 0LL;
      goto LABEL_137;
    }
    v84 = (void *)(v11 + v83);
  }
  v128 = v84;
LABEL_137:
  BYTE4(Size) = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !a8 )
      return (unsigned int)-1073741734;
    TokenInformationLength = NtQueryInformationToken(a8, 0xAu, &TokenInformation, 0x38u, &ReturnLength);
    DefaultTrustSubjectContext = TokenInformationLength;
    if ( (TokenInformationLength & 0x80000000) != 0 )
      return (unsigned int)DefaultTrustSubjectContext;
    if ( SHIDWORD(v158) < 1 && DWORD2(v158) == 2 )
      return (unsigned int)-1073741659;
    if ( !RtlpValidOwnerSubjectContext(a8, v128, (_WORD)v137 != 0, (NTSTATUS *)&TokenInformationLength) )
      return (unsigned int)-1073741734;
    a4 = v132;
  }
  v21 = (char *)v128;
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
      v85 = *(unsigned int *)(v11 + 8);
      if ( !(_DWORD)v85 )
      {
        v24 = 0LL;
        BYTE5(Size) = 1;
        goto LABEL_15;
      }
      v24 = (unsigned __int8 *)(v11 + v85);
    }
    BYTE5(Size) = 1;
  }
  else
  {
    v22 = (unsigned int *)*a4;
    if ( *((__int16 *)*a4 + 1) >= 0 )
    {
      v24 = (unsigned __int8 *)*((_QWORD *)v22 + 2);
    }
    else
    {
      v23 = v22[2];
      if ( !(_DWORD)v23 )
        return (unsigned int)-1073741733;
      v24 = (unsigned __int8 *)v22 + v23;
    }
  }
LABEL_15:
  v127 = v24;
  if ( !v24 || !RtlValidSid(v24) )
    return (unsigned int)-1073741733;
  if ( (v10 & 0x1F8) == 0 )
  {
    v25 = v16;
    Src = v16;
    v26 = v134;
    goto LABEL_19;
  }
  v55 = v153;
  if ( (v10 & 0x10) != 0 )
  {
    v98 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)v124 )
      {
        v99 = *(_QWORD *)v124 + 8LL;
        for ( i = 0; ; ++i )
        {
          if ( i >= *(unsigned __int16 *)(*(_QWORD *)v124 + 4LL) )
            goto LABEL_167;
          if ( i >= v98 && *(_BYTE *)v99 == 17 )
            break;
          v99 += *(unsigned __int16 *)(v99 + 2);
        }
        v20 = (*(_DWORD *)(v99 + 4) & 0xFFFFFFF8) == 0;
        Sid2 = (PSID)(v99 + 8);
        v98 = i;
        DominatesTrust = *(_BYTE *)(v99 + 1);
        if ( !v20 )
          return (unsigned int)-1073740730;
      }
      else
      {
LABEL_167:
        v99 = 0LL;
      }
      if ( v55 )
      {
        TokenInformationLength = NtQueryInformationToken(v55, 0xAu, &TokenInformation, 0x38u, &ReturnLength);
        DefaultTrustSubjectContext = TokenInformationLength;
        if ( (TokenInformationLength & 0x80000000) != 0 )
          return (unsigned int)DefaultTrustSubjectContext;
        if ( DWORD2(v158) == 2 && SHIDWORD(v158) < 1 )
          return (unsigned int)-1073741659;
        v100 = v55;
      }
      else
      {
        TokenInformationLength = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
        DefaultTrustSubjectContext = TokenInformationLength;
        if ( (TokenInformationLength & 0x80000000) != 0 )
          return (unsigned int)DefaultTrustSubjectContext;
        v100 = TokenHandle;
      }
      if ( !RtlpValidLabelSubjectContext(v100, Sid2, DominatesTrust, (NTSTATUS *)&TokenInformationLength) )
        break;
      NtClose(TokenHandle);
      ++v98;
      if ( !v99 )
        goto LABEL_85;
    }
    NtClose(TokenHandle);
    return (unsigned int)-1073740730;
  }
  else
  {
LABEL_85:
    DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(v55);
    if ( DefaultTrustSubjectContext < 0 )
      return (unsigned int)DefaultTrustSubjectContext;
    v56 = v154;
    v57 = *(void **)v154;
    if ( (v10 & 0x80u) == 0 )
    {
LABEL_87:
      v58 = *(unsigned __int8 **)v124;
LABEL_88:
      if ( (v10 & 0x100) != 0 )
      {
        DefaultTrustSubjectContext = RtlpValidFilterAclSubjectContext(v58, v57);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_290;
        v59 = a5;
        if ( (a5 & 2) != 0 )
          goto LABEL_90;
        DefaultTrustSubjectContext = RtlpValidFilterAclSubjectContext(v16, v57);
        if ( DefaultTrustSubjectContext < 0 )
        {
LABEL_290:
          RtlFreeHeap_0(HeapHandle, 0, v56);
          return (unsigned int)DefaultTrustSubjectContext;
        }
      }
      v59 = a5;
LABEL_90:
      RtlFreeHeap_0(HeapHandle, 0, v56);
      v11 = v133;
      v60 = v127;
      if ( (v10 & 8) != 0 )
      {
        v61 = *(unsigned __int16 *)(v133 + 2);
        v62 = v59 & 2;
        if ( (v59 & 2) != 0 )
        {
          DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                         (unsigned __int8 *)v16,
                                         (*((_WORD *)*v132 + 1) & 0x2800 | (*((unsigned __int16 *)*v132 + 1) >> 1) & 0x18u) >> 1,
                                         *(unsigned __int8 **)v124,
                                         (v61 & 0x2800 | (v61 >> 1) & 0x18) >> 1,
                                         (__int64)v128,
                                         (__int64)v127,
                                         v136,
                                         2,
                                         (PVOID *)&v145,
                                         &Size);
          if ( DefaultTrustSubjectContext < 0 )
          {
            v47 = (void *)v145;
LABEL_61:
            v26 = v134;
LABEL_62:
            v48 = v129;
LABEL_63:
            v49 = v130;
LABEL_64:
            v50 = v135;
            goto LABEL_65;
          }
          v59 = a5;
          BYTE6(Size) = 1;
          v131 = (PVOID)v145;
          v12 = 2 * (Size & 0x1400 | (2 * (Size & 8 | 0x2004)));
        }
        else
        {
          v131 = *(PVOID *)v124;
          v12 = v61 & 0x2000 | 0x8010;
          if ( (v61 & 0xA00) == 0xA00 )
            v12 = v61 & 0x2000 | 0x8810;
        }
      }
      else
      {
        v131 = v16;
        v62 = v59 & 2;
      }
      if ( (v10 & 0x20) != 0 )
      {
        v63 = *(unsigned __int16 *)(v11 + 2);
        if ( v62 )
        {
          DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                         (unsigned __int8 *)v16,
                                         (*((_WORD *)*v132 + 1) & 0x800 | (*((unsigned __int16 *)*v132 + 1) >> 1) & 0x18u) >> 1,
                                         *(unsigned __int8 **)v124,
                                         (v63 & 0x800 | (v63 >> 1) & 0x18) >> 1,
                                         (__int64)v128,
                                         (__int64)v60,
                                         v136,
                                         2,
                                         (PVOID *)&v146,
                                         &Size);
          if ( DefaultTrustSubjectContext < 0 )
          {
            v48 = (void *)v146;
            v47 = v131;
            v26 = v134;
            goto LABEL_63;
          }
          v59 = a5;
          HIBYTE(Size) = 1;
          v12 |= 2 * (Size & 0x1400 | (2 * (Size & 8 | 4)));
          v129 = (PVOID)v146;
        }
        else
        {
          v129 = *(PVOID *)v124;
          v12 |= v63 & 0x2000 | 0x10;
          if ( (v63 & 0xA00) == 0xA00 )
            v12 |= 0x800u;
        }
        v64 = v59 & 2;
      }
      else
      {
        v129 = v16;
        v64 = v62;
      }
      if ( (v10 & 0x40) != 0 )
      {
        v65 = *(unsigned __int16 *)(v11 + 2);
        if ( v62 )
        {
          DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                         (unsigned __int8 *)v16,
                                         (*((_WORD *)*v132 + 1) & 0x800 | (*((unsigned __int16 *)*v132 + 1) >> 1) & 0x18u) >> 1,
                                         *(unsigned __int8 **)v124,
                                         (v65 & 0x800 | (v65 >> 1) & 0x18) >> 1,
                                         (__int64)v128,
                                         (__int64)v127,
                                         v136,
                                         2,
                                         (PVOID *)&v147,
                                         &Size);
          if ( DefaultTrustSubjectContext < 0 )
          {
            v26 = (void *)v147;
            goto LABEL_164;
          }
          v59 = a5;
          v119 = 1;
          v134 = (PVOID)v147;
          v12 |= 2 * (Size & 0x1400 | (2 * (Size & 8 | 4)));
        }
        else
        {
          v134 = *(PVOID *)v124;
          v12 |= v65 & 0x2000 | 0x10;
          if ( (v65 & 0xA00) == 0xA00 )
            v12 |= 0x800u;
        }
        v64 = v59 & 2;
      }
      else
      {
        v134 = v16;
      }
      v66 = *(unsigned __int8 **)v124;
      v24 = (unsigned __int8 *)v127;
      if ( (v10 & 0x80u) == 0 )
      {
        v130 = v16;
      }
      else
      {
        v67 = *(unsigned __int16 *)(v11 + 2);
        if ( v64 )
        {
          DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                         (unsigned __int8 *)v16,
                                         (*((_WORD *)*v132 + 1) & 0x800 | (*((unsigned __int16 *)*v132 + 1) >> 1) & 0x18u) >> 1,
                                         *(unsigned __int8 **)v124,
                                         (v67 & 0x800 | (v67 >> 1) & 0x18) >> 1,
                                         (__int64)v128,
                                         (__int64)v127,
                                         v136,
                                         2,
                                         (PVOID *)&v148,
                                         &Size);
          if ( DefaultTrustSubjectContext < 0 )
          {
            v49 = (void *)v148;
            v47 = v131;
            v26 = v134;
            v48 = v129;
            goto LABEL_64;
          }
          v66 = *(unsigned __int8 **)v124;
          v120 = 1;
          v12 |= 2 * (Size & 0x1400 | (2 * (Size & 8 | 4)));
          v130 = (PVOID)v148;
        }
        else
        {
          v130 = *(PVOID *)v124;
          v12 |= v67 & 0x2000 | 0x10;
          if ( (v67 & 0xA00) == 0xA00 )
            v12 |= 0x800u;
        }
      }
      if ( (v10 & 0x100) != 0 )
      {
        v68 = *(unsigned __int16 *)(v11 + 2);
        if ( v64 )
        {
          DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                         (unsigned __int8 *)v16,
                                         (*((_WORD *)*v132 + 1) & 0x800 | (*((unsigned __int16 *)*v132 + 1) >> 1) & 0x18u) >> 1,
                                         v66,
                                         (v68 & 0x800 | (v68 >> 1) & 0x18) >> 1,
                                         (__int64)v128,
                                         (__int64)v24,
                                         v136,
                                         2,
                                         (PVOID *)&v149,
                                         &Size);
          if ( DefaultTrustSubjectContext < 0 )
          {
            v50 = (void *)v149;
            v47 = v131;
            v49 = v130;
            v26 = v134;
            v48 = v129;
LABEL_65:
            v51 = HeapHandle;
            if ( v47 && BYTE6(Size) )
              RtlFreeHeap_0(HeapHandle, 0, v47);
            if ( v48 && HIBYTE(Size) )
              RtlFreeHeap_0(v51, 0, v48);
            if ( v26 && v119 )
              RtlFreeHeap_0(v51, 0, v26);
            if ( v49 && v120 )
              RtlFreeHeap_0(v51, 0, v49);
            if ( v50 && v121 )
              RtlFreeHeap_0(v51, 0, v50);
            if ( Src && v122 )
              RtlFreeHeap_0(v51, 0, Src);
            if ( v116 )
              RtlFreeHeap_0(v51, 0, v151);
            return (unsigned int)DefaultTrustSubjectContext;
          }
          v66 = (unsigned __int8 *)v149;
          v121 = 1;
          v135 = (PVOID)v149;
          v12 |= 2 * (Size & 0x1400 | (2 * (Size & 8 | 4)));
        }
        else
        {
          v135 = v66;
          v12 |= v68 & 0x2000 | 0x10;
          if ( (v68 & 0xA00) == 0xA00 )
            v12 |= 0x800u;
        }
      }
      else
      {
        v66 = (unsigned __int8 *)v16;
        v135 = v16;
      }
      if ( (v10 & 0x10) != 0 )
      {
        v108 = 2064;
        v69 = v124[0];
        if ( (*(_WORD *)(v11 + 2) & 0xA00) != 0xA00 )
          v108 = 16;
        v12 |= *(_WORD *)(v11 + 2) & 0x2000 | v108;
      }
      else
      {
        v69 = (int)v16;
      }
      v26 = v134;
      v47 = v131;
      DefaultTrustSubjectContext = RtlpCombineAcls(
                                     (_DWORD)v131,
                                     v69,
                                     (_DWORD)v129,
                                     (_DWORD)v134,
                                     (__int64)v130,
                                     (__int64)v66,
                                     (__int64)&v143,
                                     0LL);
      if ( DefaultTrustSubjectContext < 0 )
        goto LABEL_62;
      v25 = (unsigned __int16 *)v143;
      Src = v143;
      if ( !v131 && v143 && !*((_WORD *)v143 + 2) )
      {
        RtlFreeHeap_0(HeapHandle, 0, v143);
        v25 = 0LL;
        Src = 0LL;
        v143 = 0LL;
      }
      v122 = 1;
LABEL_19:
      if ( (v10 & 4) == 0 )
      {
        v70 = (unsigned int *)*v132;
        v71 = *((_WORD *)*v132 + 1);
        if ( (v71 & 4) != 0 )
        {
          if ( v71 < 0 )
          {
            v91 = v70[4];
            v30 = v133;
            v31 = HeapHandle;
            if ( (_DWORD)v91 )
              v29 = (unsigned __int16 *)((char *)v70 + v91);
            else
              v29 = 0LL;
            goto LABEL_29;
          }
          v29 = (unsigned __int16 *)*((_QWORD *)v70 + 4);
        }
        else
        {
          v29 = 0LL;
        }
        v30 = v133;
        goto LABEL_28;
      }
      v27 = *(_WORD *)(v11 + 2);
      v28 = (__int16 *)(v11 + 2);
      if ( (a5 & 1) == 0 )
      {
        if ( (v27 & 4) != 0 )
        {
          if ( v27 < 0 )
          {
            v113 = *(unsigned int *)(v11 + 16);
            v30 = v133;
            if ( (_DWORD)v113 )
              v29 = (unsigned __int16 *)(v133 + v113);
            else
              v29 = 0LL;
LABEL_25:
            v12 |= v27 & 0x1000 | 4;
            if ( (v27 & 0x500) == 0x500 )
              v12 |= 0x400u;
LABEL_27:
            if ( (_WORD)v137 )
            {
              TokenInformationLength = 76;
              Heap_0 = (unsigned __int8 **)RtlAllocateHeap_0(HeapHandle, NtdllBaseTag + 1310720, 0x4CuLL);
              if ( !Heap_0 )
              {
                v31 = HeapHandle;
                DefaultTrustSubjectContext = -1073741801;
                goto LABEL_58;
              }
              DefaultTrustSubjectContext = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
              v87 = Heap_0;
              if ( DefaultTrustSubjectContext < 0 )
              {
                v31 = HeapHandle;
                RtlFreeHeap_0(HeapHandle, 0, v87);
                goto LABEL_58;
              }
              DefaultTrustSubjectContext = NtQueryInformationToken(
                                             TokenHandle,
                                             4u,
                                             Heap_0,
                                             TokenInformationLength,
                                             &TokenInformationLength);
              NtClose(TokenHandle);
              if ( DefaultTrustSubjectContext < 0 )
              {
                v110 = Heap_0;
                v31 = HeapHandle;
                RtlFreeHeap_0(HeapHandle, 0, v110);
                goto LABEL_58;
              }
              v88 = RtlpCreateServerAcl((__int64)v29, v125, *Heap_0, &v150, &v117);
              v89 = Heap_0;
              v31 = HeapHandle;
              DefaultTrustSubjectContext = v88;
              RtlFreeHeap_0(HeapHandle, 0, v89);
              v116 = v117;
              if ( DefaultTrustSubjectContext < 0 )
              {
                v151 = v150;
                goto LABEL_58;
              }
              v90 = v150;
              v151 = v150;
              if ( v117 )
              {
                if ( v115 )
                  RtlFreeHeap_0(v31, 0, BaseAddress);
                v116 = 0;
                v115 = 1;
                BaseAddress = v90;
              }
              v29 = (unsigned __int16 *)v90;
LABEL_29:
              v32 = 4 * *((unsigned __int8 *)v128 + 1) + 8;
              v33 = v24[1];
              LODWORD(Size) = v32;
              v137 = 4 * v33 + 8;
              if ( v25 )
                LODWORD(v25) = (v25[1] + 3) & 0xFFFFFFFC;
              if ( v29 )
                v34 = (v29[1] + 3) & 0xFFFFFFFC;
              else
                v34 = 0;
              v35 = (char *)RtlAllocateHeap_0(v31, NtdllBaseTag + 1310720, 4 * v33 + 28 + (unsigned int)v25 + v32 + v34);
              if ( v35 )
              {
                v36 = (unsigned __int16 *)(v35 + 20);
                *(_OWORD *)v35 = 0LL;
                *((_DWORD *)v35 + 4) = 0;
                *v35 = 1;
                if ( (_BYTE)v138 )
                  v12 |= 0x800u;
                v37 = *((_WORD *)v35 + 1) | v12;
                *((_WORD *)v35 + 1) = v37;
                if ( (*(_WORD *)(v30 + 2) & 0x4000) != 0 )
                {
                  v35[1] = *(_BYTE *)(v30 + 1);
                  *((_WORD *)v35 + 1) = v37 | 0x4000;
                }
                if ( !Src )
                  goto LABEL_155;
                v38 = v35 + 20;
                if ( (a5 & 0x4000) != 0 )
                {
                  RtlpNormalizeAcl((__int64)v38, (__int64)Src, (_DWORD *)v136);
                  if ( !*((_WORD *)v35 + 12) )
                    goto LABEL_155;
                  LODWORD(v25) = *((unsigned __int16 *)v35 + 11);
                }
                else
                {
                  memmove(v38, Src, *((unsigned __int16 *)Src + 1));
                  RtlpApplyAclToObject(v35 + 20, v136);
                  v39 = *((unsigned __int16 *)Src + 1);
                  if ( (unsigned int)v25 > (unsigned int)v39 )
                    memset_thunk_772440563353939046((char *)v36 + v39, 0, (unsigned int)((_DWORD)v25 - v39));
                }
                if ( v35 != (char *)-20LL )
                {
                  v36 = (unsigned __int16 *)((char *)v36 + (unsigned int)v25);
                  v40 = 20;
                  goto LABEL_44;
                }
LABEL_155:
                v40 = 0;
LABEL_44:
                *((_DWORD *)v35 + 3) = v40;
                v41 = v132;
                if ( (v12 & 0x10) == 0 )
                  *((_WORD *)v35 + 1) |= *((_WORD *)*v132 + 1) & 0x2830;
                if ( v29 )
                {
                  memmove(v36, v29, v29[1]);
                  RtlpApplyAclToObject(v36, v136);
                  *((_DWORD *)v35 + 4) = (_DWORD)v36 - (_DWORD)v35;
                  v42 = v29[1];
                  if ( v34 > (unsigned int)v42 )
                    memset_thunk_772440563353939046((char *)v36 + v42, 0, v34 - (unsigned int)v42);
                }
                else
                {
                  *((_DWORD *)v35 + 4) = 0;
                }
                if ( (v12 & 4) != 0 )
                  goto LABEL_50;
                *((_WORD *)v35 + 1) |= *((_WORD *)*v41 + 1) & 0x140C;
                if ( !(_BYTE)v142 )
                  goto LABEL_50;
                Buf2[0] = 257;
                v72 = 0;
                Buf2[1] = 50331648;
                v73 = 4089344;
                Buf2[2] = 4;
LABEL_122:
                v74 = *((_WORD *)v35 + 1);
                if ( (v74 & 4) != 0 )
                {
                  if ( v74 >= 0 )
                  {
                    v76 = (char *)*((_QWORD *)v35 + 4);
LABEL_126:
                    if ( v76 )
                    {
                      v77 = *((unsigned __int16 *)v76 + 2);
                      v78 = (unsigned __int8 *)(v76 + 8);
                      for ( j = 0; ; ++j )
                      {
                        if ( j >= v77 )
                          goto LABEL_295;
                        v80 = *v78;
                        if ( (unsigned __int8)v80 <= 3u || (unsigned __int8)v80 <= 0x15u && _bittest(&v73, v80) )
                        {
                          v81 = v78 + 8;
                        }
                        else if ( (_BYTE)v80 == 4 )
                        {
                          v81 = v78 + 12;
                        }
                        else
                        {
                          if ( (unsigned __int8)(v80 - 5) > 3u
                            && (unsigned __int8)(v80 - 11) > 1u
                            && (unsigned __int8)(v80 - 15) > 1u )
                          {
                            goto LABEL_229;
                          }
                          v81 = &v78[16 * (*((_DWORD *)v78 + 2) & 1) + ((8LL * (*((_DWORD *)v78 + 2) & 2)) | 0xC)];
                        }
                        if ( v81 )
                        {
                          if ( j >= v72 && *(_WORD *)v81 == LOWORD(Buf2[0]) )
                          {
                            v109 = memcmp(v81, Buf2, 4 * ((unsigned __int64)*(unsigned __int16 *)v81 >> 8) + 8);
                            v73 = 4089344;
                            if ( !v109 )
                            {
                              v72 = j + 1;
                              v78[1] = v78[1] & 0xF4 | 8;
                              goto LABEL_122;
                            }
                          }
                        }
LABEL_229:
                        v78 += *((unsigned __int16 *)v78 + 1);
                      }
                    }
                    goto LABEL_295;
                  }
                  v75 = *((unsigned int *)v35 + 4);
                  if ( (_DWORD)v75 )
                  {
                    v76 = &v35[v75];
                    goto LABEL_126;
                  }
                }
LABEL_295:
                v41 = v132;
LABEL_50:
                if ( *((_DWORD *)v35 + 4) && (a5 & 0x4000) != 0 )
                {
                  RtlpNormalizeAcl((__int64)v36, (__int64)v36, 0LL);
                  v34 = v36[1];
                }
                v43 = (char *)v36 + v34;
                v44 = (unsigned int)Size;
                memmove(v43, v128, (unsigned int)Size);
                v45 = &v43[v44];
                v20 = BYTE4(Size) == 0;
                *((_DWORD *)v35 + 1) = (_DWORD)v43 - (_DWORD)v35;
                if ( v20 )
                  *((_WORD *)v35 + 1) |= *((_WORD *)*v41 + 1) & 1;
                memmove(v45, v127, v137);
                v20 = BYTE5(Size) == 0;
                *((_DWORD *)v35 + 2) = (_DWORD)v45 - (_DWORD)v35;
                if ( v20 )
                  *((_WORD *)v35 + 1) |= *((_WORD *)*v41 + 1) & 2;
                v31 = HeapHandle;
                RtlFreeHeap_0(HeapHandle, 0, *v41);
                *v41 = v35;
                DefaultTrustSubjectContext = 0;
                goto LABEL_58;
              }
              DefaultTrustSubjectContext = -1073741801;
LABEL_58:
              if ( v115 )
                RtlFreeHeap_0(v31, 0, BaseAddress);
              v47 = v131;
              goto LABEL_61;
            }
LABEL_28:
            v31 = HeapHandle;
            goto LABEL_29;
          }
          v29 = *(unsigned __int16 **)(v11 + 32);
        }
        else
        {
          v29 = 0LL;
        }
        v30 = v133;
        goto LABEL_25;
      }
      if ( (v27 & 4) != 0 )
      {
        if ( v27 < 0 )
        {
          v111 = *(unsigned int *)(v11 + 16);
          if ( (_DWORD)v111 )
            v92 = (unsigned __int8 *)(v11 + v111);
          else
            v92 = 0LL;
          v28 = (__int16 *)(v11 + 2);
        }
        else
        {
          v92 = *(unsigned __int8 **)(v11 + 32);
        }
      }
      else
      {
        v92 = 0LL;
      }
      v93 = *v28;
      v94 = (unsigned int *)*v132;
      v95 = *((_WORD *)*v132 + 1);
      v96 = v95;
      if ( (v95 & 4) != 0 )
      {
        if ( v95 < 0 )
        {
          v112 = v94[4];
          if ( (_DWORD)v112 )
            v97 = (unsigned __int8 *)v94 + v112;
          else
            v97 = 0LL;
        }
        else
        {
          v97 = (unsigned __int8 *)*((_QWORD *)v94 + 4);
        }
      }
      else
      {
        v97 = 0LL;
      }
      DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                     v97,
                                     v96 & 0x140C,
                                     v92,
                                     v93 & 0x140C,
                                     (__int64)v128,
                                     (__int64)v24,
                                     v136,
                                     1,
                                     (PVOID *)&v155,
                                     &Size);
      if ( DefaultTrustSubjectContext >= 0 )
      {
        v30 = v133;
        v29 = (unsigned __int16 *)v155;
        BaseAddress = (PVOID)v155;
        v115 = 1;
        v12 |= Size & 0x1408 | 4;
        goto LABEL_27;
      }
LABEL_164:
      v47 = v131;
      goto LABEL_62;
    }
    v104 = 0;
    if ( !v57 )
    {
      DefaultTrustSubjectContext = -1073741790;
      RtlFreeHeap_0(HeapHandle, 0, v154);
      return (unsigned int)DefaultTrustSubjectContext;
    }
    v58 = *(unsigned __int8 **)v124;
    if ( !*(_QWORD *)v124 )
      goto LABEL_88;
    while ( 1 )
    {
      v105 = v58 + 8;
      for ( k = 0; ; ++k )
      {
        if ( k >= *((unsigned __int16 *)v58 + 2) )
          goto LABEL_87;
        if ( k >= v104 && *v105 == 20 )
          break;
        v105 += *((unsigned __int16 *)v105 + 1);
      }
      if ( (*((_DWORD *)v105 + 1) & 0xFF000000) != 0 )
      {
        DefaultTrustSubjectContext = -1073740730;
        goto LABEL_290;
      }
      DominatesTrust = 0;
      RtlSidDominatesForTrust(v57, v105 + 8, &DominatesTrust);
      if ( !DominatesTrust )
        break;
      v58 = *(unsigned __int8 **)v124;
      v104 = k + 1;
      if ( !v105 )
        goto LABEL_88;
    }
    DefaultTrustSubjectContext = -1073741790;
    RtlFreeHeap_0(HeapHandle, 0, v56);
  }
  return (unsigned int)DefaultTrustSubjectContext;
}
