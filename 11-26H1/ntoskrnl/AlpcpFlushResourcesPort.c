/*
 * XREFs of AlpcpFlushResourcesPort @ 0x1408EABB8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408E6A30 (AlpcpAcceptConnectPort.c)
 *     AlpcpDoPortCleanup @ 0x1408EA5C4 (AlpcpDoPortCleanup.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     AlpcpReferenceBlob @ 0x1409BEEB8 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1409C0380 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1409C1AB4 (AlpcpDeleteBlob.c)
 */

void __fastcall AlpcpFlushResourcesPort(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  _QWORD **v5; // r14
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  ULONG_PTR v11; // rsi
  struct _KLOCK_ENTRIES *v12; // r9
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rsi

  v4 = (unsigned __int64 *)(a1 + 328);
  v5 = (_QWORD **)(a1 + 336);
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
  while ( 1 )
  {
    v9 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v9[1] != v5 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v5 = v10;
    v11 = (ULONG_PTR)(v9 + 6);
    v10[1] = v5;
    v9[1] = v9;
    *v9 = v9;
    if ( AlpcpReferenceBlob((ULONG_PTR)(v9 + 6)) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v4);
      KeAbPostRelease((unsigned __int64)v4);
      if ( (unsigned __int8)AlpcpDeleteBlob(v11) )
        AlpcpDereferenceBlobEx(v11);
      AlpcpDereferenceBlobEx(v11);
      v13 = (AutoBoost *)KeAbPreAcquire((__int64)v4, 0LL, 0LL, v12);
      v15 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        ExfAcquirePushLockExclusiveEx(v4, v13, (__int64)v4);
      if ( v15 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v15, v14);
        else
          *((_BYTE *)v15 + 10) = 1;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
}
