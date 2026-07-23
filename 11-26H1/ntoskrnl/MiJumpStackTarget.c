/*
 * XREFs of MiJumpStackTarget @ 0x1403E7E30
 * Callers:
 *     MiDoStackCopy @ 0x1403E7C50 (MiDoStackCopy.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiTryLockPageTableUnordered @ 0x1402FCF54 (MiTryLockPageTableUnordered.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     MiCanStealKernelStack @ 0x14040A394 (MiCanStealKernelStack.c)
 *     MiCheckSameSlabType @ 0x14040A460 (MiCheckSameSlabType.c)
 *     MiTradeStackPageFast @ 0x14040A528 (MiTradeStackPageFast.c)
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 *     MiStackTheftFreezeProcessors @ 0x1406F81CC (MiStackTheftFreezeProcessors.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(_QWORD *a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // r15
  __int64 v3; // rbx
  signed __int32 v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // esi
  char v7; // r14
  __int64 v8; // rdi
  signed __int32 v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // esi
  char v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  signed __int32 v16; // ecx
  signed __int32 v17; // edx
  volatile signed __int32 v18; // r8d
  int v19; // ebp
  volatile signed __int32 *result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  signed __int32 v24; // ecx
  signed __int32 v25; // edx
  volatile signed __int32 v26; // r8d
  int v27; // ebp
  __int64 v28; // rbx
  __int64 v29; // r12
  __int64 v30; // r15
  __int64 v31; // rdi
  unsigned __int16 v32; // bp
  unsigned __int64 v33; // rdx
  __int64 v34; // r14
  int PfnSlabType; // eax
  int v36; // r8d
  int v37; // r9d
  int v38; // eax
  char v39; // bp
  _QWORD *v40; // [rsp+60h] [rbp+8h] BYREF
  int v41; // [rsp+68h] [rbp+10h] BYREF

  v40 = a1;
  v1 = *a1;
  v2 = a1;
  v3 = a1[2];
  v4 = _InterlockedDecrement((volatile signed __int32 *)v3);
  v5 = ~v4 & 0x80000000;
  if ( (v4 & 0x3FFFFFFF) != 0 )
  {
    v6 = 0;
    v7 = 0;
    if ( (*(_DWORD *)v3 & 0x80000000) != v5 )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v7;
          if ( (unsigned __int8)KeCanUseHaltOnAddress(v14, v13, v15)
            && (KiVelocityFlags & 0x20000) != 0
            && (v7 & 7) == 0 )
          {
            v16 = *(_DWORD *)v3;
            if ( (*(_DWORD *)v3 & 0x80000000) != v5 )
            {
              v17 = *(_DWORD *)v3;
              v18 = *(_DWORD *)v3;
              do
              {
                v19 = v16 | 0x40000000;
                v16 = _InterlockedCompareExchange((volatile signed __int32 *)v3, v16 | 0x40000000, v17);
                if ( v16 == v18 )
                {
                  v41 = v19;
                  do
                  {
                    KiHaltOnAddress(v3, &v41, 4LL);
                    v16 = *(_DWORD *)v3;
                  }
                  while ( *(_DWORD *)v3 == v19 );
                }
                v17 = v16;
                v18 = v16;
              }
              while ( (v16 & 0x80000000) != v5 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait(v6);
          }
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v3 & 0x80000000) != v5 );
      v2 = v40;
    }
    goto LABEL_7;
  }
  if ( (_InterlockedExchange((volatile __int32 *)v3, *(_DWORD *)(v3 + 4) | v5) & 0x40000000) != 0 )
    KeWakeAddressAll();
  if ( !*(_DWORD *)(v1 + 32) )
  {
    v28 = 48LL * *(_QWORD *)v1 - 0x220000000000LL;
    v29 = *(_QWORD *)(v1 + 56);
    v30 = 48LL * *(_QWORD *)(v1 + 8) - 0x220000000000LL;
    v31 = 0LL;
    v32 = (*(_QWORD *)(v1 + 48) != 0LL) + 1;
    MiLockWorkingSetSharedAtDpc(v29);
    v41 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v41);
      while ( *(__int64 *)(v28 + 24) < 0 );
    }
    v34 = *(_QWORD *)(v1 + 40);
    if ( ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FF) == **(_WORD **)(v1 + 24) )
    {
      if ( (unsigned int)MiCanStealKernelStack(v28, v32) )
      {
        if ( MiGetLeafPfnBuddy(v28, 1LL) != -32 )
        {
          if ( MiGetLeafPfnBuddy(v28, v33) )
          {
            MiGetPfnSlabType(v30);
            PfnSlabType = MiGetPfnSlabType(v28);
            if ( (unsigned int)MiCheckSameSlabType(v28, PfnSlabType, v30, v37, v36) )
            {
              v33 = *(_QWORD *)(v28 + 8);
              if ( v34 == (__int64)(v33 << 25) >> 16 )
              {
                v31 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                if ( (unsigned int)MiTryLockPageTableUnordered(v29, v31) )
                {
                  if ( v31 )
                  {
                    v39 = byte_140E2D809 & 1;
                    if ( *(_QWORD *)(v1 + 48) )
                    {
                      MiRemoveLockedPageChargeAndDecRef(v28);
                      *(_QWORD *)(v1 + 48) = 0LL;
                    }
                    if ( !v39 || !(unsigned int)MiTradeStackPageFast(v28, v30) )
                      MiStackTheftFreezeProcessors(v1);
                    v38 = 0;
                    goto LABEL_55;
                  }
                }
                else
                {
                  v31 = 0LL;
                }
              }
            }
          }
        }
      }
    }
    v38 = -1073740748;
LABEL_55:
    *(_DWORD *)(v1 + 32) = v38;
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v31 )
      MiUnlockPageTableInternal(v29, v31);
    LOBYTE(v33) = 17;
    MiUnlockWorkingSetShared(v29, v33);
    v2 = v40;
  }
LABEL_7:
  v8 = v2[2];
  v9 = _InterlockedDecrement((volatile signed __int32 *)v8);
  v10 = ~v9 & 0x80000000;
  if ( (v9 & 0x3FFFFFFF) != 0 )
  {
    v11 = 0;
    v12 = 0;
    while ( (*(_DWORD *)v8 & 0x80000000) != v10 )
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v12;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v22, v21, v23) && (KiVelocityFlags & 0x20000) != 0 && (v12 & 7) == 0 )
        {
          v24 = *(_DWORD *)v8;
          if ( (*(_DWORD *)v8 & 0x80000000) != v10 )
          {
            v25 = *(_DWORD *)v8;
            v26 = *(_DWORD *)v8;
            do
            {
              v27 = v24 | 0x40000000;
              v24 = _InterlockedCompareExchange((volatile signed __int32 *)v8, v24 | 0x40000000, v25);
              if ( v24 == v26 )
              {
                LODWORD(v40) = v27;
                do
                {
                  KiHaltOnAddress(v8, &v40, 4LL);
                  v24 = *(_DWORD *)v8;
                }
                while ( *(_DWORD *)v8 == v27 );
              }
              v25 = v24;
              v26 = v24;
            }
            while ( (v24 & 0x80000000) != v10 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v11);
        }
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else if ( (_InterlockedExchange((volatile __int32 *)v8, *(_DWORD *)(v8 + 4) | v10) & 0x40000000) != 0 )
  {
    KeWakeAddressAll();
  }
  result = (volatile signed __int32 *)v2[1];
  _InterlockedDecrement(result);
  return result;
}
