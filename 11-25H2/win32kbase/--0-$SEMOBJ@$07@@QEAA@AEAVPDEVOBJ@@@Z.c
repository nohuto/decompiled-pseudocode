/*
 * XREFs of ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140086794
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401CBA50 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     EngDeleteDriverObj @ 0x1401D0A50 (EngDeleteDriverObj.c)
 *     HDXDrvEscape @ 0x1401D1C00 (HDXDrvEscape.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086C28 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

_QWORD *__fastcall SEMOBJ<8>::SEMOBJ<8>(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  *a1 = v3;
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v3);
  return a1;
}
