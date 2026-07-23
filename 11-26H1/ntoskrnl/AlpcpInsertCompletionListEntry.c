/*
 * XREFs of AlpcpInsertCompletionListEntry @ 0x140A71B70
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpInsertCompletionListEntry(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r14
  __int64 v6; // r13
  unsigned __int64 v7; // rsi
  unsigned int i; // r12d
  unsigned __int64 *v9; // rdi
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbp
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  signed __int64 v16; // rax
  volatile signed __int64 *v17; // rbp
  signed __int64 v18; // rcx
  __int64 result; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r9
  __int64 v22; // rdi
  signed __int64 v23; // rax
  signed __int64 v24; // rcx

  v4 = *(_QWORD *)(a1 + 360);
  v6 = *(_QWORD *)(v4 + 80);
  v7 = *(_QWORD *)(v4 + 96) >> 2;
  for ( i = 0; ; ++i )
  {
    if ( i >= v7 )
      return 0LL;
    v9 = (unsigned __int64 *)(*(_QWORD *)(a1 + 360) + 24LL);
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, a4);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    v13 = *(_QWORD *)(v6 + 64);
    v14 = (v13 >> 24) & 0xFFFFFF;
    if ( (v13 & 0xFFFFFF) != 0xFFFFFF || v14 != 0xFFFFFF )
      break;
    **(_DWORD **)(v4 + 88) = a2;
    v15 = v13 & 0xFFFF000000000000uLL;
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v13 & 0xFFFF000000000000uLL, v13);
    v17 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 360) + 24LL);
    v18 = _InterlockedExchangeAdd64(v17, 0xFFFFFFFFFFFFFFFFuLL) & 6;
    if ( v16 == v13 )
    {
      if ( v18 == 2 )
        ExfTryToWakePushLock(v17);
      KeAbPostRelease((unsigned __int64)v17);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 128));
      result = 1LL;
      if ( v15 < 0x1000000000000LL )
        return 3LL;
      return result;
    }
    if ( v18 == 2 )
      goto LABEL_32;
LABEL_18:
    KeAbPostRelease((unsigned __int64)v17);
  }
  if ( (v13 & 0xFFFFFF) >= v7 || v14 >= v7 )
  {
    v22 = *(_QWORD *)(a1 + 360);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
LABEL_30:
      ExfTryToWakePushLock((volatile signed __int64 *)(v22 + 24));
LABEL_23:
    KeAbPostRelease(v22 + 24);
    return 0LL;
  }
  v20 = (v14 + 1) % v7;
  v21 = (v20 << 24) ^ (v13 ^ (v20 << 24)) & 0xFFFF000000FFFFFFuLL;
  if ( (((unsigned int)v20 ^ ((_DWORD)v20 << 24) ^ ((unsigned int)v13 ^ ((_DWORD)v20 << 24)) & 0xFFFFFF) & 0xFFFFFF) == 0 )
  {
    v22 = *(_QWORD *)(a1 + 360);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      goto LABEL_30;
    goto LABEL_23;
  }
  *(_DWORD *)(*(_QWORD *)(v4 + 88) + 4 * ((v21 >> 24) & 0xFFFFFF)) = a2;
  v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v21, v13);
  v17 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 360) + 24LL);
  v24 = _InterlockedExchangeAdd64(v17, 0xFFFFFFFFFFFFFFFFuLL) & 6;
  if ( v23 != v13 )
  {
    if ( v24 != 2 )
      goto LABEL_18;
LABEL_32:
    ExfTryToWakePushLock(v17);
    goto LABEL_18;
  }
  if ( v24 == 2 )
    ExfTryToWakePushLock(v17);
  KeAbPostRelease((unsigned __int64)v17);
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 128));
  return 1LL;
}
