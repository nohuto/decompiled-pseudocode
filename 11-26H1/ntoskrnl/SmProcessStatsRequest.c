/*
 * XREFs of SmProcessStatsRequest @ 0x14082014C
 * Callers:
 *     SmQueryStoreInformation @ 0x140B28564 (SmQueryStoreInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MmProbeAndLockPages @ 0x1403A1980 (MmProbeAndLockPages.c)
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     MmSizeOfMdl @ 0x140481EB0 (MmSizeOfMdl.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     SmpGetProcessPartition @ 0x1404D03DC (SmpGetProcessPartition.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1404D1A9C (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall SmProcessStatsRequest(volatile void *a1, int a2, _DWORD *a3, KPROCESSOR_MODE a4)
{
  struct _MDL *v6; // r14
  __int64 v7; // rsi
  int v8; // r13d
  int v9; // ebx
  __int64 v10; // r8
  __int64 ProcessPartition; // rbx
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  PVOID Base[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-98h]
  __int64 v18; // [rsp+50h] [rbp-88h]
  struct _MDL *v19; // [rsp+58h] [rbp-80h]
  __int64 v20[2]; // [rsp+60h] [rbp-78h] BYREF
  __int128 v21; // [rsp+70h] [rbp-68h] BYREF
  struct _KEVENT Object[3]; // [rsp+80h] [rbp-58h] BYREF

  memset(Object, 0, 24);
  v21 = 0LL;
  v20[0] = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  v7 = 0LL;
  v8 = 0;
  KeInitializeEvent(Object, NotificationEvent, 0);
  *(_OWORD *)Base = 0LL;
  v17 = 0LL;
  if ( a2 != 24 )
  {
    v9 = -1073741306;
    goto LABEL_25;
  }
  if ( a4 )
  {
    v20[1] = 1LL;
    ProbeForRead(a1, 1uLL, 8u);
    RtlCopyFromUser(Base, (void *)a1, 0x18uLL);
  }
  else
  {
    RtlCopyVolatileMemory(Base, (const void *)a1, 0x18uLL);
  }
  if ( LOBYTE(Base[0]) == 3 && (unsigned __int64)((__int64)Base[0] & 0xFF00) < 0x400 )
  {
    if ( v17 )
    {
      LOBYTE(v10) = a4;
      v9 = PsReferencePartitionByHandle(v17, 1LL, v10, 1397845331LL, v20);
      if ( v9 < 0 )
        goto LABEL_25;
      ProcessPartition = *(_QWORD *)(v20[0] + 24);
      if ( !ProcessPartition )
      {
        v9 = -1073741399;
        goto LABEL_25;
      }
    }
    else
    {
      ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    }
    if ( (unsigned __int64)((__int64)Base[0] & 0xFF00) <= 0x100
      || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    {
      if ( (!HIDWORD(Base[0])
         || (v12 = MmSizeOfMdl(Base[1], HIDWORD(Base[0])),
             v6 = (struct _MDL *)SmAllocEx(v12, 0x444D6D73u, -1),
             (v19 = v6) != 0LL))
        && (v7 = SmAllocEx(40LL, 0x69576D73u, -1), (v18 = v7) != 0) )
      {
        *(_OWORD *)v7 = 0LL;
        *(_OWORD *)(v7 + 16) = 0LL;
        *(_QWORD *)(v7 + 32) = 0LL;
        if ( HIDWORD(Base[0]) )
        {
          v13 = HIDWORD(Base[0]);
          v14 = (unsigned __int64)Base[1];
          v6->Next = 0LL;
          v6->Size = 8 * ((((v14 & 0xFFF) + v13 + 4095) >> 12) + 6);
          v6->MdlFlags = 0;
          v6->StartVa = (PVOID)(v14 & 0xFFFFFFFFFFFFF000uLL);
          v6->ByteOffset = v14 & 0xFFF;
          v6->ByteCount = v13;
          MmProbeAndLockPages(v6, a4, IoWriteAccess);
          v8 = 1;
        }
        *(_DWORD *)v7 = *(_DWORD *)v7 & 0xFFFFFFF8 | 3;
        *(_DWORD *)(v7 + 8) = BYTE1(Base[0]);
        *(_DWORD *)(v7 + 12) = HIDWORD(Base[0]);
        *(_QWORD *)(v7 + 16) = v6;
        v9 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(
               ProcessPartition,
               HIWORD(LODWORD(Base[0])),
               v7,
               (int)Object,
               (__int64)&v21);
        if ( v9 >= 0 )
        {
          v7 = 0LL;
          KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
          v9 = v21;
          *a3 = DWORD2(v21);
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
    else
    {
      v9 = -1073741790;
    }
  }
  else
  {
    v9 = -1073741811;
  }
LABEL_25:
  if ( v7 )
    CmSiFreeMemory((PPRIVILEGE_SET)v7);
  if ( v8 )
    MmUnlockPages(v6);
  if ( v6 )
    CmSiFreeMemory((PPRIVILEGE_SET)v6);
  if ( v20[0] )
    PsDereferencePartition(v20[0]);
  return (unsigned int)v9;
}
