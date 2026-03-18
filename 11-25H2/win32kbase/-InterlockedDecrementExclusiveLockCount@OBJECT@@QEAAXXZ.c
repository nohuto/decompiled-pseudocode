/*
 * XREFs of ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00
 * Callers:
 *     bPEBCacheHandle @ 0x140016060 (bPEBCacheHandle.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001BA50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001BB00 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F850 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400418B8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140044190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     HmgUnlock @ 0x14006E658 (HmgUnlock.c)
 *     GreMakeBitmapNonStock @ 0x14006F4E0 (GreMakeBitmapNonStock.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140085D1C (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper@@@@SAXPEAX@Z @ 0x1401C3B10 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VRGNOBJAPI@@@@SAXPEAX@Z @ 0x1401C44B0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VRGNOBJAPI@@@@SAXPEAX@.c)
 *     ?HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x1401C4E20 (-HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@SAXPEAX@Z @ 0x1401C66C0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@.c)
 *     ?CleanupRoutine@?$HmgLockResult@VDRVOBJ@@@@QEAAXXZ @ 0x1401D09FC (-CleanupRoutine@-$HmgLockResult@VDRVOBJ@@@@QEAAXXZ.c)
 *     EngUnlockDriverObj @ 0x1401D0BC0 (EngUnlockDriverObj.c)
 * Callees:
 *     ?ReportOverflow@OBJECT@@QEAAXK@Z @ 0x1401C5230 (-ReportOverflow@OBJECT@@QEAAXK@Z.c)
 */

void __fastcall OBJECT::InterlockedDecrementExclusiveLockCount(OBJECT *this)
{
  _InterlockedDecrement((volatile signed __int32 *)this + 3);
  if ( *((_WORD *)this + 6) == 0xFFFF )
    OBJECT::ReportOverflow(this, 3u);
}
