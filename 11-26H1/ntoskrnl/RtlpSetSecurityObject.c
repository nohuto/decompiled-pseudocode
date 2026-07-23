/*
 * XREFs of RtlpSetSecurityObject @ 0x1408FE500
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1408C4CC8 (CmpSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfo @ 0x1408FCFA0 (SeSetSecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408FCFF0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x1408FD750 (SeDefaultObjectMethod.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x140AAE010 (SeSetSecurityDescriptorInfoEx.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140AFA774 (IopSetDeviceSecurityDescriptor.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     SepLocateTokenTrustLevel @ 0x1403AB850 (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x1403AF76C (RtlpValidTrustSubjectContext.c)
 *     RtlFindAceBySid @ 0x140405490 (RtlFindAceBySid.c)
 *     RtlSidDominates @ 0x14040CB40 (RtlSidDominates.c)
 *     RtlFindAceByType @ 0x1404281B0 (RtlFindAceByType.c)
 *     SepCopyTokenIntegrity @ 0x14043A480 (SepCopyTokenIntegrity.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1408E6F44 (RtlpCreateServerAcl.c)
 *     RtlpNormalizeAcl @ 0x1408E72B0 (RtlpNormalizeAcl.c)
 *     RtlpCombineAcls @ 0x1408E9DA0 (RtlpCombineAcls.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     SeSinglePrivilegeCheckEx @ 0x14090E300 (SeSinglePrivilegeCheckEx.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x1409C9D00 (RtlpApplyAclToObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140A6AD40 (RtlpValidFilterAclSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x140AAE5AC (SepValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x140B53C90 (RtlpComputeMergedAcl.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  ACL *v16; // r15
  __int64 v17; // rax
  __int16 v18; // cx
  __int64 v19; // rcx
  ACL *v20; // r13
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
  unsigned __int16 *v31; // rsi
  __int16 v32; // cx
  unsigned __int16 *v33; // r15
  void *v34; // rdi
  __int16 v35; // dx
  char v36; // r13
  int v37; // ecx
  unsigned int v38; // r13d
  unsigned int v39; // r14d
  __int64 v40; // rsi
  char *PoolWithTag; // rax
  char *v42; // rbx
  unsigned __int16 *v43; // rdi
  __int16 v44; // ax
  __int64 v45; // rdx
  __int16 v46; // cx
  void *v47; // rcx
  __int64 v48; // rcx
  int v49; // r12d
  char **v50; // r12
  __int64 v51; // rcx
  char *v52; // rsi
  __int64 v53; // rdi
  char *v54; // rdi
  int valid; // ebx
  ACL *v56; // r13
  PVOID v57; // rdi
  void *v58; // rsi
  void *v59; // r14
  void *v60; // r15
  void *v61; // r12
  _DWORD *TokenTrustLevel; // rax
  void *v64; // rsi
  char v65; // al
  char v66; // si
  __int64 v67; // rax
  int v68; // esi
  __int16 v69; // r8
  __int64 v70; // rcx
  unsigned __int8 *v71; // r10
  __int64 *v72; // r14
  unsigned __int8 *v73; // r11
  unsigned __int8 *v74; // r9
  __int64 v75; // rax
  __int16 v76; // cx
  __int64 v77; // rcx
  ACL *v78; // rbx
  _DWORD *AceByType; // rax
  _DWORD *v80; // rsi
  PSID SeMediumMandatorySid; // rdi
  __int64 ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v84; // r8
  _DWORD *v85; // rax
  __int64 v86; // r8
  _DWORD *v87; // r11
  __int16 v88; // ax
  __int64 v89; // rcx
  unsigned __int8 *AceBySid; // rax
  unsigned __int8 v91; // cl
  __int64 v92; // rax
  __int16 v93; // ax
  __int16 v94; // r8
  unsigned int v95; // edx
  unsigned int v96; // edx
  unsigned int v97; // edx
  unsigned int v98; // edx
  unsigned int v99; // edx
  unsigned int v100; // eax
  __int64 v101; // rax
  void *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  int v105; // eax
  __int64 v106; // r8
  PSID v107; // rbx
  int v108; // r12d
  unsigned int v109; // eax
  __int64 v110; // rcx
  __int16 v111; // ax
  __int16 v112; // dx
  int v113; // eax
  __int64 v114; // rax
  __int16 v115; // [rsp+58h] [rbp-B0h]
  BOOLEAN Dominates; // [rsp+5Ch] [rbp-ACh] BYREF
  char v117; // [rsp+5Dh] [rbp-ABh]
  char v118; // [rsp+5Eh] [rbp-AAh] BYREF
  char v119; // [rsp+5Fh] [rbp-A9h]
  __int64 v120; // [rsp+60h] [rbp-A8h] BYREF
  int v121; // [rsp+68h] [rbp-A0h]
  char v122; // [rsp+6Ch] [rbp-9Ch]
  ULONG Index[2]; // [rsp+70h] [rbp-98h] BYREF
  PVOID v124; // [rsp+78h] [rbp-90h]
  unsigned __int8 *v125; // [rsp+80h] [rbp-88h]
  void *Src; // [rsp+88h] [rbp-80h]
  PVOID v127; // [rsp+90h] [rbp-78h]
  PVOID v128; // [rsp+98h] [rbp-70h]
  PVOID v129; // [rsp+A0h] [rbp-68h]
  __int64 *v130; // [rsp+A8h] [rbp-60h]
  __int64 v131; // [rsp+B0h] [rbp-58h]
  PVOID v132; // [rsp+B8h] [rbp-50h]
  __int64 v133; // [rsp+C0h] [rbp-48h]
  __int16 v134; // [rsp+C8h] [rbp-40h]
  PVOID Sid1[2]; // [rsp+D0h] [rbp-38h] BYREF
  int v136; // [rsp+E0h] [rbp-28h]
  _DWORD Size[3]; // [rsp+E4h] [rbp-24h]
  struct _SECURITY_SUBJECT_CONTEXT *v138; // [rsp+F0h] [rbp-18h]
  unsigned int v139; // [rsp+F8h] [rbp-10h]
  PVOID P; // [rsp+100h] [rbp-8h]
  PVOID v141; // [rsp+108h] [rbp+0h] BYREF
  NTSTATUS v142; // [rsp+110h] [rbp+8h] BYREF
  int v143; // [rsp+114h] [rbp+Ch]
  __int64 v144; // [rsp+118h] [rbp+10h] BYREF
  __int64 v145; // [rsp+120h] [rbp+18h] BYREF
  __int64 v146; // [rsp+128h] [rbp+20h] BYREF
  __int64 v147; // [rsp+130h] [rbp+28h] BYREF
  __int64 v148; // [rsp+138h] [rbp+30h] BYREF
  ACL *v149; // [rsp+140h] [rbp+38h] BYREF
  __int64 v150; // [rsp+148h] [rbp+40h] BYREF
  _DWORD v151[12]; // [rsp+150h] [rbp+48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+180h] [rbp+78h] BYREF

  p_SubjectContext = a8;
  LOBYTE(v8) = 0;
  v11 = a3;
  v13 = 0LL;
  v143 = a6;
  v133 = a7;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v122 = 0;
  v121 = 0;
  LOBYTE(v139) = 0;
  v14 = *(_WORD *)(a3 + 2);
  v130 = a4;
  v131 = a3;
  v138 = a8;
  v142 = 0;
  P = 0LL;
  v150 = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  v141 = 0LL;
  Sid1[0] = 0LL;
  v144 = 0LL;
  v124 = 0LL;
  v146 = 0LL;
  v128 = 0LL;
  v145 = 0LL;
  v127 = 0LL;
  v147 = 0LL;
  v129 = 0LL;
  v148 = 0LL;
  v136 = v8;
  v120 = 0LL;
  v115 = 0x8000;
  v132 = 0LL;
  v149 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (v14 & 0x10) != 0 )
  {
    if ( v14 >= 0 )
    {
      v16 = *(ACL **)(a3 + 24);
    }
    else
    {
      v15 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v15 )
        v16 = (ACL *)(a3 + v15);
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
      v20 = *(ACL **)(v17 + 24);
    }
    else
    {
      v19 = *(unsigned int *)(v17 + 12);
      if ( (_DWORD)v19 )
        v20 = (ACL *)(v17 + v19);
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
    LOBYTE(v8) = v136;
    p_SubjectContext = &SubjectContext;
    v138 = &SubjectContext;
  }
  v21 = *a4;
  if ( !_bittest16((const signed __int16 *)(*a4 + 2), 0xFu) )
  {
    valid = -1073741593;
    goto LABEL_77;
  }
  v22 = *(unsigned __int16 *)(v11 + 2);
  v23 = (*(_WORD *)(v11 + 2) & 0x80) == 0;
  v134 = *(_WORD *)(v11 + 2) & 0x80;
  v24 = a2 & 0x80;
  v25 = a2 & 0x100;
  LOBYTE(Index[1]) = (v22 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v108 = a2 | 0x1FF;
    v109 = v108 & 0xFFFFFF7F;
    if ( v24 )
      v109 = v108;
    a2 = v109 & 0xFFFFFEFF;
    if ( v25 )
      a2 = v109;
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
        v136 = v8;
      }
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v100 = a2 >> 2;
    LOBYTE(v100) = (a2 & 4) == 0;
    v139 = v100;
    if ( (v22 & 0x8000u) == 0LL )
    {
      v102 = *(void **)(v11 + 8);
    }
    else
    {
      v101 = *(unsigned int *)(v11 + 4);
      if ( (_DWORD)v101 )
        v102 = (void *)(v11 + v101);
      else
        v102 = 0LL;
    }
    Src = v102;
    BYTE5(v120) = 1;
    if ( (a5 & 8) == 0 && !(unsigned __int8)SepValidOwnerSubjectContext(p_SubjectContext, v102, !v23, v22) )
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
      v103 = *(unsigned int *)(v11 + 8);
      if ( !(_DWORD)v103 )
      {
        v30 = 0LL;
        BYTE6(v120) = 1;
        goto LABEL_21;
      }
      v30 = (unsigned __int8 *)(v11 + v103);
    }
    BYTE6(v120) = 1;
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
  v125 = v30;
  if ( !v30 || !RtlValidSid(v30) )
    goto LABEL_252;
  if ( (a2 & 0x1F8) == 0 )
  {
    v31 = (unsigned __int16 *)v20;
    *(_QWORD *)&Size[1] = v20;
    goto LABEL_25;
  }
  Size[0] = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index[0] = 0;
    while ( 1 )
    {
      AceByType = RtlFindAceByType(v16, 0x11u, Index);
      v80 = AceByType;
      if ( AceByType )
      {
        v23 = (AceByType[1] & 0xFFFFFFF8) == 0;
        v13 = (char *)(AceByType + 2);
        BYTE4(v120) = *((_BYTE *)AceByType + 1);
        if ( !v23 )
          break;
      }
      Dominates = 0;
      SeMediumMandatorySid = v13;
      *(_OWORD *)Sid1 = 0LL;
      if ( !v13 )
        SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
      ClientToken = (__int64)p_SubjectContext->ClientToken;
      if ( !ClientToken )
        ClientToken = (__int64)v138->PrimaryToken;
      if ( *(_DWORD *)(ClientToken + 192) == 2 && *(int *)(ClientToken + 196) < 2 )
        break;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(ClientToken + 48), 1u);
      SepCopyTokenIntegrity(ClientToken, (__int64)Sid1);
      ExReleaseResourceLite(*(PERESOURCE *)(ClientToken + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( (v120 & 0x800000000LL) != 0 )
      {
        v107 = SeExports->SeMediumMandatorySid;
        if ( RtlSidDominates(SeMediumMandatorySid, v107, &Dominates) < 0 )
          break;
        if ( !Dominates )
          SeMediumMandatorySid = v107;
      }
      if ( RtlSidDominates(Sid1[0], SeMediumMandatorySid, &Dominates) < 0 )
        break;
      p_SubjectContext = v138;
      if ( !Dominates )
      {
        LOBYTE(v84) = 1;
        if ( !(unsigned __int8)SeSinglePrivilegeCheckEx(SeRelabelPrivilege, v138, v84) )
          break;
      }
      ++Index[0];
      if ( !v80 )
        goto LABEL_84;
    }
LABEL_141:
    valid = -1073740730;
  }
  else
  {
LABEL_84:
    TokenTrustLevel = SepLocateTokenTrustLevel(p_SubjectContext);
    v64 = TokenTrustLevel;
    if ( (a2 & 0x80) == 0 )
    {
LABEL_85:
      if ( (a2 & 0x100) != 0 )
      {
        valid = RtlpValidFilterAclSubjectContext(v16);
        if ( valid < 0 )
          goto LABEL_77;
        v65 = a5;
        if ( (a5 & 2) != 0 )
          goto LABEL_88;
        valid = RtlpValidFilterAclSubjectContext(v20);
        if ( valid < 0 )
          goto LABEL_77;
      }
      v65 = a5;
LABEL_88:
      v66 = v65;
      v67 = v131;
      if ( (a2 & 8) != 0 )
      {
        v95 = *(unsigned __int16 *)(v131 + 2);
        v68 = v66 & 2;
        if ( v68 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v20,
                    (*(_WORD *)(*v130 + 2) & 0x2800 | (*(unsigned __int16 *)(*v130 + 2) >> 1) & 0x18u) >> 1,
                    (int)v16,
                    (v95 & 0x2800 | (v95 >> 1) & 0x18) >> 1,
                    (__int64)Src,
                    (__int64)v125,
                    v133,
                    2,
                    (__int64)&v144,
                    (__int64)&v120);
          if ( valid < 0 )
          {
            v57 = (PVOID)v144;
LABEL_210:
            v58 = v128;
            goto LABEL_211;
          }
          HIBYTE(v120) = 1;
          Sid1[0] = (PVOID)v144;
          v67 = v131;
          v115 = 2 * (v120 & 0x1400 | (2 * (v120 & 8 | 0x2004)));
        }
        else
        {
          Sid1[0] = v16;
          v115 = v95 & 0x2000 | 0x8010;
          if ( (v95 & 0xA00) == 0xA00 )
            v115 = v95 & 0x2000 | 0x8810;
        }
      }
      else
      {
        Sid1[0] = v20;
        v68 = v66 & 2;
      }
      if ( (a2 & 0x20) != 0 )
      {
        v98 = *(unsigned __int16 *)(v67 + 2);
        if ( v68 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v20,
                    (*(_WORD *)(*v130 + 2) & 0x800 | (*(unsigned __int16 *)(*v130 + 2) >> 1) & 0x18u) >> 1,
                    (int)v16,
                    (v98 & 0x800 | (v98 >> 1) & 0x18) >> 1,
                    (__int64)Src,
                    (__int64)v125,
                    v133,
                    2,
                    (__int64)&v145,
                    (__int64)&v120);
          if ( valid < 0 )
          {
            v58 = (void *)v145;
            v57 = Sid1[0];
            goto LABEL_211;
          }
          LOBYTE(v121) = 1;
          v128 = (PVOID)v145;
          v69 = (2 * (v120 & 0x1400 | (2 * (v120 & 8 | 4)))) | v115;
          v115 = v69;
        }
        else
        {
          v128 = v16;
          v69 = v98 & 0x2000 | 0x10 | v115;
          v115 = v69;
          if ( (v98 & 0xA00) == 0xA00 )
          {
            v69 |= 0x800u;
            v115 = v69;
          }
        }
      }
      else
      {
        v69 = v115;
        v128 = v20;
      }
      v70 = v131;
      if ( (a2 & 0x40) != 0 )
      {
        v99 = *(unsigned __int16 *)(v131 + 2);
        if ( v68 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v20,
                    (*(_WORD *)(*v130 + 2) & 0x800 | (*(unsigned __int16 *)(*v130 + 2) >> 1) & 0x18u) >> 1,
                    (int)v16,
                    (v99 & 0x800 | (v99 >> 1) & 0x18) >> 1,
                    (__int64)Src,
                    (__int64)v125,
                    v133,
                    2,
                    (__int64)&v146,
                    (__int64)&v120);
          if ( valid < 0 )
          {
            v60 = (void *)v146;
            v57 = Sid1[0];
            v58 = v128;
            goto LABEL_212;
          }
          v71 = (unsigned __int8 *)v146;
          BYTE1(v121) = 1;
          v124 = (PVOID)v146;
          v69 = (2 * (v120 & 0x1400 | (2 * (v120 & 8 | 4)))) | v115;
          v70 = v131;
          v115 = v69;
        }
        else
        {
          v124 = v16;
          v71 = (unsigned __int8 *)v16;
          v69 |= v99 & 0x2000 | 0x10;
          v115 = v69;
          if ( (v99 & 0xA00) == 0xA00 )
          {
            v69 |= 0x800u;
            v115 = v69;
          }
        }
      }
      else
      {
        v71 = (unsigned __int8 *)v20;
        v124 = v20;
      }
      v72 = v130;
      if ( (a2 & 0x80) != 0 )
      {
        v96 = *(unsigned __int16 *)(v70 + 2);
        if ( v68 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v20,
                    (*(_WORD *)(*v130 + 2) & 0x800 | (*(unsigned __int16 *)(*v130 + 2) >> 1) & 0x18u) >> 1,
                    (int)v16,
                    (v96 & 0x800 | (v96 >> 1) & 0x18) >> 1,
                    (__int64)Src,
                    (__int64)v125,
                    v133,
                    2,
                    (__int64)&v147,
                    (__int64)&v120);
          if ( valid < 0 )
          {
            v61 = (void *)v147;
            v57 = Sid1[0];
            v58 = v128;
            v60 = v124;
            goto LABEL_213;
          }
          v73 = (unsigned __int8 *)v147;
          v71 = (unsigned __int8 *)v124;
          BYTE2(v121) = 1;
          v127 = (PVOID)v147;
          v69 = (2 * (v120 & 0x1400 | (2 * (v120 & 8 | 4)))) | v115;
          v70 = v131;
          v115 = v69;
        }
        else
        {
          v127 = v16;
          v69 |= v96 & 0x2000 | 0x10;
          v73 = (unsigned __int8 *)v16;
          v115 = v69;
          if ( (v96 & 0xA00) == 0xA00 )
          {
            v69 |= 0x800u;
            v115 = v69;
          }
        }
      }
      else
      {
        v73 = (unsigned __int8 *)v20;
        v127 = v20;
      }
      if ( (a2 & 0x100) != 0 )
      {
        v97 = *(unsigned __int16 *)(v70 + 2);
        if ( v68 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v20,
                    (*(_WORD *)(*v72 + 2) & 0x800 | (*(unsigned __int16 *)(*v72 + 2) >> 1) & 0x18u) >> 1,
                    (int)v16,
                    (v97 & 0x800 | (v97 >> 1) & 0x18) >> 1,
                    (__int64)Src,
                    (__int64)v125,
                    v133,
                    2,
                    (__int64)&v148,
                    (__int64)&v120);
          if ( valid < 0 )
          {
            v59 = (void *)v148;
            v57 = Sid1[0];
            v58 = v128;
            v60 = v124;
            v61 = v127;
            goto LABEL_214;
          }
          v74 = (unsigned __int8 *)v148;
          v71 = (unsigned __int8 *)v124;
          v73 = (unsigned __int8 *)v127;
          HIBYTE(v121) = 1;
          v129 = (PVOID)v148;
          v69 = (2 * (v120 & 0x1400 | (2 * (v120 & 8 | 4)))) | v115;
          v70 = v131;
          v115 = v69;
        }
        else
        {
          v129 = v16;
          v74 = (unsigned __int8 *)v16;
          v69 |= v97 & 0x2000 | 0x10;
          v115 = v69;
          if ( (v97 & 0xA00) == 0xA00 )
          {
            v69 |= 0x800u;
            v115 = v69;
          }
        }
      }
      else
      {
        v74 = (unsigned __int8 *)v20;
        v129 = v20;
      }
      if ( Size[0] )
      {
        v93 = *(_WORD *)(v70 + 2);
        v94 = v93 & 0x2000 | 0x10 | v69;
        v115 = v94;
        if ( (v93 & 0xA00) == 0xA00 )
          v115 = v94 | 0x800;
      }
      else
      {
        v16 = v20;
      }
      v58 = v128;
      v57 = Sid1[0];
      valid = RtlpCombineAcls(
                (unsigned __int8 *)Sid1[0],
                (unsigned __int8 *)v16,
                (unsigned __int8 *)v128,
                v71,
                v73,
                v74,
                &v141,
                0LL);
      if ( valid < 0 )
      {
LABEL_211:
        v60 = v124;
LABEL_212:
        v61 = v127;
LABEL_213:
        v59 = v129;
LABEL_214:
        v56 = (ACL *)v132;
LABEL_67:
        if ( v57 && HIBYTE(v120) )
          ExFreePoolWithTag(v57, 0);
        if ( v58 && (_BYTE)v121 )
          ExFreePoolWithTag(v58, 0);
        if ( v60 && BYTE1(v121) )
          ExFreePoolWithTag(v60, 0);
        if ( v61 && BYTE2(v121) )
          ExFreePoolWithTag(v61, 0);
        if ( v59 && HIBYTE(v121) )
          ExFreePoolWithTag(v59, 0);
        if ( *(_QWORD *)&Size[1] && v122 )
          ExFreePoolWithTag(*(PVOID *)&Size[1], 0);
        if ( v117 )
          ExFreePoolWithTag(v56, 0);
        goto LABEL_77;
      }
      v31 = (unsigned __int16 *)v141;
      *(_QWORD *)&Size[1] = v141;
      if ( !v57 && v141 && !*((_WORD *)v141 + 2) )
      {
        ExFreePoolWithTag(v141, 0);
        v31 = 0LL;
        *(_QWORD *)&Size[1] = 0LL;
        v141 = 0LL;
      }
      v11 = v131;
      v122 = 1;
LABEL_25:
      if ( (a2 & 4) == 0 )
      {
        v75 = *v130;
        v76 = *(_WORD *)(*v130 + 2);
        if ( (v76 & 4) != 0 )
        {
          if ( v76 >= 0 )
          {
            v33 = *(unsigned __int16 **)(v75 + 32);
          }
          else
          {
            v77 = *(unsigned int *)(v75 + 16);
            if ( (_DWORD)v77 )
              v33 = (unsigned __int16 *)(v75 + v77);
            else
              v33 = 0LL;
          }
        }
        else
        {
          v33 = 0LL;
        }
        goto LABEL_34;
      }
      v32 = *(_WORD *)(v11 + 2);
      if ( (a5 & 1) == 0 )
      {
        if ( (v32 & 4) != 0 )
        {
          if ( v32 < 0 )
          {
            v92 = *(unsigned int *)(v11 + 16);
            if ( (_DWORD)v92 )
              v33 = (unsigned __int16 *)(v11 + v92);
            else
              v33 = 0LL;
          }
          else
          {
            v33 = *(unsigned __int16 **)(v11 + 32);
          }
        }
        else
        {
          v33 = 0LL;
        }
        v34 = P;
        v35 = v32 & 0x1000 | 4 | v115;
        v115 = v35;
        if ( (v32 & 0x500) == 0x500 )
          v115 = v35 | 0x400;
        v36 = 0;
LABEL_33:
        if ( v134 )
        {
          valid = RtlpCreateServerAcl(
                    (__int64)v33,
                    Index[1],
                    *(unsigned __int8 **)(*((_QWORD *)v138->PrimaryToken + 19)
                                        + 16LL * *((unsigned int *)v138->PrimaryToken + 36)),
                    &v149,
                    &v118);
          v117 = v118;
          if ( valid < 0 )
          {
            v56 = v149;
            goto LABEL_64;
          }
          v78 = v149;
          v132 = v149;
          if ( v118 )
          {
            if ( v36 )
              ExFreePoolWithTag(v34, 0);
            v117 = 0;
            v119 = 1;
            P = v78;
          }
          v33 = (unsigned __int16 *)v78;
        }
LABEL_34:
        v37 = 4 * *((unsigned __int8 *)Src + 1) + 8;
        Size[0] = v37;
        v38 = 4 * v125[1] + 8;
        if ( v31 )
          v39 = (v31[1] + 3) & 0xFFFFFFFC;
        else
          v39 = 0;
        if ( v33 )
          v40 = (v33[1] + 3) & 0xFFFFFFFC;
        else
          v40 = 0LL;
        PoolWithTag = (char *)ExAllocatePoolWithTag(
                                (POOL_TYPE)(v143 | 0x400),
                                v38 + v39 + (_DWORD)v40 + v37 + 20,
                                0x64536553u);
        v42 = PoolWithTag;
        if ( !PoolWithTag )
        {
          valid = -1073741801;
LABEL_63:
          v56 = (ACL *)v132;
LABEL_64:
          if ( v119 )
            ExFreePoolWithTag(P, 0);
          v57 = Sid1[0];
          v58 = v128;
          v59 = v129;
          v60 = v124;
          v61 = v127;
          goto LABEL_67;
        }
        v43 = (unsigned __int16 *)(PoolWithTag + 20);
        v23 = (_BYTE)v136 == 0;
        *(_OWORD *)PoolWithTag = 0LL;
        *((_DWORD *)PoolWithTag + 4) = 0;
        v44 = v115;
        *v42 = 1;
        if ( !v23 )
          v44 = v115 | 0x800;
        v45 = v131;
        v46 = *((_WORD *)v42 + 1) | v44;
        *((_WORD *)v42 + 1) = v46;
        if ( (*(_WORD *)(v45 + 2) & 0x4000) != 0 )
        {
          v42[1] = *(_BYTE *)(v45 + 1);
          *((_WORD *)v42 + 1) = v46 | 0x4000;
        }
        if ( !*(_QWORD *)&Size[1] )
          goto LABEL_115;
        v47 = v42 + 20;
        if ( (a5 & 0x4000) != 0 )
        {
          RtlpNormalizeAcl((__int64)v47, *(__int64 *)&Size[1], (_DWORD *)v133);
          if ( !*((_WORD *)v42 + 12) )
            goto LABEL_115;
          v39 = *((unsigned __int16 *)v42 + 11);
        }
        else
        {
          memmove(v47, *(const void **)&Size[1], *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 2LL));
          RtlpApplyAclToObject(v42 + 20, v133);
          v48 = *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 2LL);
          if ( v39 > (unsigned int)v48 )
            memset_0((char *)v43 + v48, 0, v39 - (unsigned int)v48);
        }
        if ( v42 != (char *)-20LL )
        {
          v43 = (unsigned __int16 *)((char *)v43 + v39);
          v49 = 20;
LABEL_49:
          *((_DWORD *)v42 + 3) = v49;
          v50 = (char **)v130;
          if ( (v115 & 0x10) == 0 )
            *((_WORD *)v42 + 1) |= *(_WORD *)(*v130 + 2) & 0x2830;
          if ( v33 )
          {
            memmove(v43, v33, v33[1]);
            RtlpApplyAclToObject(v43, v133);
            *((_DWORD *)v42 + 4) = (_DWORD)v43 - (_DWORD)v42;
            v51 = v33[1];
            if ( (unsigned int)v40 > (unsigned int)v51 )
              memset_0((char *)v43 + v51, 0, (unsigned int)(v40 - v51));
          }
          else
          {
            *((_DWORD *)v42 + 4) = 0;
          }
          if ( (v115 & 4) == 0 )
          {
            *((_WORD *)v42 + 1) |= *((_WORD *)*v50 + 1) & 0x140C;
            if ( (_BYTE)v139 )
            {
              v151[0] = 257;
              v151[1] = 50331648;
              v151[2] = 4;
              Index[0] = 0;
              while ( 1 )
              {
                v88 = *((_WORD *)v42 + 1);
                if ( (v88 & 4) != 0 )
                {
                  if ( v88 >= 0 )
                  {
                    v89 = *((_QWORD *)v42 + 4);
                  }
                  else
                  {
                    v104 = *((unsigned int *)v42 + 4);
                    v89 = (_DWORD)v104 ? (__int64)&v42[v104] : 0LL;
                  }
                }
                else
                {
                  v89 = 0LL;
                }
                AceBySid = RtlFindAceBySid(v89, v151, Index);
                if ( !AceBySid )
                  break;
                v91 = AceBySid[1] & 0xF4 | 8;
                ++Index[0];
                AceBySid[1] = v91;
              }
            }
          }
          if ( *((_DWORD *)v42 + 4) && (a5 & 0x4000) != 0 )
          {
            RtlpNormalizeAcl((__int64)v43, (__int64)v43, 0LL);
            v40 = v43[1];
          }
          v52 = (char *)v43 + v40;
          v53 = Size[0];
          memmove(v52, Src, Size[0]);
          v54 = &v52[v53];
          v23 = BYTE5(v120) == 0;
          *((_DWORD *)v42 + 1) = (_DWORD)v52 - (_DWORD)v42;
          if ( v23 )
            *((_WORD *)v42 + 1) |= *((_WORD *)*v50 + 1) & 1;
          memmove(v54, v125, v38);
          v23 = BYTE6(v120) == 0;
          *((_DWORD *)v42 + 2) = (_DWORD)v54 - (_DWORD)v42;
          if ( v23 )
            *((_WORD *)v42 + 1) |= *((_WORD *)*v50 + 1) & 2;
          *v50 = v42;
          valid = 0;
          goto LABEL_63;
        }
LABEL_115:
        v49 = 0;
        goto LABEL_49;
      }
      if ( (v32 & 4) != 0 )
      {
        if ( v32 >= 0 )
        {
          v106 = *(_QWORD *)(v11 + 32);
        }
        else
        {
          v105 = *(_DWORD *)(v11 + 16);
          if ( v105 )
            LODWORD(v106) = v11 + v105;
          else
            LODWORD(v106) = 0;
        }
      }
      else
      {
        LODWORD(v106) = 0;
      }
      v110 = *v130;
      v111 = *(_WORD *)(*v130 + 2);
      v112 = v111;
      if ( (v111 & 4) != 0 )
      {
        if ( v111 >= 0 )
        {
          v114 = *(_QWORD *)(v110 + 32);
        }
        else
        {
          v113 = *(_DWORD *)(v110 + 16);
          if ( v113 )
            LODWORD(v114) = v110 + v113;
          else
            LODWORD(v114) = 0;
        }
      }
      else
      {
        LODWORD(v114) = 0;
      }
      valid = RtlpComputeMergedAcl(
                v114,
                v112 & 0x140C,
                v106,
                *(_WORD *)(v11 + 2) & 0x140C,
                (__int64)Src,
                (__int64)v125,
                v133,
                1,
                (__int64)&v150,
                (__int64)&v120);
      if ( valid >= 0 )
      {
        v34 = (void *)v150;
        v36 = 1;
        v33 = (unsigned __int16 *)v150;
        v119 = 1;
        P = (PVOID)v150;
        v115 |= v120 & 0x1408 | 4;
        goto LABEL_33;
      }
      v57 = Sid1[0];
      goto LABEL_210;
    }
    if ( TokenTrustLevel )
    {
      Index[0] = 0;
      while ( 1 )
      {
        v85 = RtlFindAceByType(v16, 0x14u, Index);
        v87 = v85;
        if ( v85 )
        {
          if ( (v85[1] & 0xFF000000) != 0 )
            goto LABEL_141;
          if ( !RtlpValidTrustSubjectContext(v64, v85 + 2, v86, &v142) )
            break;
        }
        ++Index[0];
        if ( !v87 )
          goto LABEL_85;
      }
    }
    valid = -1073741790;
  }
LABEL_77:
  if ( v138 == &SubjectContext )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)valid;
}
