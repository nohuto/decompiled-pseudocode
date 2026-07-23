/*
 * XREFs of ExpWnfDeleteScopeInstances @ 0x14084D3AC
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1407F499C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExpWnfFreeScopeInstance @ 0x1409C3FD4 (ExpWnfFreeScopeInstance.c)
 */

void __fastcall ExpWnfDeleteScopeInstances(__int64 a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  unsigned __int64 *v6; // rdi
  unsigned __int64 *v7; // rbx
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rsi
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rcx

  v4 = a2;
  v6 = (unsigned __int64 *)(a1 + 8 * (v4 + 2 * v4 + 4));
  v7 = v6 + 1;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)v6, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v8, (__int64)v6);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  while ( 1 )
  {
    v11 = (unsigned __int64 *)*v7;
    if ( *(unsigned __int64 **)(*v7 + 8) != v7 || (v12 = *v11, *(unsigned __int64 **)(*v11 + 8) != v11) )
      __fastfail(3u);
    *v7 = v12;
    *(_QWORD *)(v12 + 8) = v7;
    if ( v11 == v7 )
      break;
    *v11 = 0LL;
    if ( !(_DWORD)v4 )
      *(_QWORD *)(a1 + 8) = 0LL;
    ExpWnfFreeScopeInstance(v11 - 4);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((unsigned __int64)v6);
}
