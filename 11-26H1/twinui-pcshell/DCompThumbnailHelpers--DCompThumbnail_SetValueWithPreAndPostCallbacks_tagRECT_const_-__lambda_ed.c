/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x1805460AC
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x180546000 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1802DA8B0 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_____lambda_ed8ffcce05179564df35e7d067b53c30__&__lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb__&_IDCompBatchAnimationCallback___&_ @ 0x1805462F4 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 v8; // rsi
  __int128 v9; // xmm0
  __int64 v10; // rbx
  int v11; // edi
  __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  int v14; // [rsp+28h] [rbp-18h]
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  v8 = (__int64)a6;
  v13 = *a6;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v13);
  v14 = *(_DWORD *)(v8 + 8);
  v16 = 0LL;
  v9 = *a5;
  a6 = a7;
  v15 = v9;
  Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_____lambda_ed8ffcce05179564df35e7d067b53c30_____lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb____IDCompBatchAnimationCallback_____(
    &a5,
    &v15,
    &v13,
    &a6);
  v10 = (__int64)a5;
  if ( a5 )
    v11 = (**(__int64 (__fastcall ***)(__int128 *, GUID *, __int64 *))a5)(
            a5,
            &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6,
            &v16);
  else
    v11 = -2147024882;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
  if ( v11 >= 0 )
    v11 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v8);
  return (unsigned int)v11;
}
