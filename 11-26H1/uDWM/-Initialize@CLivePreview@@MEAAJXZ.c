/*
 * XREFs of ?Initialize@CLivePreview@@MEAAJXZ @ 0x180077BE0
 * Callers:
 *     ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x18007B3EC (-Create@CLivePreview@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x180005BCC (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180021BA0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180077C88 (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 *     ??2CWindowTarget@@KAPEAX_K@Z @ 0x180085B1C (--2CWindowTarget@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CLivePreview::Initialize(struct CContainerVisualProxy **this)
{
  int v2; // eax
  unsigned __int64 v3; // rcx
  unsigned int v4; // ebx
  CLivePreviewTimeline *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v2 = CContainerVisual::Initialize(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    v9 = 65;
    goto LABEL_9;
  }
  v5 = (CLivePreviewTimeline *)CWindowTarget::operator new(v3);
  if ( v5 )
    v5 = CLivePreviewTimeline::CLivePreviewTimeline(v5, v6, v7);
  this[41] = v5;
  if ( v5 )
  {
    v2 = CLivePreview::_EnsureResources((CLivePreview *)this);
    v4 = v2;
    if ( v2 >= 0 )
      return v4;
    v9 = 70;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v9, 0LL);
    return v4;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x44u, 0LL);
  return v4;
}
