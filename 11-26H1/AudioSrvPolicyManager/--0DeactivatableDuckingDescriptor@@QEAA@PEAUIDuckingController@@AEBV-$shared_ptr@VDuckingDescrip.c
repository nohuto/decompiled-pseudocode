/*
 * XREFs of ??0DeactivatableDuckingDescriptor@@QEAA@PEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@std@@@Z @ 0x180028134
 * Callers:
 *     _lambda_cc9b2092a4952ec42797be7e5e21ed8c_::operator() @ 0x18003F418 (_lambda_cc9b2092a4952ec42797be7e5e21ed8c_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall DeactivatableDuckingDescriptor::DeactivatableDuckingDescriptor(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax

  *a1 = &DeactivatableDuckingDescriptor::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a3[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  a1[1] = *a3;
  a1[2] = a3[1];
  a1[3] = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
