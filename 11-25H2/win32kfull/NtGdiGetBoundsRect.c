/*
 * XREFs of NtGdiGetBoundsRect @ 0x14016CD20
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x14016CDE0 (-GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiGetBoundsRect(HDC a1, void *a2, unsigned int a3)
{
  unsigned int BoundsRect; // ebx
  _QWORD v7[14]; // [rsp+20h] [rbp-A8h] BYREF
  struct tagRECT Src; // [rsp+90h] [rbp-38h] BYREF

  BoundsRect = 0;
  Src = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  if ( v7[0] )
    BoundsRect = GrepGetBoundsRect((struct XDCOBJ *)v7, &Src, a3);
  if ( BoundsRect )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, &Src, 0x10uLL);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return BoundsRect;
}
