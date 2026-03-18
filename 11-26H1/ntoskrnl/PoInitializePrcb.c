/*
 * XREFs of PoInitializePrcb @ 0x140BFDDE8
 * Callers:
 *     KiInitializeKernel @ 0x140BF6190 (KiInitializeKernel.c)
 * Callees:
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     PpmHvUseNativeAlgorithms @ 0x1404EBFCC (PpmHvUseNativeAlgorithms.c)
 *     PpmHeteroHgsProcessorInit @ 0x14060B45C (PpmHeteroHgsProcessorInit.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char __fastcall PoInitializePrcb(_DWORD *DeferredContext)
{
  char *v1; // rbx
  __int64 v3; // rdx
  unsigned int v4; // ecx
  _WORD *v5; // rdx
  unsigned int v6; // eax
  char result; // al

  v1 = (char *)(DeferredContext + 8720);
  memset_0(DeferredContext + 8720, 0, 0x260uLL);
  DeferredContext[8622] = 0x10000;
  *((_QWORD *)v1 + 31) = PpmWmiDispatch;
  v1[264] = 1;
  v1[232] = 2;
  *((_WORD *)v1 + 223) = 100;
  KeInitializeDpc((PRKDPC)(v1 + 296), (PKDEFERRED_ROUTINE)PpmPerfAction, DeferredContext);
  LOBYTE(v3) = 1;
  v1[568] = 3;
  PpmHeteroHgsProcessorInit((__int64)DeferredContext, v3);
  v4 = 100;
  v5 = DeferredContext + 8866;
  do
  {
    v6 = v4;
    v4 += 100;
    *v5++ = (v6 >> 2) - 1;
  }
  while ( v4 < 0x1F4 );
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
