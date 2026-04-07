/*
 * XREFs of ?Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z @ 0x1800DAAAC
 * Callers:
 *     ?GetRootGlobalTimeTrackVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DB214 (-GetRootGlobalTimeTrackVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSolidRectangleVisual@@QEAA@XZ @ 0x18004FF40 (--0CSolidRectangleVisual@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalTimeTrackVisual::Create(struct CGlobalTimeTrackVisual **a1)
{
  int v2; // edi
  CSolidRectangleVisual *v3; // rax
  CSolidRectangleVisual *v4; // rbx

  if ( a1 )
  {
    v3 = (CSolidRectangleVisual *)DefaultHeap::AllocClear(0xD8uLL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0xD8uLL);
      CSolidRectangleVisual::CSolidRectangleVisual(v4);
      *(_QWORD *)v4 = &CGlobalTimeTrackVisual::`vftable';
      *((_QWORD *)v4 + 26) = 0LL;
      v2 = ((__int64 (__fastcall *)(CSolidRectangleVisual *))*(&CGlobalTimeTrackVisual::`vftable' + 1))(v4);
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v4 = 0LL;
      v2 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 7u, 0LL);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 7u, 0LL);
  }
  return (unsigned int)v2;
}
