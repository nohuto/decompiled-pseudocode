/*
 * XREFs of GreOffsetClipRgn @ 0x14020D2C0
 * Callers:
 *     xxxInternalPaintDesktop @ 0x14020D100 (xxxInternalPaintDesktop.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v8[14]; // [rsp+30h] [rbp-78h] BYREF
  struct _POINTL v9; // [rsp+C8h] [rbp+20h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v8, a1);
  v5 = 0;
  if ( v8[0] )
  {
    v9.x = a2;
    v9.y = a3;
    v7 = *(_QWORD *)(v8[0] + 160LL);
    if ( v7 )
      v5 = RGNOBJ::bOffset((RGNOBJ *)&v7, &v9);
    else
      v5 = 1;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v8);
  return v5;
}
