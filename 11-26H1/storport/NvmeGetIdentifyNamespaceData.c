/*
 * XREFs of NvmeGetIdentifyNamespaceData @ 0x1400C67F0
 * Callers:
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400C5E88 (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeNamespaceIdentify @ 0x1400C6954 (NvmeNamespaceIdentify.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeGetIdentifyNamespaceData(union _SLIST_HEADER *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 ExtendedCommand; // rax
  __int64 v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // ebx

  if ( !a5 || !a2 || !a3 )
    return 3221225485LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v9 = ExtendedCommand;
  if ( !ExtendedCommand )
    return 3221225626LL;
  v11 = ExtendedCommand;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
  *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = a2;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = a3;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 4096;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
  v12 = *(_QWORD *)ExtendedCommand;
  *(_BYTE *)(v12 + 4096) = 6;
  *(_DWORD *)(v12 + 4100) = a5;
  *(_QWORD *)(v12 + 4120) = a3;
  *(_BYTE *)(v12 + 4136) = 0;
  v13 = NvmeControllerProcessCommandSync(a1, v11);
  NvmeControllerReclaimExtendedCommand(a1, v9);
  return v13;
}
