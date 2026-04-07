/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x18007A414
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18007A394 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x180085C48 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  char v1; // r8
  unsigned int i; // edx

  v1 = 0;
  for ( i = 0; i < 9; ++i )
  {
    if ( dword_1800FB1D8[i] == a1 )
      return 1;
  }
  return v1;
}
