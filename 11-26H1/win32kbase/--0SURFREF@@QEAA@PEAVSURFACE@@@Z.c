/*
 * XREFs of ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x140195780
 * Callers:
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1401B9140 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, struct SURFACE *a2)
{
  __int64 v4; // rcx
  __int64 SessionState; // rax

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)this, (__int64)a2);
  if ( a2 )
  {
    *((_QWORD *)this + 4) = a2;
    SessionState = W32GetSessionState(v4);
    HmgIncrementShareReferenceCount(*(_QWORD *)(SessionState + 88), *((unsigned int **)this + 4));
  }
  return this;
}
