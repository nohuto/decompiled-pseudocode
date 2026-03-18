/*
 * XREFs of SepCreateTokenEx @ 0x14025F384
 * Callers:
 *     SepCreateToken @ 0x140815004 (SepCreateToken.c)
 *     NtCreateTokenEx @ 0x140A44080 (NtCreateTokenEx.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x1402604DC (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlSidHashInitialize @ 0x140260B30 (RtlSidHashInitialize.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     RtlWalkFrameChain @ 0x140262D70 (RtlWalkFrameChain.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     DbgPrint @ 0x140396F60 (DbgPrint.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SepAddTokenLogonSession @ 0x140774EB0 (SepAddTokenLogonSession.c)
 *     RtlLengthRequiredSid @ 0x1408E9A40 (RtlLengthRequiredSid.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     SepFinalizeTokenAcls @ 0x140926FDC (SepFinalizeTokenAcls.c)
 *     ObInsertObject @ 0x14092AFB0 (ObInsertObject.c)
 *     ObCreateObject @ 0x140932FB0 (ObCreateObject.c)
 *     SeCreateAccessState @ 0x140A10980 (SeCreateAccessState.c)
 *     RtlCopySid @ 0x140A2AE10 (RtlCopySid.c)
 *     RtlCopySidAndAttributesArray @ 0x140A33F00 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenTrust @ 0x140A48600 (SepSetTokenTrust.c)
 *     SepSetTokenUserAndGroups @ 0x140A802F4 (SepSetTokenUserAndGroups.c)
 *     SepReferenceLogonSession @ 0x140AB6FB0 (SepReferenceLogonSession.c)
 *     SepSetTokenClaims @ 0x140AEFE60 (SepSetTokenClaims.c)
 *     RtlIdentifierAuthoritySid @ 0x140AFB42C (RtlIdentifierAuthoritySid.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCreateTokenEx(
        HANDLE *a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        void **a9,
        int a10,
        __int64 a11,
        int a12,
        unsigned int a13,
        __int64 a14,
        PSID a15,
        void *a16,
        void *a17,
        _OWORD *a18,
        __int64 a19,
        __int64 a20,
        int a21,
        __int64 a22,
        _DWORD *a23,
        char a24)
{
  PSID *v24; // r15
  PSID v27; // rdi
  unsigned int v28; // r12d
  __int64 v29; // rdx
  __int64 result; // rax
  void *v31; // r14
  unsigned int v32; // ebx
  unsigned int v33; // esi
  __int64 v34; // rax
  PSID v35; // rbx
  bool v36; // r15
  bool v37; // si
  int v38; // eax
  int v39; // r10d
  unsigned int v40; // edi
  int v41; // edx
  unsigned __int8 *v42; // rbx
  PSID_IDENTIFIER_AUTHORITY v43; // rax
  char v44; // dl
  __int64 v45; // r8
  int v46; // r10d
  int v47; // ecx
  __int64 v48; // r15
  __int64 v49; // r10
  __int64 v50; // r9
  unsigned int i; // edx
  __int64 v52; // rax
  int v53; // ecx
  unsigned __int64 v54; // r8
  _DWORD *Pool2; // rax
  _DWORD *v56; // rsi
  _QWORD *v57; // rax
  PVOID v58; // rdi
  _QWORD *v59; // rbx
  int v60; // edi
  __int64 v61; // rax
  unsigned int v62; // edi
  ULONG v63; // r12d
  unsigned int v64; // ecx
  int v65; // r14d
  int v66; // edi
  __int64 v67; // rax
  char *v68; // rdi
  _QWORD *v69; // rax
  __int64 v70; // rax
  int v71; // r14d
  __int64 v72; // rax
  PVOID v73; // rax
  __int64 v74; // rcx
  int v75; // esi
  int v76; // esi
  __int64 v77; // rdx
  __int64 v78; // rax
  char *v79; // rsi
  unsigned __int8 *v80; // r14
  ULONG v81; // ebx
  unsigned __int16 *v82; // rax
  char *v83; // rcx
  NTSTATUS inserted; // ebx
  char *v85; // rcx
  int v86; // r8d
  int v87; // r9d
  unsigned int v88; // eax
  int v89; // r10d
  void *v90; // rcx
  __int64 v91; // rdx
  _KPROCESS *Process; // rcx
  ULONG v93; // eax
  __int64 v94; // rcx
  int v95; // edx
  KSPIN_LOCK *p_Policy; // rdi
  unsigned __int16 v97; // r14
  __int64 v98; // r15
  int RecordedStackTraceIndex; // eax
  unsigned int v100; // [rsp+30h] [rbp-D0h]
  char v101; // [rsp+50h] [rbp-B0h]
  char v102; // [rsp+51h] [rbp-AFh] BYREF
  char v103; // [rsp+52h] [rbp-AEh]
  char v104; // [rsp+53h] [rbp-ADh]
  int v105; // [rsp+54h] [rbp-ACh]
  __int64 v106; // [rsp+58h] [rbp-A8h]
  __int64 v107; // [rsp+60h] [rbp-A0h] BYREF
  int v108; // [rsp+68h] [rbp-98h]
  int v109; // [rsp+6Ch] [rbp-94h]
  void *v110; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v111; // [rsp+78h] [rbp-88h]
  PSID v112; // [rsp+80h] [rbp-80h]
  int v113[2]; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  PSID Sid1; // [rsp+98h] [rbp-68h]
  unsigned int v116; // [rsp+A0h] [rbp-60h]
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v118; // [rsp+B0h] [rbp-50h]
  PHANDLE Handle; // [rsp+B8h] [rbp-48h]
  __int64 v120; // [rsp+C0h] [rbp-40h]
  __int64 v121; // [rsp+C8h] [rbp-38h]
  __int64 v122; // [rsp+D0h] [rbp-30h]
  int v123[2]; // [rsp+D8h] [rbp-28h]
  void *Src; // [rsp+E0h] [rbp-20h]
  __int64 v125; // [rsp+E8h] [rbp-18h]
  __int64 v126; // [rsp+F0h] [rbp-10h]
  __int64 v127; // [rsp+F8h] [rbp-8h]
  __int64 v128; // [rsp+100h] [rbp+0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v130[224]; // [rsp+1B0h] [rbp+B0h] BYREF
  void *retaddr; // [rsp+2D8h] [rbp+1D8h]

  v24 = a9;
  v27 = a15;
  v28 = a10;
  v122 = a7;
  v107 = a14;
  Sid1 = a16;
  Src = a17;
  v128 = a19;
  v127 = a20;
  v116 = a3;
  v104 = a2;
  Handle = a1;
  v126 = a22;
  v125 = a4;
  *(_QWORD *)v113 = a9;
  v109 = a10;
  *(_QWORD *)v123 = a11;
  v112 = a15;
  Object = 0LL;
  v110 = 0LL;
  v108 = -1;
  v105 = 0;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v130, 0, sizeof(v130));
  v118 = 0LL;
  LOBYTE(v29) = a2;
  v101 = 0;
  v103 = 0;
  v102 = 0;
  P = 0LL;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, v29, &v102);
  if ( (int)result < 0 )
    return result;
  v31 = *a9;
  v32 = 0;
  if ( a10 )
  {
    do
    {
      v33 = v32;
      if ( v32 < v28 )
      {
        do
        {
          if ( !RtlEqualSid(v31, *(PSID *)(a11 + 16LL * v33)) || (*(_DWORD *)(a11 + 16LL * v33 + 8) & 0x20) != 0 )
            ++v33;
          else
            *(_OWORD *)(a11 + 16LL * v33) = *(_OWORD *)(a11 + 16LL * --v28);
        }
        while ( v33 < v28 );
        v109 = v28;
      }
      v34 = v32++;
      v31 = *(void **)(a11 + 16 * v34);
    }
    while ( v32 < v28 );
    v27 = v112;
    v24 = *(PSID **)v113;
  }
  v35 = *v24;
  v36 = RtlEqualSid(Sid1, *v24) != 0;
  if ( v27 )
    v37 = RtlEqualSid(v27, v35) != 0;
  else
    v37 = 1;
  v38 = *(_DWORD *)(*(_QWORD *)v113 + 8LL);
  if ( (v38 & 0x10) != 0 )
  {
    if ( (v38 & 6) != 0 )
      return 3221225485LL;
    v39 = 2048;
    v105 = 2048;
  }
  else
  {
    v39 = 0;
  }
  v40 = 0;
  v111 = 0;
  while ( v40 < v28 )
  {
    v41 = *(_DWORD *)(a11 + 16LL * v40 + 8);
    if ( (v41 & 1) != 0 )
    {
      v41 |= 6u;
      *(_DWORD *)(a11 + 16LL * v40 + 8) = v41;
    }
    if ( (v41 & 0x10) != 0 )
    {
      if ( (v41 & 6) != 0 )
        return 3221225485LL;
      v105 = v39 | 0x800;
    }
    v42 = *(unsigned __int8 **)(a11 + 16LL * v40);
    RtlIdentifierAuthoritySid(v42);
    v43 = RtlIdentifierAuthoritySid(SeUntrustedMandatorySid);
    v47 = *(_DWORD *)v43->Value - *(_DWORD *)v45;
    if ( *(_DWORD *)v43->Value == *(_DWORD *)v45 )
      v47 = *(unsigned __int16 *)&v43->Value[4] - *(unsigned __int16 *)(v45 + 4);
    if ( !v47 )
    {
      v86 = v42[1];
      if ( (_BYTE)v86 )
      {
        v87 = v42[1];
        if ( *(_DWORD *)&v42[4 * (v86 - 1) + 8] > 0x4000u )
          return 3221226566LL;
      }
      else
      {
        v87 = 0;
      }
      if ( (v44 & 0x40) != 0 )
      {
        if ( v108 != -1 )
          return 3221225485LL;
        v108 = v40 + 1;
        if ( (_BYTE)v86 )
        {
          v88 = *(_DWORD *)&v42[4 * (v87 - 1) + 8];
          if ( v88 >= 0x3000 )
          {
            v101 = 1;
            v89 = v46 | 0x2000;
LABEL_89:
            v105 = v89;
            goto LABEL_22;
          }
          v101 = 0;
          if ( v88 >= 0x2000 )
          {
            v89 = v46 | 0x2000;
            goto LABEL_89;
          }
        }
        else
        {
          v101 = 0;
        }
        v103 = 1;
      }
    }
LABEL_22:
    if ( !v36 )
      v36 = RtlEqualSid(Sid1, v42) != 0;
    if ( !v37 && RtlEqualSid(v112, v42) )
    {
      if ( (*(_DWORD *)(a11 + 16LL * v40 + 8) & 8) == 0 )
        return 3221225562LL;
      v111 = v40 + 1;
      v37 = 1;
    }
    v39 = v105;
    ++v40;
  }
  if ( !v36 )
    return 3221225563LL;
  if ( !v37 )
    return 3221225562LL;
  v48 = 0LL;
  v106 = 0LL;
  v49 = 0LL;
  v120 = 0LL;
  v50 = 0LL;
  v121 = 0LL;
  for ( i = 0; i < a13; ++i )
  {
    v52 = v107;
    if ( (*(_DWORD *)(v107 + 12LL * i + 8) & 0x7FFFFFF8) != 0 )
      return 3221225485LL;
    v53 = *(_DWORD *)(v107 + 12LL * i + 8) & 3;
    *(_DWORD *)(v107 + 12LL * i + 8) = v53;
    v54 = *(unsigned int *)(v52 + 12LL * i);
    if ( (unsigned int)v54 > 0x24 )
      return 3221225568LL;
    if ( _bittest64(&v48, v54) )
      return 3221225894LL;
    v48 |= 1LL << v54;
    v106 = v48;
    if ( (v53 & 2) != 0 )
    {
      _bittestandset64(&v49, (unsigned int)v54);
      v120 = v49;
    }
    if ( (v53 & 1) != 0 )
    {
      _bittestandset64(&v50, (unsigned int)v54);
      v121 = v50;
    }
  }
  if ( a23 && (*a23 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v56 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 0;
  v57 = Pool2 + 2;
  v57[1] = v57;
  *v57 = v57;
  v56[6] = 0;
  *((_QWORD *)v56 + 5) = v56 + 8;
  *((_QWORD *)v56 + 4) = v56 + 8;
  if ( !SeTokenLeakTracking )
  {
    v58 = 0LL;
    goto LABEL_42;
  }
  P = (PVOID)ExAllocatePool2(0x100uLL);
  v58 = P;
  if ( !P )
  {
    v90 = v56;
LABEL_104:
    ExFreePoolWithTag(v90, 0);
    return 3221225626LL;
  }
LABEL_42:
  v118 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  v59 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( !v59 )
  {
    ExFreePoolWithTag(v56, 0);
    if ( SeTokenLeakTracking )
    {
      v90 = v58;
      goto LABEL_104;
    }
    return 3221225626LL;
  }
  v60 = 16 * v28;
  if ( RtlpBootStatHandleLock.WaitBlockFill7[128] )
  {
    v62 = (v60 + 23) & 0xFFFFFFF8;
    LODWORD(v112) = a12;
  }
  else
  {
    v61 = **(_QWORD **)v113;
    LODWORD(v112) = (a12 + 7) & 0xFFFFFFF8;
    v62 = v60 + ((RtlLengthRequiredSid(*(unsigned __int8 *)(v61 + 1)) + 3) & 0xFFFFFFFC) + (_DWORD)v112 + 16;
  }
  LODWORD(v107) = v62;
  v63 = (RtlLengthRequiredSid(*((unsigned __int8 *)Sid1 + 1)) + 3) & 0xFFFFFFFC;
  if ( Src )
    v63 += (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
  v64 = v62 + 1168;
  v65 = 4096;
  if ( v63 >= 0x1000 )
    v65 = v63;
  LODWORD(v110) = v65;
  v100 = v65 + v64;
  LOBYTE(v64) = v104;
  v66 = ObCreateObject(v64, (_DWORD)SeTokenObjectType, v125, 1, 0, v62 + 1168, v100, 0, (__int64)&Object);
  if ( v66 >= 0 )
  {
    *((_QWORD *)Object + 6) = v59;
    if ( (unsigned __int64)v59 < 0xFFFF800000000000uLL || MmDeterminePoolType(v59) == 256 )
      ExpTraceLogBadResourceAddress(v59, retaddr);
    memset_0(v59, 0, 0x68uLL);
    v59[1] = v59;
    v67 = 0LL;
    *v59 = v59;
    v59[4] = 0LL;
    v59[5] = 0LL;
    v59[12] = 0LL;
    if ( (NtGlobalFlag & 0x2000) != 0 )
    {
      p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
      if ( NormalizationListLock.SchedulingGroup )
      {
        v98 = RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy);
        if ( v98 )
        {
          RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy);
          v97 = RecordedStackTraceIndex;
          if ( !RecordedStackTraceIndex )
            RtlStdReleaseStackTrace(p_Policy, v98);
        }
        else
        {
          v97 = 0;
        }
        v48 = v106;
      }
      else
      {
        v97 = 0;
      }
      v67 = v97;
      v65 = (int)v110;
    }
    v59[11] = v67;
    *((_DWORD *)v59 + 21) = -1;
    ExpAddResourceToSystemResourceList(v59);
    __incgsdword(0x9098u);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceInitialize(65544LL, v59, 0LL, 0LL);
    v68 = (char *)Object;
    *((_QWORD *)Object + 2) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    v69 = (_QWORD *)v122;
    *((_QWORD *)v68 + 4) = 0LL;
    *((_QWORD *)v68 + 28) = 0LL;
    v106 = 0LL;
    *((_QWORD *)v68 + 3) = *v69;
    v70 = v118;
    v68[204] = 0;
    *((_QWORD *)v68 + 7) = v70;
    v106 = 0LL;
    *((_QWORD *)v68 + 5) = *a8;
    *((_DWORD *)v68 + 48) = a5;
    *((_DWORD *)v68 + 49) = a6;
    LODWORD(v70) = v105;
    *(_OWORD *)v68 = *a18;
    *((_DWORD *)v68 + 50) = v70;
    LODWORD(v70) = v111;
    *((_DWORD *)v68 + 30) = 0;
    *((_QWORD *)v68 + 145) = 0LL;
    *((_DWORD *)v68 + 34) = v65;
    v71 = v107;
    *((_DWORD *)v68 + 35) = 0;
    *((_DWORD *)v68 + 36) = v70;
    LODWORD(v70) = v108;
    *((_QWORD *)v68 + 23) = 0LL;
    *((_QWORD *)v68 + 140) = 0LL;
    *((_QWORD *)v68 + 141) = 0LL;
    *((_DWORD *)v68 + 33) = v71;
    *((_DWORD *)v68 + 52) = v70;
    v72 = v120;
    *((_DWORD *)v68 + 53) = 0;
    *((_QWORD *)v68 + 8) = v48;
    *((_QWORD *)v68 + 9) = v72;
    *((_QWORD *)v68 + 10) = v121;
    *((_DWORD *)v68 + 200) = 0;
    *((_QWORD *)v68 + 99) = 0LL;
    *((_QWORD *)v68 + 98) = 0LL;
    *((_QWORD *)v68 + 135) = 0LL;
    *((_QWORD *)v68 + 136) = 0LL;
    *((_QWORD *)v68 + 144) = 0LL;
    memset_0(v68 + 808, 0, 0x110uLL);
    v73 = P;
    *((_QWORD *)v68 + 138) = 0LL;
    *((_QWORD *)v68 + 139) = 0LL;
    *((_QWORD *)v68 + 142) = 0LL;
    *((_QWORD *)v68 + 143) = v73;
    if ( a23 )
      *((_DWORD *)v68 + 53) = *a23;
    if ( !v101 )
    {
      *((_QWORD *)v68 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
      *((_QWORD *)v68 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
    }
    if ( v103 == 1 )
    {
      *((_QWORD *)v68 + 9) &= 0x202800000uLL;
      *((_QWORD *)v68 + 10) &= 0x202800000uLL;
    }
    v74 = v122;
    *(_OWORD *)(v68 + 88) = 0LL;
    *(_OWORD *)(v68 + 104) = 0LL;
    *((_QWORD *)v68 + 97) = v56;
    *((_QWORD *)v68 + 137) = 0LL;
    *((_QWORD *)v68 + 22) = 0LL;
    v75 = SepReferenceLogonSession(v74, v68 + 216);
    if ( v75 < 0 )
    {
      *((_DWORD *)v68 + 50) |= 0x20u;
      *((_QWORD *)v68 + 27) = 0LL;
      ObfDereferenceObjectWithTag(v68, 0x746C6644u);
      return (unsigned int)v75;
    }
    if ( SeTokenLeakTracking )
    {
      **((_QWORD **)v68 + 143) = KeGetCurrentThread()[1].CycleTime;
      *(_QWORD *)(*((_QWORD *)v68 + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
      *(_DWORD *)(*((_QWORD *)v68 + 143) + 32LL) = 12;
      *(_DWORD *)(*((_QWORD *)v68 + 143) + 280LL) = 0;
      *(_DWORD *)(*((_QWORD *)v68 + 143) + 284LL) = 0;
      v91 = *((_QWORD *)v68 + 143);
      Process = KeGetCurrentThread()->ApcState.Process;
      *(_QWORD *)(v91 + 16) = Process[1].SecureState.EntireField;
      *(_DWORD *)(v91 + 24) = Process[1].KernelWaitTime;
      *(_WORD *)(v91 + 28) = WORD2(Process[1].KernelWaitTime);
      *(_BYTE *)(v91 + 30) = BYTE6(Process[1].KernelWaitTime);
      v93 = RtlWalkFrameChain((PVOID *)(*((_QWORD *)v68 + 143) + 40LL), 0x1Eu, 0);
      if ( KeGetCurrentIrql() < 2u )
        RtlWalkFrameChain((PVOID *)(*((_QWORD *)v68 + 143) + 40LL + 8LL * v93), 30 - v93, 1u);
      SepAddTokenLogonSession(v68);
    }
    if ( !RtlpBootStatHandleLock.WaitBlockFill7[128] )
    {
      v76 = v109;
      *((_QWORD *)v68 + 19) = v68 + 1168;
      v77 = (unsigned int)(v76 + 1);
      *((_DWORD *)v68 + 31) = v77;
      v110 = &v68[16 * v77 + 1168];
      LODWORD(v107) = -16 - 16 * v76 + v71;
      RtlCopySidAndAttributesArray(1, v113[0], v107, (_DWORD)v68 + 1168, v110, (__int64)&v110, (__int64)&v107);
      RtlCopySidAndAttributesArray(v76, v123[0], v107, (_DWORD)v68 + 1184, v110, (__int64)&v110, (__int64)&v107);
      goto LABEL_65;
    }
    inserted = SepSetTokenUserAndGroups((_DWORD)v68, v113[0], v109, v123[0], (_DWORD)v112);
    if ( inserted < 0 )
      goto LABEL_76;
LABEL_65:
    RtlSidHashInitialize(*((_QWORD *)v68 + 19), *((unsigned int *)v68 + 31), v68 + 232);
    *((_QWORD *)v68 + 20) = 0LL;
    *((_DWORD *)v68 + 32) = 0;
    v78 = ExAllocatePool2(0x100uLL);
    *((_QWORD *)v68 + 22) = v78;
    v79 = (char *)v78;
    if ( !v78 )
    {
      inserted = -1073741801;
      goto LABEL_76;
    }
    v80 = (unsigned __int8 *)Sid1;
    *((_QWORD *)v68 + 21) = v78;
    v81 = RtlLengthRequiredSid(v80[1]);
    RtlCopySid(v81, v79, v80);
    v82 = (unsigned __int16 *)Src;
    v83 = &v79[(v81 + 3) & 0xFFFFFFFC];
    if ( Src )
    {
      *((_QWORD *)v68 + 23) = v83;
      memmove(v83, v82, v82[1]);
    }
    inserted = SepSetTokenClaims((_DWORD)v68, v128, v127, a21, v126);
    if ( inserted < 0 || a24 && (inserted = SepSetTokenTrust(v68, SepRmCapTableLock.Padding[2]), inserted < 0) )
    {
LABEL_76:
      v85 = v68;
LABEL_77:
      ObfDereferenceObjectWithTag(v85, 0x746C6644u);
    }
    else
    {
      if ( SeTokenLeakTracking )
      {
        if ( HIDWORD(RtlpBootStatHandleLock.FirstArgument) == 12
          && KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == *(struct _LIST_ENTRY **)&RtlpBootStatHandleLock.SystemCallNumber )
        {
          v94 = *((_QWORD *)v68 + 143);
          *(_DWORD *)(v94 + 280) = _InterlockedIncrement((volatile signed __int32 *)&RtlpBootStatHandleLock.ApcStateFill[4]);
          v95 = *(_DWORD *)(*((_QWORD *)v68 + 143) + 280LL);
          if ( v95 >= *(int *)&RtlpBootStatHandleLock.ApcStateFill[8] )
          {
            DbgPrint("\nToken number 0x%x = 0x%p\n", v95, v68);
            __debugbreak();
          }
        }
      }
      if ( a24 )
      {
        if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors )
          inserted = ObInsertObject(v68, 0LL, 0, 0, 0LL, 0LL);
        if ( inserted < 0 )
        {
          *Handle = 0LL;
        }
        else
        {
          if ( !v102 )
            SepFinalizeTokenAcls(v68);
          *Handle = v68;
        }
      }
      else
      {
        inserted = SeCreateAccessState(&PassedAccessState, v130, v116, (char *)SeTokenObjectType + 76);
        v85 = v68;
        if ( inserted < 0 )
          goto LABEL_77;
        inserted = ObInsertObject(v68, &PassedAccessState, 0, 1u, 0LL, Handle);
        SeDeleteAccessState(&PassedAccessState);
        if ( inserted >= 0 )
        {
          if ( !v102 )
            SepFinalizeTokenAcls(v68);
          goto LABEL_76;
        }
      }
    }
    return (unsigned int)inserted;
  }
  ExFreePoolWithTag(v56, 0);
  if ( SeTokenLeakTracking )
    ExFreePoolWithTag(P, 0);
  ExFreePoolWithTag(v59, 0);
  return (unsigned int)v66;
}
