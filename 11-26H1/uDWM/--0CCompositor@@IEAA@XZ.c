/*
 * XREFs of ??0CCompositor@@IEAA@XZ @ 0x180058CE8
 * Callers:
 *     ?Create@CCompositor@@SAJPEAPEAV1@@Z @ 0x180058C04 (-Create@CCompositor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CCompositor *__fastcall CCompositor::CCompositor(CCompositor *this)
{
  _QWORD *v1; // rcx
  CCompositor *v2; // rdx

  CBaseObject::CBaseObject((CCompositor *)((char *)this + 8));
  *v1 = &CCompositor::`vftable'{for `CBaseObject'};
  *(_QWORD *)v2 = &CCompositor::`vftable'{for `Windows::UI::Composition::IInteropCompositorPartnerCallback'};
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  return v2;
}
