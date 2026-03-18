/*
 * XREFs of ?GetLiveMigrationBitplaneHeaderSize@DXGK_VIRTUAL_GPU_GPUP@@QEAAII@Z @ 0x14021E74C
 * Callers:
 *     ?LiveMigrationTransferDirtyContent@DXGK_VIRTUAL_GPU_GPUP@@UEAAJIW4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x1403A86A0 (-LiveMigrationTransferDirtyContent@DXGK_VIRTUAL_GPU_GPUP@@UEAAJIW4_DXGK_GPUP_MIGRATIONTYPE@@PEA_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetLiveMigrationBitplaneHeaderSize(
        DXGK_VIRTUAL_GPU_GPUP *this,
        unsigned int a2)
{
  __int64 v3; // rbx

  if ( a2 == 1 )
    return 4LL;
  v3 = a2;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 1165;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Unknown Live Migration Bitplane Header Version 0x%I64x",
    v3,
    0LL,
    0LL,
    0LL,
    0LL);
  return 0LL;
}
