/*
 * XREFs of PoInitializePrcb @ 0x140C03E34
 * Callers:
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     PpmHvUseNativeAlgorithms @ 0x1404E55AC (PpmHvUseNativeAlgorithms.c)
 *     PpmHeteroHgsProcessorInit @ 0x14060E1CC (PpmHeteroHgsProcessorInit.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PoInitializePrcb(_DWORD *DeferredContext)
{
  char *v1; // rbx
  unsigned int v3; // ecx
  _WORD *v4; // rdx
  unsigned int v5; // eax
  char result; // al

  v1 = (char *)(DeferredContext + 8720);
  memset_0(DeferredContext + 8720, 0, 0x268uLL);
  DeferredContext[8622] = 0x10000;
  *((_QWORD *)v1 + 31) = PpmWmiDispatch;
  v1[264] = 1;
  v1[232] = 2;
  *((_WORD *)v1 + 223) = 100;
  KeInitializeDpc((PRKDPC)(v1 + 296), (PKDEFERRED_ROUTINE)PpmPerfAction, DeferredContext);
  v1[568] = 3;
  PpmHeteroHgsProcessorInit((__int64)DeferredContext, 1);
  v3 = 100;
  v4 = DeferredContext + 8867;
  do
  {
    v5 = v3;
    v3 += 100;
    *v4++ = (v5 >> 2) - 1;
  }
  while ( v3 < 0x1F4 );
  if ( !*((_QWORD *)DeferredContext + 4404) )
    *((_WORD *)DeferredContext + 17589) = DeferredContext[9] + 2048;
  *((_BYTE *)DeferredContext + 35177) = 3;
  result = PpmHvUseNativeAlgorithms();
  if ( result )
  {
    DeferredContext[8780] = 0;
  }
  else
  {
    result = HvlpFlags;
    if ( (HvlpFlags & 2) != 0 )
      DeferredContext[8780] = 2;
    else
      DeferredContext[8780] = 1;
  }
  *((_BYTE *)DeferredContext + 35332) = 1;
  return result;
}
