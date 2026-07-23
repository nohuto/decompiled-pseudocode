/*
 * XREFs of CmLoadAppKey @ 0x1408B87F4
 * Callers:
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     ExfWaitForRundownProtectionRelease @ 0x14045CD8C (ExfWaitForRundownProtectionRelease.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     ExBlockOnAddressPushLock @ 0x140478530 (ExBlockOnAddressPushLock.c)
 *     PsGetProcessImageFileName @ 0x140478D40 (PsGetProcessImageFileName.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1406E6A00 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpUnlockAppHiveLoadList @ 0x1408B77A4 (CmpUnlockAppHiveLoadList.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408B7808 (UNLOCK_HIVE_LOAD.c)
 *     CmpGetLastHive @ 0x1408B79D4 (CmpGetLastHive.c)
 *     CmpGetNextHive @ 0x1408B9680 (CmpGetNextHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     CmpLockAppHiveLoadList @ 0x1408BA964 (CmpLockAppHiveLoadList.c)
 *     LOCK_HIVE_LOAD @ 0x1408BABC0 (LOCK_HIVE_LOAD.c)
 *     CmpCmdHiveOpen @ 0x1408BAC48 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408C2C40 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpSplitParentKeyName @ 0x140C5EBFC (CmpSplitParentKeyName.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140C5ECD4 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140C5EF14 (CmpReleaseHiveLoadUnloadRundown.c)
 */

