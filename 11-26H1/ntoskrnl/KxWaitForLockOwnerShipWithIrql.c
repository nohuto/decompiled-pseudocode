/*
 * XREFs of KxWaitForLockOwnerShipWithIrql @ 0x1402FF620
 * Callers:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KxWaitForLockOwnerShipWithIrql(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rsi
  bool v5; // si
  __int64 v6; // rbx
  unsigned int v7; // edi
  char v8; // r15
  __int64 v10; // rcx
  signed __int64 v11; // rax
  signed __int64 v12; // rbp
  signed __int64 v13; // rtt
  unsigned __int8 CurrentIrql; // bp
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v3 | 1;
  v5 = (v3 & 4) != 0;
  v16 = 0LL;
  BYTE1(v16) = v5;
  v6 = a1;
  *(_QWORD *)a2 = a1;
  v15 = 0LL;
  if ( a3 )
  {
    a2 = *a3;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)a2 )
      __writecr8(a2);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    *a3 = CurrentIrql;
    _enable();
  }
  v7 = 0;
  v8 = 0;
  do
  {
    if ( (++v7 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
    {
      ++v8;
      LOBYTE(v16) = 0;
      if ( (KiVelocityFlags & 0x10000) != 0 && (unsigned __int8)KeCanUseHaltOnAddress(v10, a2, a3) && (v8 & 7) == 0 )
      {
        v11 = *(_QWORD *)(v6 + 8);
        LOBYTE(v16) = 1;
        while ( (v11 & 1) != 0 )
        {
          if ( v5 )
            v12 = v11 & 0xFFFFFFFFFFFFFFFBuLL;
          else
            v12 = v11 | 4;
          v13 = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8), v12, v11);
          if ( v13 == v11 )
          {
            do
            {
              *((_QWORD *)&v15 + 1) = v12;
              KiHaltOnAddress(v6 + 8, (char *)&v15 + 8, 8LL);
              v11 = *(_QWORD *)(v6 + 8);
            }
            while ( v11 == v12 );
          }
        }
      }
      else
      {
        HvlNotifyLongSpinWait(v7);
      }
    }
    else
    {
      _mm_pause();
    }
    a1 = *(_QWORD *)(v6 + 8);
  }
  while ( (a1 & 1) != 0 );
  return v7;
}
