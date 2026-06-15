/*
 * XREFs of ??1SystemEffectChainDescriptor@@QEAA@XZ @ 0x18000AC54
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VSystemEffectChainDescriptor@@@std@@EEAAXXZ @ 0x18000AC00 (-_Destroy@-$_Ref_count_obj2@VSystemEffectChainDescriptor@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall SystemEffectChainDescriptor::~SystemEffectChainDescriptor(SystemEffectChainDescriptor *this)
{
  std::_Ref_count_base *v2; // rcx

  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((char *)this + 56);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((char *)this + 40);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 4);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(this);
}
