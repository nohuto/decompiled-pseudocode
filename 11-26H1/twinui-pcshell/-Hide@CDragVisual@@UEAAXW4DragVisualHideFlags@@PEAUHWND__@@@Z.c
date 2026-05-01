/*
 * XREFs of ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x1805412C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18005B890 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x18054010C (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_ @ 0x180540610 (Windows--Internal--ComTaskPool--QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__-_.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator() @ 0x180540A64 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--operator().c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x180544388 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::Hide(__int64 a1, char a2, __int64 a3)
{
  CDragVisual *v3; // rbx
  __int64 v7; // r14
  __int64 v8; // rcx
  HWND v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 pvAttribute[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+40h] [rbp-20h] BYREF

  v3 = (CDragVisual *)(a1 - 24);
  if ( *(_BYTE *)(a1 - 24 + 279) )
    return;
  pvAttribute[0] = a1 - 24;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(pvAttribute);
  pvAttribute[0] = (__int64)v3;
  v7 = (__int64)v3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(pvAttribute);
  pvAttribute[1] = a3;
  if ( !*(_QWORD *)(a1 + 88) && (a2 & 2) != 0 )
    a2 = a2 & 0xF9 | 4;
  if ( (a2 & 1) != 0 )
  {
    v9 = *(HWND *)(a1 + 128);
    LODWORD(pvAttribute[0]) = 1;
    DwmSetWindowAttribute(v9, 0xDu, pvAttribute, 4u);
    *(_BYTE *)(a1 + 254) = 0;
    *(_DWORD *)(a1 + 124) = -1;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 80));
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 88));
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 48));
  }
  else
  {
    if ( (a2 & 2) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 80);
      *(_BYTE *)(a1 + 255) = 1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 168LL))(v10);
      v19.Ptr = (ULONGLONG)v3;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v19);
      v11 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)&v19.Size = a3;
      v14 = DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___(
              v11,
              v12,
              v13,
              (__int64 *)&v19);
    }
    else
    {
      if ( (a2 & 4) == 0 )
      {
        if ( IsWindowVisible(*(HWND *)(a1 + 128)) )
        {
          CDragVisual::_TrackMouseLeave(v3, 0);
          ShowWindow(*(HWND *)(a1 + 128), 0);
          v17 = *(_QWORD *)(a1 + 72);
          if ( v17 )
          {
            LOBYTE(v15) = 1;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 56LL))(v17, v15);
          }
          if ( *(_BYTE *)(a1 + 248) && (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
            McGenEventWrite_EventWriteTransfer(MICROSOFT_TWINUI_PUBLISHER_Context, &DragVisual_Hide_Info, v16, 1u, &v19);
        }
        goto LABEL_19;
      }
      v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e____(v8, pvAttribute);
      v7 = pvAttribute[0];
    }
    if ( v14 < 0 )
      lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator()(pvAttribute);
  }
LABEL_19:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v3 )
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)v3 + 16LL))(v3);
}
