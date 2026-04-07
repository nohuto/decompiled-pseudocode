/*
 * XREFs of ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x180033510
 * Callers:
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z @ 0x18002FB94 (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180032300 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180054CA8 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CContactStationaryVisual::Initialize(struct CContainerVisualProxy **this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax

  v2 = CTouchVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x3Cu, 0LL);
  }
  else
  {
    v4 = CImage::Create(this + 41);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x3Eu, 0LL);
    }
    else
    {
      v5 = CContainerVisual::AddChild((CContainerVisual *)this, this[41]);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x3Fu, 0LL);
      }
      else
      {
        *((_DWORD *)this + 94) = 0;
        this[39] = 0LL;
        this[40] = 0LL;
        *((_BYTE *)this + 240) = 0;
      }
    }
  }
  return v3;
}
