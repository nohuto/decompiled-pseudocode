/*
 * XREFs of ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x140129FB4
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x14012625C (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?bInit@W32PIDLOCK@@QEAA_NXZ @ 0x1401C607C (-bInit@W32PIDLOCK@@QEAA_NXZ.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall W32PIDLOCK::vCleanUp(W32PIDLOCK *this)
{
  __int64 v2; // rcx
  char *v3; // rcx
  ULONG_PTR v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 4);
  RGNOBJ::vDeleteRGNOBJ(&v4);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    v3 = *(char **)(v2 + 64);
    if ( v3 )
    {
      GreDeleteFastMutex(v3);
      *(_QWORD *)(*((_QWORD *)this + 5) + 64LL) = 0LL;
    }
    GreDeleteFastMutex(*((char **)this + 5));
  }
}
