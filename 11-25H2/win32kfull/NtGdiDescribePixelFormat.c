/*
 * XREFs of NtGdiDescribePixelFormat @ 0x140339020
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepDescribePixelFormat@@YAHAEAVXDCOBJ@@HIPEAUtagPIXELFORMATDESCRIPTOR@@@Z @ 0x14033EA54 (-GrepDescribePixelFormat@@YAHAEAVXDCOBJ@@HIPEAUtagPIXELFORMATDESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiDescribePixelFormat(HDC a1, int a2, unsigned int a3, char *a4)
{
  __int64 v5; // rsi
  __int64 result; // rax
  unsigned int v8; // ebx
  _QWORD v9[14]; // [rsp+20h] [rbp-B8h] BYREF
  struct tagPIXELFORMATDESCRIPTOR Src; // [rsp+90h] [rbp-48h] BYREF

  v5 = a3;
  result = 0LL;
  memset(&Src, 0, sizeof(Src));
  if ( !a3 || a4 )
  {
    if ( a3 >= 0x28 )
      v5 = 40LL;
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v9, a1);
    if ( v9[0] )
    {
      v8 = GrepDescribePixelFormat((struct XDCOBJ *)v9, a2, v5, &Src);
    }
    else
    {
      EngSetLastError(6u);
      v8 = 0;
    }
    if ( v8 && (_DWORD)v5 )
    {
      if ( (unsigned __int64)&a4[v5] > MmUserProbeAddress || &a4[v5] <= a4 || ((unsigned __int8)a4 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a4, &Src, (unsigned int)v5);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
    return v8;
  }
  return result;
}
