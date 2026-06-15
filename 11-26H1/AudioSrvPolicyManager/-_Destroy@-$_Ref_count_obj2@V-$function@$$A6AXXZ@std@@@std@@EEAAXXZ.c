/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@V?$function@$$A6AXXZ@std@@@std@@EEAAXXZ @ 0x180024840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Ref_count_obj2<std::function<void (void)>>::_Destroy(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = a1 + 16;
  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != v2;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return result;
}
