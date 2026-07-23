/*
 * XREFs of NtQueryInformationJobObject @ 0x1407F8B10
 * Callers:
 *     DifNtQueryInformationJobObjectWrapper @ 0x140686990 (DifNtQueryInformationJobObjectWrapper.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     PspGetJobSilo @ 0x140430120 (PspGetJobSilo.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     PsGetJobServerSilo @ 0x1404F22F0 (PsGetJobServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x1406178B0 (PspIsSiloInServerSilo.c)
 *     Feature_Servicing_MSRC100723__private_IsEnabledDeviceUsageNoInline @ 0x140618728 (Feature_Servicing_MSRC100723__private_IsEnabledDeviceUsageNoInline.c)
 *     MmQueryApiSetSchema @ 0x1406EBD1C (MmQueryApiSetSchema.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140775FF8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspCheckAllocateAndQueryNotificationChannel @ 0x140779E14 (PspCheckAllocateAndQueryNotificationChannel.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1407FE9FC (PspQueryJobHierarchyInterferenceCount.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408AD75C (ObGetSiloRootDirectoryPath.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetParentSilo @ 0x14093AD80 (PsGetParentSilo.c)
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x140A00154 (PspLockJobExclusive.c)
 *     PspQueryRateControlHistory @ 0x140A856AC (PspQueryRateControlHistory.c)
 *     PspLockJobListShared @ 0x140A86C8C (PspLockJobListShared.c)
 *     PspUnlockJobListShared @ 0x140A87AB8 (PspUnlockJobListShared.c)
 *     PspLockJobShared @ 0x140A87E58 (PspLockJobShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140A94B70 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140A94BE0 (PspLockJobMemoryLimitsShared.c)
 *     PspUnlockJobShared @ 0x140AAB240 (PspUnlockJobShared.c)
 *     PspGetJobLimitInformationValidFlags @ 0x140ABC1F8 (PspGetJobLimitInformationValidFlags.c)
 *     PspRateControlLimitFlag @ 0x140ACC250 (PspRateControlLimitFlag.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140AD2220 (PspQueryJobHierarchyProcessIdList.c)
 *     PspQueryJobIoAttribution @ 0x140AE4E98 (PspQueryJobIoAttribution.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140AF5790 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     EtwTraceJobSetQuery @ 0x140AF71B0 (EtwTraceJobSetQuery.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x140AF9AD0 (PspNotificationLimitRateControlToleranceField.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x140B01DE4 (PspLimitViolationRateControlToleranceLimitField.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength,
        PULONG ReturnLength)
{
  SIZE_T v5; // rbx
  __int64 v7; // r14
  unsigned int v8; // r13d
  int v9; // r12d
  bool v10; // zf
  int v11; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  int ULongFromUser; // eax
  _QWORD *v15; // rbx
  __int128 *v16; // r15
  NTSTATUS JobIoAttribution; // esi
  PVOID v18; // r12
  char v19; // r14
  ULONG v20; // r14d
  __int64 v21; // rsi
  int v22; // r13d
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // dx
  unsigned __int16 v26; // r8
  size_t v27; // r8
  _WORD *v28; // rdx
  PVOID v29; // rcx
  unsigned __int16 v30; // r8
  unsigned __int16 v31; // dx
  unsigned __int16 v32; // r9
  __int64 v33; // rcx
  int v34; // r8d
  unsigned int v35; // edx
  int v36; // ecx
  int v37; // edx
  int v38; // eax
  unsigned int v39; // esi
  __int64 v40; // r14
  __int64 v41; // rax
  unsigned __int16 *v42; // rcx
  _KWAIT_STATUS_REGISTER *p_WaitRegister; // rdx
  _OWORD *v44; // rcx
  unsigned __int16 *v45; // rdx
  int v46; // r14d
  unsigned __int16 v47; // ax
  _BYTE *v48; // rcx
  char *v49; // rdx
  unsigned __int16 v50; // r8
  int v51; // r14d
  int v52; // r14d
  int v53; // r14d
  int v54; // eax
  int v55; // r14d
  int v56; // r14d
  int v57; // r14d
  int v58; // r14d
  __int64 v59; // rsi
  int *v60; // rcx
  __int64 v61; // rdx
  _DWORD *v62; // r8
  _DWORD *v63; // rax
  __int64 v64; // r8
  _DWORD *v65; // rax
  _DWORD *v66; // r8
  int v67; // edx
  _DWORD *v68; // rax
  _QWORD *v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  _DWORD *v76; // rax
  int v77; // edx
  int *v78; // r8
  _BYTE *v79; // r9
  int v80; // ecx
  _BYTE *v81; // r9
  __int64 v82; // rdx
  int v83; // edx
  int v84; // r15d
  int *v85; // rsi
  __int64 v86; // r8
  __int64 v87; // rdx
  int v88; // eax
  _DWORD *v89; // rdx
  int v90; // edx
  char *v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rsi
  int v94; // r14d
  int v95; // r14d
  int v96; // r14d
  __int64 v97; // rax
  void *v98; // rdx
  size_t v99; // r8
  __int64 v100; // rsi
  __int64 JobSilo; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  void *v103; // rcx
  __int64 ParentSilo; // rsi
  int v105; // r14d
  int v106; // r14d
  int v107; // r14d
  int v108; // r14d
  int v109; // r14d
  int v110; // r14d
  int v111; // r14d
  int v112; // r14d
  bool v113; // zf
  char *ServerSiloGlobals; // rax
  unsigned int v115; // ecx
  _WORD *v116; // rdx
  unsigned __int8 *v117; // r8
  __int64 v118; // rax
  char PreviousMode; // [rsp+40h] [rbp-AB8h]
  bool v120; // [rsp+41h] [rbp-AB7h]
  int v122; // [rsp+54h] [rbp-AA4h] BYREF
  char v123; // [rsp+58h] [rbp-AA0h] BYREF
  bool v124; // [rsp+59h] [rbp-A9Fh] BYREF
  bool v125; // [rsp+5Ah] [rbp-A9Eh] BYREF
  struct _KTHREAD *v126; // [rsp+60h] [rbp-A98h]
  ULONG v127; // [rsp+68h] [rbp-A90h]
  unsigned int v128; // [rsp+6Ch] [rbp-A8Ch]
  size_t Size; // [rsp+70h] [rbp-A88h] BYREF
  __int64 v130; // [rsp+78h] [rbp-A80h] BYREF
  PULONG v131; // [rsp+80h] [rbp-A78h]
  PVOID Object; // [rsp+88h] [rbp-A70h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp-A68h] BYREF
  __int64 v134; // [rsp+98h] [rbp-A60h] BYREF
  char *v135; // [rsp+A0h] [rbp-A58h]
  int v136; // [rsp+A8h] [rbp-A50h] BYREF
  int v137; // [rsp+ACh] [rbp-A4Ch] BYREF
  int v138; // [rsp+B0h] [rbp-A48h] BYREF
  int v139; // [rsp+B4h] [rbp-A44h] BYREF
  __int64 v140; // [rsp+B8h] [rbp-A40h] BYREF
  __int64 v141; // [rsp+C0h] [rbp-A38h] BYREF
  PVOID P[2]; // [rsp+C8h] [rbp-A30h] BYREF
  int v143; // [rsp+D8h] [rbp-A20h] BYREF
  __int64 v144; // [rsp+E0h] [rbp-A18h] BYREF
  __int64 v145; // [rsp+E8h] [rbp-A10h] BYREF
  __int64 v146; // [rsp+F0h] [rbp-A08h] BYREF
  __int64 v147; // [rsp+F8h] [rbp-A00h] BYREF
  _BYTE v148[80]; // [rsp+100h] [rbp-9F8h] BYREF
  __int128 v149; // [rsp+150h] [rbp-9A8h] BYREF
  __int128 v150; // [rsp+160h] [rbp-998h]
  __int64 v151; // [rsp+170h] [rbp-988h]
  __int128 Src; // [rsp+178h] [rbp-980h] BYREF
  __int128 v153; // [rsp+188h] [rbp-970h]
  __int64 v154; // [rsp+198h] [rbp-960h]
  unsigned __int16 v155; // [rsp+1A0h] [rbp-958h] BYREF
  char v156; // [rsp+1A8h] [rbp-950h] BYREF
  __int128 v157; // [rsp+2B0h] [rbp-848h] BYREF
  __int64 v158; // [rsp+2C0h] [rbp-838h] BYREF
  __int64 v159; // [rsp+2C8h] [rbp-830h]
  __int64 v160; // [rsp+2D0h] [rbp-828h]
  __int64 v161; // [rsp+2D8h] [rbp-820h]
  __int64 v162; // [rsp+2E0h] [rbp-818h]
  __int64 v163; // [rsp+2E8h] [rbp-810h]
  __int64 v164; // [rsp+2F0h] [rbp-808h]
  __int64 v165; // [rsp+2F8h] [rbp-800h]
  __int64 v166; // [rsp+300h] [rbp-7F8h]
  int v167; // [rsp+308h] [rbp-7F0h] BYREF
  int v168; // [rsp+30Ch] [rbp-7ECh]
  __int64 v169; // [rsp+310h] [rbp-7E8h]
  char v170; // [rsp+318h] [rbp-7E0h] BYREF
  char v171; // [rsp+320h] [rbp-7D8h] BYREF
  __int128 v172; // [rsp+330h] [rbp-7C8h] BYREF
  __int128 v173; // [rsp+340h] [rbp-7B8h] BYREF
  __int128 v174; // [rsp+350h] [rbp-7A8h] BYREF
  _BYTE v175[24]; // [rsp+360h] [rbp-798h]
  int v176; // [rsp+378h] [rbp-780h]
  __int64 v177; // [rsp+380h] [rbp-778h]
  __int128 v178; // [rsp+3A0h] [rbp-758h] BYREF
  __int128 v179; // [rsp+3B0h] [rbp-748h] BYREF
  __int128 v180; // [rsp+3C0h] [rbp-738h]
  __int128 v181; // [rsp+3D0h] [rbp-728h]
  __int64 v182; // [rsp+3E0h] [rbp-718h]
  __int128 v183; // [rsp+3E8h] [rbp-710h] BYREF
  __int128 v184; // [rsp+3F8h] [rbp-700h]
  __int128 v185; // [rsp+408h] [rbp-6F0h]
  __int128 v186; // [rsp+418h] [rbp-6E0h] BYREF
  __int128 v187; // [rsp+428h] [rbp-6D0h]
  int v188; // [rsp+438h] [rbp-6C0h]
  __int128 v189; // [rsp+440h] [rbp-6B8h] BYREF
  __int128 v190; // [rsp+450h] [rbp-6A8h] BYREF
  __int128 v191; // [rsp+460h] [rbp-698h]
  __int64 v192; // [rsp+470h] [rbp-688h]
  _QWORD v193[9]; // [rsp+480h] [rbp-678h] BYREF
  int v194; // [rsp+4C8h] [rbp-630h]
  int v195; // [rsp+4CCh] [rbp-62Ch]
  _QWORD v196[10]; // [rsp+4D0h] [rbp-628h] BYREF
  int v197; // [rsp+520h] [rbp-5D8h]
  int v198; // [rsp+524h] [rbp-5D4h]
  _OWORD v199[3]; // [rsp+530h] [rbp-5C8h] BYREF
  int v200; // [rsp+560h] [rbp-598h]
  _QWORD v201[2]; // [rsp+570h] [rbp-588h] BYREF
  int v202; // [rsp+580h] [rbp-578h]
  __int64 v203; // [rsp+588h] [rbp-570h]
  __int64 v204; // [rsp+590h] [rbp-568h]
  int v205; // [rsp+598h] [rbp-560h]
  __int64 v206; // [rsp+5A0h] [rbp-558h]
  int v207; // [rsp+5A8h] [rbp-550h]
  int v208; // [rsp+5ACh] [rbp-54Ch]
  __int64 v209; // [rsp+5E0h] [rbp-518h]
  __int64 v210; // [rsp+5E8h] [rbp-510h]
  __int64 v211; // [rsp+5F0h] [rbp-508h]
  __int64 v212; // [rsp+5F8h] [rbp-500h]
  __int64 v213; // [rsp+600h] [rbp-4F8h]
  _BYTE v214[4]; // [rsp+610h] [rbp-4E8h] BYREF
  int v215; // [rsp+614h] [rbp-4E4h]
  _BYTE v216[64]; // [rsp+660h] [rbp-498h] BYREF
  _QWORD v217[56]; // [rsp+6A0h] [rbp-458h] BYREF
  __int128 v218; // [rsp+860h] [rbp-298h]
  _BYTE v219[512]; // [rsp+870h] [rbp-288h] BYREF
  _WORD v220[32]; // [rsp+A70h] [rbp-88h] BYREF

  v5 = JobObjectInformationLength;
  v127 = JobObjectInformationLength;
  v7 = JobObjectInformationClass;
  BugCheckParameter1 = (ULONG_PTR)JobHandle;
  v130 = (__int64)JobObjectInformation;
  v131 = ReturnLength;
  memset_0(v217, 0, 0x1D0uLL);
  v178 = 0LL;
  v124 = 0;
  v141 = 0LL;
  v140 = 0LL;
  v136 = 0;
  v147 = 0LL;
  v138 = 0;
  v186 = 0LL;
  v187 = 0LL;
  v188 = 0;
  v189 = 0LL;
  v144 = 0LL;
  v137 = 0;
  v146 = 0LL;
  memset_0(v201, 0, 0x98uLL);
  v157 = 0LL;
  v215 = 0;
  memset_0(v214, 0, 0x44uLL);
  Object = 0LL;
  v143 = 0;
  memset_0(&v158, 0, 0x68uLL);
  memset_0(v193, 0, 0x50uLL);
  memset_0(v196, 0, 0x58uLL);
  v190 = 0LL;
  v191 = 0LL;
  v192 = 0LL;
  v172 = 0LL;
  memset_0(&v174, 0, 0x48uLL);
  v183 = 0LL;
  v184 = 0LL;
  v185 = 0LL;
  v179 = 0LL;
  v180 = 0LL;
  v181 = 0LL;
  v182 = 0LL;
  v139 = 0;
  *(_OWORD *)P = 0LL;
  Src = 0LL;
  v153 = 0LL;
  LODWORD(v154) = 0;
  v145 = 0LL;
  memset_0(v216, 0, sizeof(v216));
  v173 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  memset(v199, 0, sizeof(v199));
  v200 = 0;
  v134 = 0LL;
  v123 = 0;
  v125 = 0;
  memset_0(v148, 0, 0x48uLL);
  if ( (unsigned int)(v7 - 1) > 0x33 )
    return -1073741821;
  switch ( (_DWORD)v7 )
  {
    case 9:
      if ( (_DWORD)v5 != 144 && (_DWORD)v5 != 152 )
        return -1073741820;
      goto LABEL_42;
    case 0xC:
      v11 = v5 - 48;
      goto LABEL_37;
    case 0xD:
      v11 = v5 - 80;
LABEL_37:
      v10 = (v11 & 0xFFFFFFF7) == 0;
LABEL_27:
      if ( !v10 )
        return -1073741820;
      goto LABEL_42;
    case 0x13:
      if ( (_DWORD)v5 == 432 || (_DWORD)v5 == 448 )
        goto LABEL_42;
      v10 = (_DWORD)v5 == 464;
      goto LABEL_27;
    case 0x14:
      if ( (_DWORD)v5 == 40 )
        goto LABEL_42;
      v10 = (_DWORD)v5 == 64;
      goto LABEL_27;
    case 0x1C:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_42;
      v10 = (_DWORD)v5 == 40;
      goto LABEL_27;
    case 0x1E:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_42;
      v10 = (_DWORD)v5 == 36;
      goto LABEL_27;
    case 0x2B:
    case 0x34:
      if ( (_DWORD)v5 == 1 )
      {
        v9 = 1;
        v8 = 1;
        v122 = 1;
        goto LABEL_44;
      }
      return -1073741820;
  }
  v8 = dword_140BE345C[v7];
  v122 = v8;
  if ( (_DWORD)v5 != v8 )
  {
    if ( (_DWORD)v7 != 3
      && (_DWORD)v7 != 5
      && (_DWORD)v7 != 11
      && (_DWORD)v7 != 14
      && (_DWORD)v7 != 31
      && (_DWORD)v7 != 37 )
    {
      if ( (_DWORD)v7 == 38 && (_DWORD)v5 == 32 )
      {
        v8 = 32;
        v122 = 32;
        goto LABEL_43;
      }
      return -1073741820;
    }
    if ( (unsigned int)v5 < v8 )
      return -1073741820;
LABEL_42:
    v122 = v5;
    v8 = v5;
  }
LABEL_43:
  v9 = 1;
LABEL_44:
  LODWORD(Size) = v8;
  CurrentThread = KeGetCurrentThread();
  v126 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForRead(JobObjectInformation, v5, dword_140BE337C[v7]);
    if ( ReturnLength )
    {
      ULongFromUser = RtlReadULongFromUser(ReturnLength);
      RtlWriteULongToUser(ReturnLength, ULongFromUser);
    }
    CurrentThread = v126;
  }
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
    if ( result < 0 )
      return result;
    v15 = Object;
  }
  else
  {
    v15 = (_QWORD *)CurrentThread->ApcState.Process[1].Padding[3];
    Object = v15;
    if ( v15 )
    {
      ObfReferenceObjectWithTag(v15, 0x79517350u);
    }
    else if ( (((_DWORD)v7 - 31) & 0xFFFFFFF7) != 0 )
    {
      return -1073741790;
    }
  }
  v128 = v8;
  v120 = 0;
  v16 = 0LL;
  JobIoAttribution = 0;
  ExInitializeFastOwnerEntry((__int64)v148);
  if ( (int)v7 > 28 )
  {
    if ( (int)v7 <= 42 )
    {
      if ( (_DWORD)v7 == 42 )
      {
        memset_0(v214, 0, 0x48uLL);
        PspLockJobShared(v15, v126, v148);
        JobIoAttribution = PspQueryJobIoAttribution(v15, v214);
        PspUnlockJobShared(v15, v126, v148);
        v16 = (__int128 *)v214;
        goto LABEL_297;
      }
      if ( (int)v7 <= 34 )
      {
        if ( (_DWORD)v7 != 34 )
        {
          v55 = v7 - 29;
          if ( !v55 )
          {
            v145 = v15[196];
            v16 = (__int128 *)&v145;
            goto LABEL_70;
          }
          v56 = v55 - 1;
          if ( !v56 )
          {
            v186 = *((_OWORD *)v15 + 92);
            if ( v127 == 36 )
            {
              v187 = *((_OWORD *)v15 + 93);
              v188 = *((_DWORD *)v15 + 367);
            }
            v16 = &v186;
            goto LABEL_70;
          }
          v57 = v56 - 1;
          if ( !v57 )
          {
            JobIoAttribution = -1073741822;
            goto LABEL_297;
          }
          v58 = v57 - 1;
          if ( !v58 )
          {
            PspLockJobShared(v15, v126, v148);
            if ( v15[193] )
            {
              DWORD2(v172) = 1;
              if ( (*(_DWORD *)(v15[193] + 48LL) & 1) != 0 )
              {
                v9 = 3;
                DWORD2(v172) = 3;
                *(_QWORD *)&v172 = *(_QWORD *)(v15[193] + 40LL);
              }
              if ( (*(_DWORD *)(v15[193] + 48LL) & 2) != 0 )
              {
                DWORD2(v172) = v9 | 4;
                BYTE12(v172) = *(_BYTE *)(v15[193] + 64LL);
              }
            }
            PspUnlockJobShared(v15, v126, v148);
            v16 = &v172;
            goto LABEL_70;
          }
          if ( v58 != 1 )
            goto LABEL_274;
          goto LABEL_163;
        }
LABEL_182:
        LOWORD(v122) = 0;
        BYTE2(v122) = 0;
        PspQueryJobHierarchyAccountingInformation(v15, (__int64)v217);
        v159 = v217[9];
        v161 = v217[10];
        v163 = v217[0];
        PspLockJobExclusive(v15, v126);
        if ( (v15[194] & 0x4008) != 0x4008 )
          _InterlockedAnd((volatile signed __int32 *)v15 + 388, 0xFFFFFFFB);
        PspLockJobMemoryLimitsShared(v15, 0LL);
        v165 = v15[151] << 12;
        PspUnlockJobMemoryLimitsShared(v15, 0LL);
        v68 = (_DWORD *)v15[152];
        if ( v68 )
        {
          LODWORD(v158) = *v68;
          HIDWORD(v158) = *(_DWORD *)(v15[152] + 4LL);
          v69 = (_QWORD *)v15[152];
          v70 = v69[9];
          if ( !v70 )
            v70 = v69[1];
          v160 = v70;
          v71 = v69[10];
          if ( !v71 )
            v71 = v69[2];
          v162 = v71;
          v72 = v69[11];
          if ( !v72 )
            v72 = v69[3];
          v164 = v72;
          v73 = v69[12];
          if ( !v73 )
            v73 = v69[4];
          v169 = v73 << 12;
          v74 = v69[13];
          if ( !v74 )
            v74 = v69[5];
          v166 = v74 << 12;
          v75 = 0LL;
          do
          {
            v76 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField(&v158, v75);
            v80 = v78[16];
            if ( v80 )
              *v79 = 1;
            else
              v80 = *v78;
            *v76 = v80;
            v75 = (unsigned int)(v77 + 1);
            v81 = v79 + 1;
          }
          while ( (int)v75 < 3 );
        }
        else
        {
          v158 = 0LL;
          v160 = 0LL;
          v162 = 0LL;
          v164 = 0LL;
          v169 = 0LL;
          v166 = 0LL;
          v82 = 0LL;
          do
          {
            *(_DWORD *)PspLimitViolationRateControlToleranceLimitField(&v158, v82) = 0;
            v82 = (unsigned int)(v83 + 1);
          }
          while ( (int)v82 < 3 );
        }
        v84 = 0;
        v85 = &v122;
        v86 = 60LL;
        v130 = 60LL;
        do
        {
          v87 = v15[152];
          if ( v87 && (v88 = PspRateControlLimitFlag((unsigned int)v84, v87, v86, v81), (v88 & *v89) != 0) )
            v90 = *(_DWORD *)((char *)v89 + v86);
          else
            v90 = 1;
          LODWORD(Size) = v90;
          LOBYTE(v86) = *(_BYTE *)v85;
          PspQueryRateControlHistory((_DWORD)v15, v90, v86, (unsigned int)&v139, v84);
          if ( v84 )
          {
            if ( v84 == 1 )
              v91 = &v170;
            else
              v91 = (char *)&v167;
          }
          else
          {
            v91 = &v171;
          }
          *(_DWORD *)v91 = v139;
          ++v84;
          v86 = v130 + 4;
          v130 += 4LL;
          v85 = (int *)((char *)v85 + 1);
        }
        while ( v84 < 3 );
        v92 = v15[152];
        v93 = (__int64)v126;
        if ( v92 )
        {
          *(_DWORD *)(v92 + 4) = 0;
          memset_0((void *)(v15[152] + 72LL), 0, 0x40uLL);
        }
        PspUnlockJobExclusive(v15, v93);
        if ( v127 == 88 )
        {
          v196[1] = v159;
          v196[2] = v160;
          v196[3] = v161;
          v196[4] = v162;
          v196[5] = v163;
          v196[6] = v164;
          v196[7] = v165;
          v196[8] = v169;
          v196[9] = v166;
          v197 = v167;
          v198 = v168;
          v196[0] = v158 & 0x27820400278204LL;
          v16 = (__int128 *)v196;
        }
        else if ( v127 == 80 )
        {
          v193[1] = v159;
          v193[2] = v160;
          v193[3] = v161;
          v193[4] = v162;
          v193[5] = v163;
          v193[6] = v164;
          v193[7] = v165;
          v193[8] = v166;
          v194 = v167;
          v195 = v168;
          v193[0] = v158 & 0x7020400070204LL;
          v16 = (__int128 *)v193;
        }
        else
        {
          v16 = (__int128 *)&v158;
        }
        JobIoAttribution = 0;
        if ( (PerfGlobalGroupMask & 0x80000) != 0 )
          EtwTraceJobSetQuery((_DWORD)v15, v7, (unsigned int)&v158, (unsigned int)&Size, 0, 1830);
        goto LABEL_297;
      }
      v94 = v7 - 36;
      if ( v94 )
      {
        v95 = v94 - 1;
        if ( v95 )
        {
          v96 = v95 - 1;
          if ( v96 )
          {
            if ( v96 == 1 )
            {
              if ( v15 )
              {
                PsGetJobServerSilo((__int64)v15, &v134);
                v97 = v134;
              }
              else
              {
                v97 = HalSystemVectorDispatchEntry();
              }
              v98 = (void *)*((_QWORD *)PsGetServerSiloGlobals(v97) + 161);
              v19 = PreviousMode;
              if ( PreviousMode )
                RtlCopyToUser(JobObjectInformation, v98, v99);
              else
                RtlCopyVolatileMemory(JobObjectInformation, v98, v99);
              v120 = 1;
              v18 = JobObjectInformation;
              goto LABEL_299;
            }
            goto LABEL_274;
          }
          PsGetJobServerSilo((__int64)v15, &v134);
          v100 = v134;
          v19 = PreviousMode;
          if ( PsIsHostSilo(v134) )
          {
            JobIoAttribution = -1073740535;
          }
          else
          {
            *(_QWORD *)((char *)&v149 + 4) = *(_QWORD *)(*(_QWORD *)(v100 + 1504) + 1272LL);
            BYTE12(v149) = 0;
            LODWORD(v151) = *(_DWORD *)(*(_QWORD *)(v100 + 1504) + 1336LL);
            HIDWORD(v151) = (unsigned __int16)NtBuildNumber;
            if ( PreviousMode )
            {
              v150 = 0LL;
            }
            else
            {
              v130 = 0LL;
              MmQueryApiSetSchema((_KDPC ***)&v130, (unsigned __int16 **)&BugCheckParameter1);
              *(_QWORD *)&v150 = *((_QWORD *)PsGetServerSiloGlobals(v100) + 126);
              *((_QWORD *)&v150 + 1) = *(_QWORD *)v130;
            }
            LODWORD(v149) = PsGetServerSiloServiceSessionId(v100);
            JobIoAttribution = 0;
            v16 = &v149;
          }
          goto LABEL_72;
        }
        JobSilo = PspGetJobSilo((__int64)v15);
        if ( JobSilo )
        {
          JobIoAttribution = ObGetSiloRootDirectoryPath(JobSilo, P);
          if ( JobIoAttribution >= 0 )
          {
            v120 = 1;
            v8 = LOWORD(P[0]) + 16;
            v122 = v8;
            v18 = JobObjectInformation;
            if ( v8 > v127 )
            {
              JobIoAttribution = -1073741789;
              v19 = PreviousMode;
            }
            else
            {
              HIDWORD(v134) = 0;
              LOWORD(v134) = P[0];
              WORD1(v134) = P[0];
              v135 = (char *)JobObjectInformation + 16;
              v19 = PreviousMode;
              if ( PreviousMode )
                RtlCopyToUser(JobObjectInformation, &v134, 0x10uLL);
              else
                RtlCopyVolatileMemory(JobObjectInformation, &v134, 0x10uLL);
              IsEnabledDeviceUsageNoInline = Feature_Servicing_MSRC100723__private_IsEnabledDeviceUsageNoInline();
              v103 = v135;
              if ( !IsEnabledDeviceUsageNoInline )
                v103 = (void *)*((_QWORD *)JobObjectInformation + 1);
              if ( PreviousMode )
                RtlCopyToUser(v103, P[1], LOWORD(P[0]));
              else
                RtlCopyVolatileMemory(v103, P[1], LOWORD(P[0]));
              if ( v131 )
              {
                if ( PreviousMode )
                  RtlWriteULongToUser(v131, v8);
                else
                  *v131 = v8;
              }
            }
            ExFreePoolWithTag(P[1], 0);
            goto LABEL_299;
          }
          goto LABEL_297;
        }
      }
      else if ( (v15[194] & 0x40000000) != 0 )
      {
        LODWORD(v173) = *((_DWORD *)v15 + 367);
        ParentSilo = PsGetParentSilo(v15);
        if ( PsIsHostSilo(ParentSilo) )
          DWORD1(v173) = 0;
        else
          DWORD1(v173) = *(_DWORD *)(ParentSilo + 1468);
        DWORD2(v173) = *((_DWORD *)v15 + 364);
        BYTE12(v173) = PspIsSiloInServerSilo((__int64)v15);
        v16 = &v173;
        goto LABEL_70;
      }
LABEL_241:
      JobIoAttribution = -1073740535;
      goto LABEL_297;
    }
    v105 = v7 - 43;
    if ( v105 )
    {
      v106 = v105 - 1;
      if ( !v106 )
      {
        v189 = *((_OWORD *)v15 + 93);
        v16 = &v189;
        goto LABEL_70;
      }
      v107 = v106 - 2;
      if ( !v107 )
      {
        PspLockJobShared(v15, v126, v148);
        v146 = v15[226];
        PspUnlockJobShared(v15, v126, v148);
        v16 = (__int128 *)&v146;
        goto LABEL_70;
      }
      v108 = v107 - 1;
      if ( !v108 )
      {
        v125 = (*((_DWORD *)v15 + 389) & 2) != 0;
        v16 = (__int128 *)&v125;
        goto LABEL_70;
      }
      v109 = v108 - 1;
      if ( !v109 )
      {
        PspLockJobShared(v15, v126, v148);
        if ( *((_DWORD *)v15 + 272) < 5u )
          LODWORD(v141) = v141 | 1;
        HIDWORD(v141) = *((_DWORD *)v15 + 272);
        PspUnlockJobShared(v15, v126, v148);
        v16 = (__int128 *)&v141;
        goto LABEL_70;
      }
      v110 = v109 - 1;
      if ( !v110 )
      {
        PspLockJobShared(v15, v126, v148);
        if ( *((_DWORD *)v15 + 274) < 8u )
          LODWORD(v140) = v140 | 1;
        HIDWORD(v140) = *((_DWORD *)v15 + 274);
        PspUnlockJobShared(v15, v126, v148);
        v16 = (__int128 *)&v140;
        goto LABEL_70;
      }
      v111 = v110 - 1;
      if ( !v111 )
      {
        PsGetJobServerSilo((__int64)v15, &v134);
        if ( !PsIsHostSilo(v134) )
        {
          ServerSiloGlobals = (char *)PsGetServerSiloGlobals(v134);
          if ( *((_DWORD *)ServerSiloGlobals + 335) )
          {
            v199[0] = *(_OWORD *)(ServerSiloGlobals + 1368);
            LODWORD(v199[1]) = *((_DWORD *)ServerSiloGlobals + 336);
            v115 = 0;
            v116 = (_WORD *)&v199[1] + 2;
            v117 = (unsigned __int8 *)(ServerSiloGlobals + 1348);
            do
            {
              *v116 = *v117;
              ++v115;
              ++v117;
              ++v116;
            }
            while ( v115 < 0xF );
            JobIoAttribution = 0;
            v16 = v199;
          }
          else
          {
            JobIoAttribution = -2147483614;
          }
          goto LABEL_297;
        }
        goto LABEL_241;
      }
      v112 = v111 - 1;
      if ( !v112 )
      {
        PspQueryJobHierarchyAccountingInformation(v15, (__int64)v217);
        v178 = v218;
        v16 = &v178;
        goto LABEL_70;
      }
      if ( v112 != 1 )
        goto LABEL_274;
      JobIoAttribution = 0;
      v113 = v15[229] == 0LL;
    }
    else
    {
      JobIoAttribution = 0;
      v118 = v15[224];
      if ( !v118 )
      {
LABEL_296:
        v16 = (__int128 *)&v123;
        goto LABEL_297;
      }
      v113 = v118 == -1;
    }
    if ( !v113 )
      v123 = 1;
    goto LABEL_296;
  }
  if ( (_DWORD)v7 == 28 )
  {
    PspLockJobMemoryLimitsShared(v15, v126);
    *((_QWORD *)&v190 + 1) = v15[90] << 12;
    *(_QWORD *)&v190 = v15[151] << 12;
    *(_QWORD *)&v191 = v15[196] << 12;
    PspUnlockJobMemoryLimitsShared(v15, v126);
    v16 = &v190;
    goto LABEL_70;
  }
  if ( (int)v7 <= 12 )
  {
    if ( (_DWORD)v7 != 12 )
    {
      if ( (int)v7 <= 6 )
      {
        if ( (_DWORD)v7 != 6 )
        {
          if ( (_DWORD)v7 != 1 )
          {
            if ( (_DWORD)v7 != 2 )
            {
              if ( (_DWORD)v7 != 3 )
              {
                if ( (_DWORD)v7 != 4 )
                {
                  if ( (_DWORD)v7 == 5 )
                  {
                    Src = 0LL;
                    v153 = 0LL;
                    v154 = 0LL;
                    v120 = 1;
                    v18 = JobObjectInformation;
                    if ( PreviousMode )
                      RtlCopyToUser(JobObjectInformation, &Src, 0x28uLL);
                    else
                      RtlCopyVolatileMemory(JobObjectInformation, &Src, 0x28uLL);
                    goto LABEL_298;
                  }
                  goto LABEL_274;
                }
                PspLockJobShared(v15, v126, v148);
                v136 = *((_DWORD *)v15 + 136);
                PspUnlockJobShared(v15, v126, v148);
                v16 = (__int128 *)&v136;
                goto LABEL_70;
              }
              v128 = 0;
              v19 = PreviousMode;
              JobIoAttribution = PspQueryJobHierarchyProcessIdList(v15, JobObjectInformation, PreviousMode);
              v120 = 1;
              goto LABEL_72;
            }
            goto LABEL_92;
          }
          goto LABEL_152;
        }
        v137 = *((_DWORD *)v15 + 137);
        v16 = (__int128 *)&v137;
LABEL_70:
        JobIoAttribution = 0;
LABEL_297:
        v18 = JobObjectInformation;
LABEL_298:
        v19 = PreviousMode;
        goto LABEL_299;
      }
      if ( (_DWORD)v7 != 8 )
      {
        switch ( (_DWORD)v7 )
        {
          case 9:
LABEL_92:
            PspLockJobShared(v15, v126, v148);
            v203 = v15[30];
            v204 = v15[31];
            v205 = *((_DWORD *)v15 + 65);
            v207 = *((unsigned __int8 *)v15 + 1101);
            v208 = *((_DWORD *)v15 + 145);
            v30 = 32;
            v31 = 0;
            v32 = *((_WORD *)v15 + 132);
            if ( v32 )
            {
              do
              {
                if ( v15[v31 + 34] )
                {
                  if ( v30 != 32 )
                    goto LABEL_99;
                  v30 = v31;
                }
                ++v31;
              }
              while ( v31 < v32 );
            }
            if ( v30 == 32 )
LABEL_99:
              v206 = 0LL;
            else
              v206 = v15[v30 + 34];
            v201[0] = v15[28];
            v201[1] = v15[29];
            v202 = v15[32] & (PspGetJobLimitInformationValidFlags((unsigned int)v7, v127) | 0x7FFF);
            if ( (_DWORD)v7 == 9 )
            {
              PspLockJobMemoryLimitsShared(v15, 0LL);
              v209 = v15[86] << 12;
              v210 = v15[87] << 12;
              v212 = v15[90] << 12;
              v213 = v15[88] << 12;
              PspUnlockJobMemoryLimitsShared(v15, 0LL);
              PspUnlockJobShared(v15, v126, v148);
              v211 = v15[89] << 12;
            }
            else
            {
              PspUnlockJobShared(v15, v126, v148);
            }
            v16 = (__int128 *)v201;
            goto LABEL_70;
          case 0xA:
            PspLockJobListShared(v126);
            PspUnlockJobListShared(v126);
            v16 = (__int128 *)&v143;
            goto LABEL_70;
          case 0xB:
            if ( v131 )
            {
              v20 = v127;
              if ( (v127 & 1) == 0 )
              {
                v21 = (__int64)v126;
                PspLockJobShared(v15, v126, v148);
                v22 = 0;
                v23 = 0;
                if ( *((_WORD *)v15 + 132) )
                {
                  v24 = 0;
                  v25 = 0;
                  v26 = 0;
                  do
                  {
                    if ( v15[v24 + 34] )
                    {
                      v220[v22++] = v23;
                      v25 = v26;
                    }
                    v24 = ++v25;
                    v23 = v25;
                    v26 = v25;
                  }
                  while ( v25 < *((_WORD *)v15 + 132) );
                }
                PspUnlockJobShared(v15, v21, v148);
                v8 = 2 * v22;
                v128 = v8;
                v120 = 1;
                JobIoAttribution = v20 < v8 ? 0xC0000023 : 0;
                if ( v8 > v20 )
                  v8 = Size;
                LODWORD(Size) = v8;
                v27 = v8;
                v19 = PreviousMode;
                v28 = v220;
                v18 = JobObjectInformation;
                v29 = JobObjectInformation;
                if ( !PreviousMode )
                {
                  RtlCopyVolatileMemory(JobObjectInformation, v220, v8);
                  goto LABEL_299;
                }
                goto LABEL_88;
              }
            }
            goto LABEL_90;
        }
LABEL_274:
        JobIoAttribution = -1073741821;
        goto LABEL_297;
      }
LABEL_152:
      PspQueryJobHierarchyAccountingInformation(v15, (__int64)v217);
      v16 = (__int128 *)v217;
      goto LABEL_70;
    }
LABEL_163:
    v59 = (__int64)v126;
    PspLockJobShared(v15, v126, v148);
    v60 = (int *)v15[152];
    if ( v60 )
    {
      v176 = *v60;
      v174 = *(_OWORD *)(v60 + 2);
      *(_QWORD *)v175 = *((_QWORD *)v60 + 3);
      v177 = *((_QWORD *)v60 + 4) << 12;
      *(_QWORD *)&v175[8] = *((_QWORD *)v60 + 5) << 12;
      v61 = 0LL;
      v62 = v60 + 15;
      do
      {
        v63 = (_DWORD *)PspNotificationLimitRateControlToleranceField(&v174, v61, v62);
        *v63 = *(_DWORD *)(v64 - 12);
        v65 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(&v174);
        *v65 = *v66;
        v61 = (unsigned int)(v67 + 1);
        v62 = v66 + 1;
      }
      while ( (int)v61 < 3 );
    }
    PspUnlockJobShared(v15, v59, v148);
    if ( v127 == 48 )
    {
      v183 = v174;
      v184 = *(_OWORD *)v175;
      *(_QWORD *)&v185 = *(_QWORD *)&v175[16];
      DWORD2(v185) = v176 & 0x70204;
      v16 = &v183;
    }
    else if ( v127 == 56 )
    {
      v179 = v174;
      *(_QWORD *)&v180 = *(_QWORD *)v175;
      *((_QWORD *)&v180 + 1) = v177;
      v181 = *(_OWORD *)&v175[8];
      LODWORD(v182) = v176 & 0x278204;
      v16 = &v179;
    }
    else
    {
      v16 = &v174;
    }
    goto LABEL_70;
  }
  if ( (int)v7 <= 18 )
  {
    if ( (_DWORD)v7 == 18 )
    {
      LODWORD(v157) = 7;
      WORD3(v157) = 0;
      PspLockJobShared(v15, v126, v148);
      BYTE4(v157) = (v15[194] & 0x200) != 0;
      BYTE5(v157) = (v15[194] & 0x80000) != 0;
      LODWORD(v157) = v157 & 0xFFFFFFF7 | ~(unsigned __int8)*((_DWORD *)v15 + 389) & 8;
      *((_QWORD *)&v157 + 1) = v15[148];
      PspUnlockJobShared(v15, v126, v148);
      v16 = &v157;
      goto LABEL_70;
    }
    if ( (_DWORD)v7 != 13 )
    {
      if ( (_DWORD)v7 != 14 )
      {
        if ( (_DWORD)v7 == 15 )
        {
          PspLockJobShared(v15, v126, v148);
          v33 = v15[155];
          if ( v33 && (*(_DWORD *)(v33 + 40) & 0x40) == 0 )
          {
            HIDWORD(v144) = *(_DWORD *)(v33 + 44);
            v34 = *(_DWORD *)(v15[155] + 40LL);
            v35 = ((v34 & 4 | 2u) >> 1) | 4;
            if ( (v34 & 1) == 0 )
              v35 = (v34 & 4 | 2u) >> 1;
            v36 = v35 | 8;
            if ( (v34 & 2) == 0 )
              v36 = v35;
            v37 = v36 | 0x10;
            if ( (v34 & 0x20) == 0 )
              v37 = v36;
            v38 = v37 | 0x20;
            if ( (v34 & 0x80u) == 0 )
              v38 = v37;
            LODWORD(v144) = v38;
          }
          PspUnlockJobShared(v15, v126, v148);
          v16 = (__int128 *)&v144;
        }
        else if ( (_DWORD)v7 == 16 )
        {
          v138 = *((_DWORD *)v15 + 276);
          v16 = (__int128 *)&v138;
        }
        else
        {
          v147 = v15[71];
          v16 = (__int128 *)&v147;
        }
        goto LABEL_70;
      }
      if ( v131 )
      {
        v39 = v127;
        if ( (v127 & 0xF) == 0 )
        {
          v40 = (__int64)v126;
          PspLockJobShared(v15, v126, v148);
          v41 = 2LL;
          if ( (v15[32] & 0x10) != 0 )
          {
            v44 = v15 + 33;
            v45 = &v155;
            do
            {
              *(_OWORD *)v45 = *v44;
              *((_OWORD *)v45 + 1) = v44[1];
              *((_OWORD *)v45 + 2) = v44[2];
              *((_OWORD *)v45 + 3) = v44[3];
              *((_OWORD *)v45 + 4) = v44[4];
              *((_OWORD *)v45 + 5) = v44[5];
              *((_OWORD *)v45 + 6) = v44[6];
              v45 += 64;
              *((_OWORD *)v45 - 1) = v44[7];
              v44 += 8;
              --v41;
            }
            while ( v41 );
            *(_QWORD *)v45 = *(_QWORD *)v44;
          }
          else
          {
            v42 = &v155;
            p_WaitRegister = &stru_140FC11F0.WaitRegister;
            do
            {
              *(_OWORD *)v42 = *(_OWORD *)&p_WaitRegister->Flags;
              *((_OWORD *)v42 + 1) = *(_OWORD *)&p_WaitRegister[16].Flags;
              *((_OWORD *)v42 + 2) = *(_OWORD *)&p_WaitRegister[32].Flags;
              *((_OWORD *)v42 + 3) = *(_OWORD *)&p_WaitRegister[48].Flags;
              *((_OWORD *)v42 + 4) = *(_OWORD *)&p_WaitRegister[64].Flags;
              *((_OWORD *)v42 + 5) = *(_OWORD *)&p_WaitRegister[80].Flags;
              *((_OWORD *)v42 + 6) = *(_OWORD *)&p_WaitRegister[96].Flags;
              v42 += 64;
              *((_OWORD *)v42 - 1) = *(_OWORD *)&p_WaitRegister[112].Flags;
              p_WaitRegister += 128;
              --v41;
            }
            while ( v41 );
            *(_QWORD *)v42 = *(_QWORD *)&p_WaitRegister->Flags;
          }
          PspUnlockJobShared(v15, v40, v148);
          v46 = v155;
          memset_0(v219, 0, 16LL * v155);
          v47 = 0;
          if ( (_WORD)v46 )
          {
            v48 = v219;
            v49 = &v156;
            v50 = 0;
            do
            {
              *((_WORD *)v48 + 4) = v47;
              *(_QWORD *)v48 = *(_QWORD *)v49;
              v49 += 8;
              v48 += 16;
              v47 = ++v50;
            }
            while ( v50 < (unsigned __int16)v46 );
          }
          v128 = 16 * v46;
          v8 = 16 * v46;
          if ( v39 < 16 * v46 )
            v8 = v39;
          v122 = v8;
          JobIoAttribution = v39 < 16 * v46 ? 0xC0000023 : 0;
          v120 = 1;
          v27 = v8;
          v19 = PreviousMode;
          v28 = v219;
          v18 = JobObjectInformation;
          v29 = JobObjectInformation;
          if ( !PreviousMode )
          {
            RtlCopyVolatileMemory(JobObjectInformation, v219, v8);
            goto LABEL_299;
          }
LABEL_88:
          RtlCopyToUser(v29, v28, v27);
          goto LABEL_299;
        }
      }
LABEL_90:
      JobIoAttribution = -1073741811;
      goto LABEL_297;
    }
    goto LABEL_182;
  }
  v51 = v7 - 19;
  if ( !v51 )
    goto LABEL_152;
  v52 = v51 - 1;
  if ( !v52 )
  {
    v54 = PspCheckAllocateAndQueryNotificationChannel((__int64)v126, (__int64)v15, (__int64)v216);
    v16 = (__int128 *)v216;
    if ( v54 < 0 )
      v16 = 0LL;
    JobIoAttribution = 0;
    if ( v54 < 0 )
      JobIoAttribution = v54;
    goto LABEL_297;
  }
  v53 = v52 - 1;
  if ( !v53 )
  {
    v124 = (v15[194] & 0x400) != 0;
    v16 = (__int128 *)&v124;
    goto LABEL_70;
  }
  if ( v53 != 5 )
    goto LABEL_274;
  v19 = PreviousMode;
  JobIoAttribution = PspQueryJobHierarchyInterferenceCount(v15);
  v120 = JobIoAttribution >= 0;
  v128 = ((JobIoAttribution >> 31) & 0xFFFFFFF8) + 8;
LABEL_72:
  v18 = JobObjectInformation;
LABEL_299:
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x79517350u);
  if ( JobIoAttribution >= 0 && !v120 )
  {
    if ( v19 )
      RtlCopyToUser(v18, v16, v8);
    else
      RtlCopyVolatileMemory(v18, v16, v8);
  }
  if ( v131 )
  {
    if ( v19 )
      RtlWriteULongToUser(v131, v128);
    else
      *v131 = v128;
  }
  return JobIoAttribution;
}
