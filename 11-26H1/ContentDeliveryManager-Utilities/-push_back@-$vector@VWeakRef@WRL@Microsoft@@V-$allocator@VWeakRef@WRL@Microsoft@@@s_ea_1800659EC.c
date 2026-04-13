/*
 * XREFs of ?push_back@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800659EC
 * Callers:
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180063F20 (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 * Callees:
 *     ?_Reserve@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180065330 (-_Reserve@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::vector<Microsoft::WRL::WeakRef>::push_back(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // r14
  unsigned __int64 v5; // rcx
  bool v6; // al
  _QWORD *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  _QWORD *result; // rax
  __int64 v11; // rcx

  v4 = a1 + 1;
  v5 = a1[1];
  v6 = (unsigned __int64)a2 < v5 && *a1 <= (unsigned __int64)a2;
  v7 = v4;
  if ( v6 )
  {
    v8 = ((__int64)a2 - *a1) >> 3;
    if ( v5 == a1[2] )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Reserve((__int64)a1);
      v7 = a1 + 1;
    }
    v9 = *(_QWORD *)(*a1 + 8 * v8);
    result = (_QWORD *)*v4;
    *(_QWORD *)*v4 = v9;
    if ( v9 )
      result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    if ( v5 == a1[2] )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Reserve((__int64)a1);
      v7 = a1 + 1;
    }
    v11 = *a2;
    result = (_QWORD *)*v4;
    *(_QWORD *)*v4 = *a2;
    if ( v11 )
      result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  *v7 += 8LL;
  return result;
}
