/*
 * XREFs of ??1SystemEffectDescriptor@@QEAA@XZ @ 0x18000AC10
 * Callers:
 *     ??1EffectPack@@QEAA@XZ @ 0x18000AAF8 (--1EffectPack@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAXXZ @ 0x180010CC0 (-RemoveAll@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqual.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall SystemEffectDescriptor::~SystemEffectDescriptor(SystemEffectDescriptor *this)
{
  std::_Ref_count_base *v2; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll((char *)this + 32);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(this);
}
