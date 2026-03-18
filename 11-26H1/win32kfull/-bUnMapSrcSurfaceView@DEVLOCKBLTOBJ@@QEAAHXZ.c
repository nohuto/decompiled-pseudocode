/*
 * XREFs of ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x14018CF90
 * Callers:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1400AA178 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14018CD74 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(DEVLOCKBLTOBJ *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  SURFACE *v4; // rcx
  int v5; // eax

  v2 = 1;
  v3 = *((_QWORD *)this + 23);
  if ( v3 && *((_BYTE *)this + 281) && (*((_DWORD *)this + 18) & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(v3 + 44) & 1) == 0 )
    {
      v4 = *(SURFACE **)(v3 + 496);
      if ( *((SURFACE **)this + 43) != v4 )
      {
        GrepCaptureLiveMemoryDump(400LL, 57LL, 2LL);
        v4 = (SURFACE *)*((_QWORD *)this + 43);
        *((_QWORD *)this + 43) = 0LL;
      }
      if ( v4 )
      {
        v5 = *((_DWORD *)this + 18);
        if ( (v5 & 0x1000000) != 0 )
        {
          *((_DWORD *)this + 18) = v5 & 0xFEFFFFFF;
          v2 = SURFACE::bUnMap(v4);
        }
        else
        {
          GrepCaptureLiveMemoryDump(400LL, 57LL, 3LL);
        }
      }
    }
    *(_DWORD *)(*((_QWORD *)this + 23) + 44LL) &= ~1u;
  }
  return v2;
}
