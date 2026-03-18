/*
 * XREFs of ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1401ECE90
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x140032B00 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1401ECCD0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     <none>
 */

HBITMAP __fastcall BRUSH::hFindIcmDIB(BRUSH *this, void *a2)
{
  struct _FAST_MUTEX **v5; // rsi
  __int64 i; // rbx

  if ( !a2 )
    return (HBITMAP)*((_QWORD *)this + 3);
  v5 = *(struct _FAST_MUTEX ***)(W32GetSessionState(this) + 88);
  KeAcquireGuardedMutex(*v5 + 26);
  for ( i = *((_QWORD *)this + 11); i; i = *(_QWORD *)(i + 16) )
  {
    if ( *(void **)i == a2 )
    {
      KeReleaseGuardedMutex(*v5 + 26);
      return *(HBITMAP *)(i + 8);
    }
  }
  KeReleaseGuardedMutex(*v5 + 26);
  return 0LL;
}
