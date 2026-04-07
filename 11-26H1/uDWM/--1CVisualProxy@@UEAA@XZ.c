/*
 * XREFs of ??1CVisualProxy@@UEAA@XZ @ 0x18005CA8C
 * Callers:
 *     ??1CSpriteVisualProxy@@UEAA@XZ @ 0x18005CA0C (--1CSpriteVisualProxy@@UEAA@XZ.c)
 *     ??_GCContainerVisualProxy@@UEAAPEAXI@Z @ 0x18005CA40 (--_GCContainerVisualProxy@@UEAAPEAXI@Z.c)
 *     _CSpriteVisualProxy::CSpriteVisualProxy_::_1_::dtor$0 @ 0x1800E9085 (_CSpriteVisualProxy--CSpriteVisualProxy_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVisualProxy::~CVisualProxy(CVisualProxy *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CResourceProxy::~CResourceProxy(this);
}
