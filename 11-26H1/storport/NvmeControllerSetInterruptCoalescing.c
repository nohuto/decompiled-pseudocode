/*
 * XREFs of NvmeControllerSetInterruptCoalescing @ 0x1400D046C
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerSetInterruptCoalescing(union _SLIST_HEADER *a1, char a2)
{
  unsigned __int64 Region; // rax
  char v5; // bl
  char v6; // bp
  __int64 ExtendedCommand; // rax
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _BYTE *v11; // rax

  Region = a1[65].Region;
  v5 = 0;
  v6 = 0;
  if ( Region )
  {
    v5 = *(_BYTE *)(Region + 12);
    if ( !v5 )
      v5 = 0;
    if ( *(_BYTE *)(Region + 13) )
      v6 = *(_BYTE *)(Region + 13);
  }
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v8 = ExtendedCommand;
  if ( ExtendedCommand )
  {
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    v10 = ExtendedCommand;
    *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
    v11 = *(_BYTE **)ExtendedCommand;
    v11[4096] = 9;
    v11[4136] = 8;
    v11[4140] = v6;
    v11[4141] = v5;
    v9 = NvmeControllerProcessCommandSync(a1, v10);
  }
  else
  {
    v9 = -1073741670;
  }
  NvmeControllerReclaimExtendedCommand(a1, v8);
  return v9;
}
