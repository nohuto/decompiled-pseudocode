/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f64966f8cf2f955615770413beca1be5___::Run @ 0x18043E270
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f64966f8cf2f955615770413beca1be5___::Run(
        __int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // r8
  int v5; // ebx
  int v6; // ecx
  int *result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 280LL) + 144LL))(
                   *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL),
                   &v9);
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v2 + 40LL))(*v2, &v8);
  LOBYTE(v4) = **(_DWORD **)(a1 + 24) == 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v3 + 216LL))(
         *v3,
         *(unsigned int *)(*(_QWORD *)(a1 + 16) + 352LL),
         v4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
  v6 = 0;
  if ( v5 < 0 )
    v6 = v5;
  result = *(int **)(a1 + 32);
  *result = v6;
  return result;
}
