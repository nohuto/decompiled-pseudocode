/*
 * XREFs of NtGdiPlgBlt @ 0x140306FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14007EEC4 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z @ 0x140084F74 (--0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14008A2D8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??1MAPIDCOBJ@@QEAA@XZ @ 0x14018961C (--1MAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x140306398 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiPlgBlt(
        HDC a1,
        const void *a2,
        HDC a3,
        LONG a4,
        int a5,
        unsigned int a6,
        int a7,
        HBITMAP a8,
        int a9,
        int a10,
        unsigned int a11)
{
  unsigned int v14; // ebx
  _QWORD v16[14]; // [rsp+90h] [rbp-1B8h] BYREF
  HDC v17[16]; // [rsp+100h] [rbp-148h] BYREF
  _BYTE v18[112]; // [rsp+180h] [rbp-C8h] BYREF
  struct tagPOINT v19; // [rsp+1F0h] [rbp-58h] BYREF

  GreProbeAndReadFromUntrustedVa(&v19, 0x18uLL, a2, 0x18uLL, 4uLL);
  MAPIDCOBJ::MAPIDCOBJ((MAPIDCOBJ *)v16, a1, a3);
  if ( v16[0] && OPTAPIDCOBJ::bValid(v17) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v18, (struct Gre::Base::SESSION_GLOBALS **)v17);
    v14 = GrepPlgBlt(
            (struct XDCOBJ *)v16,
            (const struct _POINTL *)&v19,
            (struct XDCOBJ *)v18,
            a4,
            a5,
            a6,
            a7,
            (HSURF)a8,
            a9,
            a10,
            a11);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v18);
    MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)v16);
    return v14;
  }
  else
  {
    EngSetLastError(6u);
    MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)v16);
    return 0LL;
  }
}
