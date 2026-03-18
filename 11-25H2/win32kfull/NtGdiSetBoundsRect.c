/*
 * XREFs of NtGdiSetBoundsRect @ 0x14016D140
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x14016D260 (-GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiSetBoundsRect(HDC a1, struct tagRECT *a2, unsigned int a3)
{
  unsigned int v3; // esi
  struct tagRECT *v4; // rdi
  unsigned int v6; // ebx
  _QWORD v8[14]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v9; // [rsp+B0h] [rbp-38h] BYREF

  v3 = a3;
  v4 = a2;
  v9 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v4 = (struct tagRECT *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v9, v4, 0x10uLL);
    v4 = (struct tagRECT *)&v9;
  }
  else
  {
    v3 = a3 & 0xFFFFFFFD;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v8, a1);
  if ( v8[0] )
    v6 = GrepSetBoundsRect((struct XDCOBJ *)v8, v4, v3);
  else
    v6 = 0;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v8);
  return v6;
}
