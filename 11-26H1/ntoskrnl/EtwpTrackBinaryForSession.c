/*
 * XREFs of EtwpTrackBinaryForSession @ 0x1409180A8
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTrackBinaryForSession(__int64 a1, const void **a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbx
  _DWORD *i; // rbx
  __int64 v12; // rdi
  unsigned int v13; // r9d
  unsigned int j; // edx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 Pool2; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rax

  v4 = (unsigned __int64 *)(a1 + 688);
  v8 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( *(_DWORD *)(a1 + 324) + (unsigned int)*(unsigned __int16 *)a2 <= *(_DWORD *)(a1 + 4) )
  {
    for ( i = *(_DWORD **)(a1 + 1304); ; i = *(_DWORD **)i )
    {
      v12 = *(unsigned __int16 *)a2;
      if ( i == (_DWORD *)(a1 + 1304) )
        break;
      if ( i[4] == v12 + 2 && RtlCompareMemory(&i[4 * i[5] + 7], a2[1], *(unsigned __int16 *)a2) == v12 )
      {
        v13 = i[5];
        for ( j = 0; j < v13; ++j )
        {
          v15 = 4LL * j;
          v16 = *a3 - *(_QWORD *)&i[v15 + 7];
          if ( *a3 == *(_QWORD *)&i[v15 + 7] )
            v16 = a3[1] - *(_QWORD *)&i[v15 + 9];
          if ( !v16 )
            goto LABEL_7;
        }
        if ( v13 < 0x10 )
        {
          Pool2 = ExAllocatePool2(0x100uLL);
          v18 = Pool2;
          if ( Pool2 )
          {
            memmove((void *)(Pool2 + 28), i + 7, 16LL * (unsigned int)i[5]);
            *(_OWORD *)(v18 + 16LL * (unsigned int)i[5] + 28) = *(_OWORD *)a3;
            v22 = (unsigned int)(i[5] + 1);
            *(_DWORD *)(v18 + 20) = v22;
            *(_DWORD *)(v18 + 24) = i[6] + 1;
            *(_DWORD *)(v18 + 16) = i[4];
            memmove((void *)(v18 + 16 * v22 + 28), &i[4 * i[5] + 7], (unsigned int)i[4]);
            v23 = *(_QWORD *)i;
            if ( *(_DWORD **)(*(_QWORD *)i + 8LL) != i )
              goto LABEL_25;
            v24 = (_QWORD *)*((_QWORD *)i + 1);
            if ( (_DWORD *)*v24 != i )
              goto LABEL_25;
            *v24 = v23;
            *(_QWORD *)(v23 + 8) = v24;
            ExFreePoolWithTag(i, 0);
LABEL_24:
            v19 = (__int64 *)(a1 + 1304);
            v20 = *(_QWORD *)(a1 + 1304);
            if ( *(_QWORD *)(v20 + 8) != a1 + 1304 )
LABEL_25:
              __fastfail(3u);
            *(_QWORD *)v18 = v20;
            *(_QWORD *)(v18 + 8) = v19;
            *(_QWORD *)(v20 + 8) = v18;
            *v19 = v18;
            _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0xC0u);
          }
        }
        goto LABEL_7;
      }
    }
    v17 = ExAllocatePool2(0x100uLL);
    v18 = v17;
    if ( v17 )
    {
      *(_DWORD *)(v17 + 20) = 1;
      *(_DWORD *)(v17 + 24) = 1;
      *(_OWORD *)(v17 + 28) = *(_OWORD *)a3;
      *(_DWORD *)(v17 + 16) = *(unsigned __int16 *)a2 + 2;
      memmove((void *)(v17 + 44), a2[1], *(unsigned __int16 *)a2);
      *(_WORD *)(v18 + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1) + 44) = 0;
      *(_DWORD *)(a1 + 324) += *(_DWORD *)(v18 + 16) + 16;
      goto LABEL_24;
    }
  }
LABEL_7:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
  KeAbPostRelease(a1 + 688);
}
