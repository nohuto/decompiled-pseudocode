/*
 * XREFs of ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x180196098
 * Callers:
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18006C234 (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 *     ??$_Move_unchecked@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@@std@@YAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@00@Z @ 0x1800FD0B0 (--$_Move_unchecked@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@@std@@YAPEAU.c)
 *     ?RemovePendingActivationResume@UwpWindowEventDispatcher@@AEAAXK@Z @ 0x1800FD13C (-RemovePendingActivationResume@UwpWindowEventDispatcher@@AEAAXK@Z.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_6af174294f94e7bf6db82c2326726555___ @ 0x180416DB8 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_UwpWindowEventDispatche.c)
 * Callees:
 *     ??4?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801574A8 (--4-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall UwpWindowEventDispatcher::PendingActivationResumeData::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = *a2;
  *a2 = 0LL;
  v5 = *a1;
  *a1 = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=(a1 + 1, a2 + 1);
  a1[2] = a2[2];
  *((_DWORD *)a1 + 6) = *((_DWORD *)a2 + 6);
  return a1;
}
