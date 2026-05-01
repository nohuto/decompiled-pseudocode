/*
 * XREFs of ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804278CC
 * Callers:
 *     ?v_HandleActivationRequested@LegacyUwpWindowWrapper@@EEAAXXZ @ 0x1804279F0 (-v_HandleActivationRequested@LegacyUwpWindowWrapper@@EEAAXXZ.c)
 *     ?v_OnWindowCreated@LegacyUwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x180427A50 (-v_OnWindowCreated@LegacyUwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804352C0 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180073B00 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LegacyUwpWindowWrapper::SendVisibilityToWindow(__int64 a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 224LL))(*(_QWORD *)(a1 + 288));
  v4 = *(int *)(a1 + 304);
  v5 = 0LL;
  if ( *(_BYTE *)(a1 + 617) && *(_DWORD *)(a1 + 304) && (*(_BYTE *)(a1 + 364) & 0x10) == 0 )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 168LL))(
                     *(_QWORD *)(a1 + 288),
                     &v7);
    LOBYTE(v5) = a2 == 1;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 24LL))(*v6, v4, 0LL, 0LL, v5);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
    UwpWindowReadyState::VisibilityChanged(a1 + 368, 0, a2);
    UwpWindowReadyState::VisibilityChanged(a1 + 368, 1, a2);
  }
}
