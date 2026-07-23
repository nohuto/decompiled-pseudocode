/*
 * XREFs of MiWriteUselessChildPte @ 0x1402EF15C
 * Callers:
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkValidProtoPte @ 0x1402ED390 (MiHandleForkValidProtoPte.c)
 *     MiHandleForkPagefilePte @ 0x1402EEED4 (MiHandleForkPagefilePte.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiHandleForkProtoPte @ 0x1402F0C18 (MiHandleForkProtoPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402ED680 (MiIncreaseUsedPtesInPfn.c)
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
