/*
 * XREFs of ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x180209088
 * Callers:
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180209034 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x18028DEBC (--$_Move_backward_unchecked@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_si_ea_18028DEBC.c)
 *     ??$_Move_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x18028DF68 (--$_Move_unchecked@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_.c)
 *     ?pop_back@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18028E6D8 (-pop_back@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

__int64 **__fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v5; // rdx
  __int64 *v7; // rax
  __int64 *v8; // r10
  __int64 *v9; // rcx
  __int64 *v10; // r11
  unsigned __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 *v15; // rcx
  __int64 **result; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-28h]
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v22; // [rsp+48h] [rbp-18h]
  _BYTE v23[16]; // [rsp+50h] [rbp-10h] BYREF

  v5 = *(__int64 **)(a3 + 16);
  if ( a1 )
    v7 = *(__int64 **)a1;
  else
    v7 = 0LL;
  v8 = *(__int64 **)(a4 + 16);
  if ( a1 )
    v9 = *(__int64 **)a1;
  else
    v9 = 0LL;
  v10 = *(__int64 **)(a1 + 24);
  v11 = (char *)v5 - (char *)v10;
  v12 = (char *)v8 - (char *)v5;
  if ( v8 == v5 )
  {
    a2[2] = v5;
  }
  else
  {
    if ( v7 )
      v13 = *v7;
    else
      v13 = 0LL;
    if ( v9 )
      v14 = *v9;
    else
      v14 = 0LL;
    v15 = (__int64 *)((char *)v10 + *(_QWORD *)(a1 + 32));
    v18[0] = v14;
    v18[1] = v8;
    if ( v11 >= (char *)v15 - (char *)v8 )
    {
      v21 = v13;
      v22 = v5;
      v20 = v15;
      v19 = a1;
      ((void (__fastcall *)(_BYTE *, _QWORD *, __int64 *, __int64 *))std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>)(
        v23,
        v18,
        &v19,
        &v21);
      do
      {
        std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::pop_back(a1);
        --v12;
      }
      while ( v12 );
    }
    else
    {
      v19 = v13;
      v20 = v5;
      v21 = a1;
      v22 = v10;
      ((void (__fastcall *)(_BYTE *, __int64 *, __int64 *, _QWORD *))std::_Move_backward_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>)(
        v23,
        &v21,
        &v19,
        v18);
      do
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * ((*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 24) >> 1))) + 8 * (*(_QWORD *)(a1 + 24) & 1LL)));
        if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
          *(_QWORD *)(a1 + 24) = 0LL;
        else
          ++*(_QWORD *)(a1 + 24);
        --v12;
      }
      while ( v12 );
    }
    v7 = *(__int64 **)a1;
    a2[2] = (__int64 *)(v11 + *(_QWORD *)(a1 + 24));
  }
  *a2 = v7;
  result = a2;
  a2[1] = 0LL;
  return result;
}
