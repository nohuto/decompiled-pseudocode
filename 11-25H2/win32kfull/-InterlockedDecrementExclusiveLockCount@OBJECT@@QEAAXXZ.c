/*
 * XREFs of ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0
 * Callers:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D260 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14005AF5C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x14005C858 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x14007C330 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14008952C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x140089E58 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A230 (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14008A2D8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x14008A3D0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A640 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x14008BE80 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14008F82C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     GreSfmCloseCompositorRef @ 0x140095930 (GreSfmCloseCompositorRef.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1400E1A10 (GreDecBitmapExclusiveRefCnt.c)
 *     NtGdiResizePalette @ 0x140142990 (NtGdiResizePalette.c)
 *     GreMakeBitmapStock @ 0x140176240 (GreMakeBitmapStock.c)
 *     ?Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ @ 0x1401AC0CC (-Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ.c)
 *     GrepSfmRemoveSurfaces @ 0x1401CD920 (GrepSfmRemoveSurfaces.c)
 *     GreRealizePalette @ 0x140268A30 (GreRealizePalette.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper@@@@SAXPEAX@Z @ 0x14030EA90 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper.c)
 *     ?CleanupRoutine@?$HmgLockResult@VMETA@@@@QEAAXXZ @ 0x140310FAC (-CleanupRoutine@-$HmgLockResult@VMETA@@@@QEAAXXZ.c)
 *     NtGdiCreateServerMetaFile @ 0x140311000 (NtGdiCreateServerMetaFile.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@SAXPEAX@Z @ 0x140321E70 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@.c)
 * Callees:
 *     <none>
 */

void __fastcall OBJECT::InterlockedDecrementExclusiveLockCount(OBJECT *this)
{
  _InterlockedDecrement((volatile signed __int32 *)this + 3);
  if ( *((_WORD *)this + 6) == 0xFFFF )
    OBJECT::ReportOverflow(this, 3u);
}
