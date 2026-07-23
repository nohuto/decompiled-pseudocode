/*
 * XREFs of ExpWnfUpdateSubscription @ 0x1409C8C80
 * Callers:
 *     ExpWnfSubscribeNameInstance @ 0x1409C8720 (ExpWnfSubscribeNameInstance.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpWnfUpdateSubscription(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        int a5,
        _QWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _QWORD *a9)
{
  _QWORD *i; // rax
  _QWORD *v13; // rbx
  unsigned __int64 *v15; // rsi
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rbp
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  bool v22; // zf
  __int64 v23; // r8
  _QWORD *v24; // rdx

  for ( i = *(_QWORD **)(a2 + 88); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a2 + 88) )
      return 3221225524LL;
    v13 = i - 3;
    if ( i[3] == a1 )
      break;
  }
  v15 = (unsigned __int64 *)(a2 + 104);
  *a7 = 0;
  *a8 = 0;
  v16 = (AutoBoost *)KeAbPreAcquire(a2 + 104, 0LL, 0LL, a4);
  v18 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
    ExfAcquirePushLockExclusiveEx(v15, v16, (__int64)v15);
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v18, v17);
    else
      *((_BYTE *)v18 + 10) = 1;
  }
  v19 = *((_DWORD *)v13 + 25) & 1;
  if ( (a5 & 1) != 0 )
  {
    if ( !v19 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 160)) == 1 )
      *a7 = 1;
    goto LABEL_17;
  }
  if ( v19 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 0xFFFFFFFF) == 1 )
    *a7 = -1;
  if ( *((_DWORD *)v13 + 30) == 2 )
  {
    if ( (v13[16] & 1) == 0 )
      goto LABEL_17;
  }
  else if ( (*((_DWORD *)v13 + 31) & 1) == 0 )
  {
    goto LABEL_17;
  }
  *a8 = -1;
LABEL_17:
  v20 = *((_DWORD *)v13 + 31) & a5;
  *((_DWORD *)v13 + 25) = a5;
  v21 = v13[16] & a5;
  v22 = *((_DWORD *)v13 + 30) == 0;
  v13[10] = a3;
  v13[11] = a4;
  *((_DWORD *)v13 + 31) = v20;
  *((_DWORD *)v13 + 32) = v21;
  if ( !v22 && !v20 && !v21 )
  {
    v23 = v13[13];
    if ( *(_QWORD **)(v23 + 8) != v13 + 13 || (v24 = (_QWORD *)v13[14], (_QWORD *)*v24 != v13 + 13) )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    *((_DWORD *)v13 + 30) = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v15);
  KeAbPostRelease((unsigned __int64)v15);
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v13 + 1);
  *a6 = v13;
  if ( a9 )
    *a9 = v13[2];
  return 0LL;
}
