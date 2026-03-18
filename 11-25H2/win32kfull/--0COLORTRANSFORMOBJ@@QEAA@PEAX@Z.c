/*
 * XREFs of ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x140312C80
 * Callers:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140073040 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     XDCOBJ_vCleanupColorTransformWrap @ 0x1401781C0 (XDCOBJ_vCleanupColorTransformWrap.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x14017B0B0 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     BRUSHOBJ_hGetColorTransform @ 0x1401F63A0 (BRUSHOBJ_hGetColorTransform.c)
 *     XLATEOBJ_hGetColorTransform @ 0x14021AFE0 (XLATEOBJ_hGetColorTransform.c)
 *     ?GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x14033D42C (-GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     NtGdiDeleteColorTransform @ 0x14033E1F0 (NtGdiDeleteColorTransform.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1402FBBE4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

COLORTRANSFORMOBJ *__fastcall COLORTRANSFORMOBJ::COLORTRANSFORMOBJ(
        COLORTRANSFORMOBJ *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this, a2, a3, a4);
  LOBYTE(v6) = 14;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v6);
  return this;
}
