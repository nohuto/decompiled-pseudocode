/*
 * XREFs of CmpHiveCachePopulateHiveEntryThread @ 0x140868610
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmSiAllocateMemory @ 0x1404B7C28 (CmSiAllocateMemory.c)
 *     CmSiSetEvent @ 0x1406E7D40 (CmSiSetEvent.c)
 *     CmSiWaitForMultipleEvents @ 0x1406E7D60 (CmSiWaitForMultipleEvents.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     CmpHiveCacheSubscribePnpNotifications @ 0x14085DBB0 (CmpHiveCacheSubscribePnpNotifications.c)
 *     CmpHiveCacheAcknowledgeOplockBreak @ 0x140867E80 (CmpHiveCacheAcknowledgeOplockBreak.c)
 *     CmpHiveCacheEntryCleanup @ 0x14086815C (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCacheEntryLockAcquire @ 0x1408682FC (CmpHiveCacheEntryLockAcquire.c)
 *     CmpHiveCacheEntryLockRelease @ 0x140868374 (CmpHiveCacheEntryLockRelease.c)
 *     CmpRequestOplockOnHiveFile @ 0x140868A28 (CmpRequestOplockOnHiveFile.c)
 *     CmpOpenHiveFiles @ 0x1408BB400 (CmpOpenHiveFiles.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     PsTerminateSystemThread @ 0x140949E90 (PsTerminateSystemThread.c)
 */

