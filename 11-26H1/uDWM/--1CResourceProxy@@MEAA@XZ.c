/*
 * XREFs of ??1CResourceProxy@@MEAA@XZ @ 0x180084E68
 * Callers:
 *     ??_ECRotateTransformProxy@@UEAAPEAXI@Z @ 0x18004D140 (--_ECRotateTransformProxy@@UEAAPEAXI@Z.c)
 *     ??_GCVisualProxy@@UEAAPEAXI@Z @ 0x180054760 (--_GCVisualProxy@@UEAAPEAXI@Z.c)
 *     ??1CVisualProxy@@UEAA@XZ @ 0x18005CA8C (--1CVisualProxy@@UEAA@XZ.c)
 *     ??_GCBaseRenderTargetProxy@@UEAAPEAXI@Z @ 0x18009A3C0 (--_GCBaseRenderTargetProxy@@UEAAPEAXI@Z.c)
 *     _CVisualProxy::CVisualProxy_::_1_::dtor$0 @ 0x1800E99AE (_CVisualProxy--CVisualProxy_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CResourceProxy::~CResourceProxy(CResourceProxy *this)
{
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 96LL))(
         *((_QWORD *)this + 2),
         *((unsigned int *)this + 6));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\resource.cpp",
      (const char *)(unsigned int)v2,
      v3);
  CBaseObject::~CBaseObject(this);
}
