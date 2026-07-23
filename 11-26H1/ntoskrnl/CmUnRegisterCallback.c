/*
 * XREFs of CmUnRegisterCallback @ 0x1408568E0
 * Callers:
 *     DifCmUnRegisterCallbackWrapper @ 0x140651A10 (DifCmUnRegisterCallbackWrapper.c)
 *     EtwpRegTraceEnableCallback @ 0x1409F07B0 (EtwpRegTraceEnableCallback.c)
 *     VrpDecrementSiloCount @ 0x140B296C0 (VrpDecrementSiloCount.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     ExBlockOnAddressPushLock @ 0x140478530 (ExBlockOnAddressPushLock.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpLockCallbackListExclusive @ 0x140773A48 (CmpLockCallbackListExclusive.c)
 *     CmpUnlockCallbackList @ 0x1409F0B40 (CmpUnlockCallbackList.c)
 *     CmpUnlockContextList @ 0x140A36190 (CmpUnlockContextList.c)
 *     CmpLockContextListExclusive @ 0x140A4C858 (CmpLockContextListExclusive.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

NTSTATUS __stdcall CmUnRegisterCallback(LARGE_INTEGER Cookie)
{
  NTSTATUS v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 NextElement; // rax
  char *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  _QWORD *v14; // rcx
  void **v15; // rax
  _QWORD *v17; // rcx
  void **v18; // rax
  char v19; // r14
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // r15
  _QWORD *v23; // r13
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rbx
  _QWORD *v30; // r15
  _QWORD *v31; // rbx
  PSLIST_ENTRY v32; // rbx
  PSLIST_ENTRY v33; // rcx
  void *v34; // rcx
  __int64 v35; // rax
  PVOID *v36; // rbx
  __int128 v37; // [rsp+38h] [rbp-80h] BYREF
  __int128 v38; // [rsp+48h] [rbp-70h] BYREF
  __int64 v39; // [rsp+58h] [rbp-60h]
  __int128 v40; // [rsp+60h] [rbp-58h]
  __int64 v41; // [rsp+70h] [rbp-48h]
  _QWORD *v42; // [rsp+C8h] [rbp+10h] BYREF
  int v43; // [rsp+D0h] [rbp+18h]
  PVOID *v44; // [rsp+D8h] [rbp+20h]

  v38 = 0LL;
  v39 = 0LL;
  v2 = -1073741811;
  v43 = -1073741811;
  v40 = 0LL;
  v41 = 0LL;
  v37 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v38);
  v42 = 0LL;
  CmpLockCallbackListExclusive(v4, v3, v5, v6);
  do
  {
    do
    {
      NextElement = CmListGetNextElement(&CmpContextListLock.Header.WaitListHead.Blink, &v42, 0LL);
      v8 = (char *)NextElement;
      if ( !NextElement )
        goto LABEL_12;
    }
    while ( *(_QWORD *)(NextElement + 24) != Cookie.QuadPart );
    v9 = *(_DWORD *)(NextElement + 16);
    if ( !v9 )
    {
      v17 = *(_QWORD **)v8;
      v18 = (void **)*((_QWORD *)v8 + 1);
      if ( *(char **)(*(_QWORD *)v8 + 8LL) == v8 && *v18 == v8 )
      {
        *v18 = v17;
        v17[1] = v18;
        CmpUnlockCallbackList();
        v2 = 0;
        v43 = 0;
        goto LABEL_18;
      }
LABEL_46:
      __fastfail(3u);
    }
  }
  while ( v9 < 0 );
  _InterlockedOr((volatile signed __int32 *)v8 + 4, 0x80000000);
  CmpUnlockCallbackList();
  while ( 1 )
  {
    LODWORD(v42) = *((_DWORD *)v8 + 4);
    if ( (_DWORD)v42 == 0x80000000 )
      break;
    ExBlockOnAddressPushLock(&CallbackListDeleteEvent, v8 + 16, &v42, 4LL, 0LL);
  }
  CmpLockCallbackListExclusive(v11, v10, v12, v13);
  v14 = *(_QWORD **)v8;
  v15 = (void **)*((_QWORD *)v8 + 1);
  if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || *v15 != v8 )
    goto LABEL_46;
  *v15 = v14;
  v14[1] = v15;
  CmpUnlockCallbackList();
  v2 = 0;
  v43 = 0;
LABEL_12:
  if ( v2 < 0 )
  {
    CmpUnlockCallbackList();
    goto LABEL_14;
  }
LABEL_18:
  *((_QWORD *)&v37 + 1) = &v37;
  *(_QWORD *)&v37 = &v37;
  v19 = 0;
  LOBYTE(v42) = 0;
  CmpLockContextListExclusive();
  v20 = v8 + 64;
  v21 = (_QWORD *)*((_QWORD *)v8 + 8);
  while ( v21 != v20 )
  {
    v22 = v21;
    v21 = (_QWORD *)*v21;
    v23 = v22 - 2;
    if ( ObReferenceObjectSafe(v22[4]) )
    {
      v24 = *v22;
      v25 = (_QWORD *)v23[3];
      if ( *(_QWORD **)(*v22 + 8LL) != v22 )
        goto LABEL_46;
      if ( (_QWORD *)*v25 != v22 )
        goto LABEL_46;
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      v26 = *v23;
      v27 = (_QWORD *)v23[1];
      if ( *(_QWORD **)(*v23 + 8LL) != v23 )
        goto LABEL_46;
      if ( (_QWORD *)*v27 != v23 )
        goto LABEL_46;
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      v28 = (_QWORD *)*((_QWORD *)&v37 + 1);
      if ( **((__int128 ***)&v37 + 1) != &v37 )
        goto LABEL_46;
      *v22 = &v37;
      v22[1] = v28;
      *v28 = v22;
      *((_QWORD *)&v37 + 1) = v22;
    }
    else
    {
      v19 = 1;
      LOBYTE(v42) = 1;
    }
    v20 = v8 + 64;
  }
  CmpUnlockContextList();
  while ( 1 )
  {
    v29 = v37;
    if ( (__int128 *)v37 == &v37 )
      break;
    v35 = *(_QWORD *)v37;
    if ( *(__int128 **)(v37 + 8) != &v37 || *(_QWORD *)(v35 + 8) != (_QWORD)v37 )
      goto LABEL_46;
    *(_QWORD *)&v37 = *(_QWORD *)v37;
    *(_QWORD *)(v35 + 8) = &v37;
    v36 = (PVOID *)(v29 - 16);
    v44 = v36;
    v40 = *((_OWORD *)v36 + 3);
    guard_dispatch_icall_no_overrides(*((_QWORD *)v8 + 4), 40LL);
    ObfDereferenceObject(v36[6]);
    ExFreePoolWithTag(v36, 0x63634D43u);
  }
  if ( v19 )
  {
    v30 = v8 + 64;
    do
    {
      CmpLockContextListExclusive();
      v42 = (_QWORD *)*v30;
      v31 = v42;
      CmpUnlockContextList();
      if ( v31 == v30 )
        v19 = 0;
      else
        ExBlockOnAddressPushLock(&CallbackListDeleteEvent, v8 + 64, &v42, 8LL, 0LL);
    }
    while ( v19 );
  }
  if ( _InterlockedExchangeAdd((_DWORD *)&WheapPfaLock.StateSaveArea + 1, 0xFFFFFFFF) == 1 )
  {
    v32 = RtlpInterlockedFlushSList(&CmpCallbackContextSList);
    while ( v32 )
    {
      v33 = v32;
      v32 = v32->Next;
      ExFreePoolWithTag(v33, 0);
    }
  }
  v34 = (void *)*((_QWORD *)v8 + 7);
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  ExFreePoolWithTag(v8, 0);
LABEL_14:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v38);
  return v2;
}
