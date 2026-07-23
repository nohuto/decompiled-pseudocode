/*
 * XREFs of ExpGetPoolTagInfoTarget @ 0x140307A60
 * Callers:
 *     <none>
 * Callees:
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall ExpGetPoolTagInfoTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // edi
  volatile signed __int32 v9; // eax
  unsigned int v10; // esi
  char v11; // r14
  _DWORD *v12; // rbp
  __int64 result; // rax
  unsigned int v14; // edi
  unsigned int v15; // esi
  char v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  signed __int32 v20; // ecx
  signed __int32 v21; // edx
  volatile signed __int32 v22; // r8d
  int v23; // ebp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  signed __int32 v27; // ecx
  signed __int32 v28; // edx
  volatile signed __int32 v29; // r8d
  int v30; // ebp
  volatile unsigned __int64 *p_CycleTime; // r9
  __int64 v32; // r10
  __int64 v33; // r8
  volatile unsigned __int64 v34; // rdx
  __int64 v35; // rax
  _QWORD *i; // rcx
  int v37; // [rsp+58h] [rbp+10h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x3FFFFFFF) != 0 )
  {
    v9 = *(_DWORD *)a4;
    v10 = 0;
    v11 = 0;
    while ( (v9 & 0x80000000) != v8 )
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v11;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v18, v17, v19) && (KiVelocityFlags & 0x20000) != 0 && (v11 & 7) == 0 )
        {
          v20 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v8 )
          {
            v21 = *(_DWORD *)a4;
            v22 = *(_DWORD *)a4;
            do
            {
              v23 = v20 | 0x40000000;
              v20 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v20 | 0x40000000, v21);
              if ( v20 == v22 )
              {
                v37 = v23;
                do
                {
                  KiHaltOnAddress(a4, &v37, 4LL);
                  v20 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v23 );
              }
              v21 = v20;
              v22 = v20;
            }
            while ( (v20 & 0x80000000) != v8 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v10);
        }
      }
      else
      {
        _mm_pause();
      }
      v9 = *(_DWORD *)a4;
    }
    v12 = (_DWORD *)(a4 + 4);
  }
  else
  {
    v12 = (_DWORD *)(a4 + 4);
    if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v8) & 0x40000000) != 0 )
      KeWakeAddressAll();
    memmove(*(void **)a2, (const void *)stru_140EFF2C0.ThreadLock, 80LL * *(_QWORD *)(a2 + 8));
    p_CycleTime = &stru_140EFF2C0.CycleTime;
    v32 = 2047LL;
    v33 = *(_QWORD *)a2 + 80LL * *(_QWORD *)(a2 + 8);
    do
    {
      v34 = *p_CycleTime;
      if ( *p_CycleTime )
      {
        for ( i = *(_QWORD **)a2; i != (_QWORD *)v33; i += 10 )
        {
          if ( *(_DWORD *)v34 )
          {
            i[2] += *(_QWORD *)(v34 + 16);
            i[3] += *(_QWORD *)(v34 + 24);
            i[1] += *(_QWORD *)(v34 + 8);
            i[5] += *(_QWORD *)(v34 + 40);
            i[6] += *(_QWORD *)(v34 + 48);
            i[4] += *(_QWORD *)(v34 + 32);
          }
          v34 += 80LL;
        }
      }
      ++p_CycleTime;
      --v32;
    }
    while ( v32 );
    v35 = *(_QWORD *)(a2 + 24);
    if ( v35 )
      memmove(*(void **)(a2 + 16), (const void *)PoolTrackTableExpansion, 80 * v35);
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v14 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v14 )
        break;
      if ( (++v15 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v16;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v25, v24, v26) && (KiVelocityFlags & 0x20000) != 0 && (v16 & 7) == 0 )
        {
          v27 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v14 )
          {
            v28 = *(_DWORD *)a4;
            v29 = *(_DWORD *)a4;
            do
            {
              v30 = v27 | 0x40000000;
              v27 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v27 | 0x40000000, v28);
              if ( v27 == v29 )
              {
                v37 = v30;
                do
                {
                  KiHaltOnAddress(a4, &v37, 4LL);
                  v27 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v30 );
              }
              v28 = v27;
              v29 = v27;
            }
            while ( (v27 & 0x80000000) != v14 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v15);
        }
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else if ( (_InterlockedExchange((volatile __int32 *)a4, *v12 | v14) & 0x40000000) != 0 )
  {
    result = KeWakeAddressAll();
  }
  _InterlockedDecrement(a3);
  return result;
}
