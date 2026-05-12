/*
 * XREFs of NvmeControllerIoSubmissionQueueDelete @ 0x1400F7ED4
 * Callers:
 *     NvmeControllerIoQueuesDeletion @ 0x1400F6E60 (NvmeControllerIoQueuesDeletion.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerIoSubmissionQueueDelete(union _SLIST_HEADER *a1, __int16 a2)
{
  __int64 ExtendedCommand; // rax
  __int64 v5; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebx

  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v5 = ExtendedCommand;
  if ( !ExtendedCommand )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
  *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
  v7 = *(_QWORD *)ExtendedCommand;
  *(_BYTE *)(v7 + 4096) = 0;
  *(_WORD *)(v7 + 4136) = a2;
  v8 = NvmeControllerProcessCommandSync(a1, v5);
  NvmeControllerReclaimExtendedCommand(a1, v5);
  return v8;
}
