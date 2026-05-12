/*
 * XREFs of NvmeControllerSetArbitration @ 0x1400CF9E4
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerSetArbitration(union _SLIST_HEADER *a1, char a2)
{
  unsigned __int64 Alignment; // rcx
  char v5; // bl
  unsigned __int64 Region; // rax
  unsigned __int8 v7; // al
  __int64 ExtendedCommand; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax

  Alignment = a1[37].Alignment;
  v5 = 0;
  Region = a1[65].Region;
  if ( !Region || (v7 = *(_BYTE *)(Region + 14), v7 == 0xFF) )
  {
    v5 = *(_BYTE *)(Alignment + 72);
  }
  else
  {
    if ( v7 <= 1u )
      goto LABEL_9;
    do
    {
      v7 >>= 1;
      ++v5;
    }
    while ( v7 > 1u );
  }
  if ( (unsigned __int8)v5 >= 7u )
    v5 = 7;
LABEL_9:
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v9 = ExtendedCommand;
  if ( ExtendedCommand )
  {
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
    v11 = *(_QWORD *)ExtendedCommand;
    v12 = *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4140LL);
    *(_BYTE *)(v11 + 4096) = 9;
    *(_BYTE *)(v11 + 4136) = 1;
    *(_DWORD *)(v11 + 4140) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)v5) & 7;
    v10 = NvmeControllerProcessCommandSync(a1, v9);
  }
  else
  {
    v10 = -1073741670;
  }
  NvmeControllerReclaimExtendedCommand(a1, v9);
  return v10;
}
