/*
 * XREFs of ??1CPathData@@MEAA@XZ @ 0x1800502C8
 * Callers:
 *     ??_GCPathData@@MEAAPEAXI@Z @ 0x180050050 (--_GCPathData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?load@?$_Atomic_storage@PEAUID2D1PathGeometry@@$07@std@@QEBAPEAUID2D1PathGeometry@@W4memory_order@2@@Z @ 0x180050A1C (-load@-$_Atomic_storage@PEAUID2D1PathGeometry@@$07@std@@QEBAPEAUID2D1PathGeometry@@W4memory_orde.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPathData::~CPathData(CPathData *this)
{
  __int64 v2; // rax

  *(_QWORD *)this = &CPathData::`vftable';
  v2 = std::_Atomic_storage<ID2D1PathGeometry *,8>::load((char *)this + 56);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  std::vector<unsigned char>::_Tidy((char *)this + 16);
}
