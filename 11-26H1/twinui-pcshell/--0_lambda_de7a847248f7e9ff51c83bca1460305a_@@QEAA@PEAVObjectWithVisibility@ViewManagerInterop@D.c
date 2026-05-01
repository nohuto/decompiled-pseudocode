/*
 * XREFs of ??0_lambda_de7a847248f7e9ff51c83bca1460305a_@@QEAA@PEAVObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@AEBV?$ComPtr@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@AEBV?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@89@@Z @ 0x1802FBBB0
 * Callers:
 *     ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x18006547C (-RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

_QWORD *__fastcall _lambda_de7a847248f7e9ff51c83bca1460305a_::_lambda_de7a847248f7e9ff51c83bca1460305a_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v5; // rcx
  __int64 v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt

  *a1 = a2;
  v5 = a1 + 1;
  *v5 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  v7 = *a4;
  a1[2] = *a4;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 56);
    while ( v8 >= 0 )
    {
      if ( (_DWORD)v8 != 0x7FFFFFFF )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 56), v8 + 1, v8);
        if ( v9 != v8 )
          continue;
      }
      return a1;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v8 + 16), (volatile int *)v7);
  }
  return a1;
}