__int64 __fastcall CmLoadAppKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        struct _KEVENT *a6,
        __int64 a7,
        char a8,
        __int64 *a9,
        ULONG_PTR *a10)
{
  unsigned __int16 *v12; // rax
  char v13; // r14
  void *LastHive; // r15
  unsigned int v15; // ecx
  __int64 Pool; // rsi
  unsigned int i; // edx
  __int64 v18; // r8
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int KeyCommon; // ebx
  NTSTATUS v24; // eax
  _QWORD *v25; // rdi
  struct _LIST_ENTRY *v26; // rax
  struct _LIST_ENTRY *j; // rbx
  struct _LIST_ENTRY *v28; // rax
  struct _LIST_ENTRY *v29; // rbx
  struct _EX_RUNDOWN_REF *v30; // rbx
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  void *v36; // rcx
  __int64 NextHive; // rax
  __int64 v38; // rdi
  _BYTE *v39; // rbx
  __int64 v40; // rcx
  void *v41; // rcx
  bool v42; // bl
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // ebx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 *v49; // rbx
  __int64 v50; // rcx
  ULONG_PTR *v51; // rcx
  _LIST_ENTRY *v52; // rcx
  struct _LIST_ENTRY *v53; // rax
  struct _LIST_ENTRY *v54; // rax
  struct _EX_RUNDOWN_REF *v55; // rdx
  struct _LIST_ENTRY *v56; // rcx
  struct _LIST_ENTRY *v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // r9d
  const CHAR *ProcessImageFileName; // rax
  __int64 v65; // r8
  int v66; // r11d
  unsigned int v67; // edx
  int v69; // r9d
  int v70; // r10d
  __int64 v71; // rcx
  char v72; // r8
  int v73; // edx
  int v74; // r9d
  int v75; // r10d
  NTSTATUS v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // r8
  int Object; // [rsp+20h] [rbp-E0h]
  _WORD v81[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v82[4]; // [rsp+64h] [rbp-9Ch] BYREF
  _WORD v83[2]; // [rsp+68h] [rbp-98h] BYREF
  int v84; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID v85; // [rsp+70h] [rbp-90h] BYREF
  PVOID v86; // [rsp+78h] [rbp-88h] BYREF
  __int64 v87; // [rsp+80h] [rbp-80h] BYREF
  __int64 v88; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h]
  int v90; // [rsp+98h] [rbp-68h]
  int v91; // [rsp+9Ch] [rbp-64h]
  __int64 v92; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v94; // [rsp+B0h] [rbp-50h] BYREF
  int v95; // [rsp+B8h] [rbp-48h]
  int v96; // [rsp+BCh] [rbp-44h]
  int v97; // [rsp+C0h] [rbp-40h]
  _LIST_ENTRY *p_TimerListEntry; // [rsp+D0h] [rbp-30h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+D8h] [rbp-28h]
  struct _LIST_ENTRY *v100; // [rsp+E0h] [rbp-20h] BYREF
  struct _EX_RUNDOWN_REF *v101; // [rsp+E8h] [rbp-18h]
  struct _LIST_ENTRY *v102; // [rsp+F0h] [rbp-10h]
  char v103; // [rsp+F8h] [rbp-8h]
  struct _KEVENT Event; // [rsp+100h] [rbp+0h] BYREF
  signed __int64 v105; // [rsp+118h] [rbp+18h] BYREF
  ULONG_PTR *v106; // [rsp+120h] [rbp+20h]
  __int64 *v107; // [rsp+128h] [rbp+28h]
  __int128 v108; // [rsp+130h] [rbp+30h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+170h] [rbp+70h] BYREF
  __int64 *v111; // [rsp+190h] [rbp+90h]
  __int64 v112; // [rsp+198h] [rbp+98h]
  int *v113; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v114; // [rsp+1A8h] [rbp+A8h]
  __int64 *v115; // [rsp+1B0h] [rbp+B0h]
  __int64 v116; // [rsp+1B8h] [rbp+B8h]
  PVOID *v117; // [rsp+1C0h] [rbp+C0h]
  __int64 v118; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 *v119; // [rsp+1D0h] [rbp+D0h]
  __int64 v120; // [rsp+1D8h] [rbp+D8h]
  __int64 v121; // [rsp+1E0h] [rbp+E0h]
  __int64 v122; // [rsp+1E8h] [rbp+E8h]
  __int64 v123; // [rsp+1F0h] [rbp+F0h]
  __int64 v124; // [rsp+1F8h] [rbp+F8h]
  __int64 v125; // [rsp+200h] [rbp+100h]
  __int64 v126; // [rsp+208h] [rbp+108h]
  __int64 v127; // [rsp+210h] [rbp+110h]
  __int64 v128; // [rsp+218h] [rbp+118h]
  __int64 v129; // [rsp+220h] [rbp+120h]
  __int64 v130; // [rsp+228h] [rbp+128h]
  __int64 v131; // [rsp+230h] [rbp+130h]
  int v132; // [rsp+238h] [rbp+138h]
  int v133; // [rsp+23Ch] [rbp+13Ch]
  __int64 *v134; // [rsp+240h] [rbp+140h]
  __int64 v135; // [rsp+248h] [rbp+148h]

  v88 = a5;
  v87 = (__int64)a6;
  v107 = a9;
  v91 = a3;
  v106 = a10;
  v92 = a7;
  v90 = 0;
  Handle = 0LL;
  memset_0(&p_TimerListEntry, 0, 0x50uLL);
  v12 = (unsigned __int16 *)a1[2];
  v82[0] = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  LOBYTE(v83[0]) = 0;
  v13 = 0;
  LOBYTE(v81[0]) = 0;
  LastHive = 0LL;
  v15 = *v12;
  Pool = 0LL;
  P = 0LL;
  v85 = 0LL;
  v108 = 0LL;
  if ( (unsigned __int16)v15 >= 2u )
  {
    for ( i = v15 >> 1; i; *(_WORD *)v18 -= 2 )
    {
      v18 = a1[2];
      if ( *(_WORD *)(*(_QWORD *)(v18 + 8) + 2LL * --i) != 92 )
        break;
    }
  }
  if ( *(_WORD *)a1[2] < 2u )
  {
    KeyCommon = -1073741811;
    goto LABEL_123;
  }
  Pool = CmpAllocatePool(0x100uLL);
  if ( !Pool )
  {
    KeyCommon = -1073741670;
    goto LABEL_123;
  }
  if ( !(unsigned __int8)CmpAcquireHiveLoadUnloadRundown() )
  {
    KeyCommon = -1073741431;
    goto LABEL_90;
  }
  v97 = v91 & 0x20;
  v19 = (v97 != 0 ? 119078913 : 51970049) | 0x8000000;
  if ( (v91 & 0x80u) == 0 )
    v19 = v97 != 0 ? 119078913 : 51970049;
  v20 = v19 | 0x10000000;
  if ( (v91 & 0x200) == 0 )
    v20 = v19;
  v96 = v20;
  v84 = v91 & 0x2000;
  v21 = (v84 != 0) | 0x20;
  if ( (v91 & 0x8000) == 0 )
    v21 = (v91 & 0x2000) != 0;
  v95 = v21;
  v22 = CmpOpenHiveFile(a2, 8, a7, 0LL, 0LL, (__int64)&P, Pool);
  KeyCommon = v22;
  if ( v22 == -1073741772 )
  {
    v102 = (struct _LIST_ENTRY *)a2;
    LOBYTE(v83[0]) = 1;
    v103 = 1;
  }
  else
  {
    if ( v22 < 0 )
    {
      SetFailureLocation(Pool, 0, 32, v22, 16);
      goto LABEL_70;
    }
    v85 = 0LL;
    v24 = ObReferenceObjectByHandle(
            Handle,
            0,
            (POBJECT_TYPE)CmpContextListLock.ApcState.ApcListHead[1].Blink->Flink,
            0,
            &v85,
            0LL);
    v25 = v85;
    KeyCommon = v24;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
    {
      SetFailureLocation(Pool, 0, 32, KeyCommon, 32);
      goto LABEL_68;
    }
    v26 = (struct _LIST_ENTRY *)v25[5];
    v103 = 0;
    v102 = v26;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v105 = 0LL;
  v101 = (struct _EX_RUNDOWN_REF *)&v100;
  v100 = (struct _LIST_ENTRY *)&v100;
  CmpLockAppHiveLoadList();
  for ( j = CmpKeyLockTracker.Timer.TimerListEntry.Flink; ; j = j->Flink )
  {
    if ( j == &CmpKeyLockTracker.Timer.TimerListEntry )
    {
      if ( CmpKeyLockTracker.Timer.TimerListEntry.Blink->Flink == &CmpKeyLockTracker.Timer.TimerListEntry )
      {
        p_TimerListEntry = &CmpKeyLockTracker.Timer.TimerListEntry;
        Blink = CmpKeyLockTracker.Timer.TimerListEntry.Blink;
        CmpKeyLockTracker.Timer.TimerListEntry.Blink->Flink = (struct _LIST_ENTRY *)&p_TimerListEntry;
        CmpKeyLockTracker.Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)&p_TimerListEntry;
        CmpUnlockAppHiveLoadList();
        goto LABEL_29;
      }
      goto LABEL_20;
    }
    if ( LOBYTE(j[2].Blink) )
      break;
    if ( j[2].Flink == v102 )
      goto LABEL_24;
LABEL_23:
    ;
  }
  if ( !RtlEqualUnicodeString((PCUNICODE_STRING)j[2].Flink, a2, 1u) )
    goto LABEL_23;
LABEL_24:
  v28 = j[1].Blink;
  v29 = j + 1;
  if ( v28->Flink != v29 )
    goto LABEL_20;
  v101 = (struct _EX_RUNDOWN_REF *)v28;
  v100 = v29;
  v28->Flink = (struct _LIST_ENTRY *)&v100;
  v29->Blink = (struct _LIST_ENTRY *)&v100;
  v30 = v101;
  ExAcquireRundownProtection_0(v101 + 7);
  CmpUnlockAppHiveLoadList();
  KeWaitForSingleObject(&v30[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection_0(v30 + 7);
LABEL_29:
  while ( 2 )
  {
    v31 = v92;
    while ( 1 )
    {
      LOBYTE(v86) = 1;
      v82[0] = 0;
      v94 = 0LL;
      v32 = CmpCmdHiveOpen((_DWORD)a2, v96, v95, v31, (__int64)v82, Pool);
      KeyCommon = v32;
      if ( !v32 )
      {
        KeyCommon = CmpLoadKeyCommon(v94, a1, v91, v88, 0LL, (struct _KEVENT *)v87, a8, v106, (char)v86, v82[0], Pool);
        goto LABEL_83;
      }
      if ( v32 != -1073741757 || v97 || v13 )
      {
        SetFailureLocation(Pool, 0, 32, v32, 48);
        goto LABEL_83;
      }
      if ( LOBYTE(v83[0]) )
      {
        KeyCommon = CmpOpenHiveFile(a2, 8, v31, 0LL, 0LL, (__int64)&P, Pool);
        if ( KeyCommon < 0 )
        {
          Object = 64;
          if ( KeyCommon == -1073741772 )
            KeyCommon = -1073741757;
          v63 = KeyCommon;
          goto LABEL_82;
        }
        v85 = 0LL;
        v76 = ObReferenceObjectByHandle(
                Handle,
                0,
                (POBJECT_TYPE)CmpContextListLock.ApcState.ApcListHead[1].Blink->Flink,
                0,
                &v85,
                0LL);
        v25 = v85;
        KeyCommon = v76;
        ZwClose(Handle);
        if ( KeyCommon < 0 )
        {
          SetFailureLocation(Pool, 0, 32, KeyCommon, 80);
          goto LABEL_57;
        }
        v31 = v92;
      }
      LOCK_HIVE_LOAD(v33);
      LOBYTE(v34) = 1;
      CmpLockRegistryFreezeAware(v34);
      LastHive = (void *)CmpGetLastHive();
      if ( LastHive )
        break;
      CmpUnlockRegistry(v35);
      UNLOCK_HIVE_LOAD();
      v13 = 1;
    }
    while ( 2 )
    {
      while ( 1 )
      {
        LODWORD(v86) = CmpKeyLockTracker.Timer.Dpc;
        if ( !LODWORD(CmpKeyLockTracker.Timer.Dpc) )
          break;
        CmpUnlockRegistry(v35);
        UNLOCK_HIVE_LOAD();
        ExBlockOnAddressPushLock(
          (signed __int64 *)&CmpKeyLockTracker.Timer.Processor,
          &CmpKeyLockTracker.Timer.Dpc,
          &v86,
          4LL,
          0LL);
        LOCK_HIVE_LOAD(v61);
        LOBYTE(v62) = 1;
        CmpLockRegistryFreezeAware(v62);
      }
      v36 = 0LL;
LABEL_38:
      NextHive = CmpGetNextHive(v36);
      v38 = NextHive;
      if ( !NextHive )
        goto LABEL_118;
      v39 = (_BYTE *)(NextHive + 4776);
      v40 = *(unsigned int *)(NextHive + 4776);
      LODWORD(v86) = v40;
      if ( (_DWORD)v40 )
      {
        CmpUnlockRegistry(v40);
        UNLOCK_HIVE_LOAD();
        ExBlockOnAddressPushLock((signed __int64 *)(v38 + 4784), v39, &v86, 4LL, 0LL);
        LOCK_HIVE_LOAD(v77);
        LOBYTE(v78) = 1;
        CmpLockRegistryFreezeAware(v78);
        CmpDereferenceHive((PVOID)v38);
        if ( (void *)v38 != LastHive )
          continue;
        goto LABEL_118;
      }
      break;
    }
    v41 = *(void **)(NextHive + 1544);
    if ( !v41 )
      goto LABEL_46;
    v42 = 0;
    v86 = 0LL;
    if ( ObReferenceObjectByHandle(
           v41,
           0,
           (POBJECT_TYPE)CmpContextListLock.ApcState.ApcListHead[1].Blink->Flink,
           0,
           &v86,
           0LL) < 0 )
      goto LABEL_46;
    v43 = *((_QWORD *)v85 + 5);
    if ( v43 )
    {
      v44 = *((_QWORD *)v86 + 5);
      if ( v44 )
        v42 = v43 == v44;
    }
    ObfDereferenceObject(v86);
    if ( !v42 )
    {
LABEL_46:
      v36 = (void *)v38;
      if ( (void *)v38 != LastHive )
        goto LABEL_38;
      CmpDereferenceHive((PVOID)v38);
LABEL_118:
      CmpUnlockRegistry(v35);
      UNLOCK_HIVE_LOAD();
      v13 = 1;
      continue;
    }
    break;
  }
  v46 = *(_DWORD *)(v38 + 160) & 0x8000;
  if ( (*(_DWORD *)(v38 + 4120) & 0x60) == 0x20 )
  {
    CmpSplitParentKeyName(v38 + 1848, 0LL, &v108);
    if ( (unsigned int)dword_140E09EE8 > 5
      && (*(_QWORD *)&qword_140E09EF8 & 0x400000000008LL) != 0
      && (qword_140E09F00 & 0x400000000008LL) == qword_140E09F00 )
    {
      v112 = 8LL;
      v111 = &v94;
      v94 = 1LL;
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)KeGetCurrentThread()->ApcState.Process);
      tlgCreate1Sz_char((__int64)&v113, ProcessImageFileName);
      v117 = (PVOID *)*((_QWORD *)&v108 + 1);
      v118 = (unsigned __int16)v108;
      v119 = &v92;
      v115 = &v118;
      v116 = 2LL;
      v92 = 0x1000000LL;
      v120 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)&word_140057316, v65, 7u, &v110);
    }
    if ( v84 )
    {
      if ( v46 || CmpCheckHivePrimaryFileReadWriteAccess(P) )
      {
LABEL_54:
        CmpAttachToRegistryProcess(&ApcState);
        v48 = CmpConstructName(*(_QWORD *)(v38 + 2944));
        v49 = v107;
        *v107 = v48;
        CmpDetachFromRegistryProcess(&ApcState);
        if ( *v49 )
        {
          CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(v38 + 2944));
          v51 = v106;
          *v106 = *(_QWORD *)(v38 + 2944);
          CmpUnlockRegistry(v51);
          UNLOCK_HIVE_LOAD();
          KeyCommon = 0;
          CmpDereferenceHive((PVOID)v38);
          LOBYTE(v81[0]) = 1;
        }
        else
        {
          CmpUnlockRegistry(v50);
          UNLOCK_HIVE_LOAD();
          KeyCommon = -1073741670;
          CmpDereferenceHive((PVOID)v38);
        }
      }
      else
      {
        CmpUnlockRegistry(v60);
        UNLOCK_HIVE_LOAD();
        CmpDereferenceHive((PVOID)v38);
        KeyCommon = -1073741790;
        SetFailureLocation(Pool, 0, 32, -1073741790, 128);
      }
    }
    else
    {
      if ( !v46 )
        goto LABEL_54;
      CmpUnlockRegistry(v47);
      UNLOCK_HIVE_LOAD();
      CmpDereferenceHive((PVOID)v38);
      KeyCommon = -1073741757;
      SetFailureLocation(Pool, 0, 32, -1073741757, 112);
    }
    v25 = v85;
    goto LABEL_57;
  }
  CmpUnlockRegistry(v45);
  UNLOCK_HIVE_LOAD();
  CmpDereferenceHive((PVOID)v38);
  Object = 96;
  KeyCommon = -1073741757;
  v63 = -1073741757;
