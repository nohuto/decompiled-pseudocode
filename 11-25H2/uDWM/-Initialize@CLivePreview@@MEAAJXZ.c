/*
 * XREFs of ?Initialize@CLivePreview@@MEAAJXZ @ 0x1800856C0
 * Callers:
 *     ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x18008C6C4 (-Create@CLivePreview@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180010EF0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x1800490A4 (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180085768 (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CLivePreview::Initialize(struct CContainerVisualProxy **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CLivePreviewTimeline *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v2 = CContainerVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v8 = 75;
    goto LABEL_9;
  }
  v4 = (CLivePreviewTimeline *)DefaultHeap::AllocClear(0x88uLL);
  if ( v4 )
    v4 = CLivePreviewTimeline::CLivePreviewTimeline(v4, v5, v6);
  this[49] = v4;
  if ( v4 )
  {
    v2 = CLivePreview::_EnsureResources((CLivePreview *)this);
    v3 = v2;
    if ( v2 >= 0 )
      return v3;
    v8 = 80;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v8, 0LL);
    return v3;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x4Eu, 0LL);
  return v3;
}
