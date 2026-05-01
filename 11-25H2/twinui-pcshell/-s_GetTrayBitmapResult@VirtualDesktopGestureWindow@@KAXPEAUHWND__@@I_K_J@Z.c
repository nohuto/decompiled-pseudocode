/*
 * XREFs of ?s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@KAXPEAUHWND__@@I_K_J@Z @ 0x18053FF60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTrayBitmapResult@VirtualDesktopGestureWindow@@IEAAJAEBUTrayBitmapForVDThumbnailData@@HAEBUCRect@Geometry@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAUIDCompThumbnail@@@Z @ 0x18053C43C (-GetTrayBitmapResult@VirtualDesktopGestureWindow@@IEAAJAEBUTrayBitmapForVDThumbnailData@@HAEBUCR.c)
 */

void __fastcall VirtualDesktopGestureWindow::s_GetTrayBitmapResult(HWND a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  _DWORD v5[6]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = *(_DWORD *)(a3 + 24);
  v5[1] = *(_DWORD *)(a3 + 28);
  v4 = *(_QWORD *)(a3 + 40);
  v5[2] = *(_DWORD *)(a3 + 32);
  v5[3] = *(_DWORD *)(a3 + 36);
  VirtualDesktopGestureWindow::GetTrayBitmapResult(
    v4,
    a3,
    *(_DWORD *)(a3 + 48),
    (__int64)v5,
    *(_QWORD **)(a3 + 56),
    *(_QWORD *)(a3 + 64));
  VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::`scalar deleting destructor'((VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *)a3);
}
