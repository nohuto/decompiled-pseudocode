/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1401A02C8
 * Callers:
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400121C4 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140025488 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z @ 0x14017D2A0 (-bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z.c)
 */

void __fastcall BRUSH::vDeleteIcmDIBs(BRUSH *this)
{
  __int64 v1; // rbx
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  __int64 v3; // rbp
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int *v8[4]; // [rsp+20h] [rbp-38h] BYREF
  SURFACE *v9; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)this + 11);
  v2 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(this) + 88);
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(*(_QWORD *)v2 + 1456LL));
  if ( v1 )
  {
    do
    {
      v3 = *(_QWORD *)(v1 + 16);
      v4 = 0;
      SURFREF::SURFREF((SURFREF *)v8, *(HSURF *)(v1 + 8), v2);
      if ( v9 )
      {
        SURFACE::vDec_cRef(v9);
        v4 = 1;
      }
      SURFREF::~SURFREF(v8);
      if ( v4 )
        bDeleteSurface(v2, *(_QWORD *)(v1 + 8));
      GreDeleteFastMutex((char *)v1, v5, v6, v7);
      v1 = v3;
    }
    while ( v3 );
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(*(_QWORD *)v2 + 1456LL));
}
