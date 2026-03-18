/*
 * XREFs of RtlpSetSecurityObject @ 0x1409229F0
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1408BE6F8 (CmpSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfo @ 0x140921490 (SeSetSecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x1409214E0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x140921C40 (SeDefaultObjectMethod.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x140AB03C0 (SeSetSecurityDescriptorInfoEx.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140AF80D4 (IopSetDeviceSecurityDescriptor.c)
 * Callees:
 *     RtlFindAceBySid @ 0x14025F2B0 (RtlFindAceBySid.c)
 *     RtlpValidTrustSubjectContext @ 0x1402AC0BC (RtlpValidTrustSubjectContext.c)
 *     SepLocateTokenTrustLevel @ 0x1402AC130 (SepLocateTokenTrustLevel.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlSidDominates @ 0x140418530 (RtlSidDominates.c)
 *     RtlFindAceByType @ 0x1404330E0 (RtlFindAceByType.c)
 *     SepCopyTokenIntegrity @ 0x140441970 (SepCopyTokenIntegrity.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1408E0984 (RtlpCreateServerAcl.c)
 *     RtlpNormalizeAcl @ 0x1408E0CF0 (RtlpNormalizeAcl.c)
 *     RtlpCombineAcls @ 0x1408E37E0 (RtlpCombineAcls.c)
 *     RtlValidSid @ 0x140924370 (RtlValidSid.c)
 *     SeSinglePrivilegeCheckEx @ 0x140932740 (SeSinglePrivilegeCheckEx.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x14094E3C0 (RtlpApplyAclToObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140A5DD80 (RtlpValidFilterAclSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x140AB05C8 (SepValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x140B513F8 (RtlpComputeMergedAcl.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        __int16 a5,
        int a6,
        __int64 a7,
        struct _SECURITY_SUBJECT_CONTEXT *a8)
{
  int v8; // r11d
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  __int64 v11; // rdi
  char *v13; // r14
  __int16 v14; // ax
  __int64 v15; // rax
  unsigned __int16 *v16; // r15
  __int64 v17; // rax
  __int16 v18; // cx
  __int64 v19; // rcx
  unsigned __int16 *v20; // r13
  __int64 v21; // rcx
  __int64 v22; // r9
  bool v23; // zf
  int v24; // edx
  int v25; // r8d
  __int64 v26; // rax
  void *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int8 *v30; // rcx
  __int64 v31; // rdx
  unsigned __int16 *v32; // rsi
  __int16 v33; // cx
  unsigned __int16 *v34; // r15
  void *v35; // rdi
  __int16 v36; // dx
  char v37; // r13
  int v38; // ecx
  unsigned int v39; // r13d
  unsigned int v40; // r14d
  __int64 v41; // rsi
  char *PoolWithTag; // rax
  char *v43; // rbx
  unsigned __int16 *v44; // rdi
  __int16 v45; // ax
  __int64 v46; // rdx
  __int16 v47; // cx
  void *v48; // rcx
  __int64 v49; // rcx
  int v50; // r12d
  char **v51; // r12
  __int64 v52; // rcx
  char *v53; // rsi
  __int64 v54; // rdi
  char *v55; // rdi
  int valid; // ebx
  ACL *v57; // r13
  PVOID v58; // rdi
  void *v59; // rsi
  void *v60; // r14
  void *v61; // r15
  void *v62; // r12
  __int64 TokenTrustLevel; // rax
  __int64 v65; // rsi
  char v66; // al
  char v67; // si
  __int64 v68; // rax
  int v69; // esi
  __int16 v70; // r8
  __int64 v71; // rcx
  unsigned __int8 *v72; // r10
  __int64 *v73; // r14
  unsigned __int8 *v74; // r11
  unsigned __int8 *v75; // r9
  __int64 v76; // rax
  __int16 v77; // cx
  __int64 v78; // rcx
  ACL *v79; // rbx
  unsigned __int8 *AceByType; // rax
  unsigned __int8 *v81; // rsi
  char *SeMediumMandatorySid; // rdi
  __int64 ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r8
  unsigned __int8 *v88; // rax
  __int64 v89; // r8
  unsigned __int8 *v90; // rbx
  __int16 v91; // ax
  __int64 v92; // rcx
  unsigned __int8 *AceBySid; // rax
  unsigned __int8 v94; // cl
  __int64 v95; // rax
  __int16 v96; // ax
  __int16 v97; // r8
  unsigned int v98; // edx
  unsigned int v99; // edx
  unsigned int v100; // edx
  unsigned int v101; // edx
  unsigned int v102; // edx
  unsigned int v103; // eax
  __int64 v104; // rax
  void *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  int v108; // eax
  __int64 v109; // r8
  char *v110; // rbx
  int v111; // r12d
  unsigned int v112; // eax
  __int64 v113; // rcx
  __int16 v114; // ax
  __int16 v115; // dx
  int v116; // eax
  __int64 v117; // rax
  __int16 v118; // [rsp+58h] [rbp-B0h]
  char v119; // [rsp+5Ch] [rbp-ACh] BYREF
  char v120; // [rsp+5Dh] [rbp-ABh]
  char v121; // [rsp+5Eh] [rbp-AAh] BYREF
  char v122; // [rsp+5Fh] [rbp-A9h]
  __int64 v123; // [rsp+60h] [rbp-A8h] BYREF
  int v124; // [rsp+68h] [rbp-A0h]
  char v125; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v126; // [rsp+70h] [rbp-98h] BYREF
  char v127; // [rsp+74h] [rbp-94h]
  PVOID v128; // [rsp+78h] [rbp-90h]
  unsigned __int8 *v129; // [rsp+80h] [rbp-88h]
  void *Src; // [rsp+88h] [rbp-80h]
  PVOID v131; // [rsp+90h] [rbp-78h]
  PVOID v132; // [rsp+98h] [rbp-70h]
  PVOID v133; // [rsp+A0h] [rbp-68h]
  __int64 *v134; // [rsp+A8h] [rbp-60h]
  __int64 v135; // [rsp+B0h] [rbp-58h]
  PVOID v136; // [rsp+B8h] [rbp-50h]
  __int64 v137; // [rsp+C0h] [rbp-48h]
  __int16 v138; // [rsp+C8h] [rbp-40h]
  PVOID Buf1[2]; // [rsp+D0h] [rbp-38h] BYREF
  int v140; // [rsp+E0h] [rbp-28h]
  _DWORD Size[3]; // [rsp+E4h] [rbp-24h]
  struct _SECURITY_SUBJECT_CONTEXT *v142; // [rsp+F0h] [rbp-18h]
  unsigned int v143; // [rsp+F8h] [rbp-10h]
  PVOID P; // [rsp+100h] [rbp-8h]
  PVOID v145; // [rsp+108h] [rbp+0h] BYREF
  int v146; // [rsp+110h] [rbp+8h] BYREF
  int v147; // [rsp+114h] [rbp+Ch]
  __int64 v148; // [rsp+118h] [rbp+10h] BYREF
  __int64 v149; // [rsp+120h] [rbp+18h] BYREF
  __int64 v150; // [rsp+128h] [rbp+20h] BYREF
  __int64 v151; // [rsp+130h] [rbp+28h] BYREF
  __int64 v152; // [rsp+138h] [rbp+30h] BYREF
  ACL *v153; // [rsp+140h] [rbp+38h] BYREF
  __int64 v154; // [rsp+148h] [rbp+40h] BYREF
  _DWORD v155[12]; // [rsp+150h] [rbp+48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+180h] [rbp+78h] BYREF

  p_SubjectContext = a8;
  LOBYTE(v8) = 0;
  v11 = a3;
  v13 = 0LL;
  v147 = a6;
  v137 = a7;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v125 = 0;
  v124 = 0;
  LOBYTE(v143) = 0;
  v14 = *(_WORD *)(a3 + 2);
  v134 = a4;
  v135 = a3;
  v142 = a8;
  v146 = 0;
  P = 0LL;
  v154 = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  v145 = 0LL;
  Buf1[0] = 0LL;
  v148 = 0LL;
  v128 = 0LL;
  v150 = 0LL;
  v132 = 0LL;
  v149 = 0LL;
  v131 = 0LL;
  v151 = 0LL;
  v133 = 0LL;
  v152 = 0LL;
  v140 = v8;
  v123 = 0LL;
  v118 = 0x8000;
  v136 = 0LL;
  v153 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (v14 & 0x10) != 0 )
  {
    if ( v14 >= 0 )
    {
      v16 = *(unsigned __int16 **)(a3 + 24);
    }
    else
    {
      v15 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v15 )
        v16 = (unsigned __int16 *)(a3 + v15);
      else
        v16 = 0LL;
    }
  }
  else
  {
    v16 = 0LL;
  }
  v17 = *a4;
  v18 = *(_WORD *)(*a4 + 2);
  if ( (v18 & 0x10) != 0 )
  {
    if ( v18 >= 0 )
    {
      v20 = *(unsigned __int16 **)(v17 + 24);
    }
    else
    {
      v19 = *(unsigned int *)(v17 + 12);
      if ( (_DWORD)v19 )
        v20 = (unsigned __int16 *)(v17 + v19);
      else
        v20 = 0LL;
    }
  }
  else
  {
    v20 = 0LL;
  }
  if ( !a8 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    LOBYTE(v8) = v140;
    p_SubjectContext = &SubjectContext;
    v142 = &SubjectContext;
  }
  v21 = *a4;
  if ( !_bittest16((const signed __int16 *)(*a4 + 2), 0xFu) )
  {
    valid = -1073741593;
    goto LABEL_77;
  }
  v22 = *(unsigned __int16 *)(v11 + 2);
  v23 = (*(_WORD *)(v11 + 2) & 0x80) == 0;
  v138 = *(_WORD *)(v11 + 2) & 0x80;
  v24 = a2 & 0x80;
  v25 = a2 & 0x100;
  v127 = (v22 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v111 = a2 | 0x1FF;
    v112 = v111 & 0xFFFFFF7F;
    if ( v24 )
      v112 = v111;
    a2 = v112 & 0xFFFFFEFF;
    if ( v25 )
      a2 = v112;
    if ( !v20 && !v16 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v22 & 0x10) != 0 )
      {
        a2 |= 8u;
      }
      else
      {
        v8 = (unsigned __int8)v8;
        if ( (v22 & 0x800) != 0 )
          v8 = 1;
        v140 = v8;
      }
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v103 = a2 >> 2;
    LOBYTE(v103) = (a2 & 4) == 0;
    v143 = v103;
    if ( (v22 & 0x8000u) == 0LL )
    {
      v105 = *(void **)(v11 + 8);
    }
    else
    {
      v104 = *(unsigned int *)(v11 + 4);
      if ( (_DWORD)v104 )
        v105 = (void *)(v11 + v104);
      else
        v105 = 0LL;
    }
    Src = v105;
    BYTE5(v123) = 1;
    if ( (a5 & 8) == 0 && !(unsigned __int8)SepValidOwnerSubjectContext(p_SubjectContext, v105, !v23, v22) )
      goto LABEL_259;
    v27 = Src;
  }
  else
  {
    v26 = *(unsigned int *)(v21 + 4);
    if ( !(_DWORD)v26 )
      goto LABEL_259;
    v23 = v21 + v26 == 0;
    v27 = (void *)(v21 + v26);
    Src = v27;
    if ( v23 )
      goto LABEL_259;
  }
  if ( !RtlValidSid(v27) )
  {
LABEL_259:
    valid = -1073741734;
    goto LABEL_77;
  }
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(v11 + 2) >= 0 )
    {
      v30 = *(unsigned __int8 **)(v11 + 16);
    }
    else
    {
      v106 = *(unsigned int *)(v11 + 8);
      if ( !(_DWORD)v106 )
      {
        v30 = 0LL;
        BYTE6(v123) = 1;
        goto LABEL_21;
      }
      v30 = (unsigned __int8 *)(v11 + v106);
    }
    BYTE6(v123) = 1;
  }
  else
  {
    v28 = *a4;
    if ( *(__int16 *)(*a4 + 2) >= 0 )
    {
      v30 = *(unsigned __int8 **)(v28 + 16);
    }
    else
    {
      v29 = *(unsigned int *)(v28 + 8);
      if ( !(_DWORD)v29 )
      {
LABEL_252:
        valid = -1073741733;
        goto LABEL_77;
      }
      v30 = (unsigned __int8 *)(v28 + v29);
    }
  }
LABEL_21:
  v129 = v30;
  if ( !v30 || !RtlValidSid(v30) )
    goto LABEL_252;
  if ( (a2 & 0x1F8) == 0 )
  {
    v32 = v20;
    *(_QWORD *)&Size[1] = v20;
    goto LABEL_25;
  }
  Size[0] = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    v126 = 0;
    while ( 1 )
    {
      AceByType = RtlFindAceByType((__int64)v16, 17, &v126);
      v81 = AceByType;
      if ( AceByType )
      {
        v23 = (*((_DWORD *)AceByType + 1) & 0xFFFFFFF8) == 0;
        v13 = (char *)(AceByType + 8);
        BYTE4(v123) = AceByType[1];
        if ( !v23 )
          break;
      }
      v119 = 0;
      SeMediumMandatorySid = v13;
      *(_OWORD *)Buf1 = 0LL;
      if ( !v13 )
        SeMediumMandatorySid = (char *)SeExports->SeMediumMandatorySid;
      ClientToken = (__int64)p_SubjectContext->ClientToken;
      if ( !ClientToken )
        ClientToken = (__int64)v142->PrimaryToken;
      if ( *(_DWORD *)(ClientToken + 192) == 2 && *(int *)(ClientToken + 196) < 2 )
        break;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(ClientToken + 48), 1u);
      SepCopyTokenIntegrity(ClientToken, (__int64)Buf1);
      ExReleaseResourceLite(*(PERESOURCE *)(ClientToken + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v85, v86);
      if ( (v123 & 0x800000000LL) != 0 )
      {
        v110 = (char *)SeExports->SeMediumMandatorySid;
        if ( (int)RtlSidDominates(SeMediumMandatorySid, v110, &v119) < 0 )
          break;
        if ( !v119 )
          SeMediumMandatorySid = v110;
      }
      if ( (int)RtlSidDominates((char *)Buf1[0], SeMediumMandatorySid, &v119) < 0 )
        break;
      p_SubjectContext = v142;
      if ( !v119 )
      {
        LOBYTE(v87) = 1;
        if ( !(unsigned __int8)SeSinglePrivilegeCheckEx(SeRelabelPrivilege, v142, v87) )
          break;
      }
      ++v126;
      if ( !v81 )
        goto LABEL_84;
    }
LABEL_141:
    valid = -1073740730;
  }
  else
  {
LABEL_84:
    TokenTrustLevel = SepLocateTokenTrustLevel(p_SubjectContext, v31);
    v65 = TokenTrustLevel;
    if ( (a2 & 0x80) == 0 )
    {
LABEL_85:
      if ( (a2 & 0x100) != 0 )
      {
        valid = RtlpValidFilterAclSubjectContext(v16, v65);
        if ( valid < 0 )
          goto LABEL_77;
        v66 = a5;
        if ( (a5 & 2) != 0 )
          goto LABEL_88;
        valid = RtlpValidFilterAclSubjectContext(v20, v65);
        if ( valid < 0 )
          goto LABEL_77;
      }
      v66 = a5;
LABEL_88:
      v67 = v66;
      v68 = v135;
      if ( (a2 & 8) != 0 )
      {
        v98 = *(unsigned __int16 *)(v135 + 2);
        v69 = v67 & 2;
        if ( v69 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v20,
                    (*(_WORD *)(*v134 + 2) & 0x2800 | (*(unsigned __int16 *)(*v134 + 2) >> 1) & 0x18u) >> 1,
                    (int)v16,
                    (v98 & 0x2800 | (v98 >> 1) & 0x18) >> 1,
                    (__int64)Src,
                    (__int64)v129,
                    v137,
                    2,
                    (__int64)&v148,
                    (__int64)&v123);
          if ( valid < 0 )
          {
            v58 = (PVOID)v148;
LABEL_210:
            v59 = v132;
            goto LABEL_211;
          }
          HIBYTE(v123) = 1;
          Buf1[0] = (PVOID)v148;
          v68 = v135;
          v118 = 2 * (v123 & 0x1400 | (2 * (v123 & 8 | 0x2004)));
        }
        else
        {
          Buf1[0] = v16;
          v118 = v98 & 0x2000 | 0x8010;
          if ( (v98 & 0xA00) == 0xA00 )
            v118 = v98 & 0x2000 | 0x8810;
        }
      }
      else
      {
        Buf1[0] = v20;
        v69 = v67 & 2;
      }
      if ( (a2 & 0x20) != 0 )
      {
        v101 = *(unsigned __int16 *)(v68 + 2);
        if ( v69 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v20,
                    (*(_WORD *)(*v134 + 2) & 0x800 | (*(unsigned __int16 *)(*v134 + 2) >> 1) & 0x18u) >> 1,
                    (int)v16,
                    (v101 & 0x800 | (v101 >> 1) & 0x18) >> 1,
                    (__int64)Src,
                    (__int64)v129,
                    v137,
                    2,
                    (__int64)&v149,
                    (__int64)&v123);
          if ( valid < 0 )
          {
            v59 = (void *)v149;
            v58 = Buf1[0];
            goto LABEL_211;
          }
          LOBYTE(v124) = 1;
          v132 = (PVOID)v149;
          v70 = (2 * (v123 & 0x1400 | (2 * (v123 & 8 | 4)))) | v118;
          v118 = v70;
        }
        else
        {
          v132 = v16;
          v70 = v101 & 0x2000 | 0x10 | v118;
          v118 = v70;
          if ( (v101 & 0xA00) == 0xA00 )
          {
            v70 |= 0x800u;
            v118 = v70;
          }
        }
      }
      else
      {
        v70 = v118;
        v132 = v20;
      }
      v71 = v135;
      if ( (a2 & 0x40) != 0 )
      {
        v102 = *(unsigned __int16 *)(v135 + 2);
        if ( v69 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v20,
                    (*(_WORD *)(*v134 + 2) & 0x800 | (*(unsigned __int16 *)(*v134 + 2) >> 1) & 0x18u) >> 1,
                    (int)v16,
                    (v102 & 0x800 | (v102 >> 1) & 0x18) >> 1,
                    (__int64)Src,
                    (__int64)v129,
                    v137,
                    2,
                    (__int64)&v150,
                    (__int64)&v123);
          if ( valid < 0 )
          {
            v61 = (void *)v150;
            v58 = Buf1[0];
            v59 = v132;
            goto LABEL_212;
          }
          v72 = (unsigned __int8 *)v150;
          BYTE1(v124) = 1;
          v128 = (PVOID)v150;
          v70 = (2 * (v123 & 0x1400 | (2 * (v123 & 8 | 4)))) | v118;
          v71 = v135;
          v118 = v70;
        }
        else
        {
          v128 = v16;
          v72 = (unsigned __int8 *)v16;
          v70 |= v102 & 0x2000 | 0x10;
          v118 = v70;
          if ( (v102 & 0xA00) == 0xA00 )
          {
            v70 |= 0x800u;
            v118 = v70;
          }
        }
      }
      else
      {
        v72 = (unsigned __int8 *)v20;
        v128 = v20;
      }
      v73 = v134;
      if ( (a2 & 0x80) != 0 )
      {
        v99 = *(unsigned __int16 *)(v71 + 2);
        if ( v69 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v20,
                    (*(_WORD *)(*v134 + 2) & 0x800 | (*(unsigned __int16 *)(*v134 + 2) >> 1) & 0x18u) >> 1,
                    (int)v16,
                    (v99 & 0x800 | (v99 >> 1) & 0x18) >> 1,
                    (__int64)Src,
                    (__int64)v129,
                    v137,
                    2,
                    (__int64)&v151,
                    (__int64)&v123);
          if ( valid < 0 )
          {
            v62 = (void *)v151;
            v58 = Buf1[0];
            v59 = v132;
            v61 = v128;
            goto LABEL_213;
          }
          v74 = (unsigned __int8 *)v151;
          v72 = (unsigned __int8 *)v128;
          BYTE2(v124) = 1;
          v131 = (PVOID)v151;
          v70 = (2 * (v123 & 0x1400 | (2 * (v123 & 8 | 4)))) | v118;
          v71 = v135;
          v118 = v70;
        }
        else
        {
          v131 = v16;
          v70 |= v99 & 0x2000 | 0x10;
          v74 = (unsigned __int8 *)v16;
          v118 = v70;
          if ( (v99 & 0xA00) == 0xA00 )
          {
            v70 |= 0x800u;
            v118 = v70;
          }
        }
      }
      else
      {
        v74 = (unsigned __int8 *)v20;
        v131 = v20;
      }
      if ( (a2 & 0x100) != 0 )
      {
        v100 = *(unsigned __int16 *)(v71 + 2);
        if ( v69 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v20,
                    (*(_WORD *)(*v73 + 2) & 0x800 | (*(unsigned __int16 *)(*v73 + 2) >> 1) & 0x18u) >> 1,
                    (int)v16,
                    (v100 & 0x800 | (v100 >> 1) & 0x18) >> 1,
                    (__int64)Src,
                    (__int64)v129,
                    v137,
                    2,
                    (__int64)&v152,
                    (__int64)&v123);
          if ( valid < 0 )
          {
            v60 = (void *)v152;
            v58 = Buf1[0];
            v59 = v132;
            v61 = v128;
            v62 = v131;
            goto LABEL_214;
          }
          v75 = (unsigned __int8 *)v152;
          v72 = (unsigned __int8 *)v128;
          v74 = (unsigned __int8 *)v131;
          HIBYTE(v124) = 1;
          v133 = (PVOID)v152;
          v70 = (2 * (v123 & 0x1400 | (2 * (v123 & 8 | 4)))) | v118;
          v71 = v135;
          v118 = v70;
        }
        else
        {
          v133 = v16;
          v75 = (unsigned __int8 *)v16;
          v70 |= v100 & 0x2000 | 0x10;
          v118 = v70;
          if ( (v100 & 0xA00) == 0xA00 )
          {
            v70 |= 0x800u;
            v118 = v70;
          }
        }
      }
      else
      {
        v75 = (unsigned __int8 *)v20;
        v133 = v20;
      }
      if ( Size[0] )
      {
        v96 = *(_WORD *)(v71 + 2);
        v97 = v96 & 0x2000 | 0x10 | v70;
        v118 = v97;
        if ( (v96 & 0xA00) == 0xA00 )
          v118 = v97 | 0x800;
      }
      else
      {
        v16 = v20;
      }
      v59 = v132;
      v58 = Buf1[0];
      valid = RtlpCombineAcls(
                (unsigned __int8 *)Buf1[0],
                (unsigned __int8 *)v16,
                (unsigned __int8 *)v132,
                v72,
                v74,
                v75,
                &v145,
                0LL);
      if ( valid < 0 )
      {
LABEL_211:
        v61 = v128;
LABEL_212:
        v62 = v131;
LABEL_213:
        v60 = v133;
LABEL_214:
        v57 = (ACL *)v136;
LABEL_67:
        if ( v58 && HIBYTE(v123) )
          ExFreePoolWithTag(v58, 0);
        if ( v59 && (_BYTE)v124 )
          ExFreePoolWithTag(v59, 0);
        if ( v61 && BYTE1(v124) )
          ExFreePoolWithTag(v61, 0);
        if ( v62 && BYTE2(v124) )
          ExFreePoolWithTag(v62, 0);
        if ( v60 && HIBYTE(v124) )
          ExFreePoolWithTag(v60, 0);
        if ( *(_QWORD *)&Size[1] && v125 )
          ExFreePoolWithTag(*(PVOID *)&Size[1], 0);
        if ( v120 )
          ExFreePoolWithTag(v57, 0);
        goto LABEL_77;
      }
      v32 = (unsigned __int16 *)v145;
      *(_QWORD *)&Size[1] = v145;
      if ( !v58 && v145 && !*((_WORD *)v145 + 2) )
      {
        ExFreePoolWithTag(v145, 0);
        v32 = 0LL;
        *(_QWORD *)&Size[1] = 0LL;
        v145 = 0LL;
      }
      v11 = v135;
      v125 = 1;
LABEL_25:
      if ( (a2 & 4) == 0 )
      {
        v76 = *v134;
        v77 = *(_WORD *)(*v134 + 2);
        if ( (v77 & 4) != 0 )
        {
          if ( v77 >= 0 )
          {
            v34 = *(unsigned __int16 **)(v76 + 32);
          }
          else
          {
            v78 = *(unsigned int *)(v76 + 16);
            if ( (_DWORD)v78 )
              v34 = (unsigned __int16 *)(v76 + v78);
            else
              v34 = 0LL;
          }
        }
        else
        {
          v34 = 0LL;
        }
        goto LABEL_34;
      }
      v33 = *(_WORD *)(v11 + 2);
      if ( (a5 & 1) == 0 )
      {
        if ( (v33 & 4) != 0 )
        {
          if ( v33 < 0 )
          {
            v95 = *(unsigned int *)(v11 + 16);
            if ( (_DWORD)v95 )
              v34 = (unsigned __int16 *)(v11 + v95);
            else
              v34 = 0LL;
          }
          else
          {
            v34 = *(unsigned __int16 **)(v11 + 32);
          }
        }
        else
        {
          v34 = 0LL;
        }
        v35 = P;
        v36 = v33 & 0x1000 | 4 | v118;
        v118 = v36;
        if ( (v33 & 0x500) == 0x500 )
          v118 = v36 | 0x400;
        v37 = 0;
LABEL_33:
        if ( v138 )
        {
          valid = RtlpCreateServerAcl(
                    (__int64)v34,
                    v127,
                    *(unsigned __int8 **)(*((_QWORD *)v142->PrimaryToken + 19)
                                        + 16LL * *((unsigned int *)v142->PrimaryToken + 36)),
                    &v153,
                    &v121);
          v120 = v121;
          if ( valid < 0 )
          {
            v57 = v153;
            goto LABEL_64;
          }
          v79 = v153;
          v136 = v153;
          if ( v121 )
          {
            if ( v37 )
              ExFreePoolWithTag(v35, 0);
            v120 = 0;
            v122 = 1;
            P = v79;
          }
          v34 = (unsigned __int16 *)v79;
        }
LABEL_34:
        v38 = 4 * *((unsigned __int8 *)Src + 1) + 8;
        Size[0] = v38;
        v39 = 4 * v129[1] + 8;
        if ( v32 )
          v40 = (v32[1] + 3) & 0xFFFFFFFC;
        else
          v40 = 0;
        if ( v34 )
          v41 = (v34[1] + 3) & 0xFFFFFFFC;
        else
          v41 = 0LL;
        PoolWithTag = (char *)ExAllocatePoolWithTag(
                                (POOL_TYPE)(v147 | 0x400),
                                v39 + v40 + (_DWORD)v41 + v38 + 20,
                                0x64536553u);
        v43 = PoolWithTag;
        if ( !PoolWithTag )
        {
          valid = -1073741801;
LABEL_63:
          v57 = (ACL *)v136;
LABEL_64:
          if ( v122 )
            ExFreePoolWithTag(P, 0);
          v58 = Buf1[0];
          v59 = v132;
          v60 = v133;
          v61 = v128;
          v62 = v131;
          goto LABEL_67;
        }
        v44 = (unsigned __int16 *)(PoolWithTag + 20);
        v23 = (_BYTE)v140 == 0;
        *(_OWORD *)PoolWithTag = 0LL;
        *((_DWORD *)PoolWithTag + 4) = 0;
        v45 = v118;
        *v43 = 1;
        if ( !v23 )
          v45 = v118 | 0x800;
        v46 = v135;
        v47 = *((_WORD *)v43 + 1) | v45;
        *((_WORD *)v43 + 1) = v47;
        if ( (*(_WORD *)(v46 + 2) & 0x4000) != 0 )
        {
          v43[1] = *(_BYTE *)(v46 + 1);
          *((_WORD *)v43 + 1) = v47 | 0x4000;
        }
        if ( !*(_QWORD *)&Size[1] )
          goto LABEL_115;
        v48 = v43 + 20;
        if ( (a5 & 0x4000) != 0 )
        {
          RtlpNormalizeAcl((__int64)v48, *(__int64 *)&Size[1], (_DWORD *)v137);
          if ( !*((_WORD *)v43 + 12) )
            goto LABEL_115;
          v40 = *((unsigned __int16 *)v43 + 11);
        }
        else
        {
          memmove(v48, *(const void **)&Size[1], *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 2LL));
          RtlpApplyAclToObject(v43 + 20, v137);
          v49 = *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 2LL);
          if ( v40 > (unsigned int)v49 )
            memset_0((char *)v44 + v49, 0, v40 - (unsigned int)v49);
        }
        if ( v43 != (char *)-20LL )
        {
          v44 = (unsigned __int16 *)((char *)v44 + v40);
          v50 = 20;
LABEL_49:
          *((_DWORD *)v43 + 3) = v50;
          v51 = (char **)v134;
          if ( (v118 & 0x10) == 0 )
            *((_WORD *)v43 + 1) |= *(_WORD *)(*v134 + 2) & 0x2830;
          if ( v34 )
          {
            memmove(v44, v34, v34[1]);
            RtlpApplyAclToObject(v44, v137);
            *((_DWORD *)v43 + 4) = (_DWORD)v44 - (_DWORD)v43;
            v52 = v34[1];
            if ( (unsigned int)v41 > (unsigned int)v52 )
              memset_0((char *)v44 + v52, 0, (unsigned int)(v41 - v52));
          }
          else
          {
            *((_DWORD *)v43 + 4) = 0;
          }
          if ( (v118 & 4) == 0 )
          {
            *((_WORD *)v43 + 1) |= *((_WORD *)*v51 + 1) & 0x140C;
            if ( (_BYTE)v143 )
            {
              v155[0] = 257;
              v155[1] = 50331648;
              v155[2] = 4;
              v126 = 0;
              while ( 1 )
              {
                v91 = *((_WORD *)v43 + 1);
                if ( (v91 & 4) != 0 )
                {
                  if ( v91 >= 0 )
                  {
                    v92 = *((_QWORD *)v43 + 4);
                  }
                  else
                  {
                    v107 = *((unsigned int *)v43 + 4);
                    v92 = (_DWORD)v107 ? (__int64)&v43[v107] : 0LL;
                  }
                }
                else
                {
                  v92 = 0LL;
                }
                AceBySid = RtlFindAceBySid(v92, v155, &v126);
                if ( !AceBySid )
                  break;
                v94 = AceBySid[1] & 0xF4 | 8;
                ++v126;
                AceBySid[1] = v94;
              }
            }
          }
          if ( *((_DWORD *)v43 + 4) && (a5 & 0x4000) != 0 )
          {
            RtlpNormalizeAcl((__int64)v44, (__int64)v44, 0LL);
            v41 = v44[1];
          }
          v53 = (char *)v44 + v41;
          v54 = Size[0];
          memmove(v53, Src, Size[0]);
          v55 = &v53[v54];
          v23 = BYTE5(v123) == 0;
          *((_DWORD *)v43 + 1) = (_DWORD)v53 - (_DWORD)v43;
          if ( v23 )
            *((_WORD *)v43 + 1) |= *((_WORD *)*v51 + 1) & 1;
          memmove(v55, v129, v39);
          v23 = BYTE6(v123) == 0;
          *((_DWORD *)v43 + 2) = (_DWORD)v55 - (_DWORD)v43;
          if ( v23 )
            *((_WORD *)v43 + 1) |= *((_WORD *)*v51 + 1) & 2;
          *v51 = v43;
          valid = 0;
          goto LABEL_63;
        }
LABEL_115:
        v50 = 0;
        goto LABEL_49;
      }
      if ( (v33 & 4) != 0 )
      {
        if ( v33 >= 0 )
        {
          v109 = *(_QWORD *)(v11 + 32);
        }
        else
        {
          v108 = *(_DWORD *)(v11 + 16);
          if ( v108 )
            LODWORD(v109) = v11 + v108;
          else
            LODWORD(v109) = 0;
        }
      }
      else
      {
        LODWORD(v109) = 0;
      }
      v113 = *v134;
      v114 = *(_WORD *)(*v134 + 2);
      v115 = v114;
      if ( (v114 & 4) != 0 )
      {
        if ( v114 >= 0 )
        {
          v117 = *(_QWORD *)(v113 + 32);
        }
        else
        {
          v116 = *(_DWORD *)(v113 + 16);
          if ( v116 )
            LODWORD(v117) = v113 + v116;
          else
            LODWORD(v117) = 0;
        }
      }
      else
      {
        LODWORD(v117) = 0;
      }
      valid = RtlpComputeMergedAcl(
                v117,
                v115 & 0x140C,
                v109,
                *(_WORD *)(v11 + 2) & 0x140C,
                (__int64)Src,
                (__int64)v129,
                v137,
                1,
                (__int64)&v154,
                (__int64)&v123);
      if ( valid >= 0 )
      {
        v35 = (void *)v154;
        v37 = 1;
        v34 = (unsigned __int16 *)v154;
        v122 = 1;
        P = (PVOID)v154;
        v118 |= v123 & 0x1408 | 4;
        goto LABEL_33;
      }
      v58 = Buf1[0];
      goto LABEL_210;
    }
    if ( TokenTrustLevel )
    {
      v126 = 0;
      while ( 1 )
      {
        v88 = RtlFindAceByType((__int64)v16, 20, &v126);
        v90 = v88;
        if ( v88 )
        {
          if ( (*((_DWORD *)v88 + 1) & 0xFF000000) != 0 )
            goto LABEL_141;
          if ( !RtlpValidTrustSubjectContext(v65, (__int64)(v88 + 8), v89, &v146) )
            break;
        }
        ++v126;
        if ( !v90 )
          goto LABEL_85;
      }
    }
    valid = -1073741790;
  }
LABEL_77:
  if ( v142 == &SubjectContext )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)valid;
}
