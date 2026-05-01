/*
 * XREFs of ?RemoveItem@GridLayout@@QEAAJAEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Z @ 0x1804D5860
 * Callers:
 *     ?RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1804C7320 (-RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804B2A34 (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewGridElement@@@.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall GridLayout::RemoveItem(__int64 a1, struct IUnknown **a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  _QWORD *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v4 = (_QWORD *)(v2 + 32);
  v5 = v2 + 56LL * *(_QWORD *)(a1 + 56);
  while ( 1 )
  {
    if ( v2 == v5 )
      return 2147943568LL;
    v6 = v4 - 1;
    v9 = 0LL;
    if ( (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
                v4 - 1,
                (__int64)a2,
                a2,
                &v9) >= 0 )
    {
      v7 = v9;
      if ( v9 < *v4 )
        break;
    }
    v2 += 56LL;
    v4 += 7;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*v6 + 8 * v9));
  if ( v7 != *v4 - 1LL )
    memmove_0((void *)(*v6 + 8 * v7), (const void *)(*v6 + 8 * v7 + 8), 8 * (*v4 - v7) - 8);
  --*v4;
  return 0LL;
}
