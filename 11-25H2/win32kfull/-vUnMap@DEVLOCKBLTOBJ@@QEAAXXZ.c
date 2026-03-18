/*
 * XREFs of ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x140152E60
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x140300174 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140153094 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x14026D2C4 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x14026D434 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::vUnMap(DEVLOCKBLTOBJ *this)
{
  int v1; // eax
  __int64 v3; // rcx
  SURFACE *v4; // rcx
  int v5; // eax
  char *v6; // rsi
  int v7; // eax
  SURFACE *v8; // rcx
  struct XDCOBJ *v9; // rsi
  SURFACE *v10; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+28h] [rbp-10h]

  v1 = *((_DWORD *)this + 28);
  if ( (v1 & 0x8000) != 0 )
  {
    v9 = (DEVLOCKBLTOBJ *)((char *)this + 120);
    if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 193) )
    {
      if ( (v1 & 0x400) != 0 )
      {
        bUnHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120));
        *((_DWORD *)this + 28) &= ~0x400u;
        v1 = *((_DWORD *)this + 28);
      }
      if ( (v1 & 0x2000) != 0 )
      {
        bUnHookBmpDrv(v9);
        *((_DWORD *)this + 28) &= ~0x2000u;
        v1 = *((_DWORD *)this + 28);
      }
      if ( (v1 & 0x1000) != 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)v9 + 44LL) & 1) == 0 )
        {
          v10 = *(SURFACE **)(*(_QWORD *)v9 + 496LL);
          if ( v10 )
            SURFACE::bUnMap(v10);
        }
        *(_DWORD *)(*(_QWORD *)v9 + 44LL) &= ~1u;
      }
    }
    _InterlockedOr(v11, 0);
    if ( *((_QWORD *)this + 25) && *((_BYTE *)this + 273) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
  }
  else
  {
    v3 = *((_QWORD *)this + 25);
    if ( v3 && *((_BYTE *)this + 273) && (v1 & 0x1000) != 0 )
    {
      if ( (*(_DWORD *)(v3 + 44) & 1) == 0 )
      {
        v4 = *(SURFACE **)(v3 + 496);
        if ( *((SURFACE **)this + 42) != v4 )
        {
          v13 = 0;
          v12 = 0LL;
          GrepCaptureLiveMemoryDump(400LL, 57LL, 2LL);
          v4 = (SURFACE *)*((_QWORD *)this + 42);
          *((_QWORD *)this + 42) = 0LL;
        }
        if ( v4 )
        {
          v5 = *((_DWORD *)this + 28);
          if ( (v5 & 0x1000000) != 0 )
          {
            *((_DWORD *)this + 28) = v5 & 0xFEFFFFFF;
            SURFACE::bUnMap(v4);
          }
          else
          {
            v13 = 0;
            v12 = 0LL;
            GrepCaptureLiveMemoryDump(400LL, 57LL, 3LL);
          }
        }
      }
      *(_DWORD *)(*((_QWORD *)this + 25) + 44LL) &= ~1u;
    }
    _InterlockedOr(v11, 0);
    v6 = (char *)this + 120;
    if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 193) )
    {
      v7 = *((_DWORD *)this + 28);
      if ( (v7 & 0x400) != 0 )
      {
        bUnHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120));
        *((_DWORD *)this + 28) &= ~0x400u;
        v7 = *((_DWORD *)this + 28);
      }
      if ( (v7 & 0x2000) != 0 )
      {
        bUnHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120));
        *((_DWORD *)this + 28) &= ~0x2000u;
        v7 = *((_DWORD *)this + 28);
      }
      if ( (v7 & 0x1000) != 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)v6 + 44LL) & 1) == 0 )
        {
          v8 = *(SURFACE **)(*(_QWORD *)v6 + 496LL);
          if ( v8 )
            SURFACE::bUnMap(v8);
        }
        *(_DWORD *)(*(_QWORD *)v6 + 44LL) &= ~1u;
      }
    }
  }
}
