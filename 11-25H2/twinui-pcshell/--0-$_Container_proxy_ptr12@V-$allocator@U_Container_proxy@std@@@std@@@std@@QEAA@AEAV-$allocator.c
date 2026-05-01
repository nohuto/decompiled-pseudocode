/*
 * XREFs of ??0?$_Container_proxy_ptr12@V?$allocator@U_Container_proxy@std@@@std@@@std@@QEAA@AEAV?$allocator@U_Container_proxy@std@@@1@AEAU_Container_base12@1@@Z @ 0x1801FA318
 * Callers:
 *     ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z @ 0x1805593E4 (--0-$deque@_KV-$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>::_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v5; // rax

  *a1 = 0LL;
  a1[1] = a2;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  *a1 = v5;
  v5[1] = 0LL;
  *v5 = a3;
  *a3 = *a1;
  return a1;
}
