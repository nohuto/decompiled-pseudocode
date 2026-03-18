/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x14007327C
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1400727E0 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKOBJ::vFlushSpriteUpdates(DEVLOCKOBJ *this, int a2)
{
  struct tagPOINT **v2; // rbx
  __int64 v4; // rcx
  SURFACE *v5; // rcx
  struct tagPOINT *v6; // rcx

  v2 = (struct tagPOINT **)((char *)this + 32);
  v4 = *((_QWORD *)this + 4);
  if ( v4 && *((_BYTE *)v2 + 97) && a2 && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(v4 + 44) & 1) == 0 )
    {
      v5 = *(SURFACE **)(v4 + 496);
      if ( v5 )
        SURFACE::bUnMap(v5);
    }
    (*v2)[5].y &= ~1u;
    v6 = *v2;
    if ( ((*v2)[4].y & 0x4000) != 0 && *(_QWORD *)&v6[59] )
    {
      if ( v6[61].x )
        GrepUpdateSpriteDevLockEnd(v2, *((_DWORD *)this + 6) & 0x40000);
    }
  }
}
