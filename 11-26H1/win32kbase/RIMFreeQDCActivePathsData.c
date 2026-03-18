/*
 * XREFs of RIMFreeQDCActivePathsData @ 0x14007D080
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14007C0AC (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMOnDisplayStateChange @ 0x14007C1C0 (RIMOnDisplayStateChange.c)
 *     RIMGetQDCActivePathsData @ 0x14007CE38 (RIMGetQDCActivePathsData.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x14008D61C (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     RIMEnableMonitorMappingForDevice @ 0x140200E20 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x140205A10 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall RIMFreeQDCActivePathsData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rcx

  if ( a1 )
  {
    v5 = *(char **)(a1 + 8);
    if ( v5 )
      GreDeleteFastMutex(v5, a2, a3, a4);
    *(_OWORD *)a1 = 0LL;
  }
}
