/*
 * XREFs of SeAccessCheckWithHint @ 0x140301070
 * Callers:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     SeAccessCheckFromState @ 0x1403B0740 (SeAccessCheckFromState.c)
 *     RtlpAllowsLowBoxAccess @ 0x14045B09C (RtlpAllowsLowBoxAccess.c)
 *     SeAccessCheckFromStateEx @ 0x14047B7C0 (SeAccessCheckFromStateEx.c)
 *     RtlCheckTokenMembershipEx @ 0x140493B40 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1404C97D0 (RtlCheckTokenCapability.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E1364 (ExCpuSetResourceManagerAccessCheck.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x1407F84B0 (PspCheckCpuPartitionCreateAccess.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409D42F8 (ExCheckFullProcessInformationAccess.c)
 *     ExpCheckWakeTimerAccess @ 0x140ABF740 (ExpCheckWakeTimerAccess.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140AD1CF0 (ObpVerifyAccessToBoundaryEntry.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 *     SepMandatoryIntegrityCheck @ 0x1403000E0 (SepMandatoryIntegrityCheck.c)
 *     SeLogAccessFailure @ 0x1403006A0 (SeLogAccessFailure.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1403AB850 (SepLocateTokenTrustLevel.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1403AC0C0 (RtlIsValidProcessTrustLabelSid.c)
 *     SepFreeResourceInfo @ 0x1403AE8A0 (SepFreeResourceInfo.c)
 *     SepRmDereferenceCap @ 0x1403AF894 (SepRmDereferenceCap.c)
 *     SepRmDereferenceCapTable @ 0x1403AF8B4 (SepRmDereferenceCapTable.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403AF8F0 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     SepGetScopedPolicySid @ 0x1403C8280 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1403C82D8 (SepRmReferenceFindCap.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140485224 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D5398 (SepBuildCapeSecurityDescriptor.c)
 *     SepLogLpacAccessFailure @ 0x1404EFB5C (SepLogLpacAccessFailure.c)
 *     SepAccessCheck @ 0x1405196A0 (SepAccessCheck.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     SeLockSubjectContext @ 0x1408F4CE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408F4D40 (SeUnlockSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

bool __fastcall SeAccessCheckWithHint(
        __int64 a1,
        char a2,
        int *a3,
        char a4,
        unsigned int a5,
        int a6,
        _QWORD *a7,
        _DWORD *a8,
        char a9,
        unsigned int *a10,
        int *a11)
{
  unsigned int v11; // r14d
  __int16 v16; // r11
  unsigned int v17; // r10d
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned int i; // edx
  int v22; // ebx
  void *v23; // r8
  int v24; // ebx
  __int64 v25; // rsi
  int v26; // eax
  int *v27; // rdx
  char v28; // r14
  char *v29; // rcx
  ULONGLONG TokenTrustLevel; // r9
  bool v31; // zf
  bool result; // al
  char v33; // r8
  char v34; // cl
  int v35; // eax
  int *v36; // rdx
  __int64 v37; // rax
  unsigned __int8 *v38; // r13
  __int64 v39; // rdx
  __int64 v40; // rax
  __int16 v41; // r10
  unsigned int v42; // r9d
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r12
  unsigned __int8 v45; // r8
  int v46; // edi
  unsigned int v47; // r12d
  int v48; // edx
  int v49; // r12d
  int *v50; // rdi
  char *v51; // r9
  __int64 v52; // r8
  __int64 v53; // rdx
  char v54; // r13
  unsigned int *v55; // r9
  int v56; // ecx
  __int64 v57; // r8
  char v58; // r11
  char v59; // r10
  __int64 v60; // rcx
  _DWORD *v61; // rsi
  void **v62; // r14
  void ***v63; // rbx
  void **v64; // rax
  void **v65; // rcx
  void **v66; // rdi
  _QWORD *v67; // rcx
  _QWORD *v68; // rdx
  void **v69; // rax
  char *v70; // r15
  _QWORD **v71; // rdx
  void **v72; // rax
  __int64 v73; // rdi
  bool v74; // r12
  __int64 v75; // rdx
  __int64 v76; // rax
  __int16 v77; // r9
  unsigned __int8 v78; // cl
  unsigned int v79; // r10d
  unsigned __int64 v80; // r12
  unsigned __int8 v81; // r8
  int v82; // edi
  __int64 v83; // rdi
  __int16 v84; // ax
  __int64 v85; // rax
  __int64 v86; // rcx
  _WORD *SeOwnerRightsSid; // r13
  unsigned int v88; // eax
  char *v89; // r12
  unsigned int k; // edi
  unsigned __int8 v91; // cl
  char *v92; // rcx
  int *v93; // rcx
  unsigned int v94; // r12d
  void *v95; // r9
  __int64 v96; // rax
  bool v97; // al
  void *v98; // r9
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // r9
  __int64 v102; // r10
  __int64 v103; // rcx
  char v104; // di
  ULONGLONG v105; // rax
  int v106; // ecx
  void *v107; // r10
  __int64 v108; // rax
  __int64 v109; // rdi
  PVOID v110; // r8
  _QWORD *v111; // rax
  void *v112; // rcx
  void *v113; // rdx
  void *v114; // r9
  int v115; // eax
  int v116; // ecx
  _QWORD *v117; // rax
  void *v118; // rcx
  void *v119; // rdx
  void *v120; // r8
  void *v121; // r9
  int *v122; // rcx
  int v123; // eax
  unsigned int v124; // eax
  __int16 v125; // cx
  __int64 v126; // rax
  __int64 v127; // rax
  int v128; // r13d
  int v129; // ecx
  int v130; // eax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  _DWORD *StackBase; // rdx
  unsigned int j; // r11d
  char *v135; // rbx
  int v136; // eax
  int v137; // r9d
  __int64 v138; // rax
  int *v139; // rcx
  int v140; // eax
  int v141; // eax
  char *v142; // r11
  PVOID v143; // r11
  unsigned __int8 v144; // [rsp+A0h] [rbp-80h]
  char v145; // [rsp+A0h] [rbp-80h]
  unsigned __int8 v146; // [rsp+A0h] [rbp-80h]
  bool v147; // [rsp+A1h] [rbp-7Fh] BYREF
  char v148; // [rsp+A2h] [rbp-7Eh]
  char v149; // [rsp+A3h] [rbp-7Dh]
  char v150; // [rsp+A4h] [rbp-7Ch]
  char v151; // [rsp+A5h] [rbp-7Bh]
  char v152; // [rsp+A6h] [rbp-7Ah]
  int v153; // [rsp+A8h] [rbp-78h]
  unsigned int v154; // [rsp+ACh] [rbp-74h]
  _DWORD *v155; // [rsp+B0h] [rbp-70h]
  int v156; // [rsp+B8h] [rbp-68h]
  unsigned int v157; // [rsp+BCh] [rbp-64h]
  int *v158; // [rsp+C0h] [rbp-60h]
  PVOID P; // [rsp+C8h] [rbp-58h] BYREF
  int *v160; // [rsp+D0h] [rbp-50h]
  int v161; // [rsp+D8h] [rbp-48h] BYREF
  unsigned int v162; // [rsp+DCh] [rbp-44h] BYREF
  int v163; // [rsp+E0h] [rbp-40h]
  _DWORD *v164; // [rsp+E8h] [rbp-38h]
  int v165; // [rsp+F0h] [rbp-30h] BYREF
  int v166; // [rsp+F4h] [rbp-2Ch]
  int v167; // [rsp+F8h] [rbp-28h] BYREF
  unsigned int v168; // [rsp+100h] [rbp-20h]
  __int64 v169; // [rsp+108h] [rbp-18h]
  __int128 v170; // [rsp+110h] [rbp-10h] BYREF
  const void **v171; // [rsp+120h] [rbp+0h]
  _DWORD *v172; // [rsp+128h] [rbp+8h]
  __int64 v173; // [rsp+130h] [rbp+10h]
  __int64 v174; // [rsp+138h] [rbp+18h]
  _QWORD *v175; // [rsp+140h] [rbp+20h]
  _OWORD SecurityDescriptor[2]; // [rsp+148h] [rbp+28h] BYREF
  __int64 v177; // [rsp+168h] [rbp+48h]
  _OWORD v178[2]; // [rsp+170h] [rbp+50h] BYREF

  v11 = a5;
  *(_QWORD *)&v178[1] = 0LL;
  DWORD2(v178[1]) = 0;
  v177 = 0LL;
  v149 = 0;
  v168 = -1;
  v167 = -1;
  v173 = a1;
  v148 = a4;
  *a10 = 0;
  v160 = a11;
  v175 = a7;
  v172 = a8;
  v158 = (int *)a10;
  v147 = 0;
  v169 = 0LL;
  v164 = 0LL;
  v155 = 0LL;
  v154 = 0;
  P = 0LL;
  v161 = 0;
  *a11 = -1073741790;
  v162 = 0;
  v165 = -1073741790;
  v163 = a2 & 8;
  v170 = 0LL;
  v178[0] = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( a7 )
    *a7 = 0LL;
  if ( !a9 )
  {
    if ( (a5 & 0x2000000) != 0 )
      v11 = a8[3] | a5 & 0xFDFFFFFF;
    result = 1;
    *a10 = a6 | v11;
    *a11 = 0;
    return result;
  }
  if ( !a1 )
  {
LABEL_255:
    *a11 = -1073741790;
    return 0;
  }
  if ( *(_QWORD *)a3 && a3[2] < 2 )
  {
    *a11 = -1073741659;
    return 0;
  }
  if ( !a5 )
  {
    if ( a6 )
    {
      *a10 = a6;
      *a11 = 0;
      if ( a7 )
        *a7 = 0LL;
      return 1;
    }
    goto LABEL_255;
  }
  if ( !a4 )
    SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
  v16 = *(_WORD *)(a1 + 2);
  v17 = 0;
  if ( (v16 & 0x10) == 0 )
    goto LABEL_21;
  while ( 1 )
  {
    if ( v16 >= 0 )
    {
      v19 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v18 )
        goto LABEL_21;
      v19 = a1 + v18;
    }
    if ( !v19 )
      goto LABEL_21;
    v20 = v19 + 8;
    for ( i = 0; ; ++i )
    {
      if ( i >= *(unsigned __int16 *)(v19 + 4) )
        goto LABEL_21;
      if ( i >= v17 && *(_BYTE *)v20 == 20 )
        break;
      v20 += *(unsigned __int16 *)(v20 + 2);
    }
    if ( (*(_BYTE *)(v20 + 1) & 8) == 0 )
      break;
    v17 = i + 1;
    if ( !v20 )
      goto LABEL_21;
  }
  v22 = *(_DWORD *)(v20 + 4);
  v23 = (void *)(v20 + 8);
  if ( v20 == -8 )
    goto LABEL_21;
  if ( !*(_QWORD *)a3 )
    goto LABEL_189;
  v95 = *(void **)(*(_QWORD *)a3 + 1104LL);
  v96 = *((_QWORD *)a3 + 2);
  if ( *(_QWORD *)(v96 + 1104) && !RtlIsValidProcessTrustLabelSid(*(PSID *)(v96 + 1104)) )
    goto LABEL_206;
  if ( !v95 )
    goto LABEL_187;
  if ( !RtlIsValidProcessTrustLabelSid(v95) )
  {
LABEL_206:
    *a11 = -1073741811;
    v31 = a4 == 0;
LABEL_32:
    if ( !v31 )
      return 0;
    goto LABEL_33;
  }
  if ( !v102 )
  {
    v97 = *(_DWORD *)(v101 + 8) == 0;
    goto LABEL_188;
  }
  if ( *(_DWORD *)(v102 + 8) < *(_DWORD *)(v101 + 8) || *(_DWORD *)(v102 + 12) < *(_DWORD *)(v101 + 12) )
    v97 = 0;
  else
LABEL_187:
    v97 = 1;
LABEL_188:
  if ( !v97 || !*(_QWORD *)a3 )
  {
LABEL_189:
    v98 = *(void **)(*((_QWORD *)a3 + 2) + 1104LL);
    goto LABEL_190;
  }
  v98 = *(void **)(*(_QWORD *)a3 + 1104LL);
LABEL_190:
  if ( v98 && !RtlIsValidProcessTrustLabelSid(v98) || !RtlIsValidProcessTrustLabelSid(v23) )
    goto LABEL_206;
  if ( v100 )
  {
    if ( *(_DWORD *)(v100 + 8) < *(_DWORD *)(v99 + 8) || *(_DWORD *)(v100 + 12) < *(_DWORD *)(v99 + 12) )
      goto LABEL_268;
LABEL_21:
    v24 = -1;
    goto LABEL_22;
  }
  if ( !*(_DWORD *)(v99 + 8) )
    goto LABEL_21;
LABEL_268:
  v24 = v22 | 0x1000000;
LABEL_22:
  if ( (v24 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
  {
    v31 = v163 == 0;
    *a11 = -1073741790;
    if ( !v31 )
      goto LABEL_31;
    v135 = *(char **)a3;
    if ( !*(_QWORD *)a3 )
      v135 = (char *)*((_QWORD *)a3 + 2);
    v28 = a6 | a5;
    TokenTrustLevel = SepLocateTokenTrustLevel(a3);
    v29 = v135;
    goto LABEL_30;
  }
  *a11 = 0;
  v25 = *(_QWORD *)a3;
  if ( !*(_QWORD *)a3 )
    v25 = *((_QWORD *)a3 + 2);
  if ( (a2 & 4) != 0 )
  {
    v27 = v160;
  }
  else
  {
    v26 = SepFilterCheck(a1, (unsigned int)&P, v25, 0, (__int64)&v167);
    v27 = v160;
    *v160 = v26;
    if ( v26 < 0 )
      goto LABEL_31;
    v168 = v167;
    if ( (v167 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
    {
      v31 = v163 == 0;
      *v27 = -1073741790;
      if ( v31 )
      {
        v28 = a6 | a5;
        v29 = (char *)v25;
        TokenTrustLevel = 0LL;
LABEL_30:
        SeLogAccessFailure(v29, 0LL, 0LL, TokenTrustLevel, a1, v28, 0);
      }
LABEL_31:
      v31 = v148 == 0;
      goto LABEL_32;
    }
    *v27 = 0;
  }
  if ( (a2 & 2) != 0 )
  {
    v33 = 1;
    if ( (*(_DWORD *)(v25 + 200) & 0x2000) != 0 )
    {
      v34 = 1;
      goto LABEL_39;
    }
  }
  else
  {
    v33 = 0;
  }
  v34 = 0;
LABEL_39:
  v152 = v34;
  v151 = 0;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(v25 + 200) & 0x20) == 0 )
  {
    v138 = *(_QWORD *)(v25 + 216);
    if ( v138 )
    {
      if ( (*(_DWORD *)(v138 + 40) & 0x20) != 0 )
      {
        *v158 = 0;
        *v27 = -1073741790;
        goto LABEL_31;
      }
    }
  }
  if ( v34 )
  {
    v166 = DWORD2(v170);
    v167 = v170;
  }
  else
  {
    v35 = SepMandatoryIntegrityCheck(v172, a1, v33, v25, 0, (__int64)&v170);
    v36 = v160;
    *v160 = v35;
    if ( v35 < 0 )
    {
      if ( v148 )
        return 0;
LABEL_33:
      SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
      return 0;
    }
    v167 = v170;
    v166 = DWORD2(v170);
    if ( DWORD2(v170) && (a5 & 0xFDFFFFFF & (unsigned int)v170) != (a5 & 0xFDFFFFFF) )
    {
      *v36 = -1073741790;
      if ( (*(_DWORD *)(v25 + 200) & 0x4000) == 0 || HIDWORD(v170) > 0x2000 )
        goto LABEL_31;
      v151 = 1;
    }
    else
    {
      *v36 = 0;
      if ( (a5 & 0x2000000) != 0 && (*(_DWORD *)(v25 + 200) & 0x4000) != 0 && HIDWORD(v170) <= 0x2000 )
        v151 = 1;
    }
  }
  if ( SepRmEnforceCap )
  {
    v125 = *(_WORD *)(a1 + 2);
    if ( (v125 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
    {
      if ( v125 >= 0 )
      {
        v127 = *(_QWORD *)(a1 + 24);
      }
      else
      {
        v126 = *(unsigned int *)(a1 + 12);
        if ( !(_DWORD)v126 )
        {
          v169 = 0LL;
          goto LABEL_46;
        }
        v127 = a1 + v126;
      }
      v169 = v127;
      if ( v127 )
      {
        ScopedPolicySid = (void *)SepGetScopedPolicySid(v127);
        if ( ScopedPolicySid )
        {
          Cap = SepRmReferenceFindCap(ScopedPolicySid);
          StackBase = v155;
          v149 = 1;
          if ( Cap < 0 )
            StackBase = ExpPlatformBinaryLock.StackBase;
          v164 = StackBase;
        }
      }
    }
  }
LABEL_46:
  if ( (a2 & 1) != 0 )
  {
    v150 = 1;
    if ( (a5 & 0x2060000) == 0 && !v149 )
    {
LABEL_63:
      v145 = 0;
LABEL_64:
      v48 = v154;
      v49 = a6;
      goto LABEL_65;
    }
  }
  else
  {
    v150 = 0;
  }
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v38 = *(unsigned __int8 **)(a1 + 8);
  }
  else
  {
    v37 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v37 )
      v38 = (unsigned __int8 *)(a1 + v37);
    else
      v38 = 0LL;
  }
  v39 = v25 + 232;
  if ( v25 == -232 || !v38 )
    goto LABEL_63;
  v40 = v38[1];
  v41 = *(_WORD *)v38;
  LOWORD(v153) = *(_WORD *)v38;
  v42 = 4 * v40 + 8;
  v43 = v38[4 * v40 + 4];
  v157 = v42;
  v44 = *(_QWORD *)(v39 + 8 * (v43 & 0xF) + 16) & *(_QWORD *)(v39 + 8 * (v43 >> 4) + 144);
  v45 = 0;
LABEL_54:
  v144 = v45;
  if ( !v44 )
  {
    v47 = *(_DWORD *)v39;
    if ( *(_DWORD *)v39 > 0x40u )
    {
      v124 = 64;
      v156 = 64;
      while ( 1 )
      {
        LODWORD(v155) = v124;
        if ( v124 >= v47 )
          break;
        v73 = *(_QWORD *)(v39 + 8) + 16LL * v124;
        v174 = *(_QWORD *)(v39 + 8);
        if ( **(_WORD **)v73 == v41 )
        {
          if ( !memcmp(v38, *(const void **)v73, v42) )
            goto LABEL_114;
          v42 = v157;
          v39 = v25 + 232;
          v41 = v153;
        }
        v124 = (_DWORD)v155 + 1;
      }
    }
    goto LABEL_63;
  }
  LOBYTE(v46) = v44;
  while ( 1 )
  {
    if ( !(_BYTE)v46 )
    {
      v45 += 8;
      v44 >>= 8;
      goto LABEL_54;
    }
    v174 = *(_QWORD *)(v39 + 8);
    LODWORD(v155) = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v46);
    v171 = (const void **)(v174 + 16LL * ((unsigned int)v155 + v45));
    if ( *(_WORD *)*v171 != v41 )
      goto LABEL_60;
    if ( !memcmp(v38, *v171, v42) )
      break;
    v45 = v144;
    v42 = v157;
    v41 = v153;
LABEL_60:
    v39 = v25 + 232;
    v46 = (unsigned __int8)v46 ^ (1 << (char)v155);
  }
  v73 = (__int64)v171;
  v156 = 64;
LABEL_114:
  if ( !v73 || (v73 != v174 || (*(_DWORD *)(v73 + 8) & 0x10) != 0) && (*(_DWORD *)(v73 + 8) & 4) == 0 )
    goto LABEL_63;
  v74 = 1;
  v145 = 1;
  if ( *(_DWORD *)(v25 + 128) )
  {
    v75 = v25 + 504;
    if ( v25 != -504 )
    {
      v76 = v38[1];
      v77 = *(_WORD *)v38;
      LOWORD(v153) = *(_WORD *)v38;
      v78 = v38[4 * v76 + 4];
      v79 = 4 * v76 + 8;
      LODWORD(v155) = v79;
      v80 = *(_QWORD *)(v75 + 8LL * (v78 & 0xF) + 16) & *(_QWORD *)(v75 + 8 * ((unsigned __int64)v78 >> 4) + 144);
      v81 = 0;
LABEL_120:
      v146 = v81;
      if ( v80 )
      {
        LOBYTE(v82) = v80;
        while ( 1 )
        {
          if ( !(_BYTE)v82 )
          {
            v81 += 8;
            v80 >>= 8;
            goto LABEL_120;
          }
          v157 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v82);
          v171 = (const void **)(16LL * (v81 + v157) + *(_QWORD *)(v75 + 8));
          if ( *(_WORD *)*v171 == v77 )
          {
            if ( !memcmp(v38, *v171, v79) )
            {
              v83 = (__int64)v171;
              goto LABEL_129;
            }
            v81 = v146;
            v77 = v153;
            v79 = (unsigned int)v155;
          }
          v75 = v25 + 504;
          v82 = (unsigned __int8)v82 ^ (1 << v157);
        }
      }
      v94 = *(_DWORD *)v75;
      if ( *(_DWORD *)v75 > 0x40u )
      {
        for ( j = 64; j < v94; v156 = j )
        {
          v83 = *(_QWORD *)(v75 + 8) + 16LL * j;
          if ( **(_WORD **)v83 == v77 )
          {
            if ( !memcmp(v38, *(const void **)v83, v79) )
            {
LABEL_129:
              if ( !v83 )
                break;
              v74 = (*(_BYTE *)(v83 + 8) & 4) != 0;
              goto LABEL_131;
            }
            v77 = v153;
            v79 = (unsigned int)v155;
            j = v156;
          }
          ++j;
          v75 = v25 + 504;
        }
      }
    }
    v74 = 0;
LABEL_131:
    v145 = v74;
  }
  if ( !v74 || (a5 & 0x2060000) == 0 )
    goto LABEL_64;
  if ( v150 )
    goto LABEL_153;
  v84 = *(_WORD *)(v173 + 2);
  if ( (v84 & 4) == 0 )
    goto LABEL_153;
  if ( v84 < 0 )
  {
    v85 = *(unsigned int *)(v173 + 16);
    if ( (_DWORD)v85 )
    {
      v86 = v173 + v85;
      goto LABEL_139;
    }
    goto LABEL_153;
  }
  v86 = *(_QWORD *)(v173 + 32);
LABEL_139:
  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
  if ( v86 )
  {
    v88 = *(unsigned __int16 *)(v86 + 4);
    v89 = (char *)(v86 + 8);
    LODWORD(v155) = v88;
    for ( k = 0; ; ++k )
    {
      if ( k >= v88 )
        goto LABEL_153;
      if ( (v89[1] & 8) == 0 )
        break;
LABEL_152:
      v89 += *((unsigned __int16 *)v89 + 1);
      v88 = (unsigned int)v155;
    }
    v91 = *v89;
    if ( ((unsigned __int8)*v89 < 5u || v91 > 8u) && (unsigned __int8)(v91 - 11) > 1u )
    {
      if ( v91 < 0xFu )
      {
        if ( v91 != 4 )
        {
          if ( v91 <= 0xAu )
            goto LABEL_148;
          goto LABEL_340;
        }
        v92 = v89 + 12;
LABEL_149:
        if ( v92
          && *(_WORD *)v92 == *SeOwnerRightsSid
          && !memcmp(v92, SeOwnerRightsSid, 4 * ((unsigned __int64)*(unsigned __int16 *)v92 >> 8) + 8) )
        {
          goto LABEL_64;
        }
        goto LABEL_152;
      }
      if ( v91 > 0x10u )
      {
LABEL_340:
        if ( (unsigned __int8)(v91 - 13) > 1u )
          goto LABEL_152;
LABEL_148:
        v92 = v89 + 8;
        goto LABEL_149;
      }
    }
    v92 = &v89[16 * (*((_DWORD *)v89 + 2) & 1) + ((8LL * (*((_DWORD *)v89 + 2) & 2)) | 0xC)];
    goto LABEL_149;
  }
LABEL_153:
  v48 = 393216;
  if ( (a5 & 0x2000000) == 0 )
    v48 = a5 & 0x60000;
  v11 = a5 & 0xFFF9FFFF;
  v49 = a6 | v48;
  if ( !v149 )
    v145 = 0;
  if ( !v11 && !v149 && ((*(_DWORD *)(v25 + 200) & 0x2000) != 0 || !v48) )
  {
    if ( !v148 )
      SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    v93 = v160;
    *v158 = v49;
    result = 1;
    *v93 = 0;
    return result;
  }
LABEL_65:
  v50 = v160;
  v51 = *(char **)a3;
  v52 = *((_QWORD *)a3 + 2);
  LODWORD(v178[0]) = v48;
  memset((char *)v178 + 4, 0, 24);
  v54 = SepAccessCheck(
          v173,
          0,
          v52,
          (_DWORD)v51,
          v11,
          0LL,
          0,
          (__int64)v172,
          v49,
          a9,
          (__int64)v158,
          (__int64)v175,
          (__int64)v160,
          0,
          v145,
          (__int64)v178,
          (__int64)&P,
          (__int64)&v147,
          0LL);
  v55 = (unsigned int *)v158;
  if ( SepRmEnforceCap )
  {
    v106 = *v50;
    LODWORD(v155) = v106;
    if ( v106 >= 0 )
    {
      if ( v149 )
      {
        v53 = (unsigned int)*v158;
        v107 = 0LL;
        v108 = 0LL;
        v150 = 0;
        v154 = v53;
        LOBYTE(v156) = 0;
        while ( 1 )
        {
          v157 = v108;
          if ( (unsigned int)v108 >= v164[15] )
            goto LABEL_297;
          v109 = *(_QWORD *)&v164[2 * v108 + 16];
          if ( !*(_QWORD *)(v109 + 24) )
            goto LABEL_276;
          v110 = P;
          if ( !P )
          {
            v136 = AuthzBasepInitializeResourceClaimsFromSacl(v169, &P, 0LL, v55);
            v110 = P;
            v137 = (unsigned __int8)v156;
            if ( v136 < 0 )
              v137 = 1;
            v107 = 0LL;
            v156 = v137;
          }
          v111 = *(_QWORD **)(v25 + 1096);
          if ( v111 )
          {
            v112 = (void *)v111[75];
            v113 = (void *)v111[73];
            v114 = (void *)v111[74];
            v107 = (void *)v111[72];
          }
          else
          {
            v112 = 0LL;
            v113 = 0LL;
            v114 = 0LL;
          }
          v115 = AuthzBasepEvaluateAceCondition(
                   (_DWORD *)v25,
                   *(void **)(v25 + 776),
                   v110,
                   v107,
                   v114,
                   v113,
                   v112,
                   *(_DWORD **)(v109 + 24),
                   *(_DWORD *)(v109 + 16),
                   1u,
                   0,
                   &v161);
          v116 = v161;
          v153 = v115;
          if ( v161 == 1 )
            goto LABEL_276;
          if ( v115 < 0 )
            goto LABEL_238;
          if ( (*(_DWORD *)(v25 + 200) & 0x10) != 0 )
          {
            v117 = *(_QWORD **)(v25 + 1096);
            if ( v117 )
            {
              v118 = (void *)v117[75];
              v119 = (void *)v117[73];
              v120 = (void *)v117[74];
              v121 = (void *)v117[72];
            }
            else
            {
              v118 = 0LL;
              v119 = 0LL;
              v120 = 0LL;
              v121 = 0LL;
            }
            v153 = AuthzBasepEvaluateAceCondition(
                     (_DWORD *)v25,
                     *(void **)(v25 + 776),
                     P,
                     v121,
                     v120,
                     v119,
                     v118,
                     *(_DWORD **)(v109 + 24),
                     *(_DWORD *)(v109 + 16),
                     1u,
                     1u,
                     &v161);
            if ( v153 < 0 )
            {
LABEL_238:
              if ( !v148 )
                SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
              SepRmDereferenceCap(v164);
              v122 = v160;
              *v158 = 0;
              *v122 = v153;
              SepFreeResourceInfo(P);
              return 0;
            }
            v116 = v161;
          }
          if ( v116 == 1 || (_BYTE)v156 )
          {
LABEL_276:
            v128 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
            if ( v128 < 0 )
            {
              if ( !v148 )
                SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
              SepRmDereferenceCap(v164);
              v139 = v160;
              *v158 = 0;
              *v139 = v128;
              SepFreeResourceInfo(P);
              return 0;
            }
            v129 = v11;
            if ( (*(_DWORD *)(v109 + 48) & 1) != 0 )
            {
              if ( (v11 & 0x2000000) == 0 )
                v129 = v49 | v11;
              v130 = 0;
            }
            else
            {
              v130 = v49;
            }
            v54 = SepAccessCheck(
                    (unsigned int)SecurityDescriptor,
                    0,
                    *((_QWORD *)a3 + 2),
                    *(_QWORD *)a3,
                    v129,
                    0LL,
                    0,
                    (__int64)v172,
                    v130,
                    a9,
                    (__int64)&v162,
                    0LL,
                    (__int64)&v165,
                    0,
                    v145,
                    (__int64)v178,
                    (__int64)&P,
                    (__int64)&v147,
                    0LL);
            if ( v150 )
              v53 = v162 & v154;
            else
              v53 = v162;
            v154 = v53;
            if ( !(_DWORD)v53 )
            {
              v106 = -1073741790;
LABEL_297:
              v50 = v160;
              v55 = (unsigned int *)v158;
              *v160 = v106;
              *v55 &= v53;
              if ( *v50 < 0 )
                v147 = 0;
              break;
            }
            v106 = v165;
            LODWORD(v155) = v165;
            v150 = 1;
            if ( v165 < 0 )
              goto LABEL_297;
          }
          else
          {
            v106 = (int)v155;
            v53 = v154;
          }
          v108 = v157 + 1;
          v107 = 0LL;
        }
      }
    }
  }
  v56 = HIDWORD(v178[0]);
  if ( !v152 && (v11 & 0x2000000) != 0 )
  {
    if ( (!v151 || !*(_WORD *)((char *)&v178[1] + 5) && (*(_DWORD *)(v25 + 200) & 0x3000000) != 0x3000000)
      && v166
      && (!BYTE6(v170) || !BYTE4(v170) || !BYTE5(v170)) )
    {
      v53 = v167 & *v55;
      if ( (_DWORD)v53 != *v55 )
      {
        *v55 = v53;
        v140 = -1073741790;
        if ( (_DWORD)v53 )
          v140 = 0;
        *v50 = v140;
        v147 = (_DWORD)v53 != 0;
      }
    }
  }
  else
  {
    if ( !v151 || *(_WORD *)((char *)&v178[1] + 5) )
    {
      v57 = 0LL;
    }
    else if ( (*(_DWORD *)(v25 + 200) & 0x3000000) != 0x3000000 || HIDWORD(v178[0]) )
    {
      v57 = 0LL;
      *v50 = -1073741790;
      *v55 = 0;
      v147 = 0;
    }
    else
    {
      v57 = 0LL;
      BYTE7(v178[1]) = 1;
      *v50 = 0;
      v147 = 1;
      *v55 = v49 | v11;
    }
    if ( (v11 & 0x2000000) == 0 )
    {
      v59 = 0;
      v58 = 0;
      goto LABEL_73;
    }
  }
  v58 = 0;
  if ( v24 != -1 )
  {
    v53 = v24 & *v55;
    if ( (_DWORD)v53 != *v55 )
    {
      *v55 = v53;
      v58 = 1;
      if ( (_DWORD)v53 )
      {
        *v50 = 0;
        v147 = 1;
      }
      else
      {
        *v50 = -1073741790;
        v147 = 0;
      }
    }
  }
  v57 = v168;
  v59 = 0;
  if ( v168 != -1 )
  {
    v53 = v168 & *v55;
    if ( (_DWORD)v53 != *v55 )
    {
      *v55 = v53;
      v59 = 1;
      if ( (v11 & 0x2000000) != 0 )
      {
        v123 = -1073741790;
        v57 = 0LL;
        if ( (_DWORD)v53 )
          v123 = 0;
        *v50 = v123;
        v147 = (_DWORD)v53 != 0;
      }
      else
      {
        *v50 = -1073741790;
        v147 = *v55 != 0;
      }
    }
  }
LABEL_73:
  if ( v25 )
  {
    if ( (v58 || v59 || !v56 && (*(_DWORD *)(v25 + 200) & 0x4000) != 0 && (*v50 < 0 || BYTE7(v178[1]))) && !v163 )
    {
      v104 = *v50 >= 0;
      v105 = SepLocateTokenTrustLevel(a3);
      SeLogAccessFailure((char *)v25, 0LL, 0LL, v105, v173, v49 | v11, v104);
      v56 = HIDWORD(v178[0]);
      v50 = v160;
    }
    if ( *v50 < 0 && !v56 && (*(_DWORD *)(v25 + 200) & 0x4000) != 0 )
    {
      if ( BYTE8(v178[1]) )
      {
        v103 = v11 & ~(DWORD1(v178[0]) | DWORD2(v178[0]) | 0x2000000);
        if ( ((unsigned int)v103 & v178[1]) == (_DWORD)v103 )
          SepLogLpacAccessFailure(v103, v53, v57, v55);
      }
    }
  }
  if ( v149 )
  {
    v60 = *((_QWORD *)v164 + 4);
    if ( v60 )
      SepRmDereferenceCapTable(v60, v53, v57, v55);
  }
  if ( !v148 )
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
  v61 = P;
  if ( P )
  {
    v62 = (void **)((char *)P + 8);
    while ( 1 )
    {
      v63 = (void ***)*v62;
      if ( *v62 == v62 )
        break;
      if ( ((_DWORD)v63[7] & 1) != 0 )
      {
        v64 = *v63;
        if ( (*v63)[1] != v63 || (v65 = v63[1], *v65 != v63) )
LABEL_109:
          __fastfail(3u);
        *v65 = v64;
        v64[1] = v65;
        *((_DWORD *)v63 + 14) &= ~1u;
        --*v61;
      }
      v66 = (void **)(v63 + 9);
      while ( 1 )
      {
        v67 = *v66;
        if ( *v66 == v66 )
          break;
        if ( (v67[4] & 2) != 0 )
        {
          v71 = (_QWORD **)v67[2];
          if ( v71[1] != v67 + 2 )
            goto LABEL_109;
          v72 = (void **)v67[3];
          if ( *v72 != v67 + 2 )
            goto LABEL_109;
          *v72 = v71;
          v71[1] = v72;
          *((_DWORD *)v67 + 8) &= ~2u;
          --*((_DWORD *)v63 + 22);
        }
        if ( (v67[4] & 1) != 0 )
        {
          v68 = (_QWORD *)*v67;
          if ( *(_QWORD **)(*v67 + 8LL) != v67 )
            goto LABEL_109;
          v69 = (void **)v67[1];
          if ( *v69 != v67 )
            goto LABEL_109;
          *v69 = v68;
          v68[1] = v69;
          *((_DWORD *)v67 + 8) &= ~1u;
          --*((_DWORD *)v63 + 15);
          if ( (v67[4] & 4) != 0 )
            --*((_DWORD *)v63 + 16);
        }
        ExFreePoolWithTag(v67, 0);
      }
      v70 = (char *)v63[12];
      while ( v70 != (char *)(v63 + 12) )
      {
        v141 = *((_DWORD *)v70 + 4);
        v142 = v70 - 16;
        v70 = *(char **)v70;
        if ( (v141 & 1) == 0 )
        {
          AuthzBasepRemoveSecurityAttributeValueFromLists(v63, v142, 0LL);
          ExFreePoolWithTag(v143, 0);
        }
      }
      ExFreePoolWithTag(v63, 0);
    }
    ExFreePoolWithTag(v61, 0);
  }
  return v54 && v147;
}
