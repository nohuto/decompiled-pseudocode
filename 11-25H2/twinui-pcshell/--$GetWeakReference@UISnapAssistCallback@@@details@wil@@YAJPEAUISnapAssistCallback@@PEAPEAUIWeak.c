/*
 * XREFs of ??$GetWeakReference@UISnapAssistCallback@@@details@wil@@YAJPEAUISnapAssistCallback@@PEAPEAUIWeakReference@@@Z @ 0x1802C5E2C
 * Callers:
 *     ??$com_weak_copy@AEAPEAUISnapAssistCallback@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAUISnapAssistCallback@@@Z @ 0x1800BD9F4 (--$com_weak_copy@AEAPEAUISnapAssistCallback@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_except.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::details::GetWeakReference<ISnapAssistCallback>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall **v3)(_QWORD, GUID *, __int64 *); // rax
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *a1;
  v6 = 0LL;
  v4 = (*v3)(a1, &_uuidof__AUIWeakReferenceSource_Details_Platform__, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 24LL))(v6, a2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v4;
}
