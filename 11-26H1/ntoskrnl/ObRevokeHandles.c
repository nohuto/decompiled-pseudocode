/*
 * XREFs of ObRevokeHandles @ 0x1407C63FC
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140B003D0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x140B684BC (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

void __fastcall ObRevokeHandles(_QWORD **a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  AutoBoost *v7; // rax
  void *v8; // rdx
  __int64 v9; // r9
  AutoBoost *v10; // rbx
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  signed __int64 v13; // rax
  signed __int64 v14; // rdx
  _QWORD *v15; // rtt

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 2);
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 2), 0LL, 0LL, a4);
  v10 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v7, (__int64)v5);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = *a1;
  while ( v11 != a1 )
  {
    v12 = v11;
    LOBYTE(v9) = 1;
    v11 = (_QWORD *)*v11;
    ObpHandleRevocationBlockRemoveInsertedObject(v12, a1, 1LL, v9);
  }
  _m_prefetchw(a1 + 2);
  v13 = (signed __int64)a1[2];
  v14 = v13 - 16;
  if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v14 = 0LL;
  if ( (v13 & 2) != 0
    || (v15 = a1[2], v15 != (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a1 + 2, v14, v13)) )
  {
    ExfReleasePushLock(a1 + 2);
  }
  KeAbPostRelease((unsigned __int64)(a1 + 2));
  KeLeaveCriticalRegion();
}
