/*
 * XREFs of NtGdiStretchBlt @ 0x140076870
 * Callers:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x14007B1BC (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtUserBitBltSysBmp @ 0x140192600 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x14019276C (BitBltSysBmp.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x140269E2C (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 * Callees:
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z @ 0x140084F0C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiStretchBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11,
        unsigned int a12)
{
  unsigned int v15; // ebx
  _BYTE v17[112]; // [rsp+70h] [rbp-F8h] BYREF
  _BYTE v18[128]; // [rsp+E0h] [rbp-88h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v17, a1);
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v18, a6, (struct XDCOBJ *)v17);
  v15 = GrepStretchBlt((struct XDCOBJ *)v17, a2, a3, a4, a5, (struct OPTAPIDCOBJ *)v18, a7, a8, a9, a10, a11, a12, 0);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v18);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v17);
  return v15;
}
