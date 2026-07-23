/*
 * XREFs of MiLockLowestPrioritySecondaryStandbyPage @ 0x1402AB6D8
 * Callers:
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiRepurposeStandbySlabPage @ 0x1402AB348 (MiRepurposeStandbySlabPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockLowestPrioritySecondaryStandbyPage(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int8 *a4)
{
  unsigned __int8 *v4; // r15
  unsigned __int64 *v5; // rax
  __int64 *v6; // r14
  unsigned __int8 CurrentIrql; // bl
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r13
  bool v11; // zf
  volatile LONG *v12; // rsi
  __int64 v13; // rcx
  __int64 v15; // rbp
  int v16; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 *v17; // [rsp+70h] [rbp+18h]
  unsigned __int8 *v18; // [rsp+78h] [rbp+20h]

  v18 = a4;
  v17 = a3;
  *a3 = 0LL;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( a4 )
  {
    *a4 = 17;
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = 17;
  }
  v8 = 0LL;
  v9 = a1 + 3648;
  v10 = a1 + 4352;
  v11 = a1 + 3648 == a1 + 4352;
  if ( a1 + 3648 < (unsigned __int64)(a1 + 4352) )
  {
    v12 = (volatile LONG *)(a1 + 3680);
    v13 = 2LL;
    while ( 1 )
    {
      if ( *v6 != 0x3FFFFFFFFFLL )
      {
        if ( CurrentIrql != 17 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(a2) = 2;
            LOBYTE(v13) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v13, a2);
          }
        }
        ExAcquireSpinLockExclusiveAtDpcLevel(v12);
        v8 = *v6;
        if ( *v6 == 0x3FFFFFFFFFLL )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(v12);
          if ( CurrentIrql != 17 )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
          }
        }
        else
        {
          v15 = 48 * v8;
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(48 * v8 - 0x220000000000LL + 24), 0x3FuLL) )
            goto LABEL_7;
          ExReleaseSpinLockExclusiveFromDpcLevel(v12);
          v16 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 - 0x220000000000LL + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v16);
            while ( *(__int64 *)(v15 - 0x220000000000LL + 24) < 0 );
          }
          v13 = 2LL;
          if ( (*(_BYTE *)(v15 - 0x220000000000LL + 34) & 7) != 2 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v15 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( CurrentIrql != 17 )
            {
              if ( KiIrqlFlags )
              {
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                v13 = 2LL;
              }
              __writecr8(CurrentIrql);
            }
            v9 -= 88LL;
            v12 -= 22;
            v6 -= 11;
            goto LABEL_6;
          }
          ExAcquireSpinLockExclusiveAtDpcLevel(v12);
          if ( v8 == *v6 )
          {
LABEL_7:
            v4 = v18;
            v11 = v9 == v10;
            v5 = v17;
            break;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel(v12);
          _InterlockedAnd64((volatile signed __int64 *)(v15 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql != 17 )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
          }
          v9 -= 88LL;
          v12 -= 22;
          v6 -= 11;
        }
        v13 = 2LL;
      }
LABEL_6:
      v9 += 88LL;
      v12 += 22;
      v6 += 11;
      if ( v9 >= v10 )
        goto LABEL_7;
    }
  }
  if ( v11 )
    return -1LL;
  *v5 = v9;
  if ( v4 )
    *v4 = CurrentIrql;
  return v8;
}
