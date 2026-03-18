/*
 * XREFs of GreRestoreDC @ 0x140037280
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreRestoreDC(HDC a1, int a2)
{
  unsigned int v3; // ebx
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
    v3 = GrepRestoreDCOBJ((struct XDCOBJ *)v5, a2);
  else
    EngSetLastError(6u);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
