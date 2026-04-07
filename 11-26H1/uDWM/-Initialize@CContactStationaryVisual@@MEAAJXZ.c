/*
 * XREFs of ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x180002D10
 * Callers:
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z @ 0x180003410 (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18002748C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180083310 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::Initialize(struct CImage **this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  bool v5; // r8
  int v6; // eax

  v2 = CTouchVisual::Initialize((CTouchVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x3Cu, 0LL);
  }
  else
  {
    v4 = CImage::Create(this + 37);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x3Eu, 0LL);
    }
    else
    {
      v6 = CContainerVisual::AddChild((CContainerVisual *)this, this[37], v5);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x3Fu, 0LL);
      }
      else
      {
        *((_DWORD *)this + 86) = 0;
        *((_BYTE *)this + 208) = 0;
        this[35] = 0LL;
        this[36] = 0LL;
      }
    }
  }
  return v3;
}
