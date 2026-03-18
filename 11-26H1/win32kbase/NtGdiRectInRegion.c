/*
 * XREFs of NtGdiRectInRegion @ 0x1400A8230
 * Callers:
 *     <none>
 * Callees:
 *     ?GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x14003DBE0 (-GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     ?GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x140040790 (-GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     GreRectInRegion @ 0x1400A8460 (GreRectInRegion.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiRectInRegion(HRGN a1, void *a2)
{
  unsigned int v4; // ebx
  __int128 v6; // [rsp+40h] [rbp-48h] BYREF
  __int128 v7; // [rsp+50h] [rbp-38h] BYREF

  v6 = 0LL;
  if ( a2 )
  {
    v7 = 0LL;
    GreProbeAndReadFromUntrustedVa(&v7, 0x10uLL, a2, 0x10uLL, 1uLL);
    if ( (int)v7 > SDWORD2(v7) )
    {
      LODWORD(v6) = DWORD2(v7);
      DWORD2(v6) = v7;
    }
    else
    {
      LODWORD(v6) = v7;
      DWORD2(v6) = DWORD2(v7);
    }
    if ( SDWORD1(v7) > SHIDWORD(v7) )
    {
      DWORD1(v6) = HIDWORD(v7);
      HIDWORD(v6) = DWORD1(v7);
    }
    else
    {
      DWORD1(v6) = DWORD1(v7);
      HIDWORD(v6) = HIDWORD(v7);
    }
    v4 = GreRectInRegion(a1);
    if ( v4 )
      GreProbeAndWriteToUntrustedVa(a2, 0x10uLL, &v6, 0x10uLL, 1uLL);
  }
  else
  {
    return 0;
  }
  return v4;
}
