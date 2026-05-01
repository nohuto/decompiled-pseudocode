/*
 * XREFs of ?FindLayoutItemInternal@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z @ 0x18069E3A0
 * Callers:
 *     ?FindLayoutItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z @ 0x18069E340 (-FindLayoutItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1806A0214 (-_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_T.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$FindEx@VCAppLayoutItemFinderByItem@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByItem@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18069DA70 (--$FindEx@VCAppLayoutItemFinderByItem@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 *     ??4?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z @ 0x18069DD28 (--4-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z.c)
 */

__int64 __fastcall CAppLayout::FindLayoutItemInternal(CAppLayout *this, struct IAppLayoutItem *a2, unsigned int *a3)
{
  __int64 v5; // r8
  int v6; // ebx
  struct IUnknown *v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutItem>::operator=((__int64 *)&v8, (__int64)a2);
  v6 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByItem>(
         (_QWORD *)this + 9,
         &v8,
         v5,
         &v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  if ( v6 >= 0 )
    *a3 = v9;
  return (unsigned int)v6;
}