LABEL_82:
  SetFailureLocation(Pool, 0, 32, v63, Object);
LABEL_83:
  v25 = v85;
LABEL_57:
  CmpLockAppHiveLoadList();
  v52 = p_TimerListEntry;
  v53 = Blink;
  if ( (_LIST_ENTRY **)p_TimerListEntry->Blink != &p_TimerListEntry || (_LIST_ENTRY **)Blink->Flink != &p_TimerListEntry )
    goto LABEL_20;
  Blink->Flink = p_TimerListEntry;
  v52->Blink = v53;
  v54 = v100;
  if ( v100 == (struct _LIST_ENTRY *)&v100 )
    goto LABEL_64;
  v55 = v101;
  v56 = v100 - 1;
  if ( (struct _LIST_ENTRY **)v100->Blink != &v100
    || (struct _LIST_ENTRY **)v101->Count != &v100
    || (v101->Count = (unsigned __int64)v100,
        v54->Blink = (struct _LIST_ENTRY *)v55,
        v57 = CmpKeyLockTracker.Timer.TimerListEntry.Blink,
        CmpKeyLockTracker.Timer.TimerListEntry.Blink->Flink != &CmpKeyLockTracker.Timer.TimerListEntry) )
  {
LABEL_20:
    __fastfail(3u);
  }
  v56->Flink = &CmpKeyLockTracker.Timer.TimerListEntry;
  v56->Blink = v57;
  v57->Flink = v56;
  CmpKeyLockTracker.Timer.TimerListEntry.Blink = v56;
