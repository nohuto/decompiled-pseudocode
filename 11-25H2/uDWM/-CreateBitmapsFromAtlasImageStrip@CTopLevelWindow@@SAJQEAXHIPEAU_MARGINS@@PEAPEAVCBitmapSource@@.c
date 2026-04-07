/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800074A4
 * Callers:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180006260 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800310F4 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18003230C (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x18000744C (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180007C28 (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *const a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4)
{
  HRESULT ThemeRect; // eax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  LONG top; // r8d
  unsigned int v12; // edi
  int v13; // r13d
  int v14; // r14d
  const struct CBitmapSource *AtlasImageFromTheme; // rax
  struct CBitmapSource **v16; // r9
  int v17; // eax
  HRESULT ThemeMargins; // eax
  struct tagRECT rc; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT pRect; // [rsp+58h] [rbp-20h] BYREF

  pRect = 0LL;
  ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &pRect);
  v9 = ThemeRect;
  if ( ThemeRect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1u, ThemeRect, 0x3CEu, 0LL);
  }
  else if ( a4
         && (ThemeMargins = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, a4), v9 = ThemeMargins, ThemeMargins < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1u, ThemeMargins, 0x3D2u, 0LL);
  }
  else
  {
    v10 = 0;
    top = pRect.top;
    if ( pRect.bottom - pRect.top >= 0 )
      v10 = pRect.bottom - pRect.top;
    v12 = 0;
    v13 = v10 / a3;
    v14 = 0;
    while ( v12 < a3 )
    {
      rc.right = pRect.right;
      rc.top = v14 + top;
      rc.left = pRect.left;
      rc.bottom = v13 + v14 + top;
      InflateRect(&rc, -1, -1);
      AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(a1);
      v17 = CBitmapSource::Create(AtlasImageFromTheme, &rc, a4, v16);
      v9 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1u, v17, 0x3E9u, 0LL);
        return v9;
      }
      top = pRect.top;
      ++v12;
      v14 += v13;
    }
  }
  return v9;
}
