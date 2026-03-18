/*
 * XREFs of ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x14015672C
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     ?bInit@W32PIDLOCK@@QEAA_NXZ @ 0x14015664C (-bInit@W32PIDLOCK@@QEAA_NXZ.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall W32PIDLOCK::vCleanUp(W32PIDLOCK *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  char *v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = *((_QWORD *)this + 4);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    v6 = *(char **)(v5 + 64);
    if ( v6 )
    {
      GreDeleteFastMutex(v6, v2, v3, v4);
      *(_QWORD *)(*((_QWORD *)this + 5) + 64LL) = 0LL;
    }
    GreDeleteFastMutex(*((char **)this + 5), v2, v3, v4);
  }
}
