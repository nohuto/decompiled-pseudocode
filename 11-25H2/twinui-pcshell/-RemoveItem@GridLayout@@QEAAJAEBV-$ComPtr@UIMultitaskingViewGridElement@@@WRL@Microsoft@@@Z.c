/*
 * XREFs of ?RemoveItem@GridLayout@@QEAAJAEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Z @ 0x1804C37E4
 * Callers:
 *     ?RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1804B55D0 (-RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804A1710 (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewGridElement@@@.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall GridLayout::RemoveItem(__int64 a1, struct IUnknown **a2)
{
  __int64 v2; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v4 = (_QWORD *)(v2 + 24);
  v5 = v2 + 56LL * *(_QWORD *)(a1 + 56);
  while ( 1 )
  {
    if ( v2 == v5 )
      return 2147943568LL;
    v9 = 0LL;
    if ( (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
                v4,
                (__int64)a2,
                a2,
                &v9) >= 0 )
    {
      v6 = v9;
      if ( v9 < v4[1] )
        break;
    }
    v2 += 56LL;
    v4 += 7;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*v4 + 8 * v9));
  v7 = v4[1];
  if ( v6 != v7 - 1 )
    memmove_0((void *)(*v4 + 8 * v6), (const void *)(*v4 + 8 * v6 + 8), 8 * (v7 - v6) - 8);
  --v4[1];
  return 0LL;
}
