/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x18000EEF0
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000EE20 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18000E658 (ModuleFailFastForHRESULT.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x18000EBE4 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18000F0BC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(int a1, unsigned int a2, int a3, void *a4)
{
  unsigned int v8; // ecx
  _DWORD *v9; // rax

  if ( (unsigned int)(a1 + 2003303422) <= 1 || a1 == -2003302654 || a1 == -2147024890 )
    goto LABEL_17;
  if ( (a2 & 0x10) != 0 )
  {
    v8 = 0;
    v9 = &unk_180014DF0;
    while ( *v9 != a1 )
    {
      ++v8;
      ++v9;
      if ( v8 >= 9 )
        goto LABEL_8;
    }
LABEL_17:
    ModuleFailFastForHRESULT(a1, a4);
  }
LABEL_8:
  if ( g_dwFailFastForThreadId
    && g_dwFailFastForThreadId == GetCurrentThreadId()
    && (g_hrFailFastExpectedError >= 0 || a1 == g_hrFailFastExpectedError) )
  {
    goto LABEL_17;
  }
  if ( (a2 & 4) != 0 )
    DoStackCapture(a1, a3, (unsigned __int64)a4);
  if ( (a2 & 1) != 0 )
    MilInstrumentationBreak(a2, a2);
}
