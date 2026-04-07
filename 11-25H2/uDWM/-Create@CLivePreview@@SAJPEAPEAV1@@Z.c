/*
 * XREFs of ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x18008C6C4
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180081384 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x1800856C0 (-Initialize@CLivePreview@@MEAAJXZ.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x18008D844 (--0CLivePreview@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CLivePreview::Create(struct CLivePreview **a1)
{
  int v2; // edi
  CLivePreview *v3; // rax
  struct CContainerVisualProxy **v4; // rax
  struct CLivePreview *v5; // rbx

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x5Bu, 0LL);
    return (unsigned int)v2;
  }
  v3 = (CLivePreview *)DefaultHeap::AllocClear(0x208uLL);
  if ( v3 )
  {
    v4 = (struct CContainerVisualProxy **)CLivePreview::CLivePreview(v3);
    v5 = (struct CLivePreview *)v4;
    if ( v4 )
    {
      v2 = CLivePreview::Initialize(v4);
      if ( v2 >= 0 )
      {
        *a1 = v5;
        return 0;
      }
      goto LABEL_9;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v2 = -2147024882;
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x5Bu, 0LL);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v2;
}
