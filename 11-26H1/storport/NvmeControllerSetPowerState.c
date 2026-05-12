/*
 * XREFs of NvmeControllerSetPowerState @ 0x140044218
 * Callers:
 *     NvmeControllerPowerSetFState @ 0x14004E084 (NvmeControllerPowerSetFState.c)
 *     NvmeControllerPowerSetPState @ 0x140127118 (NvmeControllerPowerSetPState.c)
 * Callees:
 *     NvmeControllerGetPowerState @ 0x1400443D0 (NvmeControllerGetPowerState.c)
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerSetPowerState(_QWORD *a1, unsigned __int8 a2)
{
  __int64 ExtendedCommand; // rax
  __int64 v5; // r8
  _WORD *v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 PowerState; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  unsigned int v16; // edx
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // ebx

  ExtendedCommand = NvmeControllerGetExtendedCommand();
  v6 = (_WORD *)ExtendedCommand;
  if ( !ExtendedCommand )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x800u;
  *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
  v8 = *(_QWORD *)(a1[16] + 160LL);
  LOBYTE(v8) = *(_BYTE *)(v8 + 180);
  NvmeControllerGetPowerState(a1, v8, v5, 1000000LL);
  LOBYTE(v9) = a2;
  PowerState = NvmeControllerGetPowerState(v10, v9, v11, v12);
  if ( PowerState && v15 )
  {
    if ( *(unsigned int *)(v15 + 8) + (unsigned __int64)*(unsigned int *)(PowerState + 4) > v14 )
    {
LABEL_9:
      LOWORD(v16) = 1;
      goto LABEL_10;
    }
    LODWORD(v14) = *(_DWORD *)(v15 + 8) + *(_DWORD *)(PowerState + 4);
  }
  if ( (unsigned int)v14 < 0x1E8480 )
    goto LABEL_9;
  v16 = (unsigned int)v14 / 0xF4240;
LABEL_10:
  v6[26] = v16;
  v17 = *(_QWORD *)v6;
  v18 = *(_DWORD *)(*(_QWORD *)v6 + 4140LL);
  *(_BYTE *)(v17 + 4096) = 9;
  *(_BYTE *)(v17 + 4136) = 2;
  *(_DWORD *)(v17 + 4140) = v18 ^ ((unsigned __int8)v18 ^ a2) & 0x1F;
  v19 = NvmeControllerProcessCommandSync(a1);
  NvmeControllerReclaimExtendedCommand(a1, v6);
  return v19;
}
