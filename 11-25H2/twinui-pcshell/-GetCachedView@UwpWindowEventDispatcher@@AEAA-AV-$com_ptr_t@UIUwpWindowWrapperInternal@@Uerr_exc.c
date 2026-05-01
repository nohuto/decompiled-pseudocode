/*
 * XREFs of ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800F8370
 * Callers:
 *     ?ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800F7720 (-ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEn.c)
 *     _lambda_df88ed69ec619d4baf0e159409266ddd_::operator() @ 0x18041768C (_lambda_df88ed69ec619d4baf0e159409266ddd_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall UwpWindowEventDispatcher::GetCachedView(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // rax
  char v10; // di
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v6 = *(_QWORD **)(a1 + 384);
  v7 = *(_QWORD **)(a1 + 392);
  while ( v6 != v7 && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 256LL))(*v6) != a3 )
    ++v6;
  if ( v6 == *(_QWORD **)(a1 + 392) )
  {
    v9 = (__int64 *)&v13;
    v8 = 0LL;
    v10 = 6;
  }
  else
  {
    v8 = *v6;
    if ( *v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*v6);
    v9 = &v12;
    v10 = 5;
  }
  *v9 = 0LL;
  *a2 = v8;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    if ( v13 )
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  }
  if ( (v10 & 1) != 0 && v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return a2;
}
