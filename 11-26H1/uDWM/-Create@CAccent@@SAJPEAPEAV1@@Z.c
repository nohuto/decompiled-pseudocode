/*
 * XREFs of ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x18006E418
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800608C8 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180093AE0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800CE5E4 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAccent@@IEAA@XZ @ 0x18006E4E0 (--0CAccent@@IEAA@XZ.c)
 *     ?Initialize@CAccent@@MEAAJXZ @ 0x18006E560 (-Initialize@CAccent@@MEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CAccent::Create(struct CAccent **a1)
{
  int v2; // edi
  CAccent *v3; // rax
  struct CAccent *v4; // rbx
  CAccent *v6; // rax

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1Bu, 0LL);
    return (unsigned int)v2;
  }
  v6 = (CAccent *)DefaultHeap::AllocClear(0x1F8uLL);
  if ( v6 )
  {
    v3 = CAccent::CAccent(v6);
    v4 = v3;
    if ( v3 )
    {
      v2 = CAccent::Initialize(v3);
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
      goto LABEL_5;
    }
  }
  else
  {
    v4 = 0LL;
  }
  v2 = -2147024882;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x1Bu, 0LL);
  *a1 = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v2;
}
