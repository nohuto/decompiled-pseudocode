/*
 * XREFs of std::forward_list_wil::com_ptr_t_CProcess_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CProcess_wil::err_returncode_policy_____::remove_if__lambda_f12aaf106d0879da545a13c0b04fcb63___ @ 0x180043154
 * Callers:
 *     _lambda_8a34b5a072e294654496d34c017ecfd7_::operator() @ 0x180043880 (_lambda_8a34b5a072e294654496d34c017ecfd7_--operator().c)
 * Callees:
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180043588 (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil.c)
 */

__int64 __fastcall std::forward_list_wil::com_ptr_t_CProcess_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CProcess_wil::err_returncode_policy_____::remove_if__lambda_f12aaf106d0879da545a13c0b04fcb63___(
        _QWORD **a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v3; // rax
  __int64 *v4; // r9
  _BYTE *v5; // r10
  _QWORD **v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v9; // [rsp+30h] [rbp-18h]

  v7 = a1;
  v9 = &v8;
  v3 = *a1;
  v4 = a2;
  v8 = 0LL;
  if ( v3 )
  {
    v5 = (_BYTE *)*a2;
    do
    {
      if ( *v5 || (a2 = (__int64 *)v4[1], a3 = (__int64 *)*a2, v3[1] != *a2) )
      {
        a1 = (_QWORD **)v3;
        v3 = (_QWORD *)*v3;
      }
      else
      {
        a3 = *a1;
        v3 = (_QWORD *)**a1;
        *a3 = 0LL;
        *a1 = v3;
        a2 = v9;
        *v9 = (__int64)a3;
        v9 = a3;
      }
    }
    while ( v3 );
  }
  return ((__int64 (__fastcall *)(_QWORD ***, __int64 *, __int64 *, __int64 *))std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op)(
           &v7,
           a2,
           a3,
           v4);
}
