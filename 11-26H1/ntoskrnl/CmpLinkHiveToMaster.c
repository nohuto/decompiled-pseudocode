/*
 * XREFs of CmpLinkHiveToMaster @ 0x14093E12C
 * Callers:
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x140CF1290 (CmpInitializePreloadedHive.c)
 *     CmpInitializeSystemHive @ 0x140CF19B8 (CmpInitializeSystemHive.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     RtlUnicodeStringCopy @ 0x14042FE80 (RtlUnicodeStringCopy.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmpRemoveHiveFromNamespace @ 0x1404C6120 (CmpRemoveHiveFromNamespace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpLogHiveLinkEvent @ 0x14085B6D0 (CmpLogHiveLinkEvent.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408C2C40 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     CmpInitializeParseContext @ 0x14093E5E0 (CmpInitializeParseContext.c)
 *     CmpInitializeKcbCache @ 0x14093E678 (CmpInitializeKcbCache.c)
 *     CmpEtwDumpKcb @ 0x14093E790 (CmpEtwDumpKcb.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     CmpRecordUnloadEventForHive @ 0x140A41774 (CmpRecordUnloadEventForHive.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpLinkHiveToMaster(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        char a6,
        PRKEVENT Event,
        __int64 a8,
        void *a9,
        __int64 a10,
        char a11,
        _OWORD *a12)
{
  unsigned __int16 *v13; // r12
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  POBJECT_TYPE *v19; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v21; // eax
  __int64 *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  UNICODE_STRING *v31; // r15
  __int64 Pool2; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int64 v44; // rcx
  char v45; // [rsp+40h] [rbp-C0h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  __int64 v51; // [rsp+70h] [rbp-90h]
  __int128 v52; // [rsp+78h] [rbp-88h] BYREF
  __int128 v53; // [rsp+88h] [rbp-78h] BYREF
  __int128 v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  __int64 v56; // [rsp+B0h] [rbp-50h]
  _DWORD v57[10]; // [rsp+C0h] [rbp-40h] BYREF
  int v58; // [rsp+E8h] [rbp-18h]
  __int64 v59; // [rsp+F0h] [rbp-10h]
  PVOID v60; // [rsp+110h] [rbp+10h]
  __int128 v61; // [rsp+240h] [rbp+140h]
  __int128 v62; // [rsp+250h] [rbp+150h]
  __int128 v63; // [rsp+260h] [rbp+160h]
  __int128 v64; // [rsp+270h] [rbp+170h]
  __int128 v65; // [rsp+280h] [rbp+180h]
  struct _KAPC_STATE ApcState; // [rsp+290h] [rbp+190h] BYREF

  v13 = a1;
  v50 = a8;
  Object = a9;
  v51 = a10;
  v49 = a2;
  v55 = 0LL;
  LODWORD(v56) = 0;
  v53 = 0LL;
  v54 = 0LL;
  memset_0(v57, 0, 0x1D0uLL);
  Handle = 0LL;
  v45 = 0;
  v52 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeParseContext(v57);
  CmpInitializeDelayDerefContext(&v52);
  v15 = *(_DWORD *)(a3 + 160);
  if ( (v15 & 0x20) == 0 )
  {
    v45 = 1;
    *(_DWORD *)(a3 + 160) = v15 | 0x20;
    *(_QWORD *)(a3 + 4176) = KeGetCurrentThread();
  }
  v16 = CmpInitializeKcbCache(a3, a5);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v18 = 67;
    v59 = a3;
    if ( a6 )
      v18 = 2115;
    v57[0] = v18;
    if ( a4 )
      v58 = -1;
    else
      v58 = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
    v19 = CmKeyObjectType;
    v60 = Object;
    *((_QWORD *)&v53 + 1) = v49;
    *(_QWORD *)&v54 = a1;
    v55 = v50;
    LODWORD(v53) = 48;
    DWORD2(v54) = 576;
    v56 = 0LL;
    CurrentSilo = PsGetCurrentSilo();
    v21 = ObOpenObjectByNameEx((__int64)&v53, (__int64)v19, 0, 0LL, 131103, (__int64)v57, (__int64)CurrentSilo, &Handle);
    v17 = v21;
    if ( v21 < 0 )
    {
      SetFailureLocation((__int64)a12, 0, 30, v21, 32);
      v39 = v62;
      a12[22] = v61;
      v40 = v63;
      a12[23] = v39;
      v41 = v64;
      a12[24] = v40;
      v42 = v65;
      a12[25] = v41;
      a12[26] = v42;
LABEL_34:
      v13 = a1;
      goto LABEL_35;
    }
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    v22 = (__int64 *)Object;
    ZwClose(Handle);
    CmpAttachToRegistryProcess(&ApcState);
    if ( !a11 )
      CmpLockRegistry(v24, v23, v25, v26);
    v31 = (UNICODE_STRING *)CmpConstructName(v22[1], v23);
    if ( !a11 )
      CmpUnlockRegistry(v28);
    if ( v31 && (Pool2 = ExAllocatePool2(0x100uLL), (*(_QWORD *)(a3 + 1872) = Pool2) != 0LL) )
    {
      *(_WORD *)(a3 + 1864) = 0;
      *(_WORD *)(a3 + 1866) = v31->Length;
      RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 1864), v31);
      *(_BYTE *)(a3 + 141) = 0;
      *(_DWORD *)(a3 + 1676) = _InterlockedIncrement((_DWORD *)&WheapPfaLock.CycleTime + 1);
      if ( !a11 )
        CmpLockRegistry(1LL, v33, v34, v35);
      if ( a6 )
      {
        CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v22[1]);
        *(_QWORD *)(a3 + 2944) = v22[1];
        if ( Event )
        {
          KeResetEvent(Event);
          CmpRecordUnloadEventForHive(a3, Event);
        }
      }
      if ( CmpTraceRoutine )
      {
        LOBYTE(v33) = 33;
        CmpEtwDumpKcb(v22[1], v33);
      }
      CmpDetachFromRegistryProcess(&ApcState);
      if ( !a11 )
        CmpUnlockRegistry(v36);
      v37 = (_QWORD *)v51;
      if ( v51 )
      {
        CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v22[1]);
        *v37 = v22[1];
      }
      ObfDereferenceObject(v22);
      if ( a6 )
        *(_BYTE *)(a3 + 2952) = 1;
      v17 = 0;
      v22 = 0LL;
    }
    else
    {
      v17 = -1073741670;
      if ( !a11 )
        CmpLockRegistry(v28, v27, v29, v30);
      CmpRemoveHiveFromNamespace(a3, v22[1], (__int64)&v52);
      CmpDrainDelayDerefContext((_QWORD **)&v52);
      if ( !a11 )
        CmpUnlockRegistry(v44);
      CmpDetachFromRegistryProcess(&ApcState);
      if ( !v31 )
        goto LABEL_32;
    }
    CmpFreeTransientPoolWithTag(v31, 0x624E4D43u);
LABEL_32:
    if ( v22 )
      ObfDereferenceObject(v22);
    goto LABEL_34;
  }
  SetFailureLocation((__int64)a12, 0, 30, v16, 16);
LABEL_35:
  if ( v45 )
  {
    *(_DWORD *)(a3 + 160) &= ~0x20u;
    *(_QWORD *)(a3 + 4176) = 0LL;
  }
  if ( v17 >= 0 && (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v13);
  LOBYTE(v38) = a11;
  CmpCleanupParseContext(v57, v38);
  return (unsigned int)v17;
}
