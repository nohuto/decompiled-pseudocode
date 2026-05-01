/*
 * XREFs of ?GetSingleAppFromLayout@@YAJPEAUIAppLayout@@PEAPEAUIImmersiveApplication@@@Z @ 0x18051E1C4
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x18051ED60 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GetSingleAppFromLayout(struct IAppLayout *a1, struct IImmersiveApplication **a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(struct IAppLayout *, _QWORD, GUID *, __int64 *); // rbx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = -2147467259;
  if ( a1 && (*(unsigned int (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a1 + 72LL))(a1) == 1 )
  {
    v5 = *(_QWORD *)a1;
    v8 = 0LL;
    v6 = *(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, GUID *, __int64 *))(v5 + 96);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    v4 = v6(a1, 0LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v8);
    if ( v4 >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) == 1 )
      v4 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveApplication **))(*(_QWORD *)v8 + 40LL))(v8, a2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  }
  return (unsigned int)v4;
}
