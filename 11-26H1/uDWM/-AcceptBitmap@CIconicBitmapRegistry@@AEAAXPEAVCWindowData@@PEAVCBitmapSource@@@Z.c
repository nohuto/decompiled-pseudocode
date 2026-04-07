/*
 * XREFs of ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800718B8
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x18007132C (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800194C0 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18001995C (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x18001B1A4 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180031E4C (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180038D60 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?Contains@?$DynArray@PEAUHMONITOR__@@$0A@@@QEBA_NAEBQEAUHMONITOR__@@@Z @ 0x180065B0C (-Contains@-$DynArray@PEAUHMONITOR__@@$0A@@@QEBA_NAEBQEAUHMONITOR__@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18007E8F8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x18008A828 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800DE760 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

void __fastcall CIconicBitmapRegistry::AcceptBitmap(
        struct CWindowData ***this,
        struct CWindowData *a2,
        struct CBitmapSource *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  CWindowIconic *v7; // rcx
  struct CWindowData *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v3 = *((_QWORD *)a2 + 54);
  *((_BYTE *)a2 + 738) &= ~0x10u;
  CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)this, (HWND *)v8, 0);
  if ( !IsWindowTab(v8) )
  {
    if ( (unsigned int)(*((_DWORD *)this + 20) + *((_DWORD *)this + 21) + *((_DWORD *)this + 10)) > *((_DWORD *)this + 2) )
      CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)this, *this[2]);
    if ( !v3 && !DynArray<HMONITOR__ *,0>::Contains((__int64)(this + 2), &v8) )
      DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)(this + 2), &v8);
  }
  CWindowData::SetIconicBitmap(v8, a3);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v6, &UdwmManageIconicThumbnail_Info, 0LL);
  v7 = (CWindowIconic *)*((_QWORD *)v8 + 61);
  if ( v7 )
  {
    CWindowIconic::SetBitmap(v7, *((struct CBitmapSource **)v8 + 54), (*((_BYTE *)v8 + 738) & 4) != 0, 1);
    if ( !v3 )
      CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v8 + 61));
  }
}
