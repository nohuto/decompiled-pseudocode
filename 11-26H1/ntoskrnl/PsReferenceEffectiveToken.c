/*
 * XREFs of PsReferenceEffectiveToken @ 0x1409CAEC0
 * Callers:
 *     SeLogAccessFailure @ 0x1403006A0 (SeLogAccessFailure.c)
 *     SepReferenceTokenByHandle @ 0x1403ABB50 (SepReferenceTokenByHandle.c)
 *     SeSetLearningModeObjectInformation @ 0x14041D674 (SeSetLearningModeObjectInformation.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140459608 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     RtlpQueryLowBoxId @ 0x14045AF90 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x14045B09C (RtlpAllowsLowBoxAccess.c)
 *     SeCaptureAtomTableCallout @ 0x1404AEFD4 (SeCaptureAtomTableCallout.c)
 *     SepDesktopAppxSubProcessToken @ 0x14051E308 (SepDesktopAppxSubProcessToken.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     PspAllocateNotificationChannel @ 0x1407FD498 (PspAllocateNotificationChannel.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1409C9978 (ExpWnfQueryCurrentUserSID.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

ULONG_PTR __fastcall PsReferenceEffectiveToken(
        __int64 a1,
        ULONG a2,
        _DWORD *a3,
        struct _KLOCK_ENTRIES *a4,
        int *a5,
        _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rsi
  void *v12; // rdx
  LegacyAutoBoost *v13; // r13
  void *v14; // r12
  ULONG_PTR result; // rax
  __int64 v16; // [rsp+20h] [rbp-38h]
  struct _KTHREAD *v17; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 544);
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v13 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 1424, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1424), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 1424), 0, v13, (struct _KTHREAD *)(a1 + 1424));
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
    {
      v14 = (void *)(*(_QWORD *)(a1 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v14, a2);
      *a5 = *(_DWORD *)(a1 + 1336) & 3;
      LOBYTE(a4->Thread) = (*(_BYTE *)(a1 + 1336) & 4) != 0;
      if ( a6 )
        *a6 = *(_BYTE *)(v16 + 1530);
      PspUnlockThreadSecurityShared(a1, v17);
      if ( v14 )
      {
        *a3 = 2;
        return (ULONG_PTR)v14;
      }
    }
    else
    {
      PspUnlockThreadSecurityShared(a1, v17);
    }
  }
  result = PsReferencePrimaryTokenWithTag(Process, a2, (__int64)a3, a4);
  *a3 = 1;
  LOBYTE(a4->Thread) = 0;
  if ( a6 )
    *a6 = *(_BYTE *)(Process + 1530);
  return result;
}
