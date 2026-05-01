/*
 * XREFs of ?v_SendConsolidated@LegacyWindowWrapper@@EEAAXW4ConsolidatedState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180421E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LegacyWindowWrapper::v_SendConsolidated(__int64 a1, int a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  v4 = *(int *)(a1 + 296);
  if ( *(_DWORD *)(a1 + 296) )
  {
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 280) + 160LL))(
                     *(_QWORD *)(a1 + 280),
                     &v6);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, bool, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, v4, 2LL, a2 == 2, 0LL);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v6);
  }
}
