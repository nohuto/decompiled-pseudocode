/*
 * XREFs of NtDCompositionSetBlurredWallpaperSurface @ 0x14017C3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x14017C4D8 (-SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionSetBlurredWallpaperSurface(void *a1, void *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v6; // rdi
  struct tagRECT v8; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v9; // [rsp+40h] [rbp-28h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( a2 )
  {
    v8 = 0LL;
    RtlCopyFromUser(&v8, a2, 0x10uLL);
    v9 = v8;
  }
  else if ( a1 )
  {
    v3 = -1073741811;
  }
  if ( v3 >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v4);
    v6 = DefaultConnection;
    if ( DefaultConnection )
    {
      v3 = DirectComposition::CConnection::SetBlurredWallpaperSurface(DefaultConnection, a1, &v9);
      DirectComposition::CConnection::Release(v6);
    }
    else
    {
      v3 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v3;
}
