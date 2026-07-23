/*
 * XREFs of MiInitializeMdlLeafPfns @ 0x1406F3138
 * Callers:
 *     MiInitializeLargeMdlLeafPfns @ 0x1406F3000 (MiInitializeLargeMdlLeafPfns.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiInitializeMdlSinglePage @ 0x14033DBB8 (MiInitializeMdlSinglePage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiInitializeMdlLeafPfns(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  int v6; // r12d
  __int64 v9; // rsi
  int v10; // r13d
  unsigned __int64 *v11; // rbp
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 v14; // r14
  unsigned __int64 *v15; // rsi
  unsigned __int8 v16; // cl

  v6 = a5;
  v9 = 1LL;
  if ( a5 < 0 && (a5 & 0x3001000) != 0 )
    v9 = a2;
  v10 = 0;
  v11 = (unsigned __int64 *)(a1 + 48 * a2);
  result = KeGetCurrentIrql();
  if ( (_BYTE)result == 2 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      result = KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  }
  if ( v11 != (unsigned __int64 *)a1 )
  {
    v14 = 48 * v9;
    v15 = v11 + 3;
    do
    {
      v11 = (unsigned __int64 *)((char *)v11 - v14);
      a5 = 0;
      v15 = (unsigned __int64 *)((char *)v15 - v14);
      while ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&a5);
        while ( (*v15 & 0x8000000000000000uLL) != 0LL );
      }
      MiInitializeMdlSinglePage(a1, v11, a3, a4, v6);
      if ( a6 )
        *((_DWORD *)v15 + 2) |= 0xC00000u;
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)v15, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (++v10 & 0x3F) == 0 && CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        v16 = KeGetCurrentIrql();
        if ( v16 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
          result = KiRaiseIrqlProcessIrqlFlags(v16, 2);
      }
    }
    while ( v11 != (unsigned __int64 *)a1 );
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
