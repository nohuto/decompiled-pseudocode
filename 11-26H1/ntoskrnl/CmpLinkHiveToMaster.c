/*
 * XREFs of CmpLinkHiveToMaster @ 0x14097C11C
 * Callers:
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmpLoadHiveVolatile @ 0x14084D878 (CmpLoadHiveVolatile.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x140CEAEF0 (CmpInitializePreloadedHive.c)
 *     CmpInitializeSystemHive @ 0x140CEB618 (CmpInitializeSystemHive.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     RtlUnicodeStringCopy @ 0x14043D5D0 (RtlUnicodeStringCopy.c)
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     SetFailureLocation @ 0x140494894 (SetFailureLocation.c)
 *     CmpRemoveHiveFromNamespace @ 0x1404CC980 (CmpRemoveHiveFromNamespace.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpLogHiveLinkEvent @ 0x140855338 (CmpLogHiveLinkEvent.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408BC670 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructName @ 0x1408C53A0 (CmpConstructName.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 *     CmpInitializeParseContext @ 0x14097C5D0 (CmpInitializeParseContext.c)
 *     CmpInitializeKcbCache @ 0x14097C668 (CmpInitializeKcbCache.c)
 *     CmpEtwDumpKcb @ 0x14097C780 (CmpEtwDumpKcb.c)
 *     CmpCleanupParseContext @ 0x14097C850 (CmpCleanupParseContext.c)
 *     CmpRecordUnloadEventForHive @ 0x140A2F8FC (CmpRecordUnloadEventForHive.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
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
  __int64 v25; // rcx
  UNICODE_STRING *v26; // r15
  __int64 Pool2; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int64 v37; // rcx
  char v38; // [rsp+40h] [rbp-C0h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  __int64 v44; // [rsp+70h] [rbp-90h]
  __int128 v45; // [rsp+78h] [rbp-88h] BYREF
  __int128 v46; // [rsp+88h] [rbp-78h] BYREF
  __int128 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  __int64 v49; // [rsp+B0h] [rbp-50h]
  _DWORD v50[10]; // [rsp+C0h] [rbp-40h] BYREF
  int v51; // [rsp+E8h] [rbp-18h]
  __int64 v52; // [rsp+F0h] [rbp-10h]
  PVOID v53; // [rsp+110h] [rbp+10h]
  __int128 v54; // [rsp+240h] [rbp+140h]
  __int128 v55; // [rsp+250h] [rbp+150h]
  __int128 v56; // [rsp+260h] [rbp+160h]
  __int128 v57; // [rsp+270h] [rbp+170h]
  __int128 v58; // [rsp+280h] [rbp+180h]
  struct _KAPC_STATE ApcState; // [rsp+290h] [rbp+190h] BYREF

  v13 = a1;
  v43 = a8;
  Object = a9;
  v44 = a10;
  v42 = a2;
  v48 = 0LL;
  LODWORD(v49) = 0;
  v46 = 0LL;
  v47 = 0LL;
  memset_0(v50, 0, 0x1D0uLL);
  Handle = 0LL;
  v38 = 0;
  v45 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeParseContext(v50);
  CmpInitializeDelayDerefContext(&v45);
  v15 = *(_DWORD *)(a3 + 160);
  if ( (v15 & 0x20) == 0 )
  {
    v38 = 1;
    *(_DWORD *)(a3 + 160) = v15 | 0x20;
    *(_QWORD *)(a3 + 4176) = KeGetCurrentThread();
  }
  v16 = CmpInitializeKcbCache(a3, a5);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v18 = 67;
    v52 = a3;
    if ( a6 )
      v18 = 2115;
    v50[0] = v18;
    if ( a4 )
      v51 = -1;
    else
      v51 = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
    v19 = CmKeyObjectType;
    v53 = Object;
    *((_QWORD *)&v46 + 1) = v42;
    *(_QWORD *)&v47 = a1;
    v48 = v43;
    LODWORD(v46) = 48;
    DWORD2(v47) = 576;
    v49 = 0LL;
    CurrentSilo = PsGetCurrentSilo();
    v21 = ObOpenObjectByNameEx((__int64)&v46, (__int64)v19, 0, 0LL, 131103, (__int64)v50, (__int64)CurrentSilo, &Handle);
    v17 = v21;
    if ( v21 < 0 )
    {
      SetFailureLocation((__int64)a12, 0, 30, v21, 32);
      v32 = v55;
      a12[22] = v54;
      v33 = v56;
      a12[23] = v32;
      v34 = v57;
      a12[24] = v33;
      v35 = v58;
      a12[25] = v34;
      a12[26] = v35;
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
      CmpLockRegistry(v24);
    v26 = (UNICODE_STRING *)CmpConstructName(v22[1], v23);
    if ( !a11 )
      CmpUnlockRegistry(v25);
    if ( v26 && (Pool2 = ExAllocatePool2(0x100uLL), (*(_QWORD *)(a3 + 1872) = Pool2) != 0LL) )
    {
      *(_WORD *)(a3 + 1864) = 0;
      *(_WORD *)(a3 + 1866) = v26->Length;
      RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 1864), v26);
      *(_BYTE *)(a3 + 141) = 0;
      *(_DWORD *)(a3 + 1676) = _InterlockedIncrement((_DWORD *)&WheapPfaLock.StackLimit + 1);
      if ( !a11 )
        CmpLockRegistry(1LL);
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
        LOBYTE(v28) = 33;
        CmpEtwDumpKcb(v22[1], v28);
      }
      CmpDetachFromRegistryProcess(&ApcState);
      if ( !a11 )
        CmpUnlockRegistry(v29);
      v30 = (_QWORD *)v44;
      if ( v44 )
      {
        CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v22[1]);
        *v30 = v22[1];
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
        CmpLockRegistry(v25);
      CmpRemoveHiveFromNamespace(a3, v22[1], (__int64)&v45);
      CmpDrainDelayDerefContext((_QWORD **)&v45);
      if ( !a11 )
        CmpUnlockRegistry(v37);
      CmpDetachFromRegistryProcess(&ApcState);
      if ( !v26 )
        goto LABEL_32;
    }
    CmpFreeTransientPoolWithTag(v26, 0x624E4D43u);
LABEL_32:
    if ( v22 )
      ObfDereferenceObject(v22);
    goto LABEL_34;
  }
  SetFailureLocation((__int64)a12, 0, 30, v16, 16);
LABEL_35:
  if ( v38 )
  {
    *(_DWORD *)(a3 + 160) &= ~0x20u;
    *(_QWORD *)(a3 + 4176) = 0LL;
  }
  if ( v17 >= 0 && (DWORD2(PerfGlobalGroupMask[0]) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v13);
  LOBYTE(v31) = a11;
  CmpCleanupParseContext(v50, v31);
  return (unsigned int)v17;
}
