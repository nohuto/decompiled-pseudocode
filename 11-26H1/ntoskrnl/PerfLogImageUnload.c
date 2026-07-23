/*
 * XREFs of PerfLogImageUnload @ 0x140ABB148
 * Callers:
 *     MiUnmapViewOfSectionPrepare @ 0x1409950D0 (MiUnmapViewOfSectionPrepare.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     EtwpTraceImageUnload @ 0x14046F868 (EtwpTraceImageUnload.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     FsRtlReleaseFileNameInformation @ 0x140922600 (FsRtlReleaseFileNameInformation.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x140A32B38 (EtwpCoverageSamplerUnloadImage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PerfLogImageUnload(
        unsigned __int16 *a1,
        void *a2,
        void *a3,
        void *a4,
        __int64 a5,
        int ULongFromUser,
        int a7,
        int a8,
        unsigned int a9)
{
  __int64 ULong64FromUser; // r15
  int v14; // r12d
  PIMAGE_NT_HEADERS v15; // rax
  PIMAGE_NT_HEADERS v16; // rdi
  __int64 Pool2; // rdi
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int16 *v20; // rcx
  __int128 v21; // [rsp+68h] [rbp-50h] BYREF

  ULong64FromUser = 0LL;
  v21 = 0LL;
  v14 = 0;
  if ( EtwpHostSiloState != -4844 && (*(_DWORD *)(EtwpHostSiloState + 4844) & 4) != 0 )
    EtwpCoverageSamplerUnloadImage((__int64)a3, (unsigned __int64)a4, a5);
  if ( a3 )
  {
    v15 = RtlImageNtHeader(a4);
    v16 = v15;
    if ( v15 )
    {
      ULongFromUser = RtlReadULongFromUser(&v15->OptionalHeader.CheckSum);
      v14 = RtlReadULongFromUser(&v16->FileHeader.TimeDateStamp);
      ULong64FromUser = RtlReadULong64FromUser(&v16->OptionalHeader.ImageBase);
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
  EtwpTraceImageUnload(a1, (__int64)a3, (__int64)a4, a5, ULongFromUser, v14, a7, a8, ULong64FromUser, a9);
}
