/*
 * XREFs of ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x140295528
 * Callers:
 *     ?PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x14026D5D0 (-PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x140322A34 (-bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x140322FF0 (-vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vUnLockShadowAndWait@PANSURFLOCK@@QEAAXXZ @ 0x140323610 (-vUnLockShadowAndWait@PANSURFLOCK@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ShadowUnLockWait(struct _PANDEV *a1)
{
  ++*(_DWORD *)(*((_QWORD *)a1 + 98) + 40LL);
  GreReleaseFastMutex(*(_QWORD *)(*((_QWORD *)a1 + 98) + 32LL));
  Gre::Semaphore::Acquire(*((Gre::Semaphore **)a1 + 98));
}
