/*
 * XREFs of ?ShadowUnLock@@YAXPEAU_PANDEV@@@Z @ 0x140322870
 * Callers:
 *     ?PanUnlockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x140322740 (-PanUnlockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?vUnLockShadow@PANSURFLOCK@@QEAAXXZ @ 0x140323594 (-vUnLockShadow@PANSURFLOCK@@QEAAXXZ.c)
 *     ?vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ @ 0x14032368C (-vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ.c)
 *     ?vUnLockShadowW@MULTIPANSURFLOCK@@QEAAXXZ @ 0x140323720 (-vUnLockShadowW@MULTIPANSURFLOCK@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ShadowUnLock(struct _PANDEV *a1, __int64 a2)
{
  Gre::Semaphore *v3; // rcx
  int v4; // edx

  GreAcquireFastMutex(*(_QWORD *)(*((_QWORD *)a1 + 98) + 32LL), a2);
  v3 = (Gre::Semaphore *)*((_QWORD *)a1 + 98);
  v4 = *((_DWORD *)v3 + 10);
  if ( v4 )
  {
    Gre::Semaphore::Release(v3, v4);
    *(_DWORD *)(*((_QWORD *)a1 + 98) + 40LL) = 0;
  }
  GreReleaseFastMutex(*(_QWORD *)(*((_QWORD *)a1 + 98) + 32LL));
}
