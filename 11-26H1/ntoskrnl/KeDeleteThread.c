/*
 * XREFs of KeDeleteThread @ 0x14040FE14
 * Callers:
 *     PspReaper @ 0x14040FD60 (PspReaper.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiDecrementProcessStackCount @ 0x140410010 (KiDecrementProcessStackCount.c)
 *     KiWaitForContextSwap @ 0x14041011C (KiWaitForContextSwap.c)
 */

void __fastcall KeDeleteThread(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbx
  KIRQL v4; // al
  __int64 v5; // rdx
  KIRQL v6; // r8
  __int64 **v7; // rax
  KIRQL v8; // al
  __int64 *v9; // rcx
  KIRQL v10; // dl
  __int64 **v11; // rax

  KiWaitForContextSwap(a1);
  KiDecrementProcessStackCount(a1[23]);
  v2 = a1 + 110;
  if ( a1[110] != 1LL )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.KernelShadowStackBase);
    v5 = *v2;
    v6 = v4;
    if ( *v2 != 1 && a1[111] )
    {
      if ( *(__int64 **)(v5 + 8) != v2 )
        goto LABEL_15;
      v7 = (__int64 **)a1[111];
      if ( *v7 != v2 )
        goto LABEL_15;
      *v7 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v7;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.KernelShadowStackBase, v6);
  }
  v3 = a1 + 126;
  if ( a1[126] != 1LL )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.WpsFeedback);
    v9 = (__int64 *)*v3;
    v10 = v8;
    if ( *v3 == 1 || !a1[127] )
      goto LABEL_16;
    if ( (__int64 *)v9[1] == v3 )
    {
      v11 = (__int64 **)a1[127];
      if ( *v11 == v3 )
      {
        *v11 = v9;
        v9[1] = (__int64)v11;
LABEL_16:
        KeReleaseSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.WpsFeedback, v10);
        return;
      }
    }
LABEL_15:
    __fastfail(3u);
  }
}
