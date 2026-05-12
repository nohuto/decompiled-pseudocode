/*
 * XREFs of NvmeControllerGetTemperatureThreshold @ 0x1400CF5C0
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F5D54 (NvmeControllerInitPhase3.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1400CE9B0 (BuildGetFeaturesTemperatureThresholdCommand.c)
 */

__int64 __fastcall NvmeControllerGetTemperatureThreshold(__int64 a1, char a2)
{
  __int64 ExtendedCommand; // rax
  __int64 v5; // rdi
  unsigned int v7; // ebx

  *(_WORD *)(a1 + 56) = -1;
  ExtendedCommand = NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)a1);
  v5 = ExtendedCommand;
  if ( !ExtendedCommand )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
  *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerGetTemperatureThresholdCompletion;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
  BuildGetFeaturesTemperatureThresholdCommand(*(_QWORD *)ExtendedCommand + 4096LL, 0, 0);
  v7 = NvmeControllerProcessCommandSync((PVOID)a1, v5);
  NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)a1, v5);
  return v7;
}
