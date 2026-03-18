/*
 * XREFs of ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0
 * Callers:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     GreCreateSemaphoreInternal @ 0x140027848 (GreCreateSemaphoreInternal.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x140084C20 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008E1A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     HmgFreeObjectAttr @ 0x14008E9D0 (HmgFreeObjectAttr.c)
 *     HmgAllocateObjectAttr @ 0x14008EC40 (HmgAllocateObjectAttr.c)
 *     GreIncNonRBLockCount @ 0x14008EED0 (GreIncNonRBLockCount.c)
 *     GreDecNonRBLockCount @ 0x140090470 (GreDecNonRBLockCount.c)
 *     bConstructGET @ 0x140094F10 (bConstructGET.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400963B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z @ 0x14010AB30 (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x14011DE80 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 *     ?vSetIncludeSprites@SURFACE@@SAXXZ @ 0x14013EA40 (-vSetIncludeSprites@SURFACE@@SAXXZ.c)
 *     ?vClearIncludeSprites@SURFACE@@SAXXZ @ 0x140140490 (-vClearIncludeSprites@SURFACE@@SAXXZ.c)
 *     ?bIncludeSprites@SURFACE@@SAHXZ @ 0x14014DA00 (-bIncludeSprites@SURFACE@@SAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x1401787B0 (EngUpdateDeviceSurface.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019D5BC (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     ?hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z @ 0x1401C52E4 (-hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z.c)
 *     HmgAllocFast @ 0x1401C5500 (HmgAllocFast.c)
 *     HmgFreeDcAttrFastOpt @ 0x1401C82DC (HmgFreeDcAttrFastOpt.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

struct _GRETHREAD *GreGetCurrentThread(void)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v1; // rdx
  __int64 v2; // r8

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  v1 = 0LL;
  if ( CurrentThreadNonPaged )
    v2 = *CurrentThreadNonPaged;
  else
    v2 = 0LL;
  if ( v2 )
    return (struct _GRETHREAD *)(v2 + 8);
  return (struct _GRETHREAD *)v1;
}
