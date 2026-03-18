/*
 * XREFs of ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1402931A8
 * Callers:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1400702E0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     XDCOBJ_vCleanupColorTransformWrap @ 0x1401AE3A0 (XDCOBJ_vCleanupColorTransformWrap.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1401B5208 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     BRUSHOBJ_hGetColorTransform @ 0x1401DE710 (BRUSHOBJ_hGetColorTransform.c)
 *     XLATEOBJ_hGetColorTransform @ 0x140255D50 (XLATEOBJ_hGetColorTransform.c)
 *     ?GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x14032FE90 (-GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     NtGdiDeleteColorTransform @ 0x140330C50 (NtGdiDeleteColorTransform.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x14001811C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

COLORTRANSFORMOBJ *__fastcall COLORTRANSFORMOBJ::COLORTRANSFORMOBJ(COLORTRANSFORMOBJ *this, void *a2)
{
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  __int64 v6; // r8

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  v5 = Gre::Base::Globals(v4);
  LOBYTE(v6) = 14;
  *((_QWORD *)this + 4) = HmgShareLock(v5, a2, v6, 0LL);
  return this;
}
