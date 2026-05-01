/*
 * XREFs of ??R_lambda_e70cde33cb0c7d1a2119e2b787893688_@@QEBA@$$QEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewEventArgs@2345@@Z @ 0x180057E00
 * Callers:
 *     ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@V_lambda_e70cde33cb0c7d1a2119e2b787893688_@@$0?0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@789Windows@@@Z @ 0x180057DC0 (-Invoke@-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_e70cde33cb0c7d1a2119e2b787893688_::operator()(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  int v6; // edi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*a1 + 24LL))(
         *a1,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v11);
  if ( v6 < 0 )
  {
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return (unsigned int)v6;
  }
  else if ( v11 )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))a1[2])(a1[1] + *((int *)a1 + 6), *a2, *a3);
    v10 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v9;
  }
  else
  {
    return 2147549448LL;
  }
}
