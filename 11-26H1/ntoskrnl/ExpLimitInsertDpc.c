/*
 * XREFs of ExpLimitInsertDpc @ 0x1406D0510
 * Callers:
 *     <none>
 * Callees:
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     ExpLimitDpcInsertEntry @ 0x1406D0248 (ExpLimitDpcInsertEntry.c)
 */

volatile signed __int32 *__fastcall ExpLimitInsertDpc(
        __int64 a1,
        unsigned int *a2,
        volatile signed __int32 *a3,
        unsigned __int64 a4)
{
  signed __int32 v6; // eax
  unsigned int v7; // edi
  unsigned int i; // edi
  signed __int32 v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // esi
  char v12; // r14
  signed __int32 v13; // ecx
  signed __int32 v14; // edx
  volatile signed __int32 v15; // r8d
  int v16; // ebp
  volatile signed __int32 v17; // eax
  unsigned int v18; // ebp
  char v19; // r14
  signed __int32 v20; // ecx
  signed __int32 v21; // edx
  volatile signed __int32 v22; // r8d
  int v23; // esi
  signed __int32 v24; // eax
  unsigned int v25; // ebp
  char v26; // r14
  signed __int32 v27; // ecx
  signed __int32 v28; // edx
  volatile signed __int32 v29; // r8d
  int v30; // esi
  volatile signed __int32 *result; // rax
  __int64 v33; // [rsp+68h] [rbp+20h] BYREF

  v6 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x3FFFFFFF) == 0 )
  {
    if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v7) & 0x40000000) != 0 )
      KeWakeAddressAll();
    for ( i = 0; i < *a2; ++i )
      ExpLimitDpcInsertEntry((signed __int64 *)&a2[14 * i + 2]);
    v9 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v10 = ~v9 & 0x80000000;
    if ( (v9 & 0x3FFFFFFF) != 0 )
    {
      v11 = 0;
      v12 = 0;
      while ( (*(_DWORD *)a4 & 0x80000000) != v10 )
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v12;
          if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v12 & 7) == 0 )
          {
            v13 = *(_DWORD *)a4;
            if ( (*(_DWORD *)a4 & 0x80000000) != v10 )
            {
              v14 = *(_DWORD *)a4;
              v15 = *(_DWORD *)a4;
              do
              {
                v16 = v13 | 0x40000000;
                v13 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v13 | 0x40000000, v14);
                if ( v13 == v15 )
                {
                  LODWORD(v33) = v16;
                  do
                  {
                    KiHaltOnAddress(a4, &v33, 4LL);
                    v13 = *(_DWORD *)a4;
                  }
                  while ( *(_DWORD *)a4 == v16 );
                }
                v14 = v13;
                v15 = v13;
              }
              while ( (v13 & 0x80000000) != v10 );
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
      goto LABEL_63;
    }
    goto LABEL_44;
  }
  v17 = *(_DWORD *)a4;
  v18 = 0;
  v19 = 0;
  while ( (v17 & 0x80000000) != v7 )
  {
    if ( (++v18 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      ++v19;
      if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v19 & 7) == 0 )
      {
        v20 = *(_DWORD *)a4;
        if ( (*(_DWORD *)a4 & 0x80000000) != v7 )
        {
          v21 = *(_DWORD *)a4;
          v22 = *(_DWORD *)a4;
          do
          {
            v23 = v20 | 0x40000000;
            v20 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v20 | 0x40000000, v21);
            if ( v20 == v22 )
            {
              LODWORD(v33) = v23;
              do
              {
                KiHaltOnAddress(a4, &v33, 4LL);
                v20 = *(_DWORD *)a4;
              }
              while ( *(_DWORD *)a4 == v23 );
            }
            v21 = v20;
            v22 = v20;
          }
          while ( (v20 & 0x80000000) != v7 );
        }
      }
      else
      {
        HvlNotifyLongSpinWait(v18);
      }
    }
    else
    {
      _mm_pause();
    }
    v17 = *(_DWORD *)a4;
  }
  v24 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v10 = ~v24 & 0x80000000;
  if ( (v24 & 0x3FFFFFFF) == 0 )
  {
LABEL_44:
    if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v10) & 0x40000000) != 0 )
      KeWakeAddressAll();
    goto LABEL_63;
  }
  v25 = 0;
  v26 = 0;
  while ( (*(_DWORD *)a4 & 0x80000000) != v10 )
  {
    if ( (++v25 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      ++v26;
      if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v26 & 7) == 0 )
      {
        v27 = *(_DWORD *)a4;
        if ( (*(_DWORD *)a4 & 0x80000000) != v10 )
        {
          v28 = *(_DWORD *)a4;
          v29 = *(_DWORD *)a4;
          do
          {
            v30 = v27 | 0x40000000;
            v27 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v27 | 0x40000000, v28);
            if ( v27 == v29 )
            {
              LODWORD(v33) = v30;
              do
              {
                KiHaltOnAddress(a4, &v33, 4LL);
                v27 = *(_DWORD *)a4;
              }
              while ( *(_DWORD *)a4 == v30 );
            }
            v28 = v27;
            v29 = v27;
          }
          while ( (v27 & 0x80000000) != v10 );
        }
      }
      else
      {
        HvlNotifyLongSpinWait(v25);
      }
    }
    else
    {
      _mm_pause();
    }
  }
LABEL_63:
  result = a3;
  _InterlockedDecrement(a3);
  return result;
}
