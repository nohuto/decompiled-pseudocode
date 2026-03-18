/*
 * XREFs of NtGdiSaveDC @ 0x140055C50
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x140055CAC (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiSaveDC(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = GrepSaveDC((struct XDCOBJ *)v3, 0);
  else
    EngSetLastError(6u);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
