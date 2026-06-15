/*
 * XREFs of ??_EDeactivatableDuckingDescriptor@@UEAAPEAXI@Z @ 0x180018EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180018F10 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
DeactivatableDuckingDescriptor *__fastcall DeactivatableDuckingDescriptor::`vector deleting destructor'(
        DeactivatableDuckingDescriptor *this,
        char a2)
{
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx

  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *(_QWORD *)this = &IDuckingDescriptor::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
