/*
 * XREFs of NtGdiRectInRegion @ 0x1400D0C50
 * Callers:
 *     <none>
 * Callees:
 *     GreRectInRegion @ 0x1400D0D70 (GreRectInRegion.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiRectInRegion(HRGN a1, void *a2)
{
  void *v2; // rdi
  unsigned int v4; // ebx
  __int128 Src; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF

  v2 = a2;
  Src = 0LL;
  if ( a2 )
  {
    v7 = 0LL;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v7, a2, 0x10uLL);
    if ( (int)v7 > SDWORD2(v7) )
    {
      LODWORD(Src) = DWORD2(v7);
      DWORD2(Src) = v7;
    }
    else
    {
      LODWORD(Src) = v7;
      DWORD2(Src) = DWORD2(v7);
    }
    if ( SDWORD1(v7) > SHIDWORD(v7) )
    {
      DWORD1(Src) = HIDWORD(v7);
      HIDWORD(Src) = DWORD1(v7);
    }
    else
    {
      DWORD1(Src) = DWORD1(v7);
      HIDWORD(Src) = HIDWORD(v7);
    }
    v4 = GreRectInRegion(a1);
    if ( v4 )
    {
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v2, &Src, 0x10uLL);
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
