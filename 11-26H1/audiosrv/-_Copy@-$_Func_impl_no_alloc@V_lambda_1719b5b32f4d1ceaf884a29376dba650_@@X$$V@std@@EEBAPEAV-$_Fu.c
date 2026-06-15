/*
 * XREFs of ?_Copy@?$_Func_impl_no_alloc@V_lambda_1719b5b32f4d1ceaf884a29376dba650_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800DE950
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc<_lambda_1719b5b32f4d1ceaf884a29376dba650_,void,>::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8

  *a2 = &std::_Func_impl_no_alloc<_lambda_1719b5b32f4d1ceaf884a29376dba650_,void,>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a2 + 2, (_QWORD *)(a1 + 16));
  return v2;
}
