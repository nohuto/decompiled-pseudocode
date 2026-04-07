/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x180085C48
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1800735C4 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x18007A414 (-IsOOM@@YA_NJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800E594C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(__int64 a1, unsigned int a2, int a3, void *a4)
{
  void *v4; // r10
  int v5; // r11d

  v4 = a4;
  v5 = a3;
  if ( (_DWORD)a1 == -2003303421 || (_DWORD)a1 == -2003302654 || (a2 & 0x10) != 0 && IsOOM(a1) )
    ModuleFailFastForHRESULT(a1, v4);
  if ( (a2 & 4) != 0 )
    DoStackCapture(a1, v5, v4);
  if ( (a2 & 1) != 0 )
    MilInstrumentationBreak(a2, a2);
}
