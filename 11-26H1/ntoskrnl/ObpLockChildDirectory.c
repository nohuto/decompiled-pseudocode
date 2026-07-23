/*
 * XREFs of ObpLockChildDirectory @ 0x1409DF640
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1409DE86C (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall ObpLockChildDirectory(__int64 *a1, __int64 a2, char a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v5; // rdi
  void *v8; // rdx
  AutoBoost *v9; // r14
  __int64 v10; // rdi
  AutoBoost *v11; // rax
  void *v12; // rdx

  v5 = (unsigned __int64 *)(a2 + 296);
  if ( a3 )
  {
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)v5, 0LL, 0LL, a4);
    v9 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, v11, (__int64)v5);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) == 0 )
        goto LABEL_6;
      AutoBoost::KiAbpPostAcquire(v9, v12);
    }
  }
  else
  {
    v9 = (AutoBoost *)KeAbPreAcquire((__int64)v5, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v5, 0, v9, (struct _KTHREAD *)v5);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) == 0 )
      {
LABEL_6:
        *((_BYTE *)v9 + 10) = 1;
        goto LABEL_7;
      }
      AutoBoost::KiAbpPostAcquire(v9, v8);
    }
  }
LABEL_7:
  v10 = *a1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*a1 + 296), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v10 + 296));
  KeAbPostRelease(v10 + 296);
  if ( *((_BYTE *)a1 + 22) )
  {
    ObDereferenceObjectDeferDeleteWithTag((PVOID)*a1, 0x554C624Fu);
    *((_BYTE *)a1 + 22) = 0;
  }
  *((_BYTE *)a1 + 21) = a3;
  *a1 = a2;
}
