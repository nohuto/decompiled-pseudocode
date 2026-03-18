/*
 * XREFs of NtGdiMirrorWindowOrg @ 0x1401D01E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1401D0228 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiMirrorWindowOrg(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
  {
    DC::MirrorWindowOrg(v3[0]);
    v1 = 1;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
