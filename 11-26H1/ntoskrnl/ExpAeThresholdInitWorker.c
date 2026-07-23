/*
 * XREFs of ExpAeThresholdInitWorker @ 0x1406D8150
 * Callers:
 *     <none>
 * Callees:
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     ExpAeMeasureContention @ 0x1406D810C (ExpAeMeasureContention.c)
 */

unsigned __int64 __fastcall ExpAeThresholdInitWorker(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  signed __int32 v8; // eax
  unsigned int v9; // ebx
  volatile signed __int32 v10; // eax
  unsigned int v11; // r14d
  char v12; // r12
  signed __int32 v13; // ecx
  signed __int32 v14; // edx
  volatile signed __int32 v15; // r8d
  int v16; // r15d
  unsigned __int64 result; // rax
  __int64 v18; // r10
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x3FFFFFFF) != 0 )
  {
    v10 = *(_DWORD *)a4;
    v11 = 0;
    v12 = 0;
    while ( (v10 & 0x80000000) != v9 )
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v12;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v12 & 7) == 0 )
        {
          v13 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v9 )
          {
            v14 = *(_DWORD *)a4;
            v15 = *(_DWORD *)a4;
            do
            {
              v16 = v13 | 0x40000000;
              v13 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v13 | 0x40000000, v14);
              if ( v13 == v15 )
              {
                LODWORD(v19) = v16;
                do
                {
                  KiHaltOnAddress(a4, &v19, 4LL);
                  v13 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v16 );
              }
              v14 = v13;
              v15 = v13;
            }
            while ( (v13 & 0x80000000) != v9 );
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
      v10 = *(_DWORD *)a4;
    }
  }
  else if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v9) & 0x40000000) != 0 )
  {
    KeWakeAddressAll();
  }
  do
  {
    result = ExpAeMeasureContention((__int64 *)a2);
    v4 += result;
  }
  while ( v18 != 1 );
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 136));
  _InterlockedAdd64((volatile signed __int64 *)(a2 + 128), v4);
  _InterlockedDecrement(a3);
  return result;
}
