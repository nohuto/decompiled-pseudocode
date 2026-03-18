/*
 * XREFs of IsValidBand @ 0x1401D9520
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x14015D154 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidBand(int a1)
{
  unsigned int v1; // r8d
  unsigned int i; // edx

  v1 = 0;
  for ( i = 0; i < 0x12; ++i )
  {
    if ( dword_140355790[i] == a1 )
      return 1;
  }
  return v1;
}
