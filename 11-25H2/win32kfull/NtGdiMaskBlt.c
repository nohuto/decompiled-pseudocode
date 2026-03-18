/*
 * XREFs of NtGdiMaskBlt @ 0x140189500
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z @ 0x140084F0C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400A15A8 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ??1MAPIDCOBJ@@QEAA@XZ @ 0x14018961C (--1MAPIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiMaskBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        int a8,
        HBITMAP a9,
        int a10,
        int a11,
        unsigned int a12,
        unsigned int a13)
{
  unsigned int v17; // ebx
  DC *v18[14]; // [rsp+70h] [rbp-F8h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v19[16]; // [rsp+E0h] [rbp-88h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v18, a1);
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v19, a6, v18);
  if ( v18[0] )
  {
    v17 = GrepMaskBlt(v18, a2, a3, a4, a5, v19, a7, a8, a9, a10, a11, a12, a13);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v19);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v18);
    return v17;
  }
  else
  {
    EngSetLastError(0x57u);
    MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)v18);
    return 0LL;
  }
}
