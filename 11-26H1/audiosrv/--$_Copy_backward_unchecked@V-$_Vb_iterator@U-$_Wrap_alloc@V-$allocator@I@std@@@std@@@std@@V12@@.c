/*
 * XREFs of ??$_Copy_backward_unchecked@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x180133164
 * Callers:
 *     ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x18013F5B0 (-_Insert_x@-$vector@_NV-$allocator@_N@std@@@std@@QEAA_KV-$_Vb_const_iterator@U-$_Wrap_alloc@V-$a.c)
 * Callees:
 *     ??4?$_Vb_reference@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@QEAAAEAV01@_N@Z @ 0x18013555C (--4-$_Vb_reference@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@QEAAAEAV01@_N@Z.c)
 */

_OWORD *__fastcall std::_Copy_backward_unchecked<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
        _OWORD *a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  _QWORD *v5; // r11
  __int64 v6; // rsi
  __int64 v8; // r10
  _DWORD *v10; // rdx
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rcx
  _OWORD *result; // rax
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a2;
  v5 = a4;
  v6 = a2[1];
  v8 = *(_QWORD *)(a3 + 8);
  while ( 1 )
  {
    v10 = *(_DWORD **)a3;
    if ( v4 == *(_QWORD *)a3 && v6 == v8 )
      break;
    if ( v8 )
    {
      v11 = v8 - 1;
    }
    else
    {
      --v10;
      v11 = 31LL;
      *(_QWORD *)a3 = v10;
    }
    v12 = v5[1];
    *(_QWORD *)(a3 + 8) = v11;
    if ( v12 )
    {
      v13 = v12 - 1;
    }
    else
    {
      *v5 -= 4LL;
      v13 = 31LL;
    }
    v5[1] = v13;
    v15[0] = *v5;
    v15[1] = v13;
    LOBYTE(v10) = ((1 << v11) & *v10) != 0;
    std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int>>>::operator=(v15, v10);
  }
  result = a1;
  *a1 = *(_OWORD *)v5;
  return result;
}
