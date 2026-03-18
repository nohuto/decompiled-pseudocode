/*
 * XREFs of ??1EPATHOBJGC@@QEAA@XZ @ 0x1401D1824
 * Callers:
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1588 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x14000D9B0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 */

void __fastcall EPATHOBJGC::~EPATHOBJGC(EPATHOBJGC *this)
{
  if ( *((_QWORD *)this + 1) )
    EPATHOBJ::vUnlock(this);
}
