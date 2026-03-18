/*
 * XREFs of ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x14026DF18
 * Callers:
 *     ?PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x140231290 (-PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14030BD20 (-bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14030C2D0 (-vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vUnLockShadowAndWait@PANSURFLOCK@@QEAAXXZ @ 0x14030C8D8 (-vUnLockShadowAndWait@PANSURFLOCK@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ShadowUnLockWait(struct _PANDEV *a1)
{
  ++*(_DWORD *)(*((_QWORD *)a1 + 98) + 40LL);
  GreReleaseFastMutex(*(_QWORD *)(*((_QWORD *)a1 + 98) + 32LL));
  Gre::Semaphore::Acquire(*((Gre::Semaphore **)a1 + 98));
}
