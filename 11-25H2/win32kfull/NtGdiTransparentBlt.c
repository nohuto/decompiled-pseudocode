/*
 * XREFs of NtGdiTransparentBlt @ 0x1401B4C50
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14007EEC4 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z @ 0x140084F0C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14008A2D8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401B4D84 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 */

__int64 __fastcall NtGdiTransparentBlt(
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
        unsigned int a11)
{
  unsigned int v14; // ebx
  struct Gre::Base::SESSION_GLOBALS *v16[14]; // [rsp+68h] [rbp-A0h] BYREF
  HDC v17[16]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v18[112]; // [rsp+158h] [rbp+50h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v17, a6, v16);
  if ( v16[0] && OPTAPIDCOBJ::bValid(v17) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v18, (struct Gre::Base::SESSION_GLOBALS **)v17);
    v14 = GrepTransparentBlt((struct XDCOBJ *)v16, a2, a3, a4, a5, (struct XDCOBJ *)v18, a7, a8, a9, a10, a11);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v18);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v17);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
    return v14;
  }
  else
  {
    EngSetLastError(0x57u);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v17);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
    return 0LL;
  }
}
