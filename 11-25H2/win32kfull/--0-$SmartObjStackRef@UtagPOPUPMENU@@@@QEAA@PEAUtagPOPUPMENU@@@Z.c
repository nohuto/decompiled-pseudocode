/*
 * XREFs of ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1400446B8
 * Callers:
 *     NtUserCalculatePopupWindowPosition @ 0x140159D30 (NtUserCalculatePopupWindowPosition.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  SmartObjStackRefBase<tagPOPUPMENU>::Init(a1, a2, a3, a4);
  return a1;
}
