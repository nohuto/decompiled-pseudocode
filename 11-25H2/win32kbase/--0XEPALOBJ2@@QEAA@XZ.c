/*
 * XREFs of ??0XEPALOBJ2@@QEAA@XZ @ 0x1401C58B4
 * Callers:
 *     bDeletePalette @ 0x1400C0AD0 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1760 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1400988E0 (PushThreadGuardedObject.c)
 */

XEPALOBJ2 *__fastcall XEPALOBJ2::XEPALOBJ2(XEPALOBJ2 *this)
{
  *(_QWORD *)this = 0LL;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  PushThreadGuardedObject(
    (_QWORD *)this + 1,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 8) >> 64),
    (__int64)UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic);
  return this;
}
