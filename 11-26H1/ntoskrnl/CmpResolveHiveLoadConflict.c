/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x140ADF3F4
 * Callers:
 *     CmLoadKey @ 0x140ADEAD4 (CmLoadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpJoinClassOfTrust @ 0x140468664 (CmpJoinClassOfTrust.c)
 *     CmpPerformTrustClassAccessCheck @ 0x1404686E0 (CmpPerformTrustClassAccessCheck.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmpUnJoinClassOfTrust @ 0x1404CD4DC (CmpUnJoinClassOfTrust.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14085F3EC (CmpIsHiveAlreadyLoaded.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408B7808 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1408BABC0 (LOCK_HIVE_LOAD.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     CmpInitializeParseContext @ 0x14093E5E0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     CmpRecordUnloadEventForHive @ 0x140A41774 (CmpRecordUnloadEventForHive.c)
 *     CmpReferenceKeyControlBlock @ 0x140A81AC0 (CmpReferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpResolveHiveLoadConflict(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        char a7,
        __int64 *a8,
        _QWORD *a9)
{
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  __int64 *v19; // rsi
  unsigned int v20; // ebx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edi
  int v25; // r15d
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  struct _KLOCK_ENTRIES *v29; // r9
  __int64 v30; // rbx
  PVOID Object; // [rsp+40h] [rbp-238h] BYREF
  __int64 v32; // [rsp+48h] [rbp-230h] BYREF
  __int64 *v33; // [rsp+50h] [rbp-228h]
  _QWORD *v34; // [rsp+58h] [rbp-220h]
  _BYTE v35[464]; // [rsp+60h] [rbp-218h] BYREF

  v33 = a8;
  v34 = a9;
  memset_0(v35, 0, sizeof(v35));
  v32 = 0LL;
  v13 = 0LL;
  Object = 0LL;
  CmpInitializeParseContext((__int64)v35);
  v14 = ObReferenceObjectByNameEx(a1, 0LL, 0x20019u, (__int64)CmKeyObjectType, 0, (__int64)v35, &Object);
  v19 = (__int64 *)Object;
  if ( v14 < 0 )
  {
    v20 = -1073741275;
    goto LABEL_3;
  }
  LOCK_HIVE_LOAD(v16, v15, v17, v18);
  CmpLockRegistryFreezeAware(1);
  if ( !a4 )
    goto LABEL_12;
  if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL);
    v23 = CmpPerformTrustClassAccessCheck(v13, a7);
    v24 = v23;
    if ( v23 < 0 )
    {
      v25 = v23;
      v26 = 32;
LABEL_23:
      SetFailureLocation(a6, 0, 33, v25, v26);
      if ( v24 == -1073741275 )
        v24 = -1073741823;
      v20 = v24;
      goto LABEL_29;
    }
LABEL_12:
    if ( !CmpIsHiveAlreadyLoaded((__int64)v19, a2, a3, &v32, v33) )
    {
      v20 = -1073741757;
      SetFailureLocation(a6, 0, 33, -1073741757, 48);
      goto LABEL_29;
    }
    v30 = v32;
    if ( (*(_DWORD *)(v32 + 160) & 0x8000) != 0 )
    {
      if ( (a3 & 0x2000) != 0 )
        goto LABEL_18;
    }
    else if ( (a3 & 0x2000) == 0 )
    {
LABEL_18:
      CmpLockKcbExclusive(v19[1], v27, v28, v29);
      if ( (a3 & 0x800) != 0 )
      {
        CmpReferenceKeyControlBlock(v19[1]);
        *v34 = v19[1];
      }
      if ( !a5 || (v24 = CmpRecordUnloadEventForHive(v30, a5), v25 = v24, v24 >= 0) )
      {
        CmpUnlockKcb(v19[1]);
        if ( v13 )
        {
          CmpUnJoinClassOfTrust(v30);
          *(_DWORD *)(v30 + 4120) |= 1u;
          CmpJoinClassOfTrust(v30, v13, a7);
        }
        v20 = 0;
        goto LABEL_29;
      }
      CmpUnlockKcb(v19[1]);
      v26 = 80;
      goto LABEL_23;
    }
    v20 = -1073741757;
    SetFailureLocation(a6, 0, 33, -1073741757, 64);
    goto LABEL_29;
  }
  v20 = -1073741444;
  SetFailureLocation(a6, 0, 33, -1073741444, 16);
LABEL_29:
  CmpUnlockRegistry(v22);
  UNLOCK_HIVE_LOAD();
LABEL_3:
  if ( v19 )
    ObfDereferenceObject(v19);
  CmpCleanupParseContext((__int64)v35, 0LL, v17, (__int64)v18);
  return v20;
}
