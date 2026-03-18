/*
 * XREFs of ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1400E8BF0
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1400E8B64 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x140058EE0 (-SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140227E34 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall DirectComposition::CConnection::OnProcessDestruction(struct DirectComposition::CProcessData *a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rbx
  unsigned int v3; // edx
  struct HDCOMPOSITIONCONNECTION__ *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  struct tagRECT v6; // [rsp+20h] [rbp-28h] BYREF

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    if ( *((_QWORD *)DefaultConnection + 38) == PsGetCurrentProcess() )
    {
      v6 = 0LL;
      DirectComposition::CConnection::SetBlurredWallpaperSurface(DefaultConnection, 0LL, &v6);
    }
    DirectComposition::CConnection::Release(DefaultConnection, v3);
  }
  v4 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)a1 + 2);
  if ( v4 )
    DirectComposition::CConnection::DestroyHandle(v4);
  v5 = (struct _ERESOURCE *)*((_QWORD *)a1 + 4);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    GreDeleteFastMutex(*((char **)a1 + 4));
  }
}
