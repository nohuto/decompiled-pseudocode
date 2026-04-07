/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x180031930
 * Callers:
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180033418 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180056454 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ??0CBitmapSource@@IEAA@XZ @ 0x180007D14 (--0CBitmapSource@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x180031A04 (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x180031A64 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(HICON a1, struct CBitmapSource **a2)
{
  CBitmapSource *v4; // rax
  CBitmapSource *v5; // rax
  CBaseObject *v6; // rsi
  int v7; // edi
  unsigned int v9; // eax

  v4 = (CBitmapSource *)DefaultHeap::AllocClear(0x68uLL);
  if ( !v4 || (v5 = CBitmapSource::CBitmapSource(v4), (v6 = v5) == 0LL) )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x72u, 0LL);
    return (unsigned int)v7;
  }
  v7 = CBitmapSource::Initialize(v5);
  if ( v7 < 0 )
  {
    v9 = 116;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v9, 0LL);
    CBaseObject::Release(v6);
    return (unsigned int)v7;
  }
  v7 = CBitmapSource::Update(v6, a1);
  if ( v7 < 0 )
  {
    v9 = 118;
    goto LABEL_9;
  }
  *a2 = v6;
  return (unsigned int)v7;
}
