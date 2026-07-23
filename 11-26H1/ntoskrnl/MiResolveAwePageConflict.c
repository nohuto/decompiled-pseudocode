/*
 * XREFs of MiResolveAwePageConflict @ 0x1407076B4
 * Callers:
 *     MiIncrementAweMapCount @ 0x140706818 (MiIncrementAweMapCount.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiAwePageAttributeChangeable @ 0x1407057D4 (MiAwePageAttributeChangeable.c)
 *     MiWakeWaitersForAweCacheAttributeChange @ 0x140707A18 (MiWakeWaitersForAweCacheAttributeChange.c)
 */

__int64 __fastcall MiResolveAwePageConflict(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  bool v4; // zf
  unsigned __int64 v6; // rsi
  int v9; // edx
  unsigned __int8 v10; // cl
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // edx
  unsigned __int8 CurrentIrql; // cl
  _QWORD v20[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v21; // [rsp+30h] [rbp-20h] BYREF
  char v22; // [rsp+32h] [rbp-1Eh]
  char v23; // [rsp+33h] [rbp-1Dh]
  int v24; // [rsp+34h] [rbp-1Ch]
  _QWORD v25[3]; // [rsp+38h] [rbp-18h] BYREF

  v4 = (*(_BYTE *)(a2 + 34) & 0x20) == 0;
  v6 = a4;
  v20[0] = 0LL;
  v23 = 0;
  if ( v4 )
  {
    if ( MiAwePageAttributeChangeable(a1, a2) )
    {
      v14 = *(_QWORD *)(a1 + 16);
      if ( v14 == 1 )
      {
        MiChangePageAttribute(a2, a3);
        return 0LL;
      }
      else
      {
        *(_DWORD *)(v12 + 32) |= 0x200000u;
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v6 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
          __writecr8(v6);
        }
        v15 = 1LL;
        v16 = a2 + 48;
        if ( v14 > 1 )
        {
          while ( MiAwePageAttributeChangeable(v13, v16) )
          {
            v16 = v17 + 48;
            if ( ++v15 >= v14 )
            {
              if ( v15 == v14 )
                MiChangePageAttribute(a2, a3);
              break;
            }
          }
        }
        MiWakeWaitersForAweCacheAttributeChange(a1, a2);
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v18) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v18);
        }
        result = 3221226029LL;
        if ( v15 != v14 )
          return 3221225496LL;
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 3221225496LL;
    }
  }
  else
  {
    v20[1] = a2;
    v25[1] = v25;
    v21 = 263;
    v25[0] = v25;
    v22 = 6;
    v24 = 0;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
    v20[0] = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = v20;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v6 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      __writecr8(v6);
    }
    KeWaitForGate((__int64)&v21, 18LL);
    v10 = KeGetCurrentIrql();
    if ( v10 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = 2;
      KiRaiseIrqlProcessIrqlFlags(v10, v9);
    }
    return 3221226029LL;
  }
  return result;
}
