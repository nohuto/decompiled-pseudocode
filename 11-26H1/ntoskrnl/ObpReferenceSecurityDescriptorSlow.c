/*
 * XREFs of ObpReferenceSecurityDescriptorSlow @ 0x140905024
 * Callers:
 *     ObpReferenceSecurityDescriptor @ 0x1408EE7D0 (ObpReferenceSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x1408EF250 (ObpGetObjectSecurity.c)
 *     ObCheckObjectAccess @ 0x140904A50 (ObCheckObjectAccess.c)
 *     ObGetObjectSecurity @ 0x140905190 (ObGetObjectSecurity.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140927020 (SepAppendAceToTokenObjectAcl.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140930170 (ObpGrantAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x140931B40 (ObpAdjustCreatorAccessState.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ObDereferenceSecurityDescriptor @ 0x140931DF0 (ObDereferenceSecurityDescriptor.c)
 */

unsigned __int64 __fastcall ObpReferenceSecurityDescriptorSlow(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v4; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v10; // rdi
  void *v11; // rdx
  LegacyAutoBoost *v12; // rbx

  v4 = a3;
  if ( a2 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 - 24), 0xFuLL) <= 0 )
      __fastfail(0xEu);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (signed __int64 *)(a1 + 16);
    --CurrentThread->KernelApcDisable;
    v12 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 16, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v10, 0, v12, (struct _KTHREAD *)v10);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    v4 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), 0x10uLL) <= 0 )
      __fastfail(0xEu);
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
    KeAbPostRelease((unsigned __int64)v10);
    KeLeaveCriticalRegion();
  }
  _m_prefetchw((const void *)(a1 + 40));
  v6 = *(_QWORD *)(a1 + 40);
  while ( (v6 & 0xF) == 0 && v4 == (v6 & 0xFFFFFFFFFFFFFFF0uLL) )
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v6 + 15, v6);
    if ( v7 == v6 )
      return v4;
  }
  ObDereferenceSecurityDescriptor(v4, 15LL);
  return v4;
}
