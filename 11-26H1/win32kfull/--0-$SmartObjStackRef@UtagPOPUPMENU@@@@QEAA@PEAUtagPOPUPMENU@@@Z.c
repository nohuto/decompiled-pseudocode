/*
 * XREFs of ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x14011F624
 * Callers:
 *     NtUserCalculatePopupWindowPosition @ 0x1402AFF30 (NtUserCalculatePopupWindowPosition.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(__int64 a1, __int64 a2)
{
  SmartObjStackRefBase<tagPOPUPMENU>::Init(a1, a2);
  return a1;
}
