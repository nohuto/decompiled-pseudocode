/*
 * XREFs of EngUnlockSurface @ 0x140121ED0
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121BC0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x140121D60 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     HmgReferenceCheckLock @ 0x140121F20 (HmgReferenceCheckLock.c)
 */

void __stdcall EngUnlockSurface(SURFOBJ *pso)
{
  unsigned int *p_pvScan0; // rbx
  char v2; // dl
  __int64 v3; // rcx
  __int64 SessionState; // rax

  if ( pso )
  {
    p_pvScan0 = (unsigned int *)&pso[-1].pvScan0;
    v2 = 5;
    if ( &pso[-1].pvScan0 == (PVOID *)HmgReferenceCheckLock(pso->hsurf, v2, 0LL) )
    {
      SessionState = W32GetSessionState(v3);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), p_pvScan0);
    }
  }
}
