/*
 * XREFs of ObpLookupObjectName @ 0x14092E280
 * Callers:
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetThreadServerSilo @ 0x140216AD0 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x140264BE0 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PsGetPermanentSiloContext @ 0x140404430 (PsGetPermanentSiloContext.c)
 *     SeClearLearningModeObjectInformation @ 0x14041C210 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x14041D674 (SeSetLearningModeObjectInformation.c)
 *     PsGetCurrentProcessSessionId @ 0x1404261F0 (PsGetCurrentProcessSessionId.c)
 *     ObpFastReplenishReference @ 0x14043D210 (ObpFastReplenishReference.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     ObFastReferenceObjectLocked @ 0x14048678C (ObFastReferenceObjectLocked.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404A4C04 (ExfTryAcquirePushLockSharedEx.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     ObCheckCreateObjectAccess @ 0x1408F4A00 (ObCheckCreateObjectAccess.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObpCheckTraverseAccess @ 0x140918368 (ObpCheckTraverseAccess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpParseSymbolicLinkEx @ 0x140930290 (ObpParseSymbolicLinkEx.c)
 *     ObDereferenceDeviceMap @ 0x140930784 (ObDereferenceDeviceMap.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     ObpLockDirectoryExclusive @ 0x1409DF1C8 (ObpLockDirectoryExclusive.c)
 *     RtlGetNtSystemRoot @ 0x1409E50B0 (RtlGetNtSystemRoot.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A21A50 (ObpReferenceCurrentDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x140A21DB8 (SeGetTokenDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x140A21FFC (ObpSetCurrentProcessDeviceMap.c)
 *     ObpIsUnsecureName @ 0x140A3BA54 (ObpIsUnsecureName.c)
 *     ObpInsertDirectoryEntry @ 0x140A8F820 (ObpInsertDirectoryEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  __int64 v17; // rsi
  bool v19; // zf
  __int64 v20; // r14
  PVOID v21; // rdi
  int v22; // ecx
  int v23; // ecx
  void *v24; // rbx
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
  unsigned __int64 v38; // r8
  volatile signed __int64 *v39; // rdx
  signed __int64 v40; // rax
  signed __int64 v41; // rtt
  NTSTATUS v42; // ecx
  void *v43; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbx
  __int64 ProcessServerSilo; // rsi
  struct _KLOCK_ENTRIES *v47; // r9
  __int64 ThreadServerSilo; // r13
  bool v49; // r14
  bool v50; // r15
  struct _KTHREAD *v51; // r12
  void *v52; // rdx
  LegacyAutoBoost *v53; // r15
  _QWORD *p_Lock; // rsi
  volatile signed __int64 *v55; // r14
  signed __int64 *ServerSiloGlobals; // rsi
  signed __int64 v57; // r14
  signed __int64 v58; // rdx
  signed __int64 v59; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v61; // rcx
  signed __int64 *p_Blink; // rdi
  struct _KLOCK_ENTRIES *v63; // r9
  void *v64; // rdx
  LegacyAutoBoost *v65; // rbx
  signed __int64 v66; // rax
  signed __int64 v67; // rtt
  __int64 v68; // rdx
  unsigned __int16 v69; // ax
  __int64 v70; // rax
  volatile signed __int64 *v71; // rsi
  __int64 v72; // r15
  signed __int64 *v73; // rbx
  signed __int64 v74; // r13
  signed __int64 v75; // rdx
  signed __int64 v76; // rax
  unsigned int v77; // edx
  ULONG_PTR v78; // rdi
  char v79; // cl
  NTSTATUS v80; // eax
  signed __int64 v81; // rax
  signed __int64 v82; // rtt
  NTSTATUS v83; // edx
  void *v84; // rdi
  volatile signed __int64 *v85; // rsi
  unsigned __int64 v86; // r14
  signed __int64 v87; // rax
  signed __int64 v88; // rtt
  __int16 v89; // cx
  void *v90; // rax
  __int64 v91; // r15
  __int64 *v92; // rsi
  signed __int64 v93; // rax
  signed __int64 v94; // rdx
  __int64 v95; // rtt
  struct _ACCESS_STATE *v96; // r14
  __int16 v97; // bx
  PVOID v98; // rdi
  unsigned __int64 v99; // r14
  volatile signed __int64 *v100; // rsi
  signed __int64 v101; // rax
  signed __int64 v102; // rtt
  __int64 *v103; // rbx
  signed __int64 v104; // rax
  signed __int64 v105; // rdx
  __int64 v106; // rtt
  __int16 v107; // cx
  __int64 v108; // rdi
  __int64 (__usercall *v109)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rbx
  unsigned __int16 v110; // r12
  __int16 v111; // r10
  __int64 v112; // r8
  char v113; // bl
  __int64 v114; // r15
  volatile signed __int32 *v115; // rdi
  AutoBoost *v116; // rax
  void *v117; // rdx
  AutoBoost *v118; // rsi
  __int64 v119; // rdi
  unsigned __int64 v120; // rsi
  unsigned __int64 v121; // r9
  wchar_t *Buffer; // r14
  unsigned int v123; // edi
  __int64 v124; // rbx
  unsigned int v125; // ebx
  unsigned int v126; // edx
  int v127; // ebx
  char v128; // r13
  int v129; // r13d
  unsigned __int8 v130; // al
  __int64 v131; // rbx
  __int64 v132; // rdi
  struct _KTHREAD *v133; // rax
  void *v134; // rdx
  LegacyAutoBoost *v135; // rdi
  __int64 v136; // rdx
  struct _LIST_ENTRY *Flink; // r12
  char *v138; // r14
  __int64 v139; // rsi
  unsigned __int16 *v140; // r15
  SIZE_T v141; // rax
  __int64 v142; // rax
  unsigned __int16 *v143; // r10
  char *v144; // r14
  unsigned __int64 v145; // r8
  NTSTATUS v146; // eax
  WCHAR *NtSystemRoot; // rax
  WCHAR v148; // bx
  WCHAR v149; // dx
  __int64 v150; // rcx
  int v151; // edi
  char *v152; // r14
  int v153; // eax
  char *v154; // rbx
  __int64 v155; // rax
  void *v156; // rax
  char v157; // si
  void *v158; // rdx
  AutoBoost *v159; // rdi
  signed __int64 *v160; // rbx
  char v161; // al
  unsigned __int64 *v162; // r12
  __int64 (__usercall *v163)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rax
  __int64 v164; // rax
  int v165; // ecx
  PVOID *v166; // rax
  struct _LIST_ENTRY *v167; // rax
  struct _KTHREAD *v168; // rcx
  struct _LIST_ENTRY *v169; // r15
  struct _KLOCK_ENTRIES *v170; // r9
  void *v171; // rdx
  LegacyAutoBoost *v172; // rsi
  __int64 v173; // rax
  __int64 v174; // r15
  __int64 v175; // rax
  __int128 v176; // rt0
  char *v177; // rax
  struct _KTHREAD *v178; // rcx
  signed __int64 *v179; // rdi
  struct _KLOCK_ENTRIES *v180; // r9
  void *v181; // rdx
  LegacyAutoBoost *v182; // r14
  struct _OBJECT_TYPE *v183; // rbx
  _DWORD *v184; // r14
  ACCESS_MASK v185; // edx
  KPROCESSOR_MODE v186; // di
  unsigned int v187; // esi
  void *Pool2; // rdi
  __int64 v189; // rbx
  void *v190; // rcx
  int v191; // ebx
  __int64 v192; // r8
  __int64 v193; // r9
  signed __int64 *v194; // rbx
  struct _KLOCK_ENTRIES *v195; // r9
  void *v196; // rdx
  LegacyAutoBoost *v197; // rdi
  char v198; // si
  char *v199; // rdi
  int v200; // esi
  __int64 *v201; // rbx
  __int64 v202; // rdx
  char *v203; // r12
  __int64 v204; // r15
  unsigned __int16 *v205; // r13
  SIZE_T v206; // rax
  __int64 v207; // rax
  unsigned __int16 *v208; // r10
  char *v209; // r12
  unsigned __int64 v210; // r8
  __int64 Tag; // [rsp+20h] [rbp-E0h]
  __int64 v212; // [rsp+28h] [rbp-D8h]
  __int64 *v213; // [rsp+30h] [rbp-D0h]
  __int64 v214; // [rsp+38h] [rbp-C8h]
  __int64 v215; // [rsp+40h] [rbp-C0h]
  PVOID *v216; // [rsp+48h] [rbp-B8h]
  PVOID *v217; // [rsp+50h] [rbp-B0h]
  NTSTATUS v218; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h]
  unsigned __int64 v220[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v221[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v222; // [rsp+90h] [rbp-70h]
  int v223; // [rsp+A0h] [rbp-60h]
  unsigned int v224; // [rsp+A4h] [rbp-5Ch]
  void *Source1; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v226; // [rsp+B0h] [rbp-50h]
  int v227; // [rsp+B8h] [rbp-48h]
  NTSTATUS v228; // [rsp+BCh] [rbp-44h] BYREF
  signed __int64 *v229; // [rsp+C0h] [rbp-40h]
  PVOID v230; // [rsp+C8h] [rbp-38h] BYREF
  signed __int64 *v231; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v232; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v233; // [rsp+E0h] [rbp-20h]
  _WORD v234[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v235; // [rsp+ECh] [rbp-14h]
  __int64 v236; // [rsp+F0h] [rbp-10h]
  PVOID v237; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING String2; // [rsp+100h] [rbp+0h] BYREF
  __int128 v239; // [rsp+110h] [rbp+10h] BYREF
  __int128 v240; // [rsp+120h] [rbp+20h]
  __int128 v241; // [rsp+130h] [rbp+30h]
  __int64 v242; // [rsp+140h] [rbp+40h]
  BOOLEAN v243; // [rsp+1A0h] [rbp+A0h]
  int v245; // [rsp+1B0h] [rbp+B0h] BYREF
  POBJECT_TYPE ObjectType; // [rsp+1B8h] [rbp+B8h]

  ObjectType = (POBJECT_TYPE)a4;
  v245 = a3;
  v13 = (__int64)a11;
  v14 = 0LL;
  v234[1] = 0;
  v237 = 0LL;
  v230 = 0LL;
  *(_OWORD *)a11 = 0LL;
  *(_QWORD *)(v13 + 16) = 0LL;
  v15 = (struct _OBJECT_TYPE *)a4;
  v242 = 0LL;
  v16 = a3;
  v229 = 0LL;
  v17 = a2;
  v231 = 0LL;
  v232 = 0LL;
  v226 = 0LL;
  v227 = 64;
  v239 = 0LL;
  v240 = 0LL;
  v241 = 0LL;
  *(_OWORD *)v221 = 0LL;
  if ( a12 )
    *a12 = 0;
  v19 = ObpCaseInsensitive == 0;
  v20 = (__int64)a9;
  v218 = 0;
  v228 = 0;
  *a13 = 0LL;
  v234[0] = 16;
  v243 = 1;
  Object = 0LL;
  Source1 = 0LL;
  v235 = -1;
  v236 = v20;
  if ( !v19
    && (*(_BYTE *)(a4 + 66) & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v16 = a3 | 0x40;
    v245 = a3 | 0x40;
  }
  v21 = a8;
  v22 = 1;
  if ( (v16 & 0x400) == 0 )
    v22 = a5;
  v224 = v22;
  v23 = v16 & 0x40 | 1;
  if ( a8 )
    v23 = v16 & 0x40;
  v223 = v23;
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0, 0LL, a5, 0x746C6644u, &v230, 0LL, &v232);
    v218 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v232) )
    {
      v235 &= HIDWORD(v232);
      if ( (v235 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
      {
        ObfDereferenceObject(v230);
        return -1073741790;
      }
    }
    v26 = (unsigned __int64 *)v230;
    v237 = v230;
    if ( *(_WORD *)v17 )
    {
      if ( **(_WORD **)(v17 + 8) == 92
        && ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)v230 - 24) ^ ((unsigned __int16)((_WORD)v230 - 48) >> 8))) != *((_BYTE *)IoFileObjectType + 40) )
      {
        ObfDereferenceObject(v230);
        return -1073741765;
      }
    }
    else if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)v230 - 24) ^ ((unsigned __int16)((_WORD)v230 - 48) >> 8))) == ObpDirectoryObjectType->Index )
    {
      v218 = ObReferenceObjectByPointer(v230, 0, v15, a5);
      if ( v218 >= 0 )
        v14 = v26;
      ObfDereferenceObject(v26);
      *a13 = v14;
      return v218;
    }
    v27 = (unsigned __int64 *)v230;
    v28 = *(UNICODE_STRING *)v17;
    *(_OWORD *)v221 = *(_OWORD *)v17;
    if ( SepLearningModeTokenCount )
    {
      *((_QWORD *)&v240 + 1) = v17;
      *(_QWORD *)&v240 = &ObjectType->Name;
      *(_QWORD *)&v241 = BugCheckParameter1;
      SeSetLearningModeObjectInformation((__int64)&v239);
      v29 = (struct _KLOCK_ENTRIES *)v221[1];
      epi16 = WORD1(v221[0]);
      v31 = v221[0];
      v28 = *(UNICODE_STRING *)v221;
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
      v24 = *(void **)&ObpStackTraceLock.PriorityFloorCounts[24];
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
    *((_QWORD *)&v240 + 1) = a2;
    *(_QWORD *)&v240 = a4 + 16;
    *(_QWORD *)&v241 = 0LL;
    SeSetLearningModeObjectInformation((__int64)&v239);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_WORD *)v17 < 8u || **(_QWORD **)(v17 + 8) != 0x5C003F003F005CLL )
      {
        if ( *(_WORD *)v17 != 6 )
          goto LABEL_134;
        v164 = *(_QWORD *)(v17 + 8);
        v165 = *(_DWORD *)v164 - 4128860;
        if ( *(_DWORD *)v164 == 4128860 )
          v165 = *(unsigned __int16 *)(v164 + 4) - 63;
        if ( v165 )
          goto LABEL_134;
        v166 = (PVOID *)ObpReferenceCurrentDeviceMap(
                          v16,
                          &v231,
                          0x5C003F003F005CLL,
                          63LL,
                          Tag,
                          v212,
                          v213,
                          v214,
                          v215,
                          v216,
                          v217);
        v226 = (unsigned __int64)v166;
        if ( !v166 || !*v166 )
        {
          v229 = v231;
LABEL_394:
          v20 = (__int64)a9;
LABEL_134:
          if ( !Source1 )
          {
            v220[0] = 0LL;
            if ( (int)PsGetPermanentSiloContext(v20, PsObjectDirectorySiloContextSlot, v220) >= 0 )
              v90 = (void *)v220[0];
            else
              v90 = *(void **)&ObpStackTraceLock.PriorityFloorCounts[24];
            Source1 = v90;
          }
          v27 = (unsigned __int64 *)Source1;
          goto LABEL_139;
        }
        v27 = (unsigned __int64 *)*v166;
        v83 = ObReferenceObjectByPointer(*v166, 0, ObjectType, a5);
        v218 = v83;
        v229 = v231;
LABEL_281:
        v32 = Object;
        goto LABEL_282;
      }
      if ( v15 == (struct _OBJECT_TYPE *)IoFileObjectType
        && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0
        && *(_WORD *)v17 >= 0xEu )
      {
        NtSystemRoot = RtlGetNtSystemRoot();
        v148 = RtlUpcaseUnicodeChar(*NtSystemRoot);
        v149 = RtlUpcaseUnicodeChar(*(_WORD *)(*(_QWORD *)(v17 + 8) + 8LL));
        if ( (ObpDriveRemappingMitigation & 1) != 0 )
        {
          v150 = *(_QWORD *)(v17 + 8);
          if ( v148 == v149 && *(_WORD *)(v150 + 10) == 58 && *(_WORD *)(v150 + 12) == 92 )
            v245 = v16 | 0x800;
        }
      }
      CurrentThread = KeGetCurrentThread();
      v226 = 0LL;
      v229 = 0LL;
      v231 = 0LL;
      Process = (__int64)CurrentThread->Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
      v49 = ProcessServerSilo != ThreadServerSilo;
      v50 = ProcessServerSilo != ThreadServerSilo;
      if ( (((*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0) & !_bittest(&v245, 0xBu)) != 0
        && ProcessServerSilo == ThreadServerSilo
        && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v51 = KeGetCurrentThread();
        --v51->KernelApcDisable;
        v53 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v47);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(
            (signed __int64 *)&CurrentThread[1].WaitBlockList,
            0,
            v53,
            (struct _KTHREAD *)((char *)CurrentThread + 1424));
        if ( v53 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v53, v52);
          else
            *((_BYTE *)v53 + 10) = 1;
        }
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          p_Lock = &CurrentThread[1].WaitBlock[1].Thread->Header.Lock;
          if ( !p_Lock )
            p_Lock = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObjectWithTag(p_Lock, 0x746C6644u);
          PspUnlockThreadSecurityShared((__int64)CurrentThread, v51);
          v50 = v49;
          if ( p_Lock )
          {
            if ( p_Lock[3] == 999LL )
            {
              v50 = 1;
              ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
              goto LABEL_378;
            }
            v220[0] = 0LL;
            if ( (int)SeGetTokenDeviceMap(p_Lock, v220) >= 0 )
              v226 = v220[0];
            ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
            v55 = (volatile signed __int64 *)v226;
            if ( v226 )
              goto LABEL_95;
          }
        }
        else
        {
          PspUnlockThreadSecurityShared((__int64)CurrentThread, v51);
          v50 = ProcessServerSilo != ThreadServerSilo;
        }
      }
      if ( !v50 )
      {
        ServerSiloGlobals = (signed __int64 *)(Process + 792);
        v229 = (signed __int64 *)(Process + 792);
        goto LABEL_77;
      }
LABEL_378:
      ServerSiloGlobals = (signed __int64 *)PsGetServerSiloGlobals(ThreadServerSilo);
      v229 = ServerSiloGlobals;
LABEL_77:
      v231 = ServerSiloGlobals;
      _m_prefetchw(ServerSiloGlobals);
      v57 = *ServerSiloGlobals;
      v58 = *ServerSiloGlobals;
      if ( (*ServerSiloGlobals & 0xF) != 0 )
      {
        do
        {
          v59 = _InterlockedCompareExchange64(ServerSiloGlobals, v57 - 1, v57);
          if ( v57 == v59 )
            break;
          v57 = v59;
          LOBYTE(v58) = v59;
        }
        while ( (v59 & 0xF) != 0 );
      }
      v55 = (volatile signed __int64 *)(v57 & 0xFFFFFFFFFFFFFFF0uLL);
      v226 = (unsigned __int64)v55;
      if ( (v58 & 0xF) == 0 )
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        v61 = KeGetCurrentThread();
        p_Blink = (signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
        --v61->SpecialApcDisable;
        v65 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[7].Blink, 0LL, 0LL, v63);
        if ( _InterlockedCompareExchange64(p_Blink, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(p_Blink, 0, v65, (struct _KTHREAD *)p_Blink);
        if ( v65 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v65, v64);
          else
            *((_BYTE *)v65 + 10) = 1;
        }
        v55 = (volatile signed __int64 *)(*ServerSiloGlobals & 0xFFFFFFFFFFFFFFF0uLL);
        v226 = (unsigned __int64)v55;
        if ( v55 )
        {
          if ( _InterlockedExchangeAdd64(v55 + 30, 0xFuLL) <= 0 )
            __fastfail(0xEu);
          _m_prefetchw(ServerSiloGlobals);
          v66 = *ServerSiloGlobals;
          while ( (unsigned __int64)(v66 & 0xF) + 14 <= 0xF
               && v55 == (volatile signed __int64 *)(v66 & 0xFFFFFFFFFFFFFFF0uLL) )
          {
            v67 = v66;
            v66 = _InterlockedCompareExchange64(ServerSiloGlobals, v66 + 14, v66);
            if ( v67 == v66 )
              goto LABEL_91;
          }
          ObDereferenceDeviceMap((PVOID)v55);
        }
LABEL_91:
        if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_Blink);
        KeAbPostRelease((unsigned __int64)p_Blink);
        KeLeaveGuardedRegion();
      }
      if ( !v55 )
      {
        if ( !v50 )
        {
          v229 = 0LL;
          v231 = 0LL;
          v55 = (volatile signed __int64 *)ObpSetCurrentProcessDeviceMap();
          v226 = (unsigned __int64)v55;
        }
        if ( !v55 )
        {
          v17 = a2;
          goto LABEL_394;
        }
      }
LABEL_95:
      v17 = a2;
      if ( !*v55 )
        goto LABEL_394;
      v68 = *(_QWORD *)(a2 + 8);
      v69 = *(_WORD *)a2 - 8;
      epi16 = *(_WORD *)(a2 + 2) - 8;
      v29 = (struct _KLOCK_ENTRIES *)(v68 + 8);
      v221[1] = v68 + 8;
      v31 = v69;
      LOWORD(v221[0]) = v69;
      WORD1(v221[0]) = epi16;
      if ( ObjectType == (POBJECT_TYPE)IoFileObjectType
        && (v223 & 1) != 0
        && v69 >= 6u
        && *(_WORD *)(v68 + 10) == 58
        && *(_WORD *)(v68 + 12) == 92 )
      {
        v70 = (LOWORD(v29->Thread) | 0x20u) - 97;
        if ( (unsigned int)v70 < 0x1A )
          break;
      }
LABEL_300:
      v27 = (unsigned __int64 *)*v55;
      v28 = *(UNICODE_STRING *)v221;
LABEL_184:
      while ( 1 )
      {
        v108 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v27 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v27 - 48) >> 8)];
        v109 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(v108 + 144);
        if ( v109 )
          break;
        if ( (POBJECT_TYPE)v108 != ObpDirectoryObjectType )
          goto LABEL_491;
        v233 = v27;
        if ( v31 && LOWORD(v29->Thread) == 92 )
        {
          v29 = (struct _KLOCK_ENTRIES *)((char *)v29 + 2);
          v31 -= 2;
          epi16 -= 2;
          v221[1] = (__int64)v29;
          WORD1(v221[0]) = epi16;
          LOWORD(v221[0]) = v31;
          v28 = *(UNICODE_STRING *)v221;
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
            v221[1] = (__int64)v29;
            LOWORD(v221[0]) = v31;
          }
          while ( !v19 );
        }
        v110 = String2.Length - v31;
        v111 = epi16 - (String2.Length - v31);
        v222 = v110;
        String2.Length -= v31;
        WORD1(v221[0]) = v111;
        if ( !v110 )
          goto LABEL_26;
        v112 = v224;
        if ( (_BYTE)v224 && (a10->Flags & 1) == 0 )
        {
          v243 = ObpCheckTraverseAccess((__int64)v27, (ACCESS_MASK)a10, a10, (char)v29, v224, &v228);
          if ( !v243 )
          {
            v83 = v228;
            if ( v228 >= 0 )
            {
              v83 = -1073741772;
              v228 = -1073741772;
            }
            if ( LOWORD(v221[0]) || !a8 )
              goto LABEL_397;
            goto LABEL_229;
          }
          v31 = v221[0];
        }
        if ( !a8 || v31 )
        {
          v113 = 0;
          goto LABEL_196;
        }
LABEL_229:
        v113 = 1;
LABEL_196:
        v114 = (__int64)a11;
        if ( *a11 )
        {
          v115 = (volatile signed __int32 *)(v27 + 37);
          v116 = (AutoBoost *)KeAbPreAcquire((__int64)(v27 + 37), 0LL, 0LL, v29);
          v118 = v116;
          if ( v113 )
          {
            if ( _interlockedbittestandset64(v115, 0LL) )
              ExfAcquirePushLockExclusiveEx(v27 + 37, v116, (__int64)(v27 + 37));
            if ( v118 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                goto LABEL_290;
LABEL_202:
              *((_BYTE *)v118 + 10) = 1;
            }
          }
          else
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v115, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx((signed __int64 *)v27 + 37, 0, v116, (struct _KTHREAD *)(v27 + 37));
            if ( v118 )
            {
              if ( (KiAbpGlobalState & 1) == 0 )
                goto LABEL_202;
LABEL_290:
              AutoBoost::KiAbpPostAcquire(v118, v117);
            }
          }
          v119 = *(_QWORD *)v114;
          v120 = 0LL;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v114 + 296LL), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v119 + 296));
          KeAbPostRelease(v119 + 296);
          if ( *(_BYTE *)(v114 + 22) )
          {
            ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v114, 0x554C624Fu);
            *(_BYTE *)(v114 + 22) = 0;
          }
          *(_QWORD *)v114 = v27;
          *(_BYTE *)(v114 + 21) = v113;
          goto LABEL_208;
        }
        if ( v113 )
        {
          ObpLockDirectoryExclusive(a11, v27, v112, v29);
          v120 = 0LL;
          goto LABEL_208;
        }
        *a11 = v27;
        *(_BYTE *)(v114 + 21) = 0;
        v133 = KeGetCurrentThread();
        --v133->KernelApcDisable;
        v135 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v27 + 37), 0LL, 0LL, v29);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v27 + 37, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v27 + 37, 0, v135, (struct _KTHREAD *)(v27 + 37));
        if ( v135 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
          {
            AutoBoost::KiAbpPostAcquire(v135, v134);
            v120 = 0LL;
            goto LABEL_208;
          }
          *((_BYTE *)v135 + 10) = 1;
        }
        v120 = 0LL;
LABEL_208:
        Buffer = String2.Buffer;
        v123 = v110 >> 1;
        Source1 = String2.Buffer;
        if ( v123 < 4 )
        {
          v125 = 0;
        }
        else
        {
          do
          {
            v124 = *(_QWORD *)Buffer;
            if ( (*(_QWORD *)Buffer & 0xFF80FF80FF80FF80uLL) != 0 )
            {
              v174 = 4LL;
              do
              {
                v175 = (unsigned __int16)v124;
                if ( (unsigned __int16)v124 >= 0x61u )
                {
                  if ( (unsigned __int16)v124 <= 0x7Au )
                    v175 = (unsigned int)(unsigned __int16)v124 - 32;
                  else
                    v175 = RtlUpcaseUnicodeChar(v124);
                }
                *(_QWORD *)&v176 = v124;
                *((_QWORD *)&v176 + 1) = v175;
                v124 = v176 >> 16;
                --v174;
              }
              while ( v174 );
            }
            else
            {
              v124 &= 0xFFDFFFDFFFDFFFDFuLL;
            }
            Buffer += 4;
            v123 -= 4;
            v120 = v124 + (v120 >> 1) + 3 * v120;
          }
          while ( v123 >= 4 );
          v114 = (__int64)a11;
          v125 = v120 + HIDWORD(v120);
        }
        while ( v123 )
        {
          v126 = *Buffer++;
          --v123;
          v127 = (v125 >> 1) + 3 * v125;
          if ( v126 >= 0x61 )
          {
            if ( v126 > 0x7A )
            {
              v125 = RtlUpcaseUnicodeChar(v126) + v127;
              continue;
            }
            v127 -= 32;
          }
          v125 = v126 + v127;
        }
        v128 = v223;
        *(_DWORD *)(v114 + 16) = v125;
        v129 = v128 & 0x40;
        v130 = v125 % 0x25;
        *(_BYTE *)(v114 + 20) = v130;
        v131 = *(_QWORD *)(*(_QWORD *)v114 + 8LL * v130);
        v132 = *(_QWORD *)v114 + 8LL * v130;
        if ( !v131 )
        {
LABEL_222:
          v27 = 0LL;
          goto LABEL_292;
        }
        while ( 1 )
        {
          if ( *(_DWORD *)(v131 + 16) != *(_DWORD *)(v114 + 16) )
            goto LABEL_221;
          Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
          if ( v222 != *(_WORD *)(v136 + 8) )
            goto LABEL_221;
          v138 = *(char **)(v136 + 16);
          v139 = v222;
          v140 = (unsigned __int16 *)((char *)Source1 + v222);
          if ( v129 )
            break;
          if ( !memcmp(Source1, v138, v222) )
            goto LABEL_240;
LABEL_258:
          v114 = (__int64)a11;
LABEL_221:
          v132 = v131;
          v131 = *(_QWORD *)v131;
          if ( !v131 )
            goto LABEL_222;
        }
        v141 = RtlCompareMemory(Source1, v138, v222);
        if ( v141 != v139 )
        {
          v142 = 2 * (v141 >> 1);
          v143 = (unsigned __int16 *)((char *)Source1 + v142);
          v144 = &v138[v142];
          while ( v143 < v140 )
          {
            v145 = *v143;
            v121 = *(unsigned __int16 *)v144;
            if ( (_WORD)v145 != (_WORD)v121 )
            {
              if ( (unsigned int)v145 >= 0x61 )
              {
                if ( (unsigned int)v145 > 0x7A )
                {
                  if ( Flink && (unsigned __int16)v145 >= 0xC0u )
                    LOWORD(v145) = *((_WORD *)&Flink->Flink
                                   + (v145 & 0xF)
                                   + *((unsigned __int16 *)&Flink->Flink
                                     + ((unsigned __int8)v145 >> 4)
                                     + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v145 >> 8))))
                                 + v145;
                }
                else
                {
                  LOWORD(v145) = v145 - 32;
                }
              }
              if ( (unsigned int)v121 >= 0x61 )
              {
                if ( (unsigned int)v121 > 0x7A )
                {
                  if ( Flink && (unsigned __int16)v121 >= 0xC0u )
                    LOWORD(v121) = *((_WORD *)&Flink->Flink
                                   + (v121 & 0xF)
                                   + *((unsigned __int16 *)&Flink->Flink
                                     + ((unsigned __int8)v121 >> 4)
                                     + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v121 >> 8))))
                                 + v121;
                }
                else
                {
                  LOWORD(v121) = v121 - 32;
                }
              }
              if ( (_WORD)v145 != (_WORD)v121 )
                goto LABEL_258;
            }
            ++v143;
            v144 += 2;
          }
        }
LABEL_240:
        v27 = *(unsigned __int64 **)(v131 + 8);
        v114 = (__int64)a11;
        a11[1] = (unsigned __int64 *)v132;
        if ( v27 )
          goto LABEL_241;
LABEL_292:
        v151 = v223;
        if ( (v223 & 1) == 0 )
          goto LABEL_241;
        v152 = *(char **)v114;
        while ( 2 )
        {
          while ( 2 )
          {
            v153 = *((_DWORD *)v152 + 84);
            v154 = 0LL;
            if ( (v153 & 4) != 0 )
            {
              if ( (v151 & 6) == 0 && (v153 & 0x10) != 0 )
              {
                if ( RtlIsSandboxedToken(&a10->SubjectSecurityContext, v224) )
                  v151 |= 2u;
                else
                  v151 |= 4u;
                v223 = v151;
              }
              if ( (*((_DWORD *)v152 + 84) & 0x10) == 0 || (v151 & 2) != 0 )
                v154 = (char *)*((_QWORD *)v152 + 39);
            }
            else
            {
              v155 = *((_QWORD *)v152 + 38);
              if ( !v155 )
                goto LABEL_241;
              if ( v155 == v226 )
              {
                v152 = *(char **)(v226 + 8);
                goto LABEL_315;
              }
              v167 = PsGetCurrentServerSiloGlobals();
              v168 = KeGetCurrentThread();
              v169 = v167;
              --v168->SpecialApcDisable;
              v172 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&v167[7].Blink, 0LL, 0LL, v170);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v169[7].Blink, 17LL, 0LL) )
                ExfAcquirePushLockSharedEx((signed __int64 *)&v169[7].Blink, 0, v172, (struct _KTHREAD *)&v169[7].Blink);
              if ( v172 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v172, v171);
                else
                  *((_BYTE *)v172 + 10) = 1;
              }
              v173 = *((_QWORD *)v152 + 38);
              if ( v173 )
                v154 = *(char **)(v173 + 8);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v169[7].Blink, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)&v169[7].Blink);
              KeAbPostRelease((unsigned __int64)&v169[7].Blink);
              KeLeaveGuardedRegion();
              v114 = (__int64)a11;
            }
            v152 = v154;
LABEL_315:
            if ( !v152 )
              goto LABEL_241;
            v157 = *(_BYTE *)(v114 + 22);
            v159 = (AutoBoost *)KeAbPreAcquire((__int64)(v152 + 296), 0LL, 1LL, (struct _KLOCK_ENTRIES *)v121);
            if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v152 + 37, 17LL, 0LL)
              || ExfTryAcquirePushLockSharedEx((signed __int64 *)v152 + 37, 0) )
            {
              if ( v159 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v159, v158);
                else
                  *((_BYTE *)v159 + 10) = 1;
              }
              v160 = *(signed __int64 **)v114;
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v114 + 296LL), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v160 + 37);
              KeAbPostRelease((unsigned __int64)(v160 + 37));
              v161 = 0;
            }
            else
            {
              if ( v159 )
                KeAbPostReleaseEx((struct _KTHREAD *)(v152 + 296), (unsigned __int64)v159, v192, v193);
              ObfReferenceObjectWithTag(v152, 0x554C624Fu);
              v194 = *(signed __int64 **)v114;
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v114 + 296LL), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v194 + 37);
              KeAbPostRelease((unsigned __int64)(v194 + 37));
              v197 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v152 + 296), 0LL, 0LL, v195);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)v152 + 37, 17LL, 0LL) )
                ExfAcquirePushLockSharedEx((signed __int64 *)v152 + 37, 0, v197, (struct _KTHREAD *)(v152 + 296));
              if ( v197 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v197, v196);
                else
                  *((_BYTE *)v197 + 10) = 1;
              }
              v161 = 1;
            }
            *(_BYTE *)(v114 + 22) = v161;
            if ( v157 )
              ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v114, 0x554C624Fu);
            v198 = v223;
            v199 = &v152[8 * *(unsigned __int8 *)(v114 + 20)];
            *(_QWORD *)v114 = v152;
            v200 = v198 & 0x40;
            v201 = *(__int64 **)v199;
            if ( !*(_QWORD *)v199 )
            {
LABEL_447:
              v151 = v223;
              v27 = 0LL;
              continue;
            }
            break;
          }
          while ( 1 )
          {
            if ( *((_DWORD *)v201 + 4) != *(_DWORD *)(v114 + 16) )
              goto LABEL_446;
            v220[0] = (unsigned __int64)PsGetCurrentServerSiloGlobals()[75].Flink;
            if ( v222 != *(_WORD *)(v202 + 8) )
              goto LABEL_446;
            v203 = *(char **)(v202 + 16);
            v204 = v222;
            v205 = (unsigned __int16 *)((char *)Source1 + v222);
            if ( v200 )
              break;
            if ( !memcmp(Source1, v203, v222) )
              goto LABEL_458;
LABEL_471:
            v114 = (__int64)a11;
LABEL_446:
            v199 = (char *)v201;
            v201 = (__int64 *)*v201;
            if ( !v201 )
              goto LABEL_447;
          }
          v206 = RtlCompareMemory(Source1, v203, v222);
          if ( v206 != v204 )
          {
            v207 = 2 * (v206 >> 1);
            v208 = (unsigned __int16 *)((char *)Source1 + v207);
            v209 = &v203[v207];
            while ( v208 < v205 )
            {
              v210 = *v208;
              v121 = *(unsigned __int16 *)v209;
              if ( (_WORD)v210 != (_WORD)v121 )
              {
                if ( (unsigned int)v210 >= 0x61 )
                {
                  if ( (unsigned int)v210 > 0x7A )
                  {
                    if ( v220[0] && (unsigned __int16)v210 >= 0xC0u )
                      LOWORD(v210) = *(_WORD *)(v220[0]
                                              + 2
                                              * ((v210 & 0xF)
                                               + *(unsigned __int16 *)(v220[0]
                                                                     + 2LL
                                                                     * (((unsigned __int8)v210 >> 4)
                                                                      + (unsigned int)*(unsigned __int16 *)(v220[0] + 2 * (v210 >> 8))))))
                                   + v210;
                  }
                  else
                  {
                    LOWORD(v210) = v210 - 32;
                  }
                }
                if ( (unsigned int)v121 >= 0x61 )
                {
                  if ( (unsigned int)v121 > 0x7A )
                  {
                    if ( v220[0] && (unsigned __int16)v121 >= 0xC0u )
                      LOWORD(v121) = *(_WORD *)(v220[0]
                                              + 2
                                              * ((v121 & 0xF)
                                               + *(unsigned __int16 *)(v220[0]
                                                                     + 2LL
                                                                     * (((unsigned __int8)v121 >> 4)
                                                                      + (unsigned int)*(unsigned __int16 *)(v220[0] + 2 * (v121 >> 8))))))
                                   + v121;
                  }
                  else
                  {
                    LOWORD(v121) = v121 - 32;
                  }
                }
                if ( (_WORD)v210 != (_WORD)v121 )
                  goto LABEL_471;
              }
              ++v208;
              v209 += 2;
            }
          }
LABEL_458:
          v27 = (unsigned __int64 *)v201[1];
          v114 = (__int64)a11;
          a11[1] = (unsigned __int64 *)v199;
          if ( !v27 )
          {
            v151 = v223;
            continue;
          }
          break;
        }
LABEL_241:
        if ( !v243 )
        {
          if ( v27 )
          {
            v83 = v228;
LABEL_397:
            v218 = v83;
            goto LABEL_281;
          }
LABEL_323:
          if ( LOWORD(v221[0]) )
          {
            v32 = Object;
            v218 = -1073741766;
          }
          else
          {
            v162 = (unsigned __int64 *)a8;
            if ( !a8 )
            {
LABEL_325:
              v32 = Object;
              v218 = -1073741772;
              goto LABEL_27;
            }
            v183 = ObjectType;
            v184 = v233;
            v185 = 4;
            v186 = v224;
            if ( ObjectType == ObpDirectoryObjectType )
              v185 = 8;
            LOBYTE(Tag) = 0;
            if ( !ObCheckCreateObjectAccess((__int64)v233, v185, a10, (__int64)&String2, Tag, v224, &v218) )
            {
              v32 = Object;
              if ( v218 >= 0 )
              {
                v83 = -1073741772;
                v218 = -1073741772;
                goto LABEL_282;
              }
              goto LABEL_27;
            }
            if ( v184[85] != -1 && (v183 == MmSectionObjectType || v183 == ObpSymbolicLinkObjectType) )
            {
              v191 = v184[85];
              if ( v191 != (unsigned int)PsGetCurrentProcessSessionId()
                && !SeSinglePrivilegeCheck(*(LUID *)&PspSiloMonitorLock.WaitBlockFill11[80], v186)
                && !(unsigned __int8)ObpIsUnsecureName(&String2) )
              {
                goto LABEL_426;
              }
            }
            v187 = v222;
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            if ( Pool2 )
            {
              if ( (unsigned __int8)ObpInsertDirectoryEntry(v184, v162) )
              {
                memmove(Pool2, Source1, v187);
                v189 = (__int64)v162 - ObpInfoMaskToOffset[*((_BYTE *)v162 - 22) & 3] - 48;
                v190 = *(void **)(v189 + 16);
                if ( v190 )
                  ExFreePoolWithTag(v190, 0);
                v32 = Object;
                v27 = v162;
                *(_WORD *)(v189 + 8) = v187;
                *(_WORD *)(v189 + 10) = v187;
                *(_QWORD *)(v189 + 16) = Pool2;
                v218 = 0;
                goto LABEL_35;
              }
              ExFreePoolWithTag(Pool2, 0);
            }
            v32 = Object;
            v218 = -1073741670;
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
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
          goto LABEL_35;
        }
        if ( !v27 )
          goto LABEL_323;
        v31 = v221[0];
        if ( LOWORD(v221[0]) )
          goto LABEL_244;
        v163 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v27 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v27 - 48) >> 8)] + 144);
        if ( !v163 )
          goto LABEL_280;
        if ( v163 == ObpParseSymbolicLinkEx )
        {
LABEL_244:
          v29 = (struct _KLOCK_ENTRIES *)v221[1];
          epi16 = WORD1(v221[0]);
          v28 = *(UNICODE_STRING *)v221;
          continue;
        }
        if ( a8 )
        {
LABEL_280:
          v83 = ObReferenceObjectByPointer(v27, 0, ObjectType, a5);
          v218 = v83;
          goto LABEL_281;
        }
        v29 = (struct _KLOCK_ENTRIES *)v221[1];
        epi16 = WORD1(v221[0]);
        v28 = *(UNICODE_STRING *)v221;
      }
      v230 = 0LL;
      if ( v109 == ObpParseSymbolicLinkEx )
      {
        v17 = a2;
        v96 = a10;
        v97 = v245;
        v146 = ObpParseSymbolicLinkEx(v27, ObjectType, v245, a2, (__int64)v221, a6, a7, (__int64)v234, (__int64)&v230);
        v91 = (__int64)a11;
        v83 = v146;
        v218 = v146;
      }
      else
      {
        if ( a8 )
        {
LABEL_491:
          v32 = Object;
          v218 = -1073741788;
          goto LABEL_27;
        }
        PsReferenceSiloContext(v27);
        v91 = (__int64)a11;
        if ( *a11 )
        {
          v92 = (__int64 *)(*a11 + 37);
          _m_prefetchw(v92);
          v93 = *v92;
          v94 = *v92 - 16;
          if ( (*v92 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v94 = 0LL;
          if ( (v93 & 2) != 0 || (v95 = *v92, v95 != _InterlockedCompareExchange64(v92, v94, v93)) )
            ExfReleasePushLock(v92);
          KeAbPostRelease((unsigned __int64)v92);
          if ( *(_BYTE *)(v91 + 22) )
          {
            ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v91, 0x554C624Fu);
            *(_BYTE *)(v91 + 22) = 0;
          }
          *(_QWORD *)v91 = 0LL;
          *(_BYTE *)(v91 + 21) = 0;
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
        v96 = a10;
        v17 = a2;
        if ( (*(_BYTE *)(v108 + 67) & 1) != 0 )
        {
          v217 = &v230;
          v216 = (PVOID *)v234;
        }
        else
        {
          v216 = &v230;
        }
        v215 = a7;
        v214 = a6;
        v213 = v221;
        v212 = a2;
        LODWORD(Tag) = v245;
        v218 = guard_dispatch_icall_no_overrides((__int64)v27, (__int64)ObjectType);
        ObfDereferenceObject(v27);
        v83 = v218;
        v97 = v245;
      }
      if ( v83 < 0 )
        goto LABEL_281;
      v98 = Object;
      v27 = (unsigned __int64 *)v230;
      if ( Object )
      {
        ObDereferenceObjectDeferDelete(Object);
        v83 = v218;
        v98 = 0LL;
        Object = 0LL;
      }
      if ( v83 != 260 )
      {
        if ( v83 != 872 )
          v98 = v27;
        Object = v98;
      }
      if ( (v235 & v96->OriginalDesiredAccess) != v96->OriginalDesiredAccess )
      {
        v83 = -1073741790;
        goto LABEL_397;
      }
      if ( v83 != 280 && v83 != 260 && v83 != 872 )
        goto LABEL_278;
      if ( (v97 & 0x1000) != 0 && v83 != 872 )
      {
LABEL_408:
        v32 = Object;
        v218 = -1073740533;
        goto LABEL_27;
      }
      if ( !--v227 )
        goto LABEL_325;
      if ( !*(_WORD *)v17 )
      {
LABEL_26:
        v32 = Object;
        v218 = -1073741773;
        goto LABEL_27;
      }
      v99 = v226;
      if ( v226 )
      {
        v100 = v229;
        if ( v229 )
        {
          _m_prefetchw(v229);
          v101 = *v229;
          while ( (v99 ^ v101) < 0xF )
          {
            v102 = v101;
            v101 = _InterlockedCompareExchange64(v100, v101 + 1, v101);
            if ( v102 == v101 )
              goto LABEL_170;
          }
        }
        ObDereferenceDeviceMap((PVOID)v99);
LABEL_170:
        v83 = v218;
        v17 = a2;
        v226 = 0LL;
      }
      if ( *(_QWORD *)v91 )
      {
        v103 = (__int64 *)(*(_QWORD *)v91 + 296LL);
        _m_prefetchw(v103);
        v104 = *v103;
        v105 = *v103 - 16;
        if ( (*v103 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v105 = 0LL;
        if ( (v104 & 2) != 0 || (v106 = *v103, v106 != _InterlockedCompareExchange64(v103, v105, v104)) )
          ExfReleasePushLock(v103);
        KeAbPostRelease((unsigned __int64)v103);
        if ( *(_BYTE *)(v91 + 22) )
        {
          ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v91, 0x554C624Fu);
          *(_BYTE *)(v91 + 22) = 0;
        }
        *(_QWORD *)v91 = 0LL;
        *(_BYTE *)(v91 + 21) = 0;
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v83 = v218;
      }
      v107 = **(_WORD **)(v17 + 8);
      if ( v83 == 280 )
      {
        if ( v107 != 92 )
        {
          v29 = *(struct _KLOCK_ENTRIES **)(v17 + 8);
          goto LABEL_182;
        }
        goto LABEL_26;
      }
      if ( v107 != 92 )
        goto LABEL_26;
      v20 = (__int64)a9;
      if ( v83 == 872 )
      {
        v16 = v245;
        v15 = ObjectType;
        Source1 = *(void **)&ObpStackTraceLock.PriorityFloorCounts[24];
      }
      else
      {
        v220[0] = 0LL;
        if ( (int)PsGetPermanentSiloContext((__int64)a9, PsObjectDirectorySiloContextSlot, v220) >= 0 )
          v43 = (void *)v220[0];
        else
          v43 = *(void **)&ObpStackTraceLock.PriorityFloorCounts[24];
        v16 = v245;
        v15 = ObjectType;
        Source1 = v43;
      }
    }
    v71 = v55;
    v72 = 8 * v70 + 32;
    while ( 1 )
    {
      v73 = (signed __int64 *)((char *)v71 + v72);
      if ( *(volatile signed __int64 *)((char *)v71 + v72) )
        break;
LABEL_389:
      v71 = (volatile signed __int64 *)*((_QWORD *)v71 + 3);
      if ( !v71 )
      {
        v29 = (struct _KLOCK_ENTRIES *)v221[1];
        epi16 = WORD1(v221[0]);
        v31 = v221[0];
        v55 = (volatile signed __int64 *)v226;
        goto LABEL_300;
      }
    }
    _m_prefetchw(v73);
    v74 = *v73;
    v75 = *v73;
    if ( (*v73 & 0xF) != 0 )
    {
      do
      {
        v76 = _InterlockedCompareExchange64(v73, v74 - 1, v74);
        if ( v74 == v76 )
          break;
        v74 = v76;
        LOBYTE(v75) = v76;
      }
      while ( (v76 & 0xF) != 0 );
    }
    v27 = (unsigned __int64 *)(v74 & 0xFFFFFFFFFFFFFFF0uLL);
    v77 = v75 & 0xF;
    if ( v77 <= 1 )
    {
      if ( !v77 )
      {
LABEL_381:
        v177 = (char *)PsGetServerSiloGlobals(*((_QWORD *)v71 + 2));
        v178 = KeGetCurrentThread();
        v179 = (signed __int64 *)(v177 + 120);
        --v178->SpecialApcDisable;
        v182 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v177 + 120), 0LL, 0LL, v180);
        if ( _InterlockedCompareExchange64(v179, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v179, 0, v182, (struct _KTHREAD *)v179);
        if ( v182 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v182, v181);
          else
            *((_BYTE *)v182 + 10) = 1;
        }
        v27 = (unsigned __int64 *)ObFastReferenceObjectLocked(
                                    (volatile signed __int64 *)((char *)v71 + v72),
                                    0x554C624Fu);
        if ( _InterlockedCompareExchange64(v179, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v179);
        KeAbPostRelease((unsigned __int64)v179);
        KeLeaveGuardedRegion();
        v78 = (ULONG_PTR)v27;
        if ( v27 )
          goto LABEL_109;
        goto LABEL_389;
      }
      ObpFastReplenishReference((signed __int64 *)((char *)v71 + v72), (ULONG_PTR)v27);
    }
    ObpTraceObjectReferenceIfActive((__int64)(v27 - 6), 1, 0x554C624Fu);
    if ( !v27 )
      goto LABEL_381;
    v78 = (ULONG_PTR)v27;
LABEL_109:
    v221[1] += 4LL;
    LOWORD(v221[0]) -= 4;
    v16 = v245;
    v79 = ObHeaderCookie ^ *(_BYTE *)(v78 - 24) ^ ((unsigned __int16)(v78 - 48) >> 8);
    v232 = 0LL;
    if ( v79 == *(_BYTE *)(IoDeviceObjectType + 40) )
      v80 = IopParseDevice(v78, v245, a2, (__int64)v221, a6, a7, (__int64)v234, (__int64)&v232);
    else
      v80 = ObpParseSymbolicLinkEx(
              (PVOID)v78,
              ObjectType,
              v245,
              a2,
              (__int64)v221,
              a6,
              a7,
              (__int64)v234,
              (__int64)&v232);
    v218 = v80;
    _m_prefetchw(v73);
    v81 = *v73;
    do
    {
      if ( (v78 ^ v81) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v78, 0x554C624Fu);
        goto LABEL_116;
      }
      v82 = v81;
      v81 = _InterlockedCompareExchange64(v73, v81 + 1, v81);
    }
    while ( v82 != v81 );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v78 - 48, -1, 0x554C624Fu);
LABEL_116:
    v83 = v218;
    if ( v218 < 0 )
      goto LABEL_281;
    v27 = (unsigned __int64 *)v232;
    if ( v218 != 260 )
    {
      v84 = Object;
      if ( v218 != 872 )
        v84 = (void *)v232;
      Object = v84;
    }
    if ( (v235 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
    {
LABEL_426:
      v32 = Object;
      v218 = -1073741790;
      goto LABEL_27;
    }
    if ( v218 != 280 && v218 != 872 && v218 != 260 )
      break;
    if ( (v16 & 0x1000) != 0 && v218 != 872 )
      goto LABEL_408;
    if ( !--v227 )
      goto LABEL_325;
    if ( !*(_WORD *)a2 )
      goto LABEL_26;
    v85 = v229;
    v86 = v226;
    if ( v229 )
    {
      _m_prefetchw(v229);
      v87 = *v229;
      while ( (v86 ^ v87) < 0xF )
      {
        v88 = v87;
        v87 = _InterlockedCompareExchange64(v85, v87 + 1, v87);
        if ( v88 == v87 )
          goto LABEL_130;
      }
    }
    ObDereferenceDeviceMap((PVOID)v86);
LABEL_130:
    v17 = a2;
    v226 = 0LL;
    v89 = **(_WORD **)(a2 + 8);
    if ( v218 == 280 )
    {
      if ( v89 != 92 )
      {
LABEL_139:
        v29 = *(struct _KLOCK_ENTRIES **)(v17 + 8);
LABEL_182:
        v28 = *(UNICODE_STRING *)v17;
        *(_OWORD *)v221 = *(_OWORD *)v17;
LABEL_183:
        v31 = _mm_cvtsi128_si32((__m128i)v28);
        epi16 = _mm_extract_epi16((__m128i)v28, 1);
        goto LABEL_184;
      }
      goto LABEL_26;
    }
    if ( v89 != 92 )
      goto LABEL_26;
    v20 = (__int64)a9;
    if ( v218 == 872 )
    {
      v15 = ObjectType;
      Source1 = *(void **)&ObpStackTraceLock.PriorityFloorCounts[24];
    }
    else
    {
      v220[0] = 0LL;
      if ( (int)PsGetPermanentSiloContext((__int64)a9, PsObjectDirectorySiloContextSlot, v220) >= 0 )
        v156 = (void *)v220[0];
      else
        v156 = *(void **)&ObpStackTraceLock.PriorityFloorCounts[24];
      v15 = ObjectType;
      Source1 = v156;
    }
  }
LABEL_278:
  if ( !v27 )
  {
    v83 = -1073741772;
    v218 = -1073741772;
  }
  v32 = 0LL;
LABEL_282:
  if ( v83 < 0 )
    goto LABEL_27;
LABEL_35:
  if ( v32 )
    ObDereferenceObjectDeferDelete(v32);
  if ( v237 )
    ObDereferenceObjectDeferDelete(v237);
  SeClearLearningModeObjectInformation();
  v38 = v226;
  if ( v226 )
  {
    v39 = v229;
    if ( v229 )
    {
      _m_prefetchw(v229);
      v40 = *v229;
      while ( (v38 ^ v40) < 0xF )
      {
        v41 = v40;
        v40 = _InterlockedCompareExchange64(v39, v40 + 1, v40);
        if ( v41 == v40 )
          goto LABEL_44;
      }
    }
    ObDereferenceDeviceMap((PVOID)v38);
  }
LABEL_44:
  v42 = v218;
  if ( v218 < 0 )
  {
    v27 = 0LL;
  }
  else if ( a12 && v235 != -1 )
  {
    *a12 = v235;
  }
  *a13 = v27;
  return v42;
}
