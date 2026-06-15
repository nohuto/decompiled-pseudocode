/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VDeactivatableDuckingDescriptor@@@std@@EEAAXXZ @ 0x1800184C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180018F10 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall std::_Ref_count_obj2<DeactivatableDuckingDescriptor>::_Destroy(_QWORD *a1)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx
  void **result; // rax

  v2 = a1[5];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (std::_Ref_count_base *)a1[4];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  result = &IDuckingDescriptor::`vftable';
  a1[2] = &IDuckingDescriptor::`vftable';
  return result;
}
