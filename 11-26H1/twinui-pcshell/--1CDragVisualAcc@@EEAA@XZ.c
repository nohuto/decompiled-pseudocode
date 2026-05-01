/*
 * XREFs of ??1CDragVisualAcc@@EEAA@XZ @ 0x180549164
 * Callers:
 *     ??_GCDragVisualAcc@@EEAAPEAXI@Z @ 0x1805492F0 (--_GCDragVisualAcc@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?RemoveAll@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXXZ @ 0x180533F10 (-RemoveAll@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicationVi.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18054A6B0 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolic.c)
 */

void __fastcall CDragVisualAcc::~CDragVisualAcc(CDragVisualAcc *this)
{
  *(_QWORD *)this = &CDragVisualAcc::`vftable';
  *((_QWORD *)this + 1) = &CDragVisualAcc::`vftable'{for `IRawElementProviderFragment'};
  *((_QWORD *)this + 2) = &CDragVisualAcc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>'};
  *((_QWORD *)this + 3) = &CDragVisualAcc::`vftable'{for `IDragProvider'};
  *((_QWORD *)this + 4) = &CDragVisualAcc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDragVisualAcc>'};
  VariantClear((VARIANTARG *)((char *)this + 88));
  CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll((__int64)this + 184);
  CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::RemoveAll((char *)this + 208);
  CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll((__int64)this + 184);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 160);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 136);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 112);
  *((_DWORD *)this + 11) = -1073741823;
}
