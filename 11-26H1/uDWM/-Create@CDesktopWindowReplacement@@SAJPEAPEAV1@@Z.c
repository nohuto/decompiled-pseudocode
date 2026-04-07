/*
 * XREFs of ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x18004FD28
 * Callers:
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z @ 0x1800E012C (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSolidRectangleVisual@@QEAA@XZ @ 0x18004FF40 (--0CSolidRectangleVisual@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopWindowReplacement::Create(struct CDesktopWindowReplacement **a1)
{
  CSolidRectangleVisual *v2; // rax
  CSolidRectangleVisual *v3; // rbx
  int v4; // edi

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x440u, 0LL);
    return (unsigned int)v4;
  }
  v2 = (CSolidRectangleVisual *)DefaultHeap::AllocClear(0xD0uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0xD0uLL);
    CSolidRectangleVisual::CSolidRectangleVisual(v3);
    *(_QWORD *)v3 = &CSolidRectangleVisual::`vftable';
    v4 = ((__int64 (__fastcall *)(CSolidRectangleVisual *))*(&CSolidRectangleVisual::`vftable' + 1))(v3);
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
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x440u, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}
