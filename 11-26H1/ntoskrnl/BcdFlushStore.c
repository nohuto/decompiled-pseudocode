/*
 * XREFs of BcdFlushStore @ 0x140B543DC
 * Callers:
 *     PopAdaptiveClearInitialSystemPowerState @ 0x1407DDA3C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdClearPendingResume @ 0x1409D08F8 (PopBcdClearPendingResume.c)
 * Callees:
 *     ZwFlushKey @ 0x140725230 (ZwFlushKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 */

__int64 __fastcall BcdFlushStore(__int64 a1)
{
  char v2; // di
  int v3; // eax
  unsigned int v4; // r8d
  unsigned int v6; // ebx

  v2 = a1 & 1;
  v3 = BiAcquireBcdSyncMutant(a1 & 1);
  if ( v3 >= 0 )
  {
    v6 = ZwFlushKey((HANDLE)(a1 & 0xFFFFFFFFFFFFFFFDuLL));
    BiReleaseBcdSyncMutant(v2);
    return v6;
  }
  else
  {
    BiLogMessage(4LL, L"BcdFlushStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v4;
  }
}
