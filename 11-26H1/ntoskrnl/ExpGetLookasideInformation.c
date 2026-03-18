/*
 * XREFs of ExpGetLookasideInformation @ 0x1406C9D20
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExUnlockUserBuffer @ 0x14040FE00 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExpGetLookasideInformation(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // esi
  int v4; // edi
  int v5; // ebp
  struct _KTHREAD *CurrentThread; // r8
  struct _KTHREAD *ExtendedFeatureDisableMask; // rcx
  __int64 v9; // rbx
  $7593FFE5FD7F8AD12EB10858261A32F1 *p_KernelShadowStack; // r14
  KIRQL v11; // al
  struct _KTHREAD *KernelShadowStackBase; // rdx
  KIRQL v13; // r8
  KIRQL v14; // al
  struct _KTHREAD *Blink; // rdx
  _DWORD *v16; // rbx
  __int64 result; // rax
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  v3 = (unsigned int)a2 >> 5;
  v4 = 0;
  v5 = 0;
  v18 = 0LL;
  if ( (unsigned int)a2 >> 5 )
  {
    CurrentThread = KeGetCurrentThread();
    LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
    v5 = ExLockUserBuffer(a1, a2, CurrentThread, 1LL, &v18, &P);
    if ( v5 >= 0 )
    {
      ExtendedFeatureDisableMask = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask;
      v5 = 0;
      v9 = v18;
      while ( ExtendedFeatureDisableMask != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask )
      {
        ++v4;
        *(_WORD *)v9 = ExtendedFeatureDisableMask[-1].KcsanThread;
        *(_WORD *)(v9 + 2) = ExtendedFeatureDisableMask[-1].SchedulerAssistLastYieldBoostTime;
        *(_DWORD *)(v9 + 4) = HIDWORD(ExtendedFeatureDisableMask[-1].SchedulerAssistLastYieldBoostTime);
        *(_DWORD *)(v9 + 8) = ExtendedFeatureDisableMask[-1].Padding[0];
        *(_DWORD *)(v9 + 12) = HIDWORD(ExtendedFeatureDisableMask[-1].Padding[0]);
        *(_DWORD *)(v9 + 16) = ExtendedFeatureDisableMask[-1].Padding[1];
        *(_DWORD *)(v9 + 20) = HIDWORD(ExtendedFeatureDisableMask[-1].Padding[1]);
        *(_DWORD *)(v9 + 24) = ExtendedFeatureDisableMask[-1].Padding[2];
        *(_DWORD *)(v9 + 28) = HIDWORD(ExtendedFeatureDisableMask[-1].Padding[2]);
        if ( v4 == v3 )
          goto LABEL_16;
        ExtendedFeatureDisableMask = *(struct _KTHREAD **)&ExtendedFeatureDisableMask->Header.Lock;
        v9 += 32LL;
      }
      p_KernelShadowStack = ($7593FFE5FD7F8AD12EB10858261A32F1 *)&ExSaPageGroupDescriptorArrayLock.KernelShadowStack;
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.KernelShadowStack);
      KernelShadowStackBase = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.KernelShadowStackBase;
      v13 = v11;
      while ( KernelShadowStackBase != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.KernelShadowStackBase )
      {
        ++v4;
        *(_WORD *)v9 = KernelShadowStackBase[-1].KcsanThread;
        *(_WORD *)(v9 + 2) = KernelShadowStackBase[-1].SchedulerAssistLastYieldBoostTime;
        *(_DWORD *)(v9 + 4) = HIDWORD(KernelShadowStackBase[-1].SchedulerAssistLastYieldBoostTime);
        *(_DWORD *)(v9 + 8) = KernelShadowStackBase[-1].Padding[0];
        *(_DWORD *)(v9 + 12) = HIDWORD(KernelShadowStackBase[-1].Padding[0]);
        *(_DWORD *)(v9 + 16) = KernelShadowStackBase[-1].Padding[1];
        *(_DWORD *)(v9 + 20) = 0;
        *(_DWORD *)(v9 + 24) = KernelShadowStackBase[-1].Padding[2];
        *(_DWORD *)(v9 + 28) = HIDWORD(KernelShadowStackBase[-1].Padding[2]);
        if ( v4 == v3 )
          goto LABEL_15;
        KernelShadowStackBase = *(struct _KTHREAD **)&KernelShadowStackBase->Header.Lock;
        v9 += 32LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.KernelShadowStack, v11);
      p_KernelShadowStack = &ExSaPageGroupDescriptorArrayLock.1008;
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.1008);
      Blink = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
      v13 = v14;
      if ( (unsigned __int64 *)ExSaPageGroupDescriptorArrayLock.GlobalUpdateVpThreadPriorityListEntry.Blink != &ExSaPageGroupDescriptorArrayLock.InGlobalUpdateVpThreadPriorityList )
      {
        v16 = (_DWORD *)(v9 + 4);
        do
        {
          ++v4;
          *((_WORD *)v16 - 2) = Blink[-1].KcsanThread;
          *((_WORD *)v16 - 1) = Blink[-1].SchedulerAssistLastYieldBoostTime;
          *v16 = HIDWORD(Blink[-1].SchedulerAssistLastYieldBoostTime);
          v16[1] = Blink[-1].Padding[0];
          v16[2] = HIDWORD(Blink[-1].Padding[0]);
          v16[3] = Blink[-1].Padding[1];
          v16[4] = 1;
          v16[5] = Blink[-1].Padding[2];
          v16[6] = HIDWORD(Blink[-1].Padding[2]);
          if ( v4 == v3 )
            break;
          Blink = *(struct _KTHREAD **)&Blink->Header.Lock;
          v16 += 8;
        }
        while ( Blink != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.InGlobalUpdateVpThreadPriorityList );
      }
LABEL_15:
      KeReleaseSpinLock((PKSPIN_LOCK)p_KernelShadowStack, v13);
LABEL_16:
      ExUnlockUserBuffer((struct _MDL *)P);
    }
  }
  result = (unsigned int)v5;
  *a3 = 32 * v4;
  return result;
}
