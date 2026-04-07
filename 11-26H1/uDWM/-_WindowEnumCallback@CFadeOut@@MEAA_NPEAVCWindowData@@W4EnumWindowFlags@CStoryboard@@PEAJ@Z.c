/*
 * XREFs of ?_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C6BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x18003DC00 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 */

char __fastcall CFadeOut::_WindowEnumCallback(CFade *a1, struct CWindowData *a2, char a3, int *a4)
{
  int v4; // ebx
  int v6; // eax

  v4 = 0;
  if ( (a3 & 1) != 0
    && ((*((_DWORD *)a2 + 186) & 0xFFF) == 0x1A
     || (*((_DWORD *)a2 + 186) & 0xFFF) == 0x1B
     || (*((_DWORD *)a2 + 186) & 0xFFF) == 0x43) )
  {
    v6 = CFade::_FadeWindow(a1, a2, 0);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0x11A6u, 0LL);
  }
  *a4 = v4;
  return 1;
}
