/*
 * XREFs of ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x14010F354
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x14010F2C8 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x14017C4D8 (-SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x14022A1A8 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall DirectComposition::CConnection::OnProcessDestruction(struct DirectComposition::CProcessData *a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rax
  __int64 v3; // rcx
  DirectComposition::CConnection *v4; // rdi
  struct HDCOMPOSITIONCONNECTION__ *v5; // rcx
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)a1);
  v4 = DefaultConnection;
  if ( DefaultConnection )
  {
    v10 = *((_QWORD *)DefaultConnection + 38);
    if ( v10 == PsGetCurrentProcess(v3) )
    {
      v11 = 0LL;
      DirectComposition::CConnection::SetBlurredWallpaperSurface(v4, 0LL, &v11);
    }
    DirectComposition::CConnection::Release(v4);
  }
  v5 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)a1 + 2);
  if ( v5 )
    DirectComposition::CConnection::DestroyHandle(v5);
  v6 = (struct _ERESOURCE *)*((_QWORD *)a1 + 4);
  if ( v6 )
  {
    ExDeleteResourceLite(v6);
    GreDeleteFastMutex(*((char **)a1 + 4), v7, v8, v9);
  }
}
