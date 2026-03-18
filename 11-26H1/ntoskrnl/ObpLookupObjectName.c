/*
 * XREFs of ObpLookupObjectName @ 0x1408FE2F0
 * Callers:
 *     AlpcpCreateClientPort @ 0x1408E9A60 (AlpcpCreateClientPort.c)
 *     ObReferenceObjectByNameEx @ 0x1408EBDCC (ObReferenceObjectByNameEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408EEAF0 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1408F2260 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetThreadServerSilo @ 0x1402167A0 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x140265670 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     PspUnlockThreadSecurityShared @ 0x140271DC0 (PspUnlockThreadSecurityShared.c)
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     PsGetPermanentSiloContext @ 0x14040B340 (PsGetPermanentSiloContext.c)
 *     SeClearLearningModeObjectInformation @ 0x14042F300 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x140430644 (SeSetLearningModeObjectInformation.c)
 *     PsGetCurrentProcessSessionId @ 0x140437260 (PsGetCurrentProcessSessionId.c)
 *     ObpFastReplenishReference @ 0x140444700 (ObpFastReplenishReference.c)
 *     ObReferenceObjectByPointer @ 0x14045F750 (ObReferenceObjectByPointer.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     ObFastReferenceObjectLocked @ 0x14048CC4C (ObFastReferenceObjectLocked.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404AB574 (ExfTryAcquirePushLockSharedEx.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     RtlUpcaseUnicodeChar @ 0x1408D5170 (RtlUpcaseUnicodeChar.c)
 *     ObCheckCreateObjectAccess @ 0x1408EE440 (ObCheckCreateObjectAccess.c)
 *     RtlIsSandboxedToken @ 0x1408F4B90 (RtlIsSandboxedToken.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpParseSymbolicLinkEx @ 0x140900300 (ObpParseSymbolicLinkEx.c)
 *     ObDereferenceDeviceMap @ 0x1409007F4 (ObDereferenceDeviceMap.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     ObpCheckTraverseAccess @ 0x14093C7C8 (ObpCheckTraverseAccess.c)
 *     ObpLockDirectoryExclusive @ 0x1409E21B8 (ObpLockDirectoryExclusive.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A18420 (ObpReferenceCurrentDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x140A18788 (SeGetTokenDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x140A189CC (ObpSetCurrentProcessDeviceMap.c)
 *     ObpIsUnsecureName @ 0x140A289B4 (ObpIsUnsecureName.c)
 *     RtlGetNtSystemRoot @ 0x140A79090 (RtlGetNtSystemRoot.c)
 *     ObpInsertDirectoryEntry @ 0x140A88ABC (ObpInsertDirectoryEntry.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

int __fastcall ObpLookupObjectName(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        PVOID a8,
        void *a9,
        struct _ACCESS_STATE *a10,
        unsigned __int64 **a11,
        int *a12,
        unsigned __int64 **a13)
{
  __int64 v13; // rdi
  unsigned __int64 *v14; // r12
  struct _OBJECT_TYPE *v15; // r13
  unsigned int v16; // r15d
  unsigned __int16 *v17; // rsi
  bool v19; // zf
  __int64 v20; // r14
  PVOID v21; // rdi
  int v22; // ecx
  int v23; // ecx
  PVOID v24; // rbx
  int result; // eax
  unsigned __int64 *v26; // rdi
  unsigned __int64 *v27; // r13
  UNICODE_STRING v28; // xmm1
  struct _KLOCK_ENTRIES *v29; // r9
  __int16 epi16; // r10
  unsigned __int16 v31; // cx
  PVOID v32; // r14
  __int64 v33; // rdi
  __int64 *v34; // rbx
  signed __int64 v35; // rax
  signed __int64 v36; // rdx
  __int64 v37; // rtt
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int64 v40; // r8
  volatile signed __int64 *v41; // rdx
  signed __int64 v42; // rax
  signed __int64 v43; // rtt
  NTSTATUS v44; // ecx
  PVOID v45; // rax
  __int64 v46; // rdx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbx
  __int64 ProcessServerSilo; // rsi
  struct _KLOCK_ENTRIES *v50; // r9
  __int64 ThreadServerSilo; // r13
  bool v52; // r14
  bool v53; // r15
  struct _KTHREAD *v54; // r12
  void *v55; // rdx
  LegacyAutoBoost *v56; // r15
  _QWORD *p_Lock; // rsi
  volatile signed __int64 *v58; // r14
  signed __int64 *ServerSiloGlobals; // rsi
  signed __int64 v60; // r14
  signed __int64 v61; // rdx
  signed __int64 v62; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v64; // rcx
  signed __int64 *p_Blink; // rdi
  struct _KLOCK_ENTRIES *v66; // r9
  void *v67; // rdx
  LegacyAutoBoost *v68; // rbx
  signed __int64 v69; // rax
  signed __int64 v70; // rtt
  __int64 v71; // rdx
  unsigned __int16 v72; // ax
  __int64 v73; // rax
  volatile signed __int64 *v74; // rsi
  __int64 v75; // r15
  signed __int64 *v76; // rbx
  signed __int64 v77; // r13
  signed __int64 v78; // rdx
  signed __int64 v79; // rax
  unsigned int v80; // edx
  ULONG_PTR v81; // rdi
  char v82; // cl
  NTSTATUS v83; // eax
  signed __int64 v84; // rax
  signed __int64 v85; // rtt
  NTSTATUS v86; // edx
  void *v87; // rdi
  volatile signed __int64 *v88; // rsi
  unsigned __int64 v89; // r14
  signed __int64 v90; // rax
  signed __int64 v91; // rtt
  __int16 v92; // cx
  PVOID v93; // rax
  __int64 v94; // r15
  __int64 *v95; // rsi
  signed __int64 v96; // rax
  signed __int64 v97; // rdx
  __int64 v98; // rtt
  __int64 v99; // rdx
  __int64 v100; // r8
  struct _ACCESS_STATE *v101; // r14
  __int16 v102; // bx
  PVOID v103; // rdi
  unsigned __int64 v104; // r14
  volatile signed __int64 *v105; // rsi
  signed __int64 v106; // rax
  signed __int64 v107; // rtt
  __int64 *v108; // rbx
  signed __int64 v109; // rax
  signed __int64 v110; // rdx
  __int64 v111; // rtt
  __int64 v112; // rdx
  __int64 v113; // r8
  __int16 v114; // cx
  __int64 v115; // rdi
  __int64 (__usercall *v116)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rbx
  unsigned __int16 v117; // r12
  __int16 v118; // r10
  __int64 v119; // r8
  char v120; // bl
  __int64 v121; // r15
  volatile signed __int32 *v122; // rdi
  AutoBoost *v123; // rax
  void *v124; // rdx
  AutoBoost *v125; // rsi
  __int64 v126; // rdi
  unsigned __int64 v127; // rsi
  unsigned __int64 v128; // r9
  wchar_t *Buffer; // r14
  unsigned int v130; // edi
  __int64 v131; // rbx
  unsigned int v132; // ebx
  unsigned int v133; // edx
  int v134; // ebx
  char v135; // r13
  int v136; // r13d
  unsigned __int8 v137; // al
  __int64 v138; // rbx
  __int64 v139; // rdi
  struct _KTHREAD *v140; // rax
  void *v141; // rdx
  LegacyAutoBoost *v142; // rdi
  __int64 v143; // rdx
  struct _LIST_ENTRY *Flink; // r12
  char *v145; // r14
  __int64 v146; // rsi
  unsigned __int16 *v147; // r15
  SIZE_T v148; // rax
  __int64 v149; // rax
  unsigned __int16 *v150; // r10
  char *v151; // r14
  unsigned __int64 v152; // r8
  NTSTATUS v153; // eax
  __int64 v154; // rcx
  WCHAR *NtSystemRoot; // rax
  WCHAR v156; // bx
  WCHAR v157; // dx
  __int64 v158; // rcx
  int v159; // edi
  char *v160; // r14
  int v161; // eax
  char *v162; // rbx
  __int64 v163; // rax
  PVOID v164; // rax
  char v165; // si
  void *v166; // rdx
  AutoBoost *v167; // rdi
  signed __int64 *v168; // rbx
  char v169; // al
  unsigned __int64 *v170; // r12
  __int64 (__usercall *v171)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rax
  __int64 v172; // rax
  int v173; // ecx
  PVOID *v174; // rax
  struct _LIST_ENTRY *v175; // rax
  struct _KTHREAD *v176; // rcx
  struct _LIST_ENTRY *v177; // r15
  struct _KLOCK_ENTRIES *v178; // r9
  void *v179; // rdx
  LegacyAutoBoost *v180; // rsi
  __int64 v181; // rax
  __int64 v182; // r15
  __int64 v183; // rax
  __int128 v184; // rt0
  char *v185; // rax
  struct _KTHREAD *v186; // rcx
  signed __int64 *v187; // rdi
  struct _KLOCK_ENTRIES *v188; // r9
  void *v189; // rdx
  LegacyAutoBoost *v190; // r14
  struct _OBJECT_TYPE *v191; // rbx
  _DWORD *v192; // r14
  ACCESS_MASK v193; // edx
  KPROCESSOR_MODE v194; // di
  unsigned int v195; // esi
  void *Pool2; // rdi
  __int64 v197; // rbx
  void *v198; // rcx
  int v199; // ebx
  __int64 v200; // r8
  __int64 v201; // r9
  signed __int64 *v202; // rbx
  struct _KLOCK_ENTRIES *v203; // r9
  void *v204; // rdx
  LegacyAutoBoost *v205; // rdi
  char v206; // si
  char *v207; // rdi
  int v208; // esi
  __int64 *v209; // rbx
  __int64 v210; // rdx
  char *v211; // r12
  __int64 v212; // r15
  unsigned __int16 *v213; // r13
  SIZE_T v214; // rax
  __int64 v215; // rax
  unsigned __int16 *v216; // r10
  char *v217; // r12
  unsigned __int64 v218; // r8
  __int64 Tag; // [rsp+20h] [rbp-E0h]
  __int64 v220; // [rsp+28h] [rbp-D8h]
  __int64 *v221; // [rsp+30h] [rbp-D0h]
  __int64 v222; // [rsp+38h] [rbp-C8h]
  __int64 v223; // [rsp+40h] [rbp-C0h]
  PVOID *v224; // [rsp+48h] [rbp-B8h]
  PVOID *v225; // [rsp+50h] [rbp-B0h]
  NTSTATUS v226; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h]
  unsigned __int64 v228[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v229[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v230; // [rsp+90h] [rbp-70h]
  int v231; // [rsp+A0h] [rbp-60h]
  unsigned int v232; // [rsp+A4h] [rbp-5Ch]
  void *Source1; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v234; // [rsp+B0h] [rbp-50h]
  int v235; // [rsp+B8h] [rbp-48h]
  int v236; // [rsp+BCh] [rbp-44h] BYREF
  signed __int64 *v237; // [rsp+C0h] [rbp-40h]
  PVOID v238; // [rsp+C8h] [rbp-38h] BYREF
  signed __int64 *v239; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v240; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v241; // [rsp+E0h] [rbp-20h]
  _WORD v242[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v243; // [rsp+ECh] [rbp-14h]
  __int64 v244; // [rsp+F0h] [rbp-10h]
  PVOID v245; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING String2; // [rsp+100h] [rbp+0h] BYREF
  __int128 v247; // [rsp+110h] [rbp+10h] BYREF
  __int128 v248; // [rsp+120h] [rbp+20h]
  __int128 v249; // [rsp+130h] [rbp+30h]
  __int64 v250; // [rsp+140h] [rbp+40h]
  char v251; // [rsp+1A0h] [rbp+A0h]
  int v253; // [rsp+1B0h] [rbp+B0h] BYREF
  POBJECT_TYPE ObjectType; // [rsp+1B8h] [rbp+B8h]

  ObjectType = (POBJECT_TYPE)a4;
  v253 = a3;
  v13 = (__int64)a11;
  v14 = 0LL;
  v242[1] = 0;
  v245 = 0LL;
  v238 = 0LL;
  *(_OWORD *)a11 = 0LL;
  *(_QWORD *)(v13 + 16) = 0LL;
  v15 = (struct _OBJECT_TYPE *)a4;
  v250 = 0LL;
  v16 = a3;
  v237 = 0LL;
  v17 = (unsigned __int16 *)a2;
  v239 = 0LL;
  v240 = 0LL;
  v234 = 0LL;
  v235 = 64;
  v247 = 0LL;
  v248 = 0LL;
  v249 = 0LL;
  *(_OWORD *)v229 = 0LL;
  if ( a12 )
    *a12 = 0;
  v19 = ObpCaseInsensitive == 0;
  v20 = (__int64)a9;
  v226 = 0;
  v236 = 0;
  *a13 = 0LL;
  v242[0] = 16;
  v251 = 1;
  Object = 0LL;
  Source1 = 0LL;
  v243 = -1;
  v244 = v20;
  if ( !v19
    && (*(_BYTE *)(a4 + 66) & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v16 = a3 | 0x40;
    v253 = a3 | 0x40;
  }
  v21 = a8;
  v22 = 1;
  if ( (v16 & 0x400) == 0 )
    v22 = a5;
  v232 = v22;
  v23 = v16 & 0x40 | 1;
  if ( a8 )
    v23 = v16 & 0x40;
  v231 = v23;
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0LL, 0LL, a5, 0x746C6644u, &v238, 0LL, &v240);
    v226 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v240) )
    {
      v243 &= HIDWORD(v240);
      if ( (v243 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
      {
        ObfDereferenceObject(v238);
        return -1073741790;
      }
    }
    v26 = (unsigned __int64 *)v238;
    v245 = v238;
    if ( *v17 )
    {
      if ( **((_WORD **)v17 + 1) == 92
        && ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)v238 - 24) ^ ((unsigned __int16)((_WORD)v238 - 48) >> 8))) != *((_BYTE *)IoFileObjectType + 40) )
      {
        ObfDereferenceObject(v238);
        return -1073741765;
      }
    }
    else if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)v238 - 24) ^ ((unsigned __int16)((_WORD)v238 - 48) >> 8))) == ObpDirectoryObjectType->Index )
    {
      v226 = ObReferenceObjectByPointer(v238, 0, v15, a5);
      if ( v226 >= 0 )
        v14 = v26;
      ObfDereferenceObject(v26);
      *a13 = v14;
      return v226;
    }
    v27 = (unsigned __int64 *)v238;
    v28 = *(UNICODE_STRING *)v17;
    *(_OWORD *)v229 = *(_OWORD *)v17;
    if ( SepLearningModeTokenCount )
    {
      *((_QWORD *)&v248 + 1) = v17;
      *(_QWORD *)&v248 = &ObjectType->Name;
      *(_QWORD *)&v249 = BugCheckParameter1;
      SeSetLearningModeObjectInformation((__int64)&v247);
      v29 = (struct _KLOCK_ENTRIES *)v229[1];
      epi16 = WORD1(v229[0]);
      v31 = v229[0];
      v28 = *(UNICODE_STRING *)v229;
      goto LABEL_184;
    }
    v29 = (struct _KLOCK_ENTRIES *)_mm_srli_si128((__m128i)v28, 8).m128i_u64[0];
    goto LABEL_183;
  }
  if ( !*(_WORD *)a2 || **(_WORD **)(a2 + 8) != 92 )
    return -1073741765;
  if ( *(_WORD *)a2 == 2 )
  {
    a9 = 0LL;
    if ( (int)PsGetPermanentSiloContext(v20, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&a9) >= 0 )
      v24 = a9;
    else
      v24 = ObpRootDirectoryObject;
    if ( v24 )
    {
      result = ObReferenceObjectByPointer(v24, 0, v15, a5);
      if ( result >= 0 )
        *a13 = (unsigned __int64 *)v24;
    }
    else if ( v21 )
    {
      result = ObReferenceObjectByPointer(v21, 0, v15, a5);
      if ( result >= 0 )
        *a13 = (unsigned __int64 *)v21;
    }
    else
    {
      return -1073741811;
    }
    return result;
  }
  if ( SepLearningModeTokenCount )
  {
    *((_QWORD *)&v248 + 1) = a2;
    *(_QWORD *)&v248 = a4 + 16;
    *(_QWORD *)&v249 = 0LL;
    SeSetLearningModeObjectInformation((__int64)&v247);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v46 = *v17;
      if ( (unsigned __int16)v46 < 8u || **((_QWORD **)v17 + 1) != 0x5C003F003F005CLL )
      {
        if ( (_WORD)v46 != 6 )
          goto LABEL_134;
        v172 = *((_QWORD *)v17 + 1);
        v173 = *(_DWORD *)v172 - 4128860;
        if ( *(_DWORD *)v172 == 4128860 )
          v173 = *(unsigned __int16 *)(v172 + 4) - 63;
        if ( v173 )
          goto LABEL_134;
        v174 = (PVOID *)ObpReferenceCurrentDeviceMap(
                          v16,
                          &v239,
                          0x5C003F003F005CLL,
                          63LL,
                          Tag,
                          v220,
                          v221,
                          v222,
                          v223,
                          v224,
                          v225);
        v234 = (unsigned __int64)v174;
        if ( !v174 || !*v174 )
        {
          v237 = v239;
LABEL_394:
          v20 = (__int64)a9;
LABEL_134:
          if ( !Source1 )
          {
            v228[0] = 0LL;
            if ( (int)PsGetPermanentSiloContext(v20, PsObjectDirectorySiloContextSlot, v228) >= 0 )
              v93 = (PVOID)v228[0];
            else
              v93 = ObpRootDirectoryObject;
            Source1 = v93;
          }
          v27 = (unsigned __int64 *)Source1;
          goto LABEL_139;
        }
        v27 = (unsigned __int64 *)*v174;
        v86 = ObReferenceObjectByPointer(*v174, 0, ObjectType, a5);
        v226 = v86;
        v237 = v239;
LABEL_281:
        v32 = Object;
        goto LABEL_282;
      }
      if ( v15 == (struct _OBJECT_TYPE *)IoFileObjectType )
      {
        v154 = *((unsigned int *)&KeGetCurrentThread()[1].SwapListEntry + 2);
        if ( (v154 & 8) != 0 && *v17 >= 0xEu )
        {
          NtSystemRoot = (WCHAR *)RtlGetNtSystemRoot(v154, v46, 0x5C003F003F005CLL, 63LL);
          v156 = RtlUpcaseUnicodeChar(*NtSystemRoot);
          v157 = RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)v17 + 1) + 8LL));
          if ( (ObpDriveRemappingMitigation & 1) != 0 )
          {
            v158 = *((_QWORD *)v17 + 1);
            if ( v156 == v157 && *(_WORD *)(v158 + 10) == 58 && *(_WORD *)(v158 + 12) == 92 )
              v253 = v16 | 0x800;
          }
        }
      }
      CurrentThread = KeGetCurrentThread();
      v234 = 0LL;
      v237 = 0LL;
      v239 = 0LL;
      Process = (__int64)CurrentThread->Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
      v52 = ProcessServerSilo != ThreadServerSilo;
      v53 = ProcessServerSilo != ThreadServerSilo;
      if ( (((*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0) & !_bittest(&v253, 0xBu)) != 0
        && ProcessServerSilo == ThreadServerSilo
        && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v54 = KeGetCurrentThread();
        --v54->KernelApcDisable;
        v56 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v50);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(
            (signed __int64 *)&CurrentThread[1].WaitBlockList,
            0,
            v56,
            (struct _KTHREAD *)((char *)CurrentThread + 1424));
        if ( v56 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v56, v55);
          else
            *((_BYTE *)v56 + 10) = 1;
        }
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          p_Lock = &CurrentThread[1].WaitBlock[1].Thread->Header.Lock;
          if ( !p_Lock )
            p_Lock = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObjectWithTag(p_Lock, 0x746C6644u);
          PspUnlockThreadSecurityShared((__int64)CurrentThread, v54);
          v53 = v52;
          if ( p_Lock )
          {
            if ( p_Lock[3] == 999LL )
            {
              v53 = 1;
              ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
              goto LABEL_378;
            }
            v228[0] = 0LL;
            if ( (int)SeGetTokenDeviceMap(p_Lock, v228) >= 0 )
              v234 = v228[0];
            ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
            v58 = (volatile signed __int64 *)v234;
            if ( v234 )
              goto LABEL_95;
          }
        }
        else
        {
          PspUnlockThreadSecurityShared((__int64)CurrentThread, v54);
          v53 = ProcessServerSilo != ThreadServerSilo;
        }
      }
      if ( !v53 )
      {
        ServerSiloGlobals = (signed __int64 *)(Process + 792);
        v237 = (signed __int64 *)(Process + 792);
        goto LABEL_77;
      }
LABEL_378:
      ServerSiloGlobals = (signed __int64 *)PsGetServerSiloGlobals(ThreadServerSilo);
      v237 = ServerSiloGlobals;
LABEL_77:
      v239 = ServerSiloGlobals;
      _m_prefetchw(ServerSiloGlobals);
      v60 = *ServerSiloGlobals;
      v61 = *ServerSiloGlobals;
      if ( (*ServerSiloGlobals & 0xF) != 0 )
      {
        do
        {
          v62 = _InterlockedCompareExchange64(ServerSiloGlobals, v60 - 1, v60);
          if ( v60 == v62 )
            break;
          v60 = v62;
          LOBYTE(v61) = v62;
        }
        while ( (v62 & 0xF) != 0 );
      }
      v58 = (volatile signed __int64 *)(v60 & 0xFFFFFFFFFFFFFFF0uLL);
      v234 = (unsigned __int64)v58;
      if ( (v61 & 0xF) == 0 )
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        v64 = KeGetCurrentThread();
        p_Blink = (signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
        --v64->SpecialApcDisable;
        v68 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[7].Blink, 0LL, 0LL, v66);
        if ( _InterlockedCompareExchange64(p_Blink, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(p_Blink, 0, v68, (struct _KTHREAD *)p_Blink);
        if ( v68 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v68, v67);
          else
            *((_BYTE *)v68 + 10) = 1;
        }
        v58 = (volatile signed __int64 *)(*ServerSiloGlobals & 0xFFFFFFFFFFFFFFF0uLL);
        v234 = (unsigned __int64)v58;
        if ( v58 )
        {
          if ( _InterlockedExchangeAdd64(v58 + 30, 0xFuLL) <= 0 )
            __fastfail(0xEu);
          _m_prefetchw(ServerSiloGlobals);
          v69 = *ServerSiloGlobals;
          while ( (unsigned __int64)(v69 & 0xF) + 14 <= 0xF
               && v58 == (volatile signed __int64 *)(v69 & 0xFFFFFFFFFFFFFFF0uLL) )
          {
            v70 = v69;
            v69 = _InterlockedCompareExchange64(ServerSiloGlobals, v69 + 14, v69);
            if ( v70 == v69 )
              goto LABEL_91;
          }
          ObDereferenceDeviceMap((PVOID)v58);
        }
LABEL_91:
        if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_Blink);
        KeAbPostRelease((unsigned __int64)p_Blink);
        KeLeaveGuardedRegion();
      }
      if ( !v58 )
      {
        if ( !v53 )
        {
          v237 = 0LL;
          v239 = 0LL;
          v58 = (volatile signed __int64 *)ObpSetCurrentProcessDeviceMap();
          v234 = (unsigned __int64)v58;
        }
        if ( !v58 )
        {
          v17 = (unsigned __int16 *)a2;
          goto LABEL_394;
        }
      }
LABEL_95:
      v17 = (unsigned __int16 *)a2;
      if ( !*v58 )
        goto LABEL_394;
      v71 = *(_QWORD *)(a2 + 8);
      v72 = *(_WORD *)a2 - 8;
      epi16 = *(_WORD *)(a2 + 2) - 8;
      v29 = (struct _KLOCK_ENTRIES *)(v71 + 8);
      v229[1] = v71 + 8;
      v31 = v72;
      LOWORD(v229[0]) = v72;
      WORD1(v229[0]) = epi16;
      if ( ObjectType == (POBJECT_TYPE)IoFileObjectType
        && (v231 & 1) != 0
        && v72 >= 6u
        && *(_WORD *)(v71 + 10) == 58
        && *(_WORD *)(v71 + 12) == 92 )
      {
        v73 = (LOWORD(v29->Thread) | 0x20u) - 97;
        if ( (unsigned int)v73 < 0x1A )
          break;
      }
LABEL_300:
      v27 = (unsigned __int64 *)*v58;
      v28 = *(UNICODE_STRING *)v229;
LABEL_184:
      while ( 1 )
      {
        v115 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v27 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v27 - 48) >> 8)];
        v116 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(v115 + 144);
        if ( v116 )
          break;
        if ( (POBJECT_TYPE)v115 != ObpDirectoryObjectType )
          goto LABEL_491;
        v241 = v27;
        if ( v31 && LOWORD(v29->Thread) == 92 )
        {
          v29 = (struct _KLOCK_ENTRIES *)((char *)v29 + 2);
          v31 -= 2;
          epi16 -= 2;
          v229[1] = (__int64)v29;
          WORD1(v229[0]) = epi16;
          LOWORD(v229[0]) = v31;
          v28 = *(UNICODE_STRING *)v229;
        }
        String2 = v28;
        if ( v31 )
        {
          do
          {
            if ( LOWORD(v29->Thread) == 92 )
              break;
            v29 = (struct _KLOCK_ENTRIES *)((char *)v29 + 2);
            v19 = v31 == 2;
            v31 -= 2;
            v229[1] = (__int64)v29;
            LOWORD(v229[0]) = v31;
          }
          while ( !v19 );
        }
        v117 = String2.Length - v31;
        v118 = epi16 - (String2.Length - v31);
        v230 = v117;
        String2.Length -= v31;
        WORD1(v229[0]) = v118;
        if ( !v117 )
          goto LABEL_26;
        v119 = v232;
        if ( (_BYTE)v232 && (a10->Flags & 1) == 0 )
        {
          LOBYTE(Tag) = v232;
          v251 = ObpCheckTraverseAccess(v27, a10, a10, v29, Tag, &v236);
          if ( !v251 )
          {
            v86 = v236;
            if ( v236 >= 0 )
            {
              v86 = -1073741772;
              v236 = -1073741772;
            }
            if ( LOWORD(v229[0]) || !a8 )
              goto LABEL_397;
            goto LABEL_229;
          }
          v31 = v229[0];
        }
        if ( !a8 || v31 )
        {
          v120 = 0;
          goto LABEL_196;
        }
LABEL_229:
        v120 = 1;
LABEL_196:
        v121 = (__int64)a11;
        if ( *a11 )
        {
          v122 = (volatile signed __int32 *)(v27 + 37);
          v123 = (AutoBoost *)KeAbPreAcquire((__int64)(v27 + 37), 0LL, 0LL, v29);
          v125 = v123;
          if ( v120 )
          {
            if ( _interlockedbittestandset64(v122, 0LL) )
              ExfAcquirePushLockExclusiveEx(v27 + 37, v123, (__int64)(v27 + 37));
            if ( v125 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                goto LABEL_290;
LABEL_202:
              *((_BYTE *)v125 + 10) = 1;
            }
          }
          else
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v122, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx((signed __int64 *)v27 + 37, 0, v123, (struct _KTHREAD *)(v27 + 37));
            if ( v125 )
            {
              if ( (KiAbpGlobalState & 1) == 0 )
                goto LABEL_202;
LABEL_290:
              AutoBoost::KiAbpPostAcquire(v125, v124);
            }
          }
          v126 = *(_QWORD *)v121;
          v127 = 0LL;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v121 + 296LL), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v126 + 296));
          KeAbPostRelease(v126 + 296);
          if ( *(_BYTE *)(v121 + 22) )
          {
            ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v121, 0x554C624Fu);
            *(_BYTE *)(v121 + 22) = 0;
          }
          *(_QWORD *)v121 = v27;
          *(_BYTE *)(v121 + 21) = v120;
          goto LABEL_208;
        }
        if ( v120 )
        {
          ObpLockDirectoryExclusive(a11, v27, v119, v29);
          v127 = 0LL;
          goto LABEL_208;
        }
        *a11 = v27;
        *(_BYTE *)(v121 + 21) = 0;
        v140 = KeGetCurrentThread();
        --v140->KernelApcDisable;
        v142 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v27 + 37), 0LL, 0LL, v29);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v27 + 37, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v27 + 37, 0, v142, (struct _KTHREAD *)(v27 + 37));
        if ( v142 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
          {
            AutoBoost::KiAbpPostAcquire(v142, v141);
            v127 = 0LL;
            goto LABEL_208;
          }
          *((_BYTE *)v142 + 10) = 1;
        }
        v127 = 0LL;
LABEL_208:
        Buffer = String2.Buffer;
        v130 = v117 >> 1;
        Source1 = String2.Buffer;
        if ( v130 < 4 )
        {
          v132 = 0;
        }
        else
        {
          do
          {
            v131 = *(_QWORD *)Buffer;
            if ( (*(_QWORD *)Buffer & 0xFF80FF80FF80FF80uLL) != 0 )
            {
              v182 = 4LL;
              do
              {
                v183 = (unsigned __int16)v131;
                if ( (unsigned __int16)v131 >= 0x61u )
                {
                  if ( (unsigned __int16)v131 <= 0x7Au )
                    v183 = (unsigned int)(unsigned __int16)v131 - 32;
                  else
                    v183 = RtlUpcaseUnicodeChar(v131);
                }
                *(_QWORD *)&v184 = v131;
                *((_QWORD *)&v184 + 1) = v183;
                v131 = v184 >> 16;
                --v182;
              }
              while ( v182 );
            }
            else
            {
              v131 &= 0xFFDFFFDFFFDFFFDFuLL;
            }
            Buffer += 4;
            v130 -= 4;
            v127 = v131 + (v127 >> 1) + 3 * v127;
          }
          while ( v130 >= 4 );
          v121 = (__int64)a11;
          v132 = v127 + HIDWORD(v127);
        }
        while ( v130 )
        {
          v133 = *Buffer++;
          --v130;
          v134 = (v132 >> 1) + 3 * v132;
          if ( v133 >= 0x61 )
          {
            if ( v133 > 0x7A )
            {
              v132 = RtlUpcaseUnicodeChar(v133) + v134;
              continue;
            }
            v134 -= 32;
          }
          v132 = v133 + v134;
        }
        v135 = v231;
        *(_DWORD *)(v121 + 16) = v132;
        v136 = v135 & 0x40;
        v137 = v132 % 0x25;
        *(_BYTE *)(v121 + 20) = v137;
        v138 = *(_QWORD *)(*(_QWORD *)v121 + 8LL * v137);
        v139 = *(_QWORD *)v121 + 8LL * v137;
        if ( !v138 )
        {
LABEL_222:
          v27 = 0LL;
          goto LABEL_292;
        }
        while ( 1 )
        {
          if ( *(_DWORD *)(v138 + 16) != *(_DWORD *)(v121 + 16) )
            goto LABEL_221;
          Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
          if ( v230 != *(_WORD *)(v143 + 8) )
            goto LABEL_221;
          v145 = *(char **)(v143 + 16);
          v146 = v230;
          v147 = (unsigned __int16 *)((char *)Source1 + v230);
          if ( v136 )
            break;
          if ( !memcmp(Source1, v145, v230) )
            goto LABEL_240;
LABEL_258:
          v121 = (__int64)a11;
LABEL_221:
          v139 = v138;
          v138 = *(_QWORD *)v138;
          if ( !v138 )
            goto LABEL_222;
        }
        v148 = RtlCompareMemory(Source1, v145, v230);
        if ( v148 != v146 )
        {
          v149 = 2 * (v148 >> 1);
          v150 = (unsigned __int16 *)((char *)Source1 + v149);
          v151 = &v145[v149];
          while ( v150 < v147 )
          {
            v152 = *v150;
            v128 = *(unsigned __int16 *)v151;
            if ( (_WORD)v152 != (_WORD)v128 )
            {
              if ( (unsigned int)v152 >= 0x61 )
              {
                if ( (unsigned int)v152 > 0x7A )
                {
                  if ( Flink && (unsigned __int16)v152 >= 0xC0u )
                    LOWORD(v152) = *((_WORD *)&Flink->Flink
                                   + (v152 & 0xF)
                                   + *((unsigned __int16 *)&Flink->Flink
                                     + ((unsigned __int8)v152 >> 4)
                                     + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v152 >> 8))))
                                 + v152;
                }
                else
                {
                  LOWORD(v152) = v152 - 32;
                }
              }
              if ( (unsigned int)v128 >= 0x61 )
              {
                if ( (unsigned int)v128 > 0x7A )
                {
                  if ( Flink && (unsigned __int16)v128 >= 0xC0u )
                    LOWORD(v128) = *((_WORD *)&Flink->Flink
                                   + (v128 & 0xF)
                                   + *((unsigned __int16 *)&Flink->Flink
                                     + ((unsigned __int8)v128 >> 4)
                                     + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v128 >> 8))))
                                 + v128;
                }
                else
                {
                  LOWORD(v128) = v128 - 32;
                }
              }
              if ( (_WORD)v152 != (_WORD)v128 )
                goto LABEL_258;
            }
            ++v150;
            v151 += 2;
          }
        }
LABEL_240:
        v27 = *(unsigned __int64 **)(v138 + 8);
        v121 = (__int64)a11;
        a11[1] = (unsigned __int64 *)v139;
        if ( v27 )
          goto LABEL_241;
LABEL_292:
        v159 = v231;
        if ( (v231 & 1) == 0 )
          goto LABEL_241;
        v160 = *(char **)v121;
        while ( 2 )
        {
          while ( 2 )
          {
            v161 = *((_DWORD *)v160 + 84);
            v162 = 0LL;
            if ( (v161 & 4) != 0 )
            {
              if ( (v159 & 6) == 0 && (v161 & 0x10) != 0 )
              {
                if ( RtlIsSandboxedToken(&a10->SubjectSecurityContext, v232) )
                  v159 |= 2u;
                else
                  v159 |= 4u;
                v231 = v159;
              }
              if ( (*((_DWORD *)v160 + 84) & 0x10) == 0 || (v159 & 2) != 0 )
                v162 = (char *)*((_QWORD *)v160 + 39);
            }
            else
            {
              v163 = *((_QWORD *)v160 + 38);
              if ( !v163 )
                goto LABEL_241;
              if ( v163 == v234 )
              {
                v160 = *(char **)(v234 + 8);
                goto LABEL_315;
              }
              v175 = PsGetCurrentServerSiloGlobals();
              v176 = KeGetCurrentThread();
              v177 = v175;
              --v176->SpecialApcDisable;
              v180 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&v175[7].Blink, 0LL, 0LL, v178);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v177[7].Blink, 17LL, 0LL) )
                ExfAcquirePushLockSharedEx((signed __int64 *)&v177[7].Blink, 0, v180, (struct _KTHREAD *)&v177[7].Blink);
              if ( v180 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v180, v179);
                else
                  *((_BYTE *)v180 + 10) = 1;
              }
              v181 = *((_QWORD *)v160 + 38);
              if ( v181 )
                v162 = *(char **)(v181 + 8);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v177[7].Blink, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)&v177[7].Blink);
              KeAbPostRelease((unsigned __int64)&v177[7].Blink);
              KeLeaveGuardedRegion();
              v121 = (__int64)a11;
            }
            v160 = v162;
LABEL_315:
            if ( !v160 )
              goto LABEL_241;
            v165 = *(_BYTE *)(v121 + 22);
            v167 = (AutoBoost *)KeAbPreAcquire((__int64)(v160 + 296), 0LL, 1LL, (struct _KLOCK_ENTRIES *)v128);
            if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v160 + 37, 17LL, 0LL)
              || ExfTryAcquirePushLockSharedEx((signed __int64 *)v160 + 37, 0) )
            {
              if ( v167 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v167, v166);
                else
                  *((_BYTE *)v167 + 10) = 1;
              }
              v168 = *(signed __int64 **)v121;
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v121 + 296LL), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v168 + 37);
              KeAbPostRelease((unsigned __int64)(v168 + 37));
              v169 = 0;
            }
            else
            {
              if ( v167 )
                KeAbPostReleaseEx((struct _KTHREAD *)(v160 + 296), (unsigned __int64)v167, v200, v201);
              ObfReferenceObjectWithTag(v160, 0x554C624Fu);
              v202 = *(signed __int64 **)v121;
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v121 + 296LL), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v202 + 37);
              KeAbPostRelease((unsigned __int64)(v202 + 37));
              v205 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v160 + 296), 0LL, 0LL, v203);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)v160 + 37, 17LL, 0LL) )
                ExfAcquirePushLockSharedEx((signed __int64 *)v160 + 37, 0, v205, (struct _KTHREAD *)(v160 + 296));
              if ( v205 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v205, v204);
                else
                  *((_BYTE *)v205 + 10) = 1;
              }
              v169 = 1;
            }
            *(_BYTE *)(v121 + 22) = v169;
            if ( v165 )
              ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v121, 0x554C624Fu);
            v206 = v231;
            v207 = &v160[8 * *(unsigned __int8 *)(v121 + 20)];
            *(_QWORD *)v121 = v160;
            v208 = v206 & 0x40;
            v209 = *(__int64 **)v207;
            if ( !*(_QWORD *)v207 )
            {
LABEL_447:
              v159 = v231;
              v27 = 0LL;
              continue;
            }
            break;
          }
          while ( 1 )
          {
            if ( *((_DWORD *)v209 + 4) != *(_DWORD *)(v121 + 16) )
              goto LABEL_446;
            v228[0] = (unsigned __int64)PsGetCurrentServerSiloGlobals()[75].Flink;
            if ( v230 != *(_WORD *)(v210 + 8) )
              goto LABEL_446;
            v211 = *(char **)(v210 + 16);
            v212 = v230;
            v213 = (unsigned __int16 *)((char *)Source1 + v230);
            if ( v208 )
              break;
            if ( !memcmp(Source1, v211, v230) )
              goto LABEL_458;
LABEL_471:
            v121 = (__int64)a11;
LABEL_446:
            v207 = (char *)v209;
            v209 = (__int64 *)*v209;
            if ( !v209 )
              goto LABEL_447;
          }
          v214 = RtlCompareMemory(Source1, v211, v230);
          if ( v214 != v212 )
          {
            v215 = 2 * (v214 >> 1);
            v216 = (unsigned __int16 *)((char *)Source1 + v215);
            v217 = &v211[v215];
            while ( v216 < v213 )
            {
              v218 = *v216;
              v128 = *(unsigned __int16 *)v217;
              if ( (_WORD)v218 != (_WORD)v128 )
              {
                if ( (unsigned int)v218 >= 0x61 )
                {
                  if ( (unsigned int)v218 > 0x7A )
                  {
                    if ( v228[0] && (unsigned __int16)v218 >= 0xC0u )
                      LOWORD(v218) = *(_WORD *)(v228[0]
                                              + 2
                                              * ((v218 & 0xF)
                                               + *(unsigned __int16 *)(v228[0]
                                                                     + 2LL
                                                                     * (((unsigned __int8)v218 >> 4)
                                                                      + (unsigned int)*(unsigned __int16 *)(v228[0] + 2 * (v218 >> 8))))))
                                   + v218;
                  }
                  else
                  {
                    LOWORD(v218) = v218 - 32;
                  }
                }
                if ( (unsigned int)v128 >= 0x61 )
                {
                  if ( (unsigned int)v128 > 0x7A )
                  {
                    if ( v228[0] && (unsigned __int16)v128 >= 0xC0u )
                      LOWORD(v128) = *(_WORD *)(v228[0]
                                              + 2
                                              * ((v128 & 0xF)
                                               + *(unsigned __int16 *)(v228[0]
                                                                     + 2LL
                                                                     * (((unsigned __int8)v128 >> 4)
                                                                      + (unsigned int)*(unsigned __int16 *)(v228[0] + 2 * (v128 >> 8))))))
                                   + v128;
                  }
                  else
                  {
                    LOWORD(v128) = v128 - 32;
                  }
                }
                if ( (_WORD)v218 != (_WORD)v128 )
                  goto LABEL_471;
              }
              ++v216;
              v217 += 2;
            }
          }
LABEL_458:
          v27 = (unsigned __int64 *)v209[1];
          v121 = (__int64)a11;
          a11[1] = (unsigned __int64 *)v207;
          if ( !v27 )
          {
            v159 = v231;
            continue;
          }
          break;
        }
LABEL_241:
        if ( !v251 )
        {
          if ( v27 )
          {
            v86 = v236;
LABEL_397:
            v226 = v86;
            goto LABEL_281;
          }
LABEL_323:
          if ( LOWORD(v229[0]) )
          {
            v32 = Object;
            v226 = -1073741766;
          }
          else
          {
            v170 = (unsigned __int64 *)a8;
            if ( !a8 )
            {
LABEL_325:
              v32 = Object;
              v226 = -1073741772;
              goto LABEL_27;
            }
            v191 = ObjectType;
            v192 = v241;
            v193 = 4;
            v194 = v232;
            if ( ObjectType == ObpDirectoryObjectType )
              v193 = 8;
            LOBYTE(Tag) = 0;
            if ( !ObCheckCreateObjectAccess((__int64)v241, v193, a10, (__int64)&String2, Tag, v232, &v226) )
            {
              v32 = Object;
              if ( v226 >= 0 )
              {
                v86 = -1073741772;
                v226 = -1073741772;
                goto LABEL_282;
              }
              goto LABEL_27;
            }
            if ( v192[85] != -1 && (v191 == MmSectionObjectType || v191 == ObpSymbolicLinkObjectType) )
            {
              v199 = v192[85];
              if ( v199 != (unsigned int)PsGetCurrentProcessSessionId()
                && !SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.Timer.Dpc, v194)
                && !(unsigned __int8)ObpIsUnsecureName(&String2) )
              {
                goto LABEL_426;
              }
            }
            v195 = v230;
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            if ( Pool2 )
            {
              if ( (unsigned __int8)ObpInsertDirectoryEntry(v192, v170) )
              {
                memmove(Pool2, Source1, v195);
                v197 = (__int64)v170 - ObpInfoMaskToOffset[*((_BYTE *)v170 - 22) & 3] - 48;
                v198 = *(void **)(v197 + 16);
                if ( v198 )
                  ExFreePoolWithTag(v198, 0);
                v32 = Object;
                v27 = v170;
                *(_WORD *)(v197 + 8) = v195;
                *(_WORD *)(v197 + 10) = v195;
                *(_QWORD *)(v197 + 16) = Pool2;
                v226 = 0;
                goto LABEL_35;
              }
              ExFreePoolWithTag(Pool2, 0);
            }
            v32 = Object;
            v226 = -1073741670;
          }
LABEL_27:
          v33 = (__int64)a11;
          if ( *a11 )
          {
            v34 = (__int64 *)(*a11 + 37);
            _m_prefetchw(v34);
            v35 = *v34;
            v36 = *v34 - 16;
            if ( (*v34 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v36 = 0LL;
            if ( (v35 & 2) != 0 || (v37 = *v34, v37 != _InterlockedCompareExchange64(v34, v36, v35)) )
              ExfReleasePushLock(v34);
            KeAbPostRelease((unsigned __int64)v34);
            if ( *(_BYTE *)(v33 + 22) )
            {
              ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v33, 0x554C624Fu);
              *(_BYTE *)(v33 + 22) = 0;
            }
            *(_QWORD *)v33 = 0LL;
            *(_BYTE *)(v33 + 21) = 0;
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v38, v39);
          }
          goto LABEL_35;
        }
        if ( !v27 )
          goto LABEL_323;
        v31 = v229[0];
        if ( LOWORD(v229[0]) )
          goto LABEL_244;
        v171 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v27 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v27 - 48) >> 8)] + 144);
        if ( !v171 )
          goto LABEL_280;
        if ( v171 == ObpParseSymbolicLinkEx )
        {
LABEL_244:
          v29 = (struct _KLOCK_ENTRIES *)v229[1];
          epi16 = WORD1(v229[0]);
          v28 = *(UNICODE_STRING *)v229;
          continue;
        }
        if ( a8 )
        {
LABEL_280:
          v86 = ObReferenceObjectByPointer(v27, 0, ObjectType, a5);
          v226 = v86;
          goto LABEL_281;
        }
        v29 = (struct _KLOCK_ENTRIES *)v229[1];
        epi16 = WORD1(v229[0]);
        v28 = *(UNICODE_STRING *)v229;
      }
      v238 = 0LL;
      if ( v116 == ObpParseSymbolicLinkEx )
      {
        v17 = (unsigned __int16 *)a2;
        v101 = a10;
        v102 = v253;
        v153 = ObpParseSymbolicLinkEx(v27, ObjectType, v253, a2, (__int64)v229, a6, a7, (__int64)v242, (__int64)&v238);
        v94 = (__int64)a11;
        v86 = v153;
        v226 = v153;
      }
      else
      {
        if ( a8 )
        {
LABEL_491:
          v32 = Object;
          v226 = -1073741788;
          goto LABEL_27;
        }
        PsReferenceSiloContext(v27);
        v94 = (__int64)a11;
        if ( *a11 )
        {
          v95 = (__int64 *)(*a11 + 37);
          _m_prefetchw(v95);
          v96 = *v95;
          v97 = *v95 - 16;
          if ( (*v95 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v97 = 0LL;
          if ( (v96 & 2) != 0 || (v98 = *v95, v98 != _InterlockedCompareExchange64(v95, v97, v96)) )
            ExfReleasePushLock(v95);
          KeAbPostRelease((unsigned __int64)v95);
          if ( *(_BYTE *)(v94 + 22) )
          {
            ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v94, 0x554C624Fu);
            *(_BYTE *)(v94 + 22) = 0;
          }
          *(_QWORD *)v94 = 0LL;
          *(_BYTE *)(v94 + 21) = 0;
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v99, v100);
        }
        v101 = a10;
        v17 = (unsigned __int16 *)a2;
        if ( (*(_BYTE *)(v115 + 67) & 1) != 0 )
        {
          v225 = &v238;
          v224 = (PVOID *)v242;
        }
        else
        {
          v224 = &v238;
        }
        v223 = a7;
        v222 = a6;
        v221 = v229;
        v220 = a2;
        LODWORD(Tag) = v253;
        v226 = guard_dispatch_icall_no_overrides((__int64)v27, (__int64)ObjectType);
        ObfDereferenceObject(v27);
        v86 = v226;
        v102 = v253;
      }
      if ( v86 < 0 )
        goto LABEL_281;
      v103 = Object;
      v27 = (unsigned __int64 *)v238;
      if ( Object )
      {
        ObDereferenceObjectDeferDelete(Object);
        v86 = v226;
        v103 = 0LL;
        Object = 0LL;
      }
      if ( v86 != 260 )
      {
        if ( v86 != 872 )
          v103 = v27;
        Object = v103;
      }
      if ( (v243 & v101->OriginalDesiredAccess) != v101->OriginalDesiredAccess )
      {
        v86 = -1073741790;
        goto LABEL_397;
      }
      if ( v86 != 280 && v86 != 260 && v86 != 872 )
        goto LABEL_278;
      if ( (v102 & 0x1000) != 0 && v86 != 872 )
      {
LABEL_408:
        v32 = Object;
        v226 = -1073740533;
        goto LABEL_27;
      }
      if ( !--v235 )
        goto LABEL_325;
      if ( !*v17 )
      {
LABEL_26:
        v32 = Object;
        v226 = -1073741773;
        goto LABEL_27;
      }
      v104 = v234;
      if ( v234 )
      {
        v105 = v237;
        if ( v237 )
        {
          _m_prefetchw(v237);
          v106 = *v237;
          while ( (v104 ^ v106) < 0xF )
          {
            v107 = v106;
            v106 = _InterlockedCompareExchange64(v105, v106 + 1, v106);
            if ( v107 == v106 )
              goto LABEL_170;
          }
        }
        ObDereferenceDeviceMap((PVOID)v104);
LABEL_170:
        v86 = v226;
        v17 = (unsigned __int16 *)a2;
        v234 = 0LL;
      }
      if ( *(_QWORD *)v94 )
      {
        v108 = (__int64 *)(*(_QWORD *)v94 + 296LL);
        _m_prefetchw(v108);
        v109 = *v108;
        v110 = *v108 - 16;
        if ( (*v108 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v110 = 0LL;
        if ( (v109 & 2) != 0 || (v111 = *v108, v111 != _InterlockedCompareExchange64(v108, v110, v109)) )
          ExfReleasePushLock(v108);
        KeAbPostRelease((unsigned __int64)v108);
        if ( *(_BYTE *)(v94 + 22) )
        {
          ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v94, 0x554C624Fu);
          *(_BYTE *)(v94 + 22) = 0;
        }
        *(_QWORD *)v94 = 0LL;
        *(_BYTE *)(v94 + 21) = 0;
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v112, v113);
        v86 = v226;
      }
      v114 = **((_WORD **)v17 + 1);
      if ( v86 == 280 )
      {
        if ( v114 != 92 )
        {
          v29 = (struct _KLOCK_ENTRIES *)*((_QWORD *)v17 + 1);
          goto LABEL_182;
        }
        goto LABEL_26;
      }
      if ( v114 != 92 )
        goto LABEL_26;
      v20 = (__int64)a9;
      if ( v86 == 872 )
      {
        v16 = v253;
        v15 = ObjectType;
        Source1 = ObpRootDirectoryObject;
      }
      else
      {
        v228[0] = 0LL;
        if ( (int)PsGetPermanentSiloContext((__int64)a9, PsObjectDirectorySiloContextSlot, v228) >= 0 )
          v45 = (PVOID)v228[0];
        else
          v45 = ObpRootDirectoryObject;
        v16 = v253;
        v15 = ObjectType;
        Source1 = v45;
      }
    }
    v74 = v58;
    v75 = 8 * v73 + 32;
    while ( 1 )
    {
      v76 = (signed __int64 *)((char *)v74 + v75);
      if ( *(volatile signed __int64 *)((char *)v74 + v75) )
        break;
LABEL_389:
      v74 = (volatile signed __int64 *)*((_QWORD *)v74 + 3);
      if ( !v74 )
      {
        v29 = (struct _KLOCK_ENTRIES *)v229[1];
        epi16 = WORD1(v229[0]);
        v31 = v229[0];
        v58 = (volatile signed __int64 *)v234;
        goto LABEL_300;
      }
    }
    _m_prefetchw(v76);
    v77 = *v76;
    v78 = *v76;
    if ( (*v76 & 0xF) != 0 )
    {
      do
      {
        v79 = _InterlockedCompareExchange64(v76, v77 - 1, v77);
        if ( v77 == v79 )
          break;
        v77 = v79;
        LOBYTE(v78) = v79;
      }
      while ( (v79 & 0xF) != 0 );
    }
    v27 = (unsigned __int64 *)(v77 & 0xFFFFFFFFFFFFFFF0uLL);
    v80 = v78 & 0xF;
    if ( v80 <= 1 )
    {
      if ( !v80 )
      {
LABEL_381:
        v185 = (char *)PsGetServerSiloGlobals(*((_QWORD *)v74 + 2));
        v186 = KeGetCurrentThread();
        v187 = (signed __int64 *)(v185 + 120);
        --v186->SpecialApcDisable;
        v190 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v185 + 120), 0LL, 0LL, v188);
        if ( _InterlockedCompareExchange64(v187, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v187, 0, v190, (struct _KTHREAD *)v187);
        if ( v190 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v190, v189);
          else
            *((_BYTE *)v190 + 10) = 1;
        }
        v27 = (unsigned __int64 *)ObFastReferenceObjectLocked(
                                    (volatile signed __int64 *)((char *)v74 + v75),
                                    0x554C624Fu);
        if ( _InterlockedCompareExchange64(v187, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v187);
        KeAbPostRelease((unsigned __int64)v187);
        KeLeaveGuardedRegion();
        v81 = (ULONG_PTR)v27;
        if ( v27 )
          goto LABEL_109;
        goto LABEL_389;
      }
      ObpFastReplenishReference((signed __int64 *)((char *)v74 + v75), (ULONG_PTR)v27);
    }
    ObpTraceObjectReferenceIfActive((__int64)(v27 - 6), 1, 0x554C624Fu);
    if ( !v27 )
      goto LABEL_381;
    v81 = (ULONG_PTR)v27;
LABEL_109:
    v229[1] += 4LL;
    LOWORD(v229[0]) -= 4;
    v16 = v253;
    v82 = ObHeaderCookie ^ *(_BYTE *)(v81 - 24) ^ ((unsigned __int16)(v81 - 48) >> 8);
    v240 = 0LL;
    if ( v82 == *(_BYTE *)(IoDeviceObjectType + 40) )
      v83 = IopParseDevice(v81, v253, a2, (__int64)v229, a6, a7, (__int64)v242, (__int64)&v240);
    else
      v83 = ObpParseSymbolicLinkEx(
              (PVOID)v81,
              ObjectType,
              v253,
              a2,
              (__int64)v229,
              a6,
              a7,
              (__int64)v242,
              (__int64)&v240);
    v226 = v83;
    _m_prefetchw(v76);
    v84 = *v76;
    do
    {
      if ( (v81 ^ v84) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v81, 0x554C624Fu);
        goto LABEL_116;
      }
      v85 = v84;
      v84 = _InterlockedCompareExchange64(v76, v84 + 1, v84);
    }
    while ( v85 != v84 );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v81 - 48, -1, 0x554C624Fu);
LABEL_116:
    v86 = v226;
    if ( v226 < 0 )
      goto LABEL_281;
    v27 = (unsigned __int64 *)v240;
    if ( v226 != 260 )
    {
      v87 = Object;
      if ( v226 != 872 )
        v87 = (void *)v240;
      Object = v87;
    }
    if ( (v243 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
    {
LABEL_426:
      v32 = Object;
      v226 = -1073741790;
      goto LABEL_27;
    }
    if ( v226 != 280 && v226 != 872 && v226 != 260 )
      break;
    if ( (v16 & 0x1000) != 0 && v226 != 872 )
      goto LABEL_408;
    if ( !--v235 )
      goto LABEL_325;
    if ( !*(_WORD *)a2 )
      goto LABEL_26;
    v88 = v237;
    v89 = v234;
    if ( v237 )
    {
      _m_prefetchw(v237);
      v90 = *v237;
      while ( (v89 ^ v90) < 0xF )
      {
        v91 = v90;
        v90 = _InterlockedCompareExchange64(v88, v90 + 1, v90);
        if ( v91 == v90 )
          goto LABEL_130;
      }
    }
    ObDereferenceDeviceMap((PVOID)v89);
LABEL_130:
    v17 = (unsigned __int16 *)a2;
    v234 = 0LL;
    v92 = **(_WORD **)(a2 + 8);
    if ( v226 == 280 )
    {
      if ( v92 != 92 )
      {
LABEL_139:
        v29 = (struct _KLOCK_ENTRIES *)*((_QWORD *)v17 + 1);
LABEL_182:
        v28 = *(UNICODE_STRING *)v17;
        *(_OWORD *)v229 = *(_OWORD *)v17;
LABEL_183:
        v31 = _mm_cvtsi128_si32((__m128i)v28);
        epi16 = _mm_extract_epi16((__m128i)v28, 1);
        goto LABEL_184;
      }
      goto LABEL_26;
    }
    if ( v92 != 92 )
      goto LABEL_26;
    v20 = (__int64)a9;
    if ( v226 == 872 )
    {
      v15 = ObjectType;
      Source1 = ObpRootDirectoryObject;
    }
    else
    {
      v228[0] = 0LL;
      if ( (int)PsGetPermanentSiloContext((__int64)a9, PsObjectDirectorySiloContextSlot, v228) >= 0 )
        v164 = (PVOID)v228[0];
      else
        v164 = ObpRootDirectoryObject;
      v15 = ObjectType;
      Source1 = v164;
    }
  }
LABEL_278:
  if ( !v27 )
  {
    v86 = -1073741772;
    v226 = -1073741772;
  }
  v32 = 0LL;
LABEL_282:
  if ( v86 < 0 )
    goto LABEL_27;
LABEL_35:
  if ( v32 )
    ObDereferenceObjectDeferDelete(v32);
  if ( v245 )
    ObDereferenceObjectDeferDelete(v245);
  SeClearLearningModeObjectInformation();
  v40 = v234;
  if ( v234 )
  {
    v41 = v237;
    if ( v237 )
    {
      _m_prefetchw(v237);
      v42 = *v237;
      while ( (v40 ^ v42) < 0xF )
      {
        v43 = v42;
        v42 = _InterlockedCompareExchange64(v41, v42 + 1, v42);
        if ( v43 == v42 )
          goto LABEL_44;
      }
    }
    ObDereferenceDeviceMap((PVOID)v40);
  }
LABEL_44:
  v44 = v226;
  if ( v226 < 0 )
  {
    v27 = 0LL;
  }
  else if ( a12 && v243 != -1 )
  {
    *a12 = v243;
  }
  *a13 = v27;
  return v44;
}
