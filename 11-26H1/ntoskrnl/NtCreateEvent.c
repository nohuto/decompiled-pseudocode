/*
 * XREFs of NtCreateEvent @ 0x1408EF8C0
 * Callers:
 *     DifNtCreateEventWrapper @ 0x140670AF0 (DifNtCreateEventWrapper.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1409B2A78 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPopulateReadList @ 0x1409B9120 (PfSnPopulateReadList.c)
 *     PfSnPrefetchMetadata @ 0x140A501C8 (PfSnPrefetchMetadata.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140B4C9F4 (SepAdtOpenEtwReadyEvent.c)
 *     FsRtlInitializeSmssEvent @ 0x140CB8CA0 (FsRtlInitializeSmssEvent.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpRegisterObject @ 0x140778F98 (ObpRegisterObject.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObpFreeObjectNameBuffer @ 0x1408F17F0 (ObpFreeObjectNameBuffer.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408FDFD0 (ObpCaptureObjectCreateInformation.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     ObpAllocateObject @ 0x1409344A0 (ObpAllocateObject.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateEvent(_QWORD *a1, unsigned int a2, __int64 a3, EVENT_TYPE a4, BOOLEAN a5)
{
  unsigned __int8 PreviousMode; // si
  POBJECT_TYPE *v9; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v12; // rbx
  int Object; // edi
  void *v14; // rcx
  struct _KPRCB *v15; // rdx
  _GENERAL_LOOKASIDE *v16; // rcx
  struct _KEVENT *v17; // rbx
  __int64 ULong64FromUser; // rax
  int v20; // ecx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  __int64 v23; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 v25; // [rsp+58h] [rbp-50h] BYREF
  __int64 v26; // [rsp+60h] [rbp-48h] BYREF
  __int128 v27; // [rsp+68h] [rbp-40h] BYREF

  v26 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  if ( (unsigned int)a4 > SynchronizationEvent )
    return 3221225485LL;
  v9 = ExEventObjectType;
  v27 = 0LL;
  v25 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v12 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v12 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v12 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v12 )
    {
      ++L->AllocateMisses;
      v12 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size);
    }
  }
  if ( v12 )
  {
    *(_DWORD *)v12 = CurrentPrcb->Number;
    Object = ObpCaptureObjectCreateInformation(PreviousMode, PreviousMode, a3, &v27, v12, 0);
    if ( Object >= 0 )
    {
      if ( (*(_DWORD *)v12 & (_DWORD)v9[9]) != 0 )
      {
        Object = -1073741811;
      }
      else if ( (*(_DWORD *)v12 & 0x10) == 0
             || SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.SchedulingGroup, PreviousMode) )
      {
        v20 = *((_DWORD *)v9 + 27);
        *(_DWORD *)(v12 + 20) = *((_DWORD *)v9 + 26);
        *(_DWORD *)(v12 + 24) = v20;
        Object = ObpAllocateObject(v12, PreviousMode, (_DWORD)v9, (unsigned int)&v27, 24, (__int64)&v25, 0LL);
        if ( Object >= 0 )
        {
          v23 = v25;
          if ( ObpTraceFlags )
          {
            ObpRegisterObject(v25, 1, v21, v22);
            ObpPushStackInfo(v23, 1, 0x746C6644u);
          }
          v17 = (struct _KEVENT *)(v23 + 48);
          goto LABEL_20;
        }
      }
      else
      {
        Object = -1073741727;
      }
      if ( *((_QWORD *)&v27 + 1) )
        ObpFreeObjectNameBuffer(&v27);
      v14 = *(void **)(v12 + 32);
      if ( v14 )
      {
        if ( *(_BYTE *)(v12 + 16) <= 1u )
          ExFreePoolWithTag(v14, 0);
        *(_QWORD *)(v12 + 32) = 0LL;
      }
    }
    v15 = KeGetCurrentPrcb();
    v16 = v15->PPLookasideList[4].P;
    ++v16->TotalFrees;
    if ( LOWORD(v16->ListHead.Alignment) < v16->Depth
      || (++v16->FreeMisses,
          v16 = v15->PPLookasideList[4].L,
          ++v16->TotalFrees,
          LOWORD(v16->ListHead.Alignment) < v16->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v16->ListHead, (PSLIST_ENTRY)v12);
    }
    else
    {
      ++v16->FreeMisses;
      guard_dispatch_icall_no_overrides(v12, (__int64)v15);
    }
    v17 = 0LL;
  }
  else
  {
    Object = -1073741670;
    v17 = 0LL;
  }
LABEL_20:
  if ( Object >= 0 )
  {
    KeInitializeEvent(v17, a4, a5);
    Object = ObInsertObjectEx(v17, 0LL, a2, 0LL, 0, 0LL, &v26);
    if ( Object >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(a1, v26);
      else
        *a1 = v26;
    }
  }
  return (unsigned int)Object;
}
