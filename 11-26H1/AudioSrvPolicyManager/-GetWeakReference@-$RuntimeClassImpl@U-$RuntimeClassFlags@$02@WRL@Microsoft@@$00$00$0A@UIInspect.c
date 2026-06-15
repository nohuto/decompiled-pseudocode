/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18003DC70
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800399D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x18003D778 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18003D880 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>::GetWeakReference(
        __int64 a1,
        volatile int *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rbx
  __int64 *v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a2 = 0LL;
  if ( v2 >= 0 )
  {
    v14 = a1 - 8;
    v6 = Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(&v13, &v14);
    v8 = *v6;
    *v6 = 0LL;
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        v9,
        v7);
    }
    if ( !v8 )
      return 2147942414LL;
    while ( 1 )
    {
      *(_DWORD *)(v8 + 16) = v2;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), (v8 >> 1) | 0x8000000000000000uLL, v2);
      v11 = v2 == v12;
      v2 = v12;
      if ( v11 )
        break;
      if ( v12 < 0 )
      {
        Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
          (Microsoft::WRL::Details::WeakReferenceImpl *)v8,
          1);
        goto LABEL_2;
      }
    }
    *(_QWORD *)a2 = v8;
  }
  else
  {
LABEL_2:
    v5 = 2 * v2;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 12), a2);
    *(_QWORD *)a2 = v5;
  }
  return 0LL;
}
