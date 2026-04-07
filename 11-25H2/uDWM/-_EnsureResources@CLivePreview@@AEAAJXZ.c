/*
 * XREFs of ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180085768
 * Callers:
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x1800856C0 (-Initialize@CLivePreview@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18001F784 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x1800211D8 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?CreateDoubleResourceProxy@CCompositor@@QEAAJPEAPEAVCDoubleResourceProxy@@@Z @ 0x18009A5D0 (-CreateDoubleResourceProxy@CCompositor@@QEAAJPEAPEAVCDoubleResourceProxy@@@Z.c)
 */

__int64 __fastcall CLivePreview::_EnsureResources(struct CDoubleResourceProxy **this)
{
  int DoubleResourceProxy; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  DoubleResourceProxy = CCompositor::CreateDoubleResourceProxy(
                          *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                          this + 50);
  v3 = DoubleResourceProxy;
  if ( DoubleResourceProxy < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DoubleResourceProxy, 0x5FFu, 0LL);
  }
  else
  {
    v4 = CCompositor::CreateDoubleResourceProxy(
           *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
           this + 51);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x600u, 0LL);
    }
    else
    {
      v5 = CContainerVisual::Create(this + 52);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x602u, 0LL);
      }
      else
      {
        v6 = CContainerVisual::Create(this + 53);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x603u, 0LL);
        }
        else
        {
          v7 = CContainerVisual::Create(this + 54);
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x604u, 0LL);
          }
          else
          {
            v8 = CRenderDataVisual::Create(this + 55);
            v3 = v8;
            if ( v8 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x605u, 0LL);
          }
        }
      }
    }
  }
  return v3;
}
