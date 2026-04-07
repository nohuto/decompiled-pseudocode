/*
 * XREFs of ?Create@CButtonVisual@@SAJPEAPEAV1@@Z @ 0x180027384
 * Callers:
 *     ?Initialize@CButton@@MEAAJXZ @ 0x18005D290 (-Initialize@CButton@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CImage@@IEAA@XZ @ 0x180027580 (--0CImage@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CButtonVisual::Create(struct CButtonVisual **a1)
{
  CImage *v2; // rax
  CImage *v3; // rbx
  int v4; // edi

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x7Au, 0LL);
    return (unsigned int)v4;
  }
  v2 = (CImage *)DefaultHeap::AllocClear(0xF8uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0xF8uLL);
    CImage::CImage(v3);
    *(_QWORD *)v3 = &CButtonVisual::`vftable'{for `CNineGridVisual'};
    *((_QWORD *)v3 + 26) = &CButtonVisual::`vftable'{for `CGraphicsResourceOwner'};
    *((_QWORD *)v3 + 30) = 0LL;
    v4 = (*(__int64 (__fastcall **)(CImage *))(*(_QWORD *)v3 + 8LL))(v3);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x7Au, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}
