/*
 * XREFs of ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180077C88
 * Callers:
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x180077BE0 (-Initialize@CLivePreview@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x1800211D0 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CLivePreview::_EnsureResources(struct CContainerVisual **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = CContainerVisual::Create(this + 42);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x571u, 0LL);
  }
  else
  {
    v4 = CContainerVisual::Create(this + 43);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x572u, 0LL);
    }
    else
    {
      v5 = CContainerVisual::Create(this + 44);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x573u, 0LL);
      }
      else
      {
        v6 = CCanvasVisual::Create(this + 45);
        v3 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x574u, 0LL);
      }
    }
  }
  return v3;
}
