/*
 * XREFs of ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x180048F28
 * Callers:
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180037914 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x180046D44 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180049148 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 */

__int64 __fastcall CLivePreview::_HideExistingVisuals(CLivePreview *this, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int v3; // ebp
  __int64 i; // rbx
  __int64 v6; // rcx
  int started; // eax

  v2 = 0;
  v3 = a2;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 72); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 40 * i) + 440LL);
    if ( v6 )
    {
      started = CTopLevelWindow::StartLivePreviewAnimation(v6, (v3 ^ 1u) + 1);
      v2 = started;
      if ( started < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x439u, 0LL);
        return v2;
      }
    }
  }
  return v2;
}
