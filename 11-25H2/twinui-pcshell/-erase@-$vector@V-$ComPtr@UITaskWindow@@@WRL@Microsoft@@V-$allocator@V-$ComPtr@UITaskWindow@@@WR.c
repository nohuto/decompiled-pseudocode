/*
 * XREFs of ?erase@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x18029E788
 * Callers:
 *     ?OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18029E6F0 (-OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801B9298 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  char *v3; // rbp
  char *i; // rdi
  _QWORD *result; // rax

  v3 = *(char **)(a1 + 8);
  for ( i = (char *)(a3 + 8); i != v3; i += 8 )
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)i - 1, i);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
