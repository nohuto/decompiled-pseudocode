/*
 * XREFs of NtGdiModifyWorldTransform @ 0x14017C610
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x14017C6E8 (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiModifyWorldTransform(HDC a1, struct _XFORML *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[14]; // [rsp+20h] [rbp-98h] BYREF
  _XFORML v8; // [rsp+90h] [rbp-28h] BYREF

  v5 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    memset(&v8, 0, sizeof(v8));
    if ( a2 )
      v5 = ProbeAndConvertXFORM(a2, &v8);
    else
      LOBYTE(v5) = a3 == 1;
    if ( v5 )
      v5 = XDCOBJ::bModifyWorldTransform((XDCOBJ *)v7, &v8, a3);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return v5;
}
