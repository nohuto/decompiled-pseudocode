/*
 * XREFs of ?Create@CColorPrimitive@@SAJPEAPEAV1@@Z @ 0x1800BCCC0
 * Callers:
 *     ?ClonePrimitive@CColorPrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z @ 0x1800BCAD0 (-ClonePrimitive@CColorPrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800C9F88 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorPrimitive::Create(struct CColorPrimitive **a1)
{
  int v2; // edi
  char *v3; // rax
  char *v4; // rbx

  if ( a1 )
  {
    v3 = (char *)DefaultHeap::AllocClear(0x48uLL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0x48uLL);
      CBaseObject::CBaseObject((CBaseObject *)v4);
      *((_QWORD *)v4 + 2) = 0LL;
      *(_QWORD *)v4 = &CColorPrimitive::`vftable';
      *(_OWORD *)(v4 + 56) = 0LL;
      v2 = ((__int64 (*)(void))*(&CColorPrimitive::`vftable' + 3))();
      if ( v2 >= 0 )
      {
        *a1 = (struct CColorPrimitive *)v4;
        return 0;
      }
    }
    else
    {
      v4 = 0LL;
      v2 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x62u, 0LL);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release((CBaseObject *)v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x62u, 0LL);
  }
  return (unsigned int)v2;
}
