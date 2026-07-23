/*
 * XREFs of FsRtlReleaseEofLock @ 0x140419310
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027B770 (FsRtlReleaseHeaderMutex.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     KeSetEventBoostPriorityEx @ 0x140419658 (KeSetEventBoostPriorityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall FsRtlReleaseEofLock(__int64 a1, volatile signed __int32 *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v5; // r13
  __int64 v6; // rdi
  struct _KLOCK_ENTRY *v7; // rdx
  unsigned __int64 v8; // rbp
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  unsigned __int8 CurrentIrql; // r14
  int v12; // r15d
  AutoBoost *v13; // rsi
  int i; // r12d
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  signed __int32 v17; // ett
  __int64 v19; // rdi
  _QWORD *v20; // rcx
  int v21; // eax
  _QWORD *v22; // rbx
  _QWORD *v23; // rdx
  _QWORD *v24; // r9
  __int64 v25; // r8
  _QWORD *v26; // r8
  _QWORD *v27; // r8
  _QWORD *v28; // rcx
  _QWORD *v29; // r8
  _QWORD *v30; // r8
  _QWORD *v31; // [rsp+30h] [rbp-48h] BYREF
  _QWORD **v32; // [rsp+38h] [rbp-40h]
  volatile signed __int32 *v34; // [rsp+88h] [rbp+10h] BYREF

  v34 = a2;
  v32 = &v31;
  v31 = &v31;
  v5 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v8 = KeAbPreAcquire(v6, 0LL, 0LL, a4);
  CurrentIrql = KeGetCurrentIrql();
  v12 = 1;
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v6, 0) )
  {
    v13 = (AutoBoost *)v8;
    ++*(_DWORD *)(v6 + 16);
    for ( i = 4; ; i = 2 )
    {
      v15 = *(_DWORD *)v6;
      do
      {
        while ( (v15 & 1) != 0 )
        {
          v17 = v15;
          v15 = _InterlockedCompareExchange((volatile signed __int32 *)v6, v12 ^ v15, v15);
          if ( v17 == v15 )
            goto LABEL_15;
        }
        v16 = v15;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)v6, i + v15, v15);
      }
      while ( v16 != v15 );
      if ( v13 )
        KeAbPreWait(v13, v7);
      KeWaitForSingleObject((PVOID)(v6 + 24), WrFastMutex, 0, 0, 0LL);
      _m_prefetchw((const void *)v6);
      v12 = 3;
      if ( v13 )
        v13 = (AutoBoost *)KeAbPreAcquire(v6, (unsigned __int64)v13, 0LL, v10);
    }
  }
LABEL_15:
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v8 + 33) |= 2u;
    else
      *(_BYTE *)(v8 + 10) = 1;
  }
  *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v6 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  if ( (*(_WORD *)(a1 + 38))-- == 1 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
    if ( *(_BYTE *)(a1 + 36) )
    {
      LOBYTE(v7) = 1;
      PsBoostThreadIo(*(LegacyAutoBoost **)a1, (__int64)v7, v9, (struct _SINGLE_LIST_ENTRY *)v10);
      *(_BYTE *)(a1 + 36) = 0;
    }
    v20 = *(_QWORD **)(a1 + 8);
    while ( v20 != (_QWORD *)(a1 + 8) )
    {
      v23 = v20;
      v24 = v20;
      v20 = (_QWORD *)*v20;
      v25 = v23[5];
      if ( v25 < 0 || v25 > v19 )
      {
        if ( !v5 )
        {
          if ( (_QWORD *)v20[1] != v23 )
            goto LABEL_37;
          v26 = (_QWORD *)v23[1];
          if ( (_QWORD *)*v26 != v23 )
            goto LABEL_37;
          *v26 = v20;
          v20[1] = v26;
          v27 = v31;
          if ( (_QWORD **)v31[1] != &v31 )
            goto LABEL_37;
          *v24 = v31;
          v5 = v23;
          v23[1] = &v31;
          v27[1] = v23;
          v31 = v23;
        }
      }
      else
      {
        if ( (_QWORD *)v20[1] != v23
          || (v29 = (_QWORD *)v23[1], (_QWORD *)*v29 != v23)
          || (*v29 = v20, v20[1] = v29, v30 = v32, *v32 != &v31) )
        {
LABEL_37:
          __fastfail(3u);
        }
        v23[1] = v32;
        *v24 = &v31;
        *v30 = v23;
        v32 = (_QWORD **)v23;
      }
    }
    if ( v5 )
    {
      *(_QWORD *)a1 = v5[6];
      *(_WORD *)(a1 + 38) = 1;
      v21 = *((_DWORD *)v5 + 14);
    }
    else
    {
      *(_QWORD *)a1 = 0LL;
      v21 = 0;
      *(_WORD *)(a1 + 38) = 0;
    }
    *(_DWORD *)(a1 + 32) = v21;
    if ( v34 )
      _InterlockedIncrement(v34);
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(*(_QWORD *)(a1 + 24) + 48LL));
    v22 = v31;
    while ( v22 != &v31 )
    {
      v28 = v22;
      v22 = (_QWORD *)*v22;
      LODWORD(v34) = *((_DWORD *)v28 + 14);
      KeSetEventBoostPriorityEx((_DWORD)v28 + 16, 0, (unsigned int)&v34, 0, 1, 0);
    }
  }
  else
  {
    FsRtlReleaseHeaderMutex(a1, v34, v9);
  }
}
