/*
 * XREFs of ?RemoveWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800A8E38
 * Callers:
 *     ?OnWindowRemoved@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x1800A8B60 (-OnWindowRemoved@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Wi.c)
 *     ?ReparentWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z @ 0x1800A8F90 (-ReparentWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x18001075C (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180061B10 (--4-$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180093DAC (--4-$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$_Move_unchecked@PEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@PEAV123@00@Z @ 0x1800A7728 (--$_Move_unchecked@PEAV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV-$ComPtr@UCUIWin.c)
 */

__int64 *__fastcall CUIHierarchy::RemoveWindow(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 i; // rbx
  __int64 v7; // r13
  char *v8; // rbp
  __int64 *j; // rdi
  char *k; // rsi
  __int64 *v11; // rdi
  __int64 *v12; // rbp
  __int64 *m; // rsi
  __int64 v14; // rdi
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  for ( i = *(_QWORD *)(a1 + 16); i != *(_QWORD *)(a1 + 24); i += 8LL )
  {
    Microsoft::WRL::ComPtr<CUIWindow>::operator=(a2, (_QWORD *)i);
    if ( *(_QWORD *)(*a2 + 16) == a3 )
    {
      v7 = *(_QWORD *)(*a2 + 56);
      if ( v7 )
      {
        v8 = *(char **)(v7 + 72);
        for ( j = *(__int64 **)(v7 + 64); j != (__int64 *)v8 && *(_QWORD *)(*j + 16) != a3; ++j )
          ;
        if ( j != (__int64 *)v8 )
        {
          for ( k = (char *)(j + 1); k != v8; k += 8 )
          {
            if ( *(_QWORD *)(*(_QWORD *)k + 16LL) != a3 )
              Microsoft::WRL::ComPtr<CUIWindow>::operator=(j++, k);
          }
          if ( j != (__int64 *)v8 )
          {
            v11 = std::_Move_unchecked<Microsoft::WRL::ComPtr<CUIWindow> *,Microsoft::WRL::ComPtr<CUIWindow> *>(
                    v8,
                    *(char **)(v7 + 72),
                    j);
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v11, *(__int64 **)(v7 + 72));
            *(_QWORD *)(v7 + 72) = v11;
          }
        }
      }
      v12 = *(__int64 **)(*a2 + 72);
      for ( m = *(__int64 **)(*a2 + 64); m != v12; ++m )
      {
        v16 = *m;
        v14 = v16;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v16);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v14 + 56));
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      }
      std::_Move_unchecked<Microsoft::WRL::ComPtr<CUIWindow> *,Microsoft::WRL::ComPtr<CUIWindow> *>(
        (char *)(i + 8),
        *(char **)(a1 + 24),
        (__int64 *)i);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*(_QWORD *)(a1 + 24) - 8LL));
      *(_QWORD *)(a1 + 24) -= 8LL;
      return a2;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  }
  return a2;
}
