/*
 * XREFs of SepSetTokenClaims @ 0x140AEFE60
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     SepCompareClaimAttributes @ 0x140A28D7C (SepCompareClaimAttributes.c)
 *     SepCreateClaimAttributes @ 0x140AEFEE8 (SepCreateClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x140B215F0 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  char v6; // r15
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v8; // r9
  unsigned int v9; // r12d
  PVOID v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v12; // r14
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rbp
  PVOID P; // [rsp+30h] [rbp-28h] BYREF

  P = 0LL;
  v6 = 0;
  result = SepCreateClaimAttributes((unsigned int)&P, a2, a3, a4, a5);
  v9 = result;
  if ( (int)result >= 0 )
  {
    v10 = P;
    if ( !P )
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
      return result;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v12 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 112LL);
      v13 = (AutoBoost *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, v8);
      v15 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx(v12, v13, (__int64)v12);
      if ( v15 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v15, v14);
        else
          *((_BYTE *)v15 + 10) = 1;
      }
      v16 = *(_QWORD *)(a1 + 216);
      if ( !*(_QWORD *)(v16 + 120) )
      {
        *(_QWORD *)(v16 + 120) = v10;
        v6 = 1;
      }
      v17 = *(_QWORD *)(a1 + 216);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 112));
      KeAbPostRelease(v17 + 112);
      KeLeaveCriticalRegion();
      if ( v6 )
        goto LABEL_19;
    }
    if ( SepCompareClaimAttributes((__int64)v10, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL)) )
    {
LABEL_19:
      *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
      if ( !v6 )
        SepDeleteClaimAttributes(v10);
    }
    else
    {
      *(_DWORD *)(a1 + 200) |= 0x8000u;
      *(_QWORD *)(a1 + 1096) = v10;
    }
  }
  return v9;
}
