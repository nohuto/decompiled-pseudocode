/*
 * XREFs of NtGdiSelectBitmap @ 0x140084960
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiSelectBitmap(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  _BYTE v5[16]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v6[15]; // [rsp+30h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v6, a1);
  v3 = 0LL;
  if ( v6[0] )
    v3 = *(_QWORD *)GrepSelectBitmap(v5, v6, a2, 0LL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
  return v3;
}
