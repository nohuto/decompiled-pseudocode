/*
 * XREFs of CmFcpManagerOnFeatureUsageDataTransferComplete @ 0x140B04388
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140B03F58 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcpManagerOnFeatureUsageDataTransferComplete(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rbx
  int v6; // ebp
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rdi
  void **v10; // rdi
  void ***i; // rcx
  void **v12; // r14
  void **v13; // rax
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = (unsigned __int64 *)(a1 + 1400);
  v6 = 0;
  v7 = (AutoBoost *)KeAbPreAcquire(a1 + 1400, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v7, (__int64)v4);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = (void **)(a1 + 1360);
  for ( i = *(void ****)(a1 + 1360); i != (void ***)v10; i = (void ***)v12 )
  {
    if ( ((_DWORD)i[3] & 7) == 1 )
    {
      if ( i == *v10 )
        goto LABEL_9;
      break;
    }
    v12 = *i;
    v6 = (*((_DWORD *)i + 6) >> 3) & 0x1FFFFFFE;
    if ( (*i)[1] != i || (v13 = i[1], *v13 != i) )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = v13;
    ExFreePoolWithTag(i, 0);
  }
  if ( *(_DWORD *)(a1 + 1748) != v6 )
  {
    *(_DWORD *)(a1 + 1748) = v6;
    _InterlockedOr(v14, 0);
    if ( *(_QWORD *)(a1 + 1392) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 1392), 0LL);
  }
LABEL_9:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
}
