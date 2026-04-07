/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180004B90
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180003B34 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180004A98 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800CB09C (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180004D7C (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x180004F74 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *const a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4)
{
  HRESULT ThemeRect; // edi
  unsigned int v9; // eax
  LONG top; // r8d
  unsigned int v11; // ebx
  int v12; // r14d
  int v13; // r15d
  const struct CBitmapSource *AtlasImageFromTheme; // rax
  struct CBitmapSource **v15; // r9
  int v16; // eax
  struct tagRECT pRect; // [rsp+40h] [rbp-78h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-68h] BYREF

  pRect = 0LL;
  ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &pRect);
  if ( ThemeRect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F4A20, 1u, ThemeRect, 0x373u, 0LL);
    return (unsigned int)ThemeRect;
  }
  if ( a4 )
  {
    ThemeRect = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, a4);
    if ( ThemeRect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F4A20, 1u, ThemeRect, 0x377u, 0LL);
      return (unsigned int)ThemeRect;
    }
  }
  v9 = 0;
  top = pRect.top;
  if ( pRect.bottom - pRect.top >= 0 )
    v9 = pRect.bottom - pRect.top;
  v11 = 0;
  v12 = 0;
  v13 = v9 / a3;
  while ( v11 < a3 )
  {
    rc.left = pRect.left;
    rc.right = pRect.right;
    rc.top = v12 + top;
    rc.bottom = v13 + v12 + top;
    InflateRect(&rc, -1, -1);
    AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(a1);
    v16 = CBitmapSource::Create(AtlasImageFromTheme, &rc, a4, v15);
    ThemeRect = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F4A20, 1u, v16, 0x38Eu, 0LL);
      return (unsigned int)ThemeRect;
    }
    top = pRect.top;
    ++v11;
    v12 += v13;
  }
  return (unsigned int)ThemeRect;
}
