/*
 * XREFs of ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x18004BA84
 * Callers:
 *     ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004B960 (-CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040BDC (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x18004D118 (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x18006ABE4 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180094A48 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(
        CDesktopWindowReplacement *this,
        int a2)
{
  float SystemMetrics; // xmm6_4
  float v4; // xmm7_4
  int v5; // eax
  const char *v6; // r9
  int v7; // eax
  int LastError; // ebx
  int v9; // eax
  CBaseObject *v10; // rcx
  __int64 v12; // rdx
  CBaseObject *v13; // rcx
  __int64 v14; // rdx
  CBaseObject *v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+28h] [rbp-48h] BYREF
  struct _D3DCOLORVALUE v17; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v17.a = 1.0;
  v17.r = flt_1800F9280[(unsigned __int8)a2] / 255.0;
  v17.g = flt_1800F9280[(unsigned __int64)(unsigned __int16)a2 >> 8] / 255.0;
  v17.b = flt_1800F9280[BYTE2(a2)] / 255.0;
  v15 = 0LL;
  SystemMetrics = (float)GetSystemMetrics(76);
  *(float *)&v16 = SystemMetrics;
  v4 = (float)GetSystemMetrics(77);
  *((float *)&v16 + 1) = v4;
  v5 = GetSystemMetrics(78);
  if ( !v5 )
  {
    v12 = 72LL;
    goto LABEL_10;
  }
  *((float *)&v16 + 2) = (float)v5 + SystemMetrics;
  v7 = GetSystemMetrics(79);
  if ( !v7 )
  {
    v12 = 75LL;
LABEL_10:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v12,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                  v6);
    goto LABEL_11;
  }
  *((float *)&v16 + 3) = (float)v7 + v4;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v15);
  LastError = CRectangleInstruction::Create(&v15);
  if ( LastError < 0 )
  {
    v14 = 78LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)LastError,
      (int)v15);
LABEL_11:
    v13 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      CBaseObject::Release(v13);
    }
    return (unsigned int)LastError;
  }
  CSolidRectangleInstruction::SetRect((__int64)v15, &v16);
  LastError = CRectangleInstruction::SetSolidFill(v15, &v17, 1.0);
  if ( LastError < 0 )
  {
    v14 = 81LL;
    goto LABEL_15;
  }
  v9 = CRenderDataVisual::AddInstruction(this, v15);
  LastError = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)v9,
      (int)v15);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v15);
    return (unsigned int)LastError;
  }
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    CBaseObject::Release(v10);
  }
  return 0LL;
}
