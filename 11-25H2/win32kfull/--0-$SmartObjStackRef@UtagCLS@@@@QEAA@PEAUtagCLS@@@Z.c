/*
 * XREFs of ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1400C1280
 * Callers:
 *     xxxSetClassData @ 0x1400C2294 (xxxSetClassData.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1400C12A0 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(__int64 a1, __int64 a2)
{
  SmartObjStackRefBase<tagCLS>::Init(a1, a2);
  return a1;
}
