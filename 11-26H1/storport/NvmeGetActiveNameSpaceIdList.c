/*
 * XREFs of NvmeGetActiveNameSpaceIdList @ 0x1400C666C
 * Callers:
 *     NvmeNamespaceIdentify @ 0x1400C6954 (NvmeNamespaceIdentify.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     BuildIdentifyCommandGeneric @ 0x1400C5AC0 (BuildIdentifyCommandGeneric.c)
 */

__int64 __fastcall NvmeGetActiveNameSpaceIdList(union _SLIST_HEADER *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 Region; // rax
  __int64 ExtendedCommand; // rax
  __int64 v9; // rdi
  unsigned int v10; // ebx
  int v11; // [rsp+20h] [rbp-38h]

  Region = a1[65].Region;
  if ( Region && (*(_DWORD *)(Region + 24) & 0x40000) != 0 )
    return 3221225473LL;
  if ( !a2 || !a3 )
    return 3221225485LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v9 = ExtendedCommand;
  if ( !ExtendedCommand )
    return 3221225626LL;
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
  BuildIdentifyCommandGeneric((__int64)a1, *(_QWORD *)ExtendedCommand + 4096LL, 2, 4096LL, v11, 0, a3, 0, 0);
  v10 = NvmeControllerProcessCommandSync(a1, v9);
  NvmeControllerReclaimExtendedCommand(a1, v9);
  return v10;
}
