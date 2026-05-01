/*
 * XREFs of ?GetCachedWindowWrapper@UwpWindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180183AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall UwpWindowEventDispatcher::GetCachedWindowWrapper(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v5; // rsi
  _QWORD *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *result; // rax
  char v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+10h]

  v11 = a2;
  *a2 = 0LL;
  v5 = *(_QWORD **)(a1 + 368);
  v6 = *(_QWORD **)(a1 + 376);
  try
  {
    while ( v5 != v6 )
    {
      if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v5 + 288LL))(*v5, &v10) == a3 )
      {
        v7 = *v5;
        v8 = *a2;
        *a2 = *v5;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        break;
      }
      ++v5;
    }
    result = a2;
  }
  catch ( ... )
  {
    result = v11;
    *v11 = 0LL;
  }
  return result;
}
