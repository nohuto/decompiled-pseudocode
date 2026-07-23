/*
 * XREFs of KiSetSystemTimeDpc @ 0x1403E8090
 * Callers:
 *     <none>
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAdjustTimerDueTimes @ 0x1403E84DC (KiAdjustTimerDueTimes.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     KeAdjustInterruptTime @ 0x1403E8B1C (KeAdjustInterruptTime.c)
 *     KiUpdateSystemTime @ 0x1404641A4 (KiUpdateSystemTime.c)
 */

void __fastcall KiSetSystemTimeDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v6; // eax
  unsigned int v7; // edi
  volatile signed __int32 v8; // eax
  unsigned int v9; // r14d
  char v10; // r15
  struct _KPRCB *CurrentPrcb; // r12
  __int64 p_TimerTable; // r15
  unsigned int v13; // edx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  signed __int32 v22; // ecx
  unsigned int v23; // eax
  signed __int32 v24; // edx
  signed __int32 v25; // r8d
  int v26; // esi
  signed __int32 v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // r14d
  char v30; // r12
  signed __int32 v31; // eax
  unsigned int v32; // edi
  unsigned int v33; // esi
  char v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  signed __int32 v38; // ecx
  unsigned int v39; // eax
  signed __int32 v40; // edx
  signed __int32 v41; // r8d
  int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  signed __int32 v46; // ecx
  unsigned int v47; // eax
  signed __int32 v48; // edx
  signed __int32 v49; // r8d
  int v50; // r14d
  volatile signed __int32 v51; // [rsp+78h] [rbp+48h] BYREF
  volatile signed __int32 *v52; // [rsp+80h] [rbp+50h]
  struct _KPRCB *v53; // [rsp+88h] [rbp+58h]

  v52 = a3;
  v6 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x3FFFFFFF) != 0 )
  {
    v8 = *(_DWORD *)a4;
    v9 = 0;
    v10 = 0;
    while ( (v8 & 0x80000000) != v7 )
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v10;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v20, v19, v21) && (KiVelocityFlags & 0x20000) != 0 && (v10 & 7) == 0 )
        {
          v22 = *(_DWORD *)a4;
          v23 = *(_DWORD *)a4 & 0x80000000;
          v51 = *(_DWORD *)a4;
          if ( v23 != v7 )
          {
            v24 = v22;
            v25 = v22;
            do
            {
              v26 = v22 | 0x40000000;
              v22 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v22 | 0x40000000, v24);
              if ( v22 == v25 )
              {
                v51 = v26;
                do
                {
                  KiHaltOnAddress(a4, &v51, 4LL);
                  v22 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v26 );
              }
              v51 = v22;
              v24 = v22;
              v25 = v22;
            }
            while ( (v22 & 0x80000000) != v7 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v9);
        }
      }
      else
      {
        _mm_pause();
      }
      v8 = *(_DWORD *)a4;
    }
  }
  else if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v7) & 0x40000000) != 0 )
  {
    KeWakeAddressAll();
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v53 = CurrentPrcb;
  if ( KiSerializeTimerExpiration )
  {
    if ( !CurrentPrcb->ClockOwner )
    {
      p_TimerTable = 0LL;
      goto LABEL_27;
    }
    p_TimerTable = KiProcessorBlock[0] + 16640;
  }
  else
  {
    p_TimerTable = (__int64)&CurrentPrcb->TimerTable;
    if ( !CurrentPrcb->ClockOwner )
      goto LABEL_27;
  }
  **(_QWORD **)(a2 + 16) = MEMORY[0xFFFFF78000000014];
  v13 = *(_DWORD *)(a2 + 4);
  v14 = **(_QWORD **)(a2 + 8);
  v15 = *(_QWORD **)(a2 + 16);
  *(_QWORD *)(a2 + 24) = v14;
  v16 = v14 - *v15;
  *(_QWORD *)(a2 + 24) = v16;
  if ( (v13 & 1) != 0 )
  {
    v17 = v13 >> 1;
    LOBYTE(v17) = v17 & 1;
    if ( (unsigned __int8)KeAdjustInterruptTime(v16, v17) )
    {
      v18 = -*(_QWORD *)(a2 + 24);
      *(_BYTE *)a2 = 1;
      *(_QWORD *)(a2 + 24) = v18;
    }
  }
  else
  {
    KiUpdateSystemTime(v16, 0LL, v13);
  }
LABEL_27:
  v27 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v28 = ~v27 & 0x80000000;
  if ( (v27 & 0x3FFFFFFF) != 0 )
  {
    v29 = 0;
    v30 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v28 )
    {
      if ( (++v29 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v30;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v36, v35, v37) && (KiVelocityFlags & 0x20000) != 0 && (v30 & 7) == 0 )
        {
          v38 = *(_DWORD *)a4;
          v39 = *(_DWORD *)a4 & 0x80000000;
          v51 = *(_DWORD *)a4;
          if ( v39 != v28 )
          {
            v40 = v38;
            v41 = v38;
            do
            {
              v42 = v38 | 0x40000000;
              v38 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v38 | 0x40000000, v40);
              if ( v38 == v41 )
              {
                v51 = v42;
                do
                {
                  KiHaltOnAddress(a4, &v51, 4LL);
                  v38 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v42 );
              }
              v51 = v38;
              v40 = v38;
              v41 = v38;
            }
            while ( (v38 & 0x80000000) != v28 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v29);
        }
      }
      else
      {
        _mm_pause();
      }
    }
    CurrentPrcb = v53;
  }
  else if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v28) & 0x40000000) != 0 )
  {
    KeWakeAddressAll();
  }
  if ( *(_QWORD *)(a2 + 24) )
  {
    if ( p_TimerTable )
      KiAdjustTimerDueTimes(CurrentPrcb, p_TimerTable, a2);
    v31 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v32 = ~v31 & 0x80000000;
    if ( (v31 & 0x3FFFFFFF) != 0 )
    {
      v33 = 0;
      v34 = 0;
      while ( (*(_DWORD *)a4 & 0x80000000) != v32 )
      {
        if ( (++v33 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v34;
          if ( (unsigned __int8)KeCanUseHaltOnAddress(v44, v43, v45)
            && (KiVelocityFlags & 0x20000) != 0
            && (v34 & 7) == 0 )
          {
            v46 = *(_DWORD *)a4;
            v47 = *(_DWORD *)a4 & 0x80000000;
            v51 = *(_DWORD *)a4;
            if ( v47 != v32 )
            {
              v48 = v46;
              v49 = v46;
              do
              {
                v50 = v46 | 0x40000000;
                v46 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v46 | 0x40000000, v48);
                if ( v46 == v49 )
                {
                  v51 = v50;
                  do
                  {
                    KiHaltOnAddress(a4, &v51, 4LL);
                    v46 = *(_DWORD *)a4;
                  }
                  while ( *(_DWORD *)a4 == v50 );
                }
                v51 = v46;
                v48 = v46;
                v49 = v46;
              }
              while ( (v46 & 0x80000000) != v32 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait(v33);
          }
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v32) & 0x40000000) != 0 )
    {
      KeWakeAddressAll();
    }
  }
  _InterlockedDecrement(v52);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, 2u);
}
