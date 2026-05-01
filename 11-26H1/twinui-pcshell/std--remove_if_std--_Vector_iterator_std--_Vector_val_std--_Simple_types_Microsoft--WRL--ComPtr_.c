/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISnappedWindow_________lambda_a1608a121236b09cf8aed0d49703ab26___ @ 0x1805A61EC
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18016C5A0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18020E5D4 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _lambda_a1608a121236b09cf8aed0d49703ab26_::operator() @ 0x1805A6C50 (_lambda_a1608a121236b09cf8aed0d49703ab26_--operator().c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISnappedWindow_________lambda_a1608a121236b09cf8aed0d49703ab26___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // rdi
  char *j; // rsi
  __int64 **result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( (unsigned __int8)lambda_a1608a121236b09cf8aed0d49703ab26_::operator()(a4, i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = (char *)(i + 1); j != (char *)a3; j += 8 )
    {
      if ( !(unsigned __int8)lambda_a1608a121236b09cf8aed0d49703ab26_::operator()(a4, j) )
        Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(i++, j);
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
