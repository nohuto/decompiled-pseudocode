/*
 * XREFs of ??1CCompositionBuffer@@UEAA@XZ @ 0x14004E398
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x14004E2D8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x1400A35F0 (--_GCCompositionBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ @ 0x14004E3D4 (-RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionBuffer::~CCompositionBuffer(CCompositionBuffer *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx

  *(_QWORD *)this = &CCompositionBuffer::`vftable';
  CCompositionBuffer::RemoveAllRealizations(this);
  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 37);
  if ( v2 )
    (**v2)(v2);
}
