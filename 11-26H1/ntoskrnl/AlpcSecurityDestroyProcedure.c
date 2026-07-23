/*
 * XREFs of AlpcSecurityDestroyProcedure @ 0x140A747B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C6E00 (PsReturnProcessPagedPoolQuota.c)
 */

__int64 __fastcall AlpcSecurityDestroyProcedure(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v4; // r14
  __int64 v6; // r15
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbp
  __int64 v10; // rbp
  unsigned __int64 *v11; // rbp
  _QWORD *v12; // rsi
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // r14
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  _DWORD *v18; // rcx
  ULONG_PTR v19; // rcx

  v4 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v6 = *(_QWORD *)(a1 + 8) - 16LL;
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)(v4 + 1), 0LL, 0LL, a4);
    v9 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4 + 2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4 + 1, v7, (__int64)(v4 + 1));
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v8);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    if ( (unsigned __int64)(unsigned int)v6 < v4[2] && *(_QWORD *)(*v4 + 8LL * (unsigned int)v6) == a1 )
      *(_QWORD *)(*v4 + 8LL * (unsigned int)v6) = 0LL;
    if ( (_InterlockedExchangeAdd64(v4 + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4 + 1);
    KeAbPostRelease((unsigned __int64)(v4 + 1));
  }
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
  {
    v11 = (unsigned __int64 *)(v10 + 328);
    v12 = (_QWORD *)(a1 - 48);
    v13 = (AutoBoost *)KeAbPreAcquire((__int64)v11, 0LL, 0LL, a4);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v13, (__int64)v11);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v14);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    v16 = (_QWORD *)*v12;
    if ( (_QWORD *)*v12 != v12 )
    {
      if ( (_QWORD *)v16[1] != v12 || (v17 = (_QWORD *)v12[1], (_QWORD *)*v17 != v12) )
        __fastfail(3u);
      *v17 = v16;
      v16[1] = v17;
      v12[1] = v12;
      *v12 = v12;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((unsigned __int64)v11);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    v18 = *(_DWORD **)(a1 + 48);
    if ( v18[48] == 1 || v18 )
      ObfDereferenceObjectWithTag(v18, 0x63436553u);
    v19 = *(_QWORD *)(a1 + 16);
    if ( v19 )
    {
      if ( (unsigned __int64)(*(_QWORD *)(v19 + 1432) + 160LL) >= 0x1000 )
        PsReturnProcessPagedPoolQuota(v19, 0xA0uLL);
      else
        _InterlockedAdd64((volatile signed __int64 *)(v19 + 1432), 0xA0uLL);
    }
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x63706C41u);
  }
  return 0LL;
}
