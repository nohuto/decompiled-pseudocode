/*
 * XREFs of AlpcpRemoveResourcePort @ 0x140A73664
 * Callers:
 *     AlpcpMapLegacyPortRemoteView @ 0x140A732B8 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcSectionDeleteProcedure @ 0x140A734A0 (AlpcSectionDeleteProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x140A73510 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140AACFB0 (AlpcSectionDestroyProcedure.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpRemoveResourcePort(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  _QWORD *v5; // rbx
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rcx

  v4 = (unsigned __int64 *)(a1 + 328);
  v5 = (_QWORD *)(a2 - 48);
  v6 = (AutoBoost *)KeAbPreAcquire(a1 + 328, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (__int64)v4);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 != v5 )
  {
    if ( (_QWORD *)v9[1] != v5 || (v10 = (_QWORD *)v5[1], (_QWORD *)*v10 != v5) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
    v5[1] = v5;
    *v5 = v5;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
}
