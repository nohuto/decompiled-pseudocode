/*
 * XREFs of NtGdiScaleWindowExtEx @ 0x1401CFCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepScaleWindowExtEx@@YAHAEAVXDCOBJ@@HHHHPEAUtagSIZE@@@Z @ 0x1401CFF34 (-GrepScaleWindowExtEx@@YAHAEAVXDCOBJ@@HHHHPEAUtagSIZE@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiScaleWindowExtEx(HDC a1, int a2, int a3, int a4, int a5, ULONG64 a6)
{
  unsigned int v10; // ebx
  void *v11; // rcx
  struct tagSIZE Src[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v13[14]; // [rsp+40h] [rbp-78h] BYREF

  Src[0] = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v10 = GrepScaleWindowExtEx((struct XDCOBJ *)v13, a2, a3, a4, a5, Src);
    if ( v10 )
    {
      v11 = (void *)a6;
      if ( a6 )
      {
        if ( a6 >= MmUserProbeAddress )
          v11 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v11, Src, 8uLL);
      }
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
    return v10;
  }
  else
  {
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
    return 0LL;
  }
}
