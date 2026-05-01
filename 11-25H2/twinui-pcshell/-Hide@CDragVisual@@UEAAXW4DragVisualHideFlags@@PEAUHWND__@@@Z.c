/*
 * XREFs of ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x18051E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D86F4 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x18051D268 (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_ @ 0x18051D748 (Windows--Internal--ComTaskPool--QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__-_.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator() @ 0x18051DB90 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--operator().c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x1805214B0 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::Hide(__int64 a1, char a2, __int64 a3)
{
  CDragVisual *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rcx
  HWND v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 pvAttribute[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-20h] BYREF

  if ( *(_BYTE *)(a1 + 255) )
    return;
  v6 = (CDragVisual *)(a1 - 24);
  pvAttribute[0] = a1 - 24;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(pvAttribute);
  pvAttribute[0] = (__int64)v6;
  v7 = (__int64)v6;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(pvAttribute);
  pvAttribute[1] = a3;
  if ( !*(_QWORD *)(a1 + 88) && (a2 & 2) != 0 )
    a2 = a2 & 0xF9 | 4;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 80);
      *(_BYTE *)(a1 + 255) = 1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 168LL))(v10);
      v18.Ptr = (ULONGLONG)v6;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v18);
      v11 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)&v18.Size = a3;
      if ( (int)DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___(
                  v11,
                  v12,
                  v13,
                  (__int64 *)&v18) >= 0 )
        goto LABEL_20;
    }
    else
    {
      if ( (a2 & 4) == 0 )
      {
        if ( IsWindowVisible(*(HWND *)(a1 + 128)) )
        {
          CDragVisual::_TrackMouseLeave(v6, 0);
          ShowWindow(*(HWND *)(a1 + 128), 0);
          v16 = *(_QWORD *)(a1 + 72);
          if ( v16 )
          {
            LOBYTE(v14) = 1;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 56LL))(v16, v14);
          }
          if ( *(_BYTE *)(a1 + 248) && (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
            McGenEventWrite_EventWriteTransfer(MICROSOFT_TWINUI_PUBLISHER_Context, &DragVisual_Hide_Info, v15, 1u, &v18);
        }
        goto LABEL_20;
      }
      if ( (int)Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e____(v8, pvAttribute) >= 0 )
        goto LABEL_13;
    }
    lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator()(pvAttribute);
LABEL_13:
    v7 = pvAttribute[0];
    goto LABEL_20;
  }
  v9 = *(HWND *)(a1 + 128);
  LODWORD(pvAttribute[0]) = 1;
  DwmSetWindowAttribute(v9, 0xDu, pvAttribute, 4u);
  *(_DWORD *)(a1 + 124) = -1;
  *(_BYTE *)(a1 + 254) = 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 80));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 88));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 48));
LABEL_20:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v6 )
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)v6 + 16LL))(v6);
}