LABEL_64:
  CmpUnlockAppHiveLoadList();
  KeSetEvent(&Event, 0, 0);
  v58 = _InterlockedCompareExchange64(&v105, 1LL, 0LL);
  if ( v58 >= 2 )
    ExfWaitForRundownProtectionRelease(&v105, v58);
  if ( LastHive )
    CmpDereferenceHive(LastHive);
LABEL_68:
  if ( v25 )
    ObfDereferenceObject(v25);
LABEL_70:
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmpReleaseHiveLoadUnloadRundown();
  if ( KeyCommon < 0 )
  {
LABEL_90:
    v66 = *(unsigned __int16 *)(Pool + 8);
    if ( *(_DWORD *)(Pool + 8) || *(_BYTE *)(Pool + 394) )
    {
      v67 = dword_140E09EE8;
      if ( (unsigned int)dword_140E09EE8 > 5 )
      {
        v72 = qword_140E09EF8;
        v71 = qword_140E09F00;
        if ( (*(_QWORD *)&qword_140E09EF8 & 0x400000000008LL) != 0
          && (qword_140E09F00 & 0x400000000008LL) == qword_140E09F00 )
        {
          v112 = 8LL;
          v69 = *(unsigned __int16 *)(Pool + 10);
          v70 = *(unsigned __int8 *)(Pool + 394);
          v88 = 1LL;
          v111 = &v88;
          v113 = &v84;
          v115 = (__int64 *)v81;
          v117 = &v86;
          v119 = (__int64 *)v83;
          v123 = Pool + 12;
          v127 = Pool + 108;
          v128 = (unsigned int)(12 * v69);
          v131 = Pool + 396;
          v134 = &v87;
          v83[0] = v70;
          LOWORD(v86) = v69;
          v124 = (unsigned int)(12 * v66);
          v125 = Pool + 10;
          v84 = KeyCommon;
          v114 = 4LL;
          v81[0] = v66;
          v116 = 2LL;
          v118 = 2LL;
          v120 = 2LL;
          v121 = Pool + 8;
          v122 = 2LL;
          v126 = 2LL;
          v129 = Pool + 394;
          v130 = 2LL;
          v132 = 8 * v70;
          v133 = 0;
          v87 = 0x1000000LL;
          v135 = 8LL;
          tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)&dword_1400574B4, Pool + 394, 0xEu, &v110);
          v71 = qword_140E09F00;
          v72 = qword_140E09EF8;
          v67 = dword_140E09EE8;
        }
        if ( v67 > 5 && (v72 & 8) != 0 && (v71 & 8) == v71 )
        {
          v73 = *(unsigned __int16 *)(Pool + 8);
          v74 = *(unsigned __int16 *)(Pool + 10);
          v75 = *(unsigned __int8 *)(Pool + 394);
          v111 = (__int64 *)&v84;
          v113 = (int *)v81;
          v115 = (__int64 *)&v86;
          v117 = (PVOID *)v83;
          v121 = Pool + 12;
          v122 = (unsigned int)(12 * v73);
          v125 = Pool + 108;
          v126 = (unsigned int)(12 * v74);
          v129 = Pool + 396;
          v83[0] = v75;
          v81[0] = v73;
          LOWORD(v86) = v74;
          v123 = Pool + 10;
          v127 = Pool + 394;
          v84 = KeyCommon;
          v112 = 4LL;
          v114 = 2LL;
          v116 = 2LL;
          v118 = 2LL;
          v119 = (__int64 *)(Pool + 8);
          v120 = 2LL;
          v124 = 2LL;
          v128 = 2LL;
          v130 = (unsigned int)(8 * v75);
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E09EE8,
            (unsigned __int8 *)&unk_140057378,
            0LL,
            0LL,
            0xCu,
            &v110);
        }
      }
LABEL_92:
      if ( Pool )
        goto LABEL_93;
      return (unsigned int)KeyCommon;
    }
LABEL_123:
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000008LL) )
    {
      v88 = v79;
      v111 = &v88;
      v112 = 8LL;
      v113 = &v84;
      v84 = KeyCommon;
      v115 = &v87;
      v114 = 4LL;
      v87 = 0x1000000LL;
      v116 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)&byte_1400572BD, v79, 5u, &v110);
    }
    goto LABEL_92;
  }
  if ( (unsigned int)dword_140E09EE8 > 5
    && (*(_QWORD *)&qword_140E09EF8 & 0x400000000008LL) != 0
    && (qword_140E09F00 & 0x400000000008LL) == qword_140E09F00 )
  {
    v112 = 8LL;
    v88 = 1LL;
    v111 = &v88;
    v116 = 1LL;
    v113 = &v84;
    v115 = (__int64 *)v81;
    v117 = (PVOID *)&v87;
    v84 = KeyCommon;
    v114 = 4LL;
    v87 = 0x1000000LL;
    v118 = 8LL;
    tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)&byte_140057617, v59, 6u, &v110);
  }
LABEL_93:
  CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  return (unsigned int)KeyCommon;
}
