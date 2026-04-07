/*
 * XREFs of ?Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z @ 0x1800AD778
 * Callers:
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800ADB70 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x180066D04 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopThumbnail::Create(struct CDesktopThumbnail **a1)
{
  CDesktopThumbnailBase *v1; // rax
  CDesktopThumbnailBase *v2; // rbx
  int v3; // edi

  v1 = (CDesktopThumbnailBase *)DefaultHeap::AllocClear(0x108uLL);
  v2 = v1;
  if ( v1 )
  {
    memset_0(v1, 0, 0x108uLL);
    CDesktopThumbnailBase::CDesktopThumbnailBase(v2);
    *(_QWORD *)v2 = &CDesktopThumbnail::`vftable';
    *((_QWORD *)v2 + 28) = 0LL;
    *((_QWORD *)v2 + 29) = 0LL;
    *((_QWORD *)v2 + 30) = 0LL;
    *((_DWORD *)v2 + 62) = 0;
    v3 = ((__int64 (__fastcall *)(CDesktopThumbnailBase *))*(&CDesktopThumbnail::`vftable' + 1))(v2);
    if ( v3 >= 0 )
    {
      CDesktopThumbnail::s_pThumbnailNoRef = v2;
      return 0;
    }
  }
  else
  {
    v2 = 0LL;
    v3 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x3Du, 0LL);
  CDesktopThumbnail::s_pThumbnailNoRef = 0LL;
  if ( v2 )
    CBaseObject::Release(v2);
  return (unsigned int)v3;
}
