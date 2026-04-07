/*
 * XREFs of ?Initialize@CButton@@MEAAJXZ @ 0x180011CB0
 * Callers:
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x180011E64 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CAtlasButton@@SAJPEAPEAV1@@Z @ 0x180003F8C (-Create@CAtlasButton@@SAJPEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x180005B10 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180010EF0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?AddAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@@Z @ 0x18001E118 (-AddAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@@Z.c)
 */

__int64 __fastcall CButton::Initialize(struct CContainerVisualProxy **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  struct CAtlasedImage **v5; // rsi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  struct CAtlasedImage *v9; // rcx
  struct _MARGINS v11; // [rsp+30h] [rbp-18h] BYREF

  v2 = CContainerVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x29u, 0LL);
  }
  else
  {
    v4 = CAtlasButton::Create(this + 31);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x2Bu, 0LL);
    }
    else
    {
      v5 = this + 32;
      v6 = CAtlasButton::Create(this + 32);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x2Cu, 0LL);
      }
      else
      {
        v7 = CAtlasedRectsVisual::AddAtlasImage((CAtlasedRectsVisual *)this, *v5);
        v3 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x30u, 0LL);
        }
        else
        {
          v8 = CAtlasedRectsVisual::AddAtlasImage((CAtlasedRectsVisual *)this, this[31]);
          v3 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x31u, 0LL);
          }
          else
          {
            v9 = *v5;
            v11 = 0LL;
            CAtlasedImage::SetInsetFromParent((struct _MARGINS *)v9, &v11);
          }
        }
      }
    }
  }
  return v3;
}
