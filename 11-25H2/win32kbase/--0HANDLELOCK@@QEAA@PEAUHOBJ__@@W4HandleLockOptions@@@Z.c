/*
 * XREFs of ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x140018960
 * Callers:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     HmgUnlock @ 0x14006E658 (HmgUnlock.c)
 *     HmgSwapLockedHandleContents @ 0x14006E700 (HmgSwapLockedHandleContents.c)
 *     HmgShareLockIgnoreStockBit @ 0x14006F0F0 (HmgShareLockIgnoreStockBit.c)
 *     GreSetBrushOwner @ 0x1400711D0 (GreSetBrushOwner.c)
 *     HmgMarkDeletable @ 0x140108810 (HmgMarkDeletable.c)
 *     HmgMarkUndeletable @ 0x14010C3A0 (HmgMarkUndeletable.c)
 *     HmgMarkUnXferable @ 0x140143C10 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x140147960 (HmgMarkXferable.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x14019EA2C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     HmgFreeFast @ 0x1401C56C0 (HmgFreeFast.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D13B8 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1498 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1588 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1680 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1760 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 */

__int64 __fastcall HANDLELOCK::HANDLELOCK(__int64 a1, unsigned int a2, unsigned int a3)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_WORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(W32GetSessionState(a1) + 88);
  HANDLELOCK::vLockHandle(a1, (unsigned __int16)a2 | (a2 >> 8) & 0xFF0000, a3);
  return a1;
}
