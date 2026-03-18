/*
 * XREFs of ??1CCursorVisual@@MEAA@XZ @ 0x18026509C
 * Callers:
 *     ??_GCCursorVisual@@MEAAPEAXI@Z @ 0x180265180 (--_GCCursorVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z @ 0x1802341D4 (-UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z.c)
 *     ?ClearVisual@CCursorState@@QEAAXXZ @ 0x1802912E8 (-ClearVisual@CCursorState@@QEAAXXZ.c)
 */

void __fastcall CCursorVisual::~CCursorVisual(CCursorVisual *this)
{
  __int64 *v2; // rdi
  CCursorState *v3; // rcx
  void *v4; // rcx

  v2 = (__int64 *)((char *)this + 696);
  *(_QWORD *)this = &CCursorVisual::`vftable';
  v3 = (CCursorState *)*((_QWORD *)this + 87);
  if ( v3 )
  {
    CCursorState::ClearVisual(v3);
    CGlobalComposition::UnregisterCursorVisual(*((CGlobalComposition **)this + 3), this);
  }
  v4 = (void *)*((_QWORD *)this + 89);
  if ( v4 )
  {
    std::_Deallocate<16>(v4, 8 * ((__int64)(*((_QWORD *)this + 91) - (_QWORD)v4) >> 3));
    *((_QWORD *)this + 89) = 0LL;
    *((_QWORD *)this + 90) = 0LL;
    *((_QWORD *)this + 91) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v2);
  CVisual::~CVisual((struct CResource **)this);
}
