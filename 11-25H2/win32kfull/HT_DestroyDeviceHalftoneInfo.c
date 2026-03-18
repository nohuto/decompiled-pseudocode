/*
 * XREFs of HT_DestroyDeviceHalftoneInfo @ 0x1401018E0
 * Callers:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1400FEEE8 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_DestroyDeviceHalftoneInfoWrap @ 0x140101780 (HT_DestroyDeviceHalftoneInfoWrap.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1401017B8 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     CleanUpDHI @ 0x140101648 (CleanUpDHI.c)
 */

__int64 __fastcall HT_DestroyDeviceHalftoneInfo(__int64 a1)
{
  if ( a1 && *(_DWORD *)(a1 + 40) == 1414021956 )
    return CleanUpDHI((HSEMAPHORE *)a1);
  else
    return 0LL;
}
