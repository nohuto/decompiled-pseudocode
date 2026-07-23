/*
 * XREFs of KeCheckForTimer @ 0x140346E20
 * Callers:
 *     ExpFreePoolChecks @ 0x140346B10 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG __fastcall KeCheckForTimer(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG result; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r14
  unsigned int i; // ebp
  __int64 *v8; // rdx
  unsigned int v9; // r13d
  volatile signed __int32 *v10; // rbx
  __int64 *v11; // r12
  unsigned __int8 CurrentIrql; // r15
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // r8
  ULONG_PTR v15; // r8
  int v16; // [rsp+80h] [rbp+18h] BYREF
  ULONG v17; // [rsp+88h] [rbp+20h]

  result = KeTimerCheckFlags;
  if ( (KeTimerCheckFlags & 1) != 0 )
  {
    BugCheckParameter4 = BugCheckParameter3 + a2;
    result = KeQueryActiveProcessorCountEx(0xFFFFu);
    v6 = 0LL;
    v17 = result;
    while ( (unsigned int)v6 < result )
    {
      for ( i = 0; i < 2; ++i )
      {
        v8 = KiProcessorBlock;
        v9 = 0;
        v10 = (volatile signed __int32 *)(KiProcessorBlock[v6] + ((unsigned __int64)i << 13) + 17152);
        v11 = (__int64 *)(v10 + 2);
        do
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v8) = 2;
            LOBYTE(v5) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v5, v8);
          }
          v16 = 0;
          while ( _interlockedbittestandset64(v10, 0LL) )
          {
            do
              KeYieldProcessorEx(&v16);
            while ( *(_QWORD *)v10 );
          }
          v8 = (__int64 *)*v11;
          while ( v8 != v11 )
          {
            v13 = (ULONG_PTR)(v8 - 4);
            v8 = (__int64 *)*v8;
            if ( v13 > BugCheckParameter3 - 64 && v13 < BugCheckParameter4 )
              KeBugCheckEx(0xC7u, 0LL, v13, BugCheckParameter3, BugCheckParameter4);
            v5 = KiWaitNever;
            v14 = (unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ _byteswap_uint64(v13 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v13 + 48), KiWaitNever));
            if ( v14 )
            {
              if ( v14 > BugCheckParameter3 - 64 && v14 < BugCheckParameter4 )
                KeBugCheckEx(0xC7u, 1uLL, v14, BugCheckParameter3, BugCheckParameter4);
              v15 = *(_QWORD *)(v14 + 24);
              if ( v15 >= BugCheckParameter3 && v15 < BugCheckParameter4 )
                KeBugCheckEx(0xC7u, 2uLL, v15, BugCheckParameter3, BugCheckParameter4);
            }
          }
          _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          v11 += 4;
          ++v9;
          v10 += 8;
        }
        while ( v9 < 0x100 );
      }
      result = v17;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  return result;
}
