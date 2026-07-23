/*
 * XREFs of SepSetTokenClaims @ 0x140AF2A24
 * Callers:
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SepCompareClaimAttributes @ 0x140A3BE1C (SepCompareClaimAttributes.c)
 *     SepCreateClaimAttributes @ 0x140AF2AAC (SepCreateClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x140B239F0 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1)
{
  char v2; // r15
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v4; // r9
  unsigned int v5; // r12d
  PVOID v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // r14
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbp
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF

  P[0] = 0LL;
  v2 = 0;
  result = SepCreateClaimAttributes(P);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = P[0];
    if ( !P[0] )
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
      return result;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v8 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 112LL);
      v9 = (AutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, v4);
      v11 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
      if ( v11 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v11, v10);
        else
          *((_BYTE *)v11 + 10) = 1;
      }
      v12 = *(_QWORD *)(a1 + 216);
      if ( !*(_QWORD *)(v12 + 120) )
      {
        *(_QWORD *)(v12 + 120) = v6;
        v2 = 1;
      }
      v13 = *(_QWORD *)(a1 + 216);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v13 + 112));
      KeAbPostRelease(v13 + 112);
      KeLeaveCriticalRegion();
      if ( v2 )
        goto LABEL_19;
    }
    if ( SepCompareClaimAttributes((__int64)v6, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL)) )
    {
LABEL_19:
      *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
      if ( !v2 )
        SepDeleteClaimAttributes(v6);
    }
    else
    {
      *(_DWORD *)(a1 + 200) |= 0x8000u;
      *(_QWORD *)(a1 + 1096) = v6;
    }
  }
  return v5;
}
