/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14007350C
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14030F0E8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1400727E0 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::vFlushSpriteUpdates(DEVLOCKBLTOBJ *this)
{
  struct tagPOINT **v2; // rcx
  struct tagPOINT *v3; // r8
  int v4; // edx

  v2 = (struct tagPOINT **)((char *)this + 80);
  v3 = *v2;
  if ( *v2 )
  {
    if ( *((_BYTE *)v2 + 97) )
    {
      v4 = *((_DWORD *)this + 18);
      if ( (v4 & 0x1000) != 0 && (v3[4].y & 0x4000) != 0 && *(_QWORD *)&v3[59] )
      {
        if ( v3[61].x )
          GrepUpdateSpriteDevLockEnd(v2, v4 & 0x40000);
      }
    }
  }
}