__int64 __fastcall CmpHiveCachePopulateHiveEntryThread(PPRIVILEGE_SET Privileges)
{
  PPRIVILEGE_SET v1; // r12
  _DWORD *v2; // r15
  ULONG Attributes; // esi
  __int64 v4; // rdi
  __int64 v5; // rbx
  const void **Luid; // r14
  char *v7; // rax
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // r13
  NTSTATUS v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  ULONG v16; // r12d
  int Hive; // eax
  _QWORD *v18; // rbx
  void *Memory; // rax
  char v20; // cl
  ULONG v21; // eax
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // r8
  int v25; // ebx
  __int64 v26; // rdx
  char v27; // r14
  char v29; // [rsp+78h] [rbp-19h] BYREF
  char v30[7]; // [rsp+79h] [rbp-18h] BYREF
  PVOID v31; // [rsp+80h] [rbp-11h] BYREF
  ULONG PrivilegeCount; // [rsp+88h] [rbp-9h]
  int v33; // [rsp+8Ch] [rbp-5h] BYREF
  PPRIVILEGE_SET v34; // [rsp+90h] [rbp-1h]
  ULONG v35; // [rsp+98h] [rbp+7h]
  struct _KLOCK_ENTRIES *v36; // [rsp+A0h] [rbp+Fh] BYREF
  __int128 v37; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+27h]

  v34 = Privileges;
  v33 = 0;
  v31 = 0LL;
  v1 = Privileges;
  v38 = 0LL;
  v30[0] = 0;
  v37 = 0LL;
  v2 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v37);
  Attributes = v1->Privilege[0].Attributes;
  v4 = *(_QWORD *)&v1->PrivilegeCount;
  v5 = *(_QWORD *)&v1[1].Privilege[0].Luid.HighPart;
  Luid = (const void **)v1->Privilege[0].Luid;
  PrivilegeCount = v1[1].PrivilegeCount;
  v7 = *(char **)&v1[1].Control;
  v35 = Attributes;
  v29 = *v7;
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 376));
  v36 = v8;
  CmpHiveCacheEntryLockAcquire(v4, v9, v10, v8);
  v11 = 1;
  if ( *(_DWORD *)(v4 + 168) != 1 )
  {
    v12 = -1073741431;
    SetFailureLocation(v5, 0, 41, -1073741431, 32);
    goto LABEL_31;
  }
  v13 = CmpOpenHiveFiles(
          (_DWORD)Luid,
          Attributes,
          PrivilegeCount | 0x10,
          (unsigned int)&v33,
          (__int64)&v29,
          v4 + 176,
          0LL,
          (__int64)&v36,
          v5);
  v12 = v13;
  if ( v13 < 0 )
  {
    SetFailureLocation(v5, 0, 41, v13, 64);
LABEL_6:
    v1 = v34;
    goto LABEL_31;
  }
  v14 = CmpRequestOplockOnHiveFile(v4 + 176, v4, v5);
  v12 = v14;
  if ( v14 != 259 )
  {
    SetFailureLocation(v5, 0, 41, v14, 80);
    goto LABEL_6;
  }
  v15 = CmpHiveCacheSubscribePnpNotifications((void **)(v4 + 176), v4, v5);
  v12 = v15;
  if ( v15 < 0 )
  {
    SetFailureLocation(v5, 0, 41, v15, 96);
    goto LABEL_6;
  }
  v16 = v35;
  Hive = CmpCreateHive(
           (unsigned int)&v31,
           v29 == 0 ? 5 : 0,
           v35,
           v33,
           0LL,
           v4 + 176,
           (__int64)Luid,
           PrivilegeCount,
           0LL,
           0LL,
           0LL,
           (__int64)v30,
           v5);
  v12 = Hive;
  if ( Hive < 0 )
  {
    SetFailureLocation(v5, 0, 41, Hive, 112);
    goto LABEL_6;
  }
  *((_DWORD *)v31 + 47) = HIDWORD(v36);
  v18 = v31;
  v18[232] = CmSiAllocateMemory();
  if ( *((_QWORD *)v31 + 232) )
  {
    *((_WORD *)v31 + 924) = *(_WORD *)Luid;
    *((_WORD *)v31 + 925) = *(_WORD *)Luid;
    memmove(*((void **)v31 + 232), Luid[1], *(unsigned __int16 *)Luid);
  }
  Memory = (void *)CmSiAllocateMemory();
  *(_QWORD *)(v4 + 320) = Memory;
  if ( Memory )
  {
    *(_WORD *)(v4 + 312) = *(_WORD *)Luid;
    *(_WORD *)(v4 + 314) = *(_WORD *)Luid;
    memmove(Memory, Luid[1], *(unsigned __int16 *)Luid);
  }
  v20 = v29;
  *(_QWORD *)(v4 + 368) = v31;
  v21 = PrivilegeCount;
  v31 = 0LL;
  *(_DWORD *)(v4 + 328) = v16;
  v1 = v34;
  *(_DWORD *)(v4 + 168) = 2;
  *(_DWORD *)(v4 + 332) = v21;
  *(_BYTE *)(v4 + 380) = v30[0];
  **(_BYTE **)&v1[1].Control = v20;
  CmSiSetEvent(v4 + 272);
  CmpHiveCacheEntryLockRelease(v4);
  v11 = 0;
  v23 = CmSiWaitForMultipleEvents(v22, v4 + 208);
  v25 = v23;
  v26 = (unsigned int)v23;
  if ( !v23 || (v26 = (unsigned int)(v23 - 1), v23 == 1) || (v26 = (unsigned int)(v23 - 2), v23 == 2) )
  {
    v27 = 1;
    v2 = (_DWORD *)(v4 + 56LL * v23);
  }
  else
  {
    if ( v23 == 3 )
    {
      v12 = 0;
      goto LABEL_31;
    }
    v27 = 0;
  }
  if ( *v2 == 534 )
  {
    SetFailureLocation(0LL, 0, 41, 534, 128);
  }
  else
  {
    v11 = 1;
    CmpHiveCacheEntryLockAcquire(v4, v26, v24, (struct _KLOCK_ENTRIES *)0x216);
    if ( *(_DWORD *)(v4 + 168) == 2 )
    {
      *(_DWORD *)(v4 + 168) = 3;
      CmpHiveCacheEntryLockRelease(v4);
      v11 = 0;
      if ( v27 )
        v12 = CmpHiveCacheAcknowledgeOplockBreak((_QWORD *)v4, v25);
      CmpHiveCacheEntryCleanup(v4, 4);
    }
    else
    {
      SetFailureLocation(0LL, 0, 41, -1073741431, 144);
    }
  }
LABEL_31:
  if ( v31 )
    CmpDestroyHive(v31);
  if ( v12 < 0 )
  {
    *(_DWORD *)(v4 + 168) = 3;
    CmSiSetEvent(v4 + 272);
  }
  if ( v11 )
    CmpHiveCacheEntryLockRelease(v4);
  if ( v12 < 0 )
    CmpHiveCacheEntryCleanup(v4, 1);
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 376));
  CmSiSetEvent(v4 + 288);
  CmSiFreeMemory(v1);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v37);
  PsTerminateSystemThread(v12);
  return 0LL;
}
