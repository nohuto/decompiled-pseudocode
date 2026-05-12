/*
 * XREFs of NvmeControllerReConfigAsyncEvent @ 0x1400CF810
 * Callers:
 *     NvmeControllerGetLogPageCompletionForAER @ 0x1400F4110 (NvmeControllerGetLogPageCompletionForAER.c)
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerReConfigAsyncEvent(union _SLIST_HEADER *SystemArgument2)
{
  _DWORD *Region; // rax
  __int64 ExtendedCommand; // rax
  __int64 v5; // rbx
  _DWORD *v6; // rdx
  __int64 v7; // rax
  int v8; // esi

  Region = (_DWORD *)SystemArgument2[80].Region;
  if ( Region && *Region )
    return 3221225860LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(SystemArgument2);
  v5 = ExtendedCommand;
  if ( !ExtendedCommand )
    return 3221225626LL;
  v6 = (_DWORD *)ExtendedCommand;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~0x40u;
  *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerReConfigAsyncEventCompletion;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
  v7 = *(_QWORD *)ExtendedCommand;
  *(_DWORD *)(v7 + 4140) = *((_DWORD *)&SystemArgument2[76].HeaderX64 + 2);
  *(_BYTE *)(v7 + 4096) = 9;
  *(_BYTE *)(v7 + 4136) = 11;
  v8 = NvmeControllerProcessCommand((__int64)SystemArgument2, v6);
  if ( v8 < 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)v5 + 4256LL), 3u);
    NvmeControllerReclaimExtendedCommand(SystemArgument2, v5);
  }
  return (unsigned int)v8;
}
