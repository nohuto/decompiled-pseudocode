/*
 * XREFs of PsInitSystem @ 0x140C7FD24
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     PspInitPhase1 @ 0x140CD812C (PspInitPhase1.c)
 *     PspInitPhase2 @ 0x140CD842C (PspInitPhase2.c)
 *     PspInitPhase3 @ 0x140CD85C4 (PspInitPhase3.c)
 *     PspInitPhase0 @ 0x140D06FAC (PspInitPhase0.c)
 */

__int64 __fastcall PsInitSystem(int a1, void *a2)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return PspInitPhase0(a2);
  v2 = a1 - 1;
  if ( !v2 )
    return PspInitPhase1();
  v3 = v2 - 1;
  if ( !v3 )
    return PspInitPhase2();
  if ( v3 != 1 )
    KeBugCheckEx(0x33u, 1uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return PspInitPhase3();
}
