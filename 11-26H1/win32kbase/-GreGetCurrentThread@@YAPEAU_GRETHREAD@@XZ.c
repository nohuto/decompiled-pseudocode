/*
 * XREFs of ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0
 * Callers:
 *     HmgAllocateObjectAttr @ 0x14000DAE0 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x14000E3A0 (HmgFreeObjectAttr.c)
 *     bConstructGET @ 0x14000E8C0 (bConstructGET.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14001DA20 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetRegionOwner @ 0x14001EE60 (GreSetRegionOwner.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400246B0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x140024EA0 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     GreCreateCompatibleDC @ 0x14003AF40 (GreCreateCompatibleDC.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14003BBF4 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreCreateSemaphoreInternal @ 0x1400A69FC (GreCreateSemaphoreInternal.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z @ 0x1400C5C18 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z @ 0x140142390 (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z.c)
 *     GreIncNonRBLockCount @ 0x140149A30 (GreIncNonRBLockCount.c)
 *     GreDecNonRBLockCount @ 0x14014B8C0 (GreDecNonRBLockCount.c)
 *     ?vSetIncludeSprites@SURFACE@@SAXXZ @ 0x1401759F0 (-vSetIncludeSprites@SURFACE@@SAXXZ.c)
 *     ?vClearIncludeSprites@SURFACE@@SAXXZ @ 0x1401788E0 (-vClearIncludeSprites@SURFACE@@SAXXZ.c)
 *     ?bIncludeSprites@SURFACE@@SAHXZ @ 0x14018B0F0 (-bIncludeSprites@SURFACE@@SAHXZ.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x1401ED754 (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     <none>
 */

struct _GRETHREAD *__fastcall GreGetCurrentThread(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
  if ( CurrentThreadWin32Thread && (v3 = *CurrentThreadWin32Thread) != 0 )
    return (struct _GRETHREAD *)(v3 + 8);
  else
    return 0LL;
}
