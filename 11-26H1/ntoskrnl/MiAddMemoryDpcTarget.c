/*
 * XREFs of MiAddMemoryDpcTarget @ 0x1406EC7F0
 * Callers:
 *     <none>
 * Callees:
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     MiClearPhysicalMemoryEverRemoved @ 0x1406ECA88 (MiClearPhysicalMemoryEverRemoved.c)
 */

__int64 __fastcall MiAddMemoryDpcTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, unsigned __int64 a4)
{
  signed __int32 v6; // eax
  unsigned int v7; // edi
  volatile signed __int32 v8; // eax
  unsigned int v9; // ebp
  char v10; // r14
  signed __int32 v11; // ecx
  signed __int32 v12; // edx
  volatile signed __int32 v13; // r8d
  int v14; // esi
  __int64 result; // rax
  unsigned int v16; // edi
  unsigned int v17; // ebp
  char v18; // r14
  signed __int32 v19; // ecx
  signed __int32 v20; // edx
  volatile signed __int32 v21; // r8d
  int v22; // esi
  __int64 v23; // [rsp+68h] [rbp+20h] BYREF

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
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v10 & 7) == 0 )
        {
          v11 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v7 )
          {
            v12 = *(_DWORD *)a4;
            v13 = *(_DWORD *)a4;
            do
            {
              v14 = v11 | 0x40000000;
              v11 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v11 | 0x40000000, v12);
              if ( v11 == v13 )
              {
                LODWORD(v23) = v14;
                do
                {
                  KiHaltOnAddress(a4, &v23, 4LL);
                  v11 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v14 );
              }
              v12 = v11;
              v13 = v11;
            }
            while ( (v11 & 0x80000000) != v7 );
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
  else
  {
    if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v7) & 0x40000000) != 0 )
      KeWakeAddressAll();
    MiClearPhysicalMemoryEverRemoved();
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v16 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v16 )
        break;
      if ( (++v17 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v18;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v18 & 7) == 0 )
        {
          v19 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v16 )
          {
            v20 = *(_DWORD *)a4;
            v21 = *(_DWORD *)a4;
            do
            {
              v22 = v19 | 0x40000000;
              v19 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v19 | 0x40000000, v20);
              if ( v19 == v21 )
              {
                LODWORD(v23) = v22;
                do
                {
                  KiHaltOnAddress(a4, &v23, 4LL);
                  v19 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v22 );
              }
              v20 = v19;
              v21 = v19;
            }
            while ( (v19 & 0x80000000) != v16 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v17);
        }
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v16) & 0x40000000) != 0 )
  {
    result = KeWakeAddressAll();
  }
  _InterlockedDecrement(a3);
  return result;
}
