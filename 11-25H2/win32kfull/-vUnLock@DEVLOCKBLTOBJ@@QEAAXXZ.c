/*
 * XREFs of ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x140300174
 * Callers:
 *     SimBitBlt @ 0x140223DD4 (SimBitBlt.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14007BCFC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140089CAC (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x14008C23C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14008C988 (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x140152E60 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$01@@YAXXZ @ 0x14018BBBC (--$GreReleaseSemaphoreExclusive@$01@@YAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vUnLock(DEVLOCKBLTOBJ *this)
{
  int v1; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  int v6; // eax
  __int64 v7; // rdx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 28);
  if ( (v1 & 0x1000) != 0 )
  {
    DEVLOCKBLTOBJ::vUnMap(this);
    DEVLOCKBLTOBJ::vFlushSpriteUpdates(this);
    if ( (*((_DWORD *)this + 28) & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
      _InterlockedOr(v8, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      *((_DWORD *)this + 28) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      _InterlockedOr(v8, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
    }
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x1000u;
    CurrentThread = GreGetCurrentThread(v4, v3);
    if ( CurrentThread )
    {
      *((_QWORD *)CurrentThread + 38) = 0LL;
      *((_QWORD *)CurrentThread + 37) = 0LL;
    }
  }
  else if ( (v1 & 0x80000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x80000u;
  }
  if ( *(_QWORD *)this )
  {
    if ( (*((_DWORD *)this + 28) & 0x100000) != 0 )
    {
      GreReleaseSemaphoreExclusive<2>(this);
      *((_DWORD *)this + 28) &= ~0x100000u;
    }
    else
    {
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 3));
    }
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  if ( *((_QWORD *)this + 1) )
  {
    if ( (*((_DWORD *)this + 28) & 0x200000) != 0 )
    {
      GreReleaseSemaphoreExclusive<2>(this);
      *((_DWORD *)this + 28) &= ~0x200000u;
    }
    else
    {
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 4));
    }
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  v6 = *((_DWORD *)this + 28);
  if ( (v6 & 8) != 0 )
    *((_DWORD *)this + 28) = v6 & 0xFFFFFFF7;
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v7);
    *((_QWORD *)this + 2) = 0LL;
  }
}
