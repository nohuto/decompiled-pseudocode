/*
 * XREFs of MiOkToDeleteProtos @ 0x1404500BC
 * Callers:
 *     MiFreeDanglingProtos @ 0x1402A5498 (MiFreeDanglingProtos.c)
 *     MiFreeProtoPool @ 0x140450078 (MiFreeProtoPool.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetVirtualAddressState @ 0x14024EBD4 (MiGetVirtualAddressState.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiOkToDeleteProtos(ULONG_PTR BugCheckParameter4, __int64 a2, int a3)
{
  ULONG_PTR v5; // rsi
  ULONG_PTR v6; // r15
  ULONG_PTR i; // rbp
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int16 v12; // r14
  unsigned __int8 CurrentIrql; // di
  BOOL v14; // r14d
  ULONG_PTR v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]
  int v18; // [rsp+98h] [rbp+20h] BYREF

  v5 = BugCheckParameter4;
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter4) == 4 )
  {
    v6 = (a2 + (v5 & 0xFFF) + 4095) >> 12;
    v15 = v6;
    for ( i = 0LL; i < v6; ++i )
    {
      v17 = 0LL;
      v16 = 0LL;
      if ( (int)MiGetVirtualAddressState((__int64)&v16, v5, 0) < 0 )
        KeBugCheckEx(0x1Au, 0x530BuLL, v5 - (i << 12), v6, v5);
      v9 = 48 * (v17 >> 12);
      v10 = *(unsigned int *)(v9 - 0x220000000000LL + 32);
      v11 = 0x10000000000LL;
      v12 = ((*(_QWORD *)(v9 - 0x220000000000LL + 40) & 0x10000000000LL) != 0) + 1;
      if ( (_WORD)v10 != v12 )
        return 0LL;
      if ( a3 )
      {
        CurrentIrql = 17;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 - 0x220000000000LL + 24), 0x3FuLL) )
          return 0LL;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql == 2 )
        {
          v18 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 - 0x220000000000LL + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v18);
            while ( *(__int64 *)(v9 - 0x220000000000LL + 24) < 0 );
            v6 = v15;
          }
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v11) = 2;
            LOBYTE(v10) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v10, v11);
          }
          v18 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 - 0x220000000000LL + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v18);
            while ( *(__int64 *)(v9 - 0x220000000000LL + 24) < 0 );
          }
          v6 = v15;
        }
      }
      v14 = (unsigned __int16)*(_DWORD *)(v9 - 0x220000000000LL + 32) == v12
         && (*(_BYTE *)(v9 - 0x220000000000LL + 34) & 0x20) == 0;
      _InterlockedAnd64((volatile signed __int64 *)(v9 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !a3 && CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      if ( !v14 )
        return 0LL;
      v5 += 4096LL;
    }
  }
  return 1LL;
}
