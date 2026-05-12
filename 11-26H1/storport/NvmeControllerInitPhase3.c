/*
 * XREFs of NvmeControllerInitPhase3 @ 0x1400F5D54
 * Callers:
 *     NvmeControllerAdvancedInitialize @ 0x1400F057C (NvmeControllerAdvancedInitialize.c)
 *     NvmeControllerPowerUp @ 0x1400F8B94 (NvmeControllerPowerUp.c)
 *     NvmeControllerReinitialize @ 0x1400F9990 (NvmeControllerReinitialize.c)
 * Callees:
 *     NvmeControllerGetCloudSSDErrorRecoveryLog @ 0x1400CDA54 (NvmeControllerGetCloudSSDErrorRecoveryLog.c)
 *     NvmeControllerGetCommandEffectsLog @ 0x1400CDF84 (NvmeControllerGetCommandEffectsLog.c)
 *     NvmeControllerGetFeatureIdentifiersSupportedLog @ 0x1400CE1CC (NvmeControllerGetFeatureIdentifiersSupportedLog.c)
 *     NvmeControllerGetHealthInfoLog @ 0x1400CE460 (NvmeControllerGetHealthInfoLog.c)
 *     NvmeControllerGetSupportedLogPagesLog @ 0x1400CE71C (NvmeControllerGetSupportedLogPagesLog.c)
 *     NvmeControllerConfigAsyncEvent @ 0x1400CEFFC (NvmeControllerConfigAsyncEvent.c)
 *     NvmeControllerGetCurrentWriteCacheState @ 0x1400CF164 (NvmeControllerGetCurrentWriteCacheState.c)
 *     NvmeControllerGetTemperatureThreshold @ 0x1400CF5C0 (NvmeControllerGetTemperatureThreshold.c)
 *     NvmeControllerSetHostBehaviorSupport @ 0x1400CFE2C (NvmeControllerSetHostBehaviorSupport.c)
 *     NvmeControllerSetHostIdentifier @ 0x1400CFFDC (NvmeControllerSetHostIdentifier.c)
 *     NvmeControllerSetWriteCacheEnable @ 0x1400D0A50 (NvmeControllerSetWriteCacheEnable.c)
 *     NvmeControllerSyncHostTime @ 0x1400D0D28 (NvmeControllerSyncHostTime.c)
 *     NvmeControllerCheckOCPCompliance @ 0x1400F15A4 (NvmeControllerCheckOCPCompliance.c)
 *     NvmeControllerCreateAsyncEventContext @ 0x1400F1D88 (NvmeControllerCreateAsyncEventContext.c)
 *     NvmeControllerStartAsyncEventCommands @ 0x1400FAD14 (NvmeControllerStartAsyncEventCommands.c)
 */

__int64 __fastcall NvmeControllerInitPhase3(union _SLIST_HEADER *SystemArgument2, char a2)
{
  int v2; // esi
  _BYTE *Alignment; // rbp
  char v6; // r14
  unsigned __int64 Region; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax

  v2 = 0;
  Alignment = (_BYTE *)SystemArgument2[37].Alignment;
  v6 = (SystemArgument2[60].Region & 0x800000) != 0;
  if ( Alignment )
  {
    NvmeControllerGetCommandEffectsLog(SystemArgument2, a2);
    NvmeControllerGetSupportedLogPagesLog(SystemArgument2, a2);
    NvmeControllerGetFeatureIdentifiersSupportedLog(SystemArgument2, a2);
    NvmeControllerCheckOCPCompliance((__int64)SystemArgument2, a2);
    Region = SystemArgument2[65].Region;
    if ( Region
      && (*(_DWORD *)(Region + 24) & 0x2000) != 0
      && (Alignment[76] & 0xF) == 2
      && (*((_DWORD *)&SystemArgument2[8].HeaderX64 + 2) & 0x200000) == 0 )
    {
      NvmeControllerGetHealthInfoLog(SystemArgument2, a2);
    }
    v8 = SystemArgument2[65].Region;
    if ( v8 && (*(_DWORD *)(v8 + 24) & 4) == 0 )
      NvmeControllerGetTemperatureThreshold((__int64)SystemArgument2, a2);
    if ( (*((_DWORD *)&SystemArgument2[8].HeaderX64 + 2) & 0x1000000) == 0 )
      NvmeControllerGetCloudSSDErrorRecoveryLog((__int64)SystemArgument2, a2);
    if ( (Alignment[261] & 0x48) == 0x48 )
      NvmeControllerSetHostBehaviorSupport(SystemArgument2, a2);
    if ( (*(_BYTE *)(SystemArgument2[37].Alignment + 520) & 0x40) != 0 )
      NvmeControllerSyncHostTime(SystemArgument2, a2);
    NvmeControllerGetCurrentWriteCacheState(SystemArgument2, a2);
    NvmeControllerSetWriteCacheEnable((__int64)SystemArgument2, a2);
    if ( (Alignment[520] & 0x20) != 0 )
      NvmeControllerSetHostIdentifier(SystemArgument2, a2);
    NvmeControllerConfigAsyncEvent((__int64)SystemArgument2);
    if ( (int)NvmeControllerCreateAsyncEventContext((__int64)SystemArgument2, v6) >= 0 )
      NvmeControllerStartAsyncEventCommands(SystemArgument2);
    v9 = SystemArgument2[60].Region | 1;
    *((_DWORD *)&SystemArgument2[74].HeaderX64 + 2) = 0;
    SystemArgument2[60].Region = v9;
    SystemArgument2[60].Region &= ~0x20000uLL;
    SystemArgument2[60].Region &= ~0x200000uLL;
  }
  else
  {
    v2 = -1073741595;
  }
  v10 = SystemArgument2[80].Region;
  if ( v10 )
  {
    if ( v2 < 0 )
      ++*(_DWORD *)(v10 + 28);
    else
      ++*(_DWORD *)(v10 + 24);
  }
  return (unsigned int)v2;
}
