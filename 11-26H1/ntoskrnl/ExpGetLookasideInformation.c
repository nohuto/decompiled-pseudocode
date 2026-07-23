/*
 * XREFs of ExpGetLookasideInformation @ 0x1406CDD00
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExUnlockUserBuffer @ 0x14040F520 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExpGetLookasideInformation(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // esi
  int v4; // edi
  int v5; // ebp
  struct _KTHREAD *CurrentThread; // r8
  struct _KTHREAD *Next; // rcx
  __int64 v9; // rbx
  _KERNEL_SHADOW_STACK_LIMIT *p_KernelShadowStackLimit; // r14
  KIRQL v11; // al
  struct _KTHREAD *WpsFeedback; // rdx
  KIRQL v13; // r8
  KIRQL v14; // al
  struct _KTHREAD *v15; // rdx
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
      Next = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.SystemAffinityTokenListHead.Next;
      v5 = 0;
      v9 = v18;
      while ( Next != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.SystemAffinityTokenListHead )
      {
        ++v4;
        *(_WORD *)v9 = Next[-1].KcsanThread;
        *(_WORD *)(v9 + 2) = Next[-1].SchedulerAssistLastYieldBoostTime;
        *(_DWORD *)(v9 + 4) = HIDWORD(Next[-1].SchedulerAssistLastYieldBoostTime);
        *(_DWORD *)(v9 + 8) = Next[-1].Padding[0];
        *(_DWORD *)(v9 + 12) = HIDWORD(Next[-1].Padding[0]);
        *(_DWORD *)(v9 + 16) = Next[-1].Padding[1];
        *(_DWORD *)(v9 + 20) = HIDWORD(Next[-1].Padding[1]);
        *(_DWORD *)(v9 + 24) = Next[-1].Padding[2];
        *(_DWORD *)(v9 + 28) = HIDWORD(Next[-1].Padding[2]);
        if ( v4 == v3 )
          goto LABEL_16;
        Next = *(struct _KTHREAD **)&Next->Header.Lock;
        v9 += 32LL;
      }
      p_KernelShadowStackLimit = &ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit;
      v11 = KeAcquireSpinLockRaiseToDpc(&ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit.AllFields);
      WpsFeedback = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.WpsFeedback;
      v13 = v11;
      while ( WpsFeedback != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.WpsFeedback )
      {
        ++v4;
        *(_WORD *)v9 = WpsFeedback[-1].KcsanThread;
        *(_WORD *)(v9 + 2) = WpsFeedback[-1].SchedulerAssistLastYieldBoostTime;
        *(_DWORD *)(v9 + 4) = HIDWORD(WpsFeedback[-1].SchedulerAssistLastYieldBoostTime);
        *(_DWORD *)(v9 + 8) = WpsFeedback[-1].Padding[0];
        *(_DWORD *)(v9 + 12) = HIDWORD(WpsFeedback[-1].Padding[0]);
        *(_DWORD *)(v9 + 16) = WpsFeedback[-1].Padding[1];
        *(_DWORD *)(v9 + 20) = 0;
        *(_DWORD *)(v9 + 24) = WpsFeedback[-1].Padding[2];
        *(_DWORD *)(v9 + 28) = HIDWORD(WpsFeedback[-1].Padding[2]);
        if ( v4 == v3 )
          goto LABEL_15;
        WpsFeedback = *(struct _KTHREAD **)&WpsFeedback->Header.Lock;
        v9 += 32LL;
      }
      KeReleaseSpinLock(&ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit.AllFields, v11);
      p_KernelShadowStackLimit = (_KERNEL_SHADOW_STACK_LIMIT *)&ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask;
      v14 = KeAcquireSpinLockRaiseToDpc(&ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask);
      v15 = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.Spare35[1];
      v13 = v14;
      if ( (unsigned __int64 *)ExSaPageGroupDescriptorArrayLock.Spare35[1] != &ExSaPageGroupDescriptorArrayLock.Spare35[1] )
      {
        v16 = (_DWORD *)(v9 + 4);
        do
        {
          ++v4;
          *((_WORD *)v16 - 2) = v15[-1].KcsanThread;
          *((_WORD *)v16 - 1) = v15[-1].SchedulerAssistLastYieldBoostTime;
          *v16 = HIDWORD(v15[-1].SchedulerAssistLastYieldBoostTime);
          v16[1] = v15[-1].Padding[0];
          v16[2] = HIDWORD(v15[-1].Padding[0]);
          v16[3] = v15[-1].Padding[1];
          v16[4] = 1;
          v16[5] = v15[-1].Padding[2];
          v16[6] = HIDWORD(v15[-1].Padding[2]);
          if ( v4 == v3 )
            break;
          v15 = *(struct _KTHREAD **)&v15->Header.Lock;
          v16 += 8;
        }
        while ( v15 != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.Spare35[1] );
      }
LABEL_15:
      KeReleaseSpinLock(&p_KernelShadowStackLimit->AllFields, v13);
LABEL_16:
      ExUnlockUserBuffer((struct _MDL *)P);
    }
  }
  result = (unsigned int)v5;
  *a3 = 32 * v4;
  return result;
}
