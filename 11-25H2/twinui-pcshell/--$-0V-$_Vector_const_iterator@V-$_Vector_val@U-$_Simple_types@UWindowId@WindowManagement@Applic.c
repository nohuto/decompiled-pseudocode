/*
 * XREFs of ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x1802A5DEC
 * Callers:
 *     ??$?0UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@AEBV?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x1802A5DC4 (--$-0UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-$com_array@UWindowId@.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x1802D363D (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
        __int64 a1,
        const void *a2,
        __int64 a3)
{
  void *v3; // rsi
  size_t v4; // rbx
  __int64 v5; // rbp
  LPVOID v8; // rax
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v4 = a3 - (_QWORD)a2;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  v5 = (a3 - (__int64)a2) >> 2;
  if ( (_DWORD)v5 )
  {
    v8 = _Platform_CoTaskMemAlloc(4LL * (unsigned int)v5);
    *(_QWORD *)a1 = v8;
    if ( !v8 )
    {
      pExceptionObject[2] = 0LL;
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      throw (std::bad_alloc *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 8) = v5;
    v3 = v8;
  }
  memmove_0(v3, a2, v4);
  return a1;
}
