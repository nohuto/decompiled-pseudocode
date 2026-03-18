/*
 * XREFs of ?ValidUmpdHsurfAndUnSecure@@YAHPEAUHSURF__@@@Z @ 0x14026E3B4
 * Callers:
 *     NtGdiEngDeleteSurface @ 0x140263EF0 (NtGdiEngDeleteSurface.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

__int64 __fastcall ValidUmpdHsurfAndUnSecure(HSURF a1)
{
  unsigned int v1; // ebx
  void *v2; // rcx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v4, a1);
  v1 = 0;
  if ( v5 && (*(_DWORD *)(v5 + 112) & 0x40000) != 0 )
  {
    v2 = *(void **)(v5 + 144);
    if ( v2 )
    {
      MmUnsecureVirtualMemory(v2);
      *(_QWORD *)(v5 + 144) = 0LL;
    }
    v1 = 1;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v4);
  return v1;
}
