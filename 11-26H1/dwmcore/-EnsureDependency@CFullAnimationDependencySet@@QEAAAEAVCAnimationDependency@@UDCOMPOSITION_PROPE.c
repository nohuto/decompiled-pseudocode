/*
 * XREFs of ?EnsureDependency@CFullAnimationDependencySet@@QEAAAEAVCAnimationDependency@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18018FAAC
 * Callers:
 *     ?AddAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z @ 0x18010E554 (-AddAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?AddAnimationConsumer@CResource@@QEAAXPEAVCBaseExpression@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18018F990 (-AddAnimationConsumer@CResource@@QEAAXPEAVCBaseExpression@@UDCOMPOSITION_PROPERTY_ID@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCAnimationDependency@@@std@@@std@@YAXPEAVCAnimationDependency@@QEAV1@AEAV?$allocator@VCAnimationDependency@@@0@@Z @ 0x18004F930 (--$_Destroy_range@V-$allocator@VCAnimationDependency@@@std@@@std@@YAXPEAVCAnimationDependency@@Q.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCAnimationDependency@@V?$allocator@VCAnimationDependency@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18018FB44 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCAnimationDependency@@V-$allocator@VCAnim.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCAnimationDependency@@@std@@@std@@YAPEAVCAnimationDependency@@PEAV1@_KAEAV?$allocator@VCAnimationDependency@@@0@@Z @ 0x18018FC64 (--$_Uninitialized_value_construct_n@V-$allocator@VCAnimationDependency@@@std@@@std@@YAPEAVCAnima.c)
 */

__int64 __fastcall CFullAnimationDependencySet::EnsureDependency(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  CAnimationDependency *v8; // rbx

  v2 = a1 + 8;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (*(_QWORD *)(a1 + 16) - v4) >> 4;
  if ( a2 >= v5 )
  {
    v6 = a2 + 1;
    if ( v6 < v5 )
    {
      v8 = (CAnimationDependency *)(v4 + 16 * v6);
      std::_Destroy_range<std::allocator<CAnimationDependency>>(v8, *(CAnimationDependency **)(v2 + 8));
      *(_QWORD *)(v2 + 8) = v8;
    }
    else if ( v6 > v5 )
    {
      if ( v6 <= (*(_QWORD *)(v2 + 16) - v4) >> 4 )
        *(_QWORD *)(v2 + 8) = std::_Uninitialized_value_construct_n<std::allocator<CAnimationDependency>>(*(CAnimationDependency **)(v2 + 8));
      else
        std::vector<CAnimationDependency>::_Resize_reallocate<std::_Value_init_tag>(v2);
    }
  }
  return *(_QWORD *)v2 + 16 * v3;
}
