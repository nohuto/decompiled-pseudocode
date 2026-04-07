/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180030AA8
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180014634 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180058914 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBitmapSource@@IEAA@XZ @ 0x180007D14 (--0CBitmapSource@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x180031A04 (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x180031D20 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(struct IWICBitmap *a1, const struct _MARGINS *a2, struct CBitmapSource **a3)
{
  CBitmapSource *v5; // rax
  CBitmapSource *v6; // rax
  CBaseObject *v7; // rsi
  int v8; // edi
  unsigned int v10; // eax

  v5 = (CBitmapSource *)DefaultHeap::AllocClear(0x68uLL);
  if ( !v5 || (v6 = CBitmapSource::CBitmapSource(v5), (v7 = v6) == 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x8Bu, 0LL);
    return (unsigned int)v8;
  }
  v8 = CBitmapSource::Initialize(v6);
  if ( v8 < 0 )
  {
    v10 = 141;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v10, 0LL);
    CBaseObject::Release(v7);
    return (unsigned int)v8;
  }
  v8 = CBitmapSource::Update(v7, a1);
  if ( v8 < 0 )
  {
    v10 = 143;
    goto LABEL_9;
  }
  *a3 = v7;
  return (unsigned int)v8;
}
