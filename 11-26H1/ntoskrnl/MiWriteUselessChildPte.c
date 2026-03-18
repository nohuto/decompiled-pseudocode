/*
 * XREFs of MiWriteUselessChildPte @ 0x14030D0DC
 * Callers:
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkValidProtoPte @ 0x14030B310 (MiHandleForkValidProtoPte.c)
 *     MiHandleForkPagefilePte @ 0x14030CE54 (MiHandleForkPagefilePte.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiHandleForkProtoPte @ 0x14030EB98 (MiHandleForkProtoPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     MiIncreaseUsedPtesInPfn @ 0x14030B600 (MiIncreaseUsedPtesInPfn.c)
 */

__int64 __fastcall MiWriteUselessChildPte(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rbx
  int v5; // r11d
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 328);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( *(__int64 *)(v2 + 24) < 0 );
  }
  *a2 = MiMakeDemandZeroPte(4);
  MiIncreaseUsedPtesInPfn(v2, 1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !*(_DWORD *)(a1 + 344) )
    *(_DWORD *)(a1 + 344) = v5;
  return result;
}
