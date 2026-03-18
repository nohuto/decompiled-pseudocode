/*
 * XREFs of NtGdiBitBlt @ 0x14016F4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z @ 0x140084F0C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 */

__int64 __fastcall NtGdiBitBlt(
        HDC a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        char a11)
{
  unsigned int v14; // ebx
  DC *v16[14]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v17[128]; // [rsp+D0h] [rbp-88h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v17, a6, v16);
  v14 = 0;
  if ( v16[0] )
    v14 = GrepBitBltImpl(v16, a2, a3, a4, a5, (struct OPTAPIDCOBJ *)v17, a7, a8, a9, a10, a11 & 0xFD);
  else
    EngSetLastError(6u);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v17);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
  return v14;
}
