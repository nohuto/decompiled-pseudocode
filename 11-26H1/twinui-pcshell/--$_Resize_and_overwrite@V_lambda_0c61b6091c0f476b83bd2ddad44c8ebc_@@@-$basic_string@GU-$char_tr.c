/*
 * XREFs of ??$_Resize_and_overwrite@V_lambda_0c61b6091c0f476b83bd2ddad44c8ebc_@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KV_lambda_0c61b6091c0f476b83bd2ddad44c8ebc_@@@Z @ 0x18030FCB8
 * Callers:
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x1800C58A8 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_3c42e42a79350c8a48dd4e272c8dbcce_@@$$V@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_3c42e42a79350c8a48dd4e272c8dbcce_@@@Z @ 0x18030F95C (--$_Reallocate_grow_by@V_lambda_3c42e42a79350c8a48dd4e272c8dbcce_@@$$V@-$basic_string@GU-$char_t.c)
 */

void *__fastcall std::wstring::_Resize_and_overwrite<_lambda_0c61b6091c0f476b83bd2ddad44c8ebc_>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rbp
  size_t v7; // rbx
  _WORD *v8; // rcx
  void *result; // rax

  v5 = a1;
  if ( a1[3] >= a2 )
    a1[2] = a2;
  else
    std::wstring::_Reallocate_grow_by<_lambda_3c42e42a79350c8a48dd4e272c8dbcce_,>((void **)a1, a2 - a1[2]);
  v6 = v5;
  if ( v5[3] > 7uLL )
    v6 = (_QWORD *)*v5;
  v7 = 2LL * *(_QWORD *)(a3 + 8);
  memcpy_0(v6, *(const void **)a3, v7);
  v8 = (_WORD *)((char *)v6 + v7);
  if ( *(_BYTE *)(a3 + 16) )
    *v8++ = 92;
  result = memcpy_0(v8, *(const void **)(a3 + 24), 2LL * *(_QWORD *)(a3 + 32));
  v5[2] = a2;
  if ( v5[3] > 7uLL )
    v5 = (_QWORD *)*v5;
  *((_WORD *)v5 + a2) = 0;
  return result;
}
