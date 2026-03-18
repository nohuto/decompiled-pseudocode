/*
 * XREFs of PerfLogImageUnload @ 0x140AB9C84
 * Callers:
 *     MiUnmapViewOfSectionPrepare @ 0x1409C40F0 (MiUnmapViewOfSectionPrepare.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AD90 (KeInsertQueueApc.c)
 *     KeAreAllApcsDisabled @ 0x140263C40 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeInitializeApc @ 0x140457520 (KeInitializeApc.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     EtwpTraceImageUnload @ 0x1404760E8 (EtwpTraceImageUnload.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x14093FA28 (EtwpCoverageSamplerUnloadImage.c)
 *     FsRtlReleaseFileNameInformation @ 0x1409FDA00 (FsRtlReleaseFileNameInformation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PerfLogImageUnload(
        unsigned __int16 *a1,
        void *a2,
        void *a3,
        unsigned __int64 a4,
        __int64 a5,
        int ULongFromUser,
        int a7,
        int a8,
        unsigned int a9)
{
  __int64 ULong64FromUser; // r15
  int v14; // r12d
  _DWORD *v15; // rax
  _DWORD *v16; // rdi
  __int64 Pool2; // rdi
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int16 *v20; // rcx
  __int128 v21; // [rsp+68h] [rbp-50h] BYREF

  ULong64FromUser = 0LL;
  v21 = 0LL;
  v14 = 0;
  if ( EtwpHostSiloState != -4844 && (*(_DWORD *)(EtwpHostSiloState + 4844) & 4) != 0 )
    EtwpCoverageSamplerUnloadImage((__int64)a3, a4, a5);
  if ( a3 )
  {
    v15 = RtlImageNtHeader(a4);
    v16 = v15;
    if ( v15 )
    {
      ULongFromUser = RtlReadULongFromUser(v15 + 22);
      v14 = RtlReadULongFromUser(v16 + 2);
      ULong64FromUser = RtlReadULong64FromUser(v16 + 12);
    }
  }
  if ( a2 )
  {
    if ( a9 || KeAreAllApcsDisabled() )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      if ( Pool2 )
      {
        PsReferenceSiloContext(a3);
        PsReferenceSiloContext(a2);
        *(_QWORD *)(Pool2 + 88) = a2;
        *(_QWORD *)(Pool2 + 96) = a3;
        *(_QWORD *)(Pool2 + 104) = a4;
        *(_QWORD *)(Pool2 + 112) = a5;
        *(_DWORD *)(Pool2 + 120) = ULongFromUser;
        *(_DWORD *)(Pool2 + 124) = v14;
        *(_DWORD *)(Pool2 + 128) = a7;
        *(_DWORD *)(Pool2 + 132) = a8;
        *(_QWORD *)(Pool2 + 136) = ULong64FromUser;
        KeInitializeApc(
          Pool2,
          (__int64)KeGetCurrentThread(),
          0,
          (__int64)xHalTimerWatchdogStop,
          (__int64)EtwpCancelTraceImageUnloadApc,
          (__int64)EtwpTraceImageUnloadApc,
          0,
          Pool2);
        if ( (unsigned __int8)KeInsertQueueApc(Pool2, 0LL, 0LL, 0) )
          return;
        ExFreePoolWithTag((PVOID)Pool2, 0);
        ObfDereferenceObject(a2);
        ObfDereferenceObject(a3);
      }
      v18 = 512LL;
    }
    else
    {
      v18 = 1024LL;
    }
    if ( FltMgrCallbacks )
    {
      v19 = guard_dispatch_icall_no_overrides((__int64)a2, v18);
      v20 = (unsigned __int16 *)&v21;
      if ( v19 < 0 )
        v20 = a1;
      a1 = v20;
    }
  }
  EtwpTraceImageUnload(a1, (__int64)a3, a4, a5, ULongFromUser, v14, a7, a8, ULong64FromUser, a9);
}
