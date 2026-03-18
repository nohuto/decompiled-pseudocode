/*
 * XREFs of ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1401502F4
 * Callers:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x140089E58 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x14008A3D0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x14015021C (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x140150B6C (-prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x14016C588 (-prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAII@Z @ 0x1401A9190 (-cInactive@PDEVOBJ@@QEAAII@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1402FFCA8 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall bHookRedir(struct XDCOBJ *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  _DWORD *v6; // rbx
  struct PDEV *v8; // rdi
  struct PDEV *v9; // rax
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *v11; // rax
  signed __int32 v12; // ett
  struct PDEV *v13; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  if ( *(_DWORD *)(v4 + 4736) )
    return 0LL;
  v5 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( (*(_DWORD *)(v5 + 36) & 0x4000) == 0 )
    return 0LL;
  v6 = *(_DWORD **)(v5 + 48);
  if ( !v6 )
    return 0LL;
  if ( (v6[10] & 0x20000000) == 0 )
    return 0LL;
  v8 = *(struct PDEV **)(v4 + 4728);
  if ( !v8 )
  {
    v9 = PDEV::Allocate(0);
    *(_QWORD *)(v4 + 4728) = v9;
    v8 = v9;
    if ( !v9 )
      return 0LL;
  }
  if ( *(struct PDEV **)(*(_QWORD *)a1 + 48LL) == v8 )
    return 0LL;
  v13 = v8;
  memmove(v8, v6, 0xDB8uLL);
  v10 = PDEVOBJ::prfntActive((PDEVOBJ *)&v13);
  v10->Blink = v10;
  v10->Flink = v10;
  v11 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v13);
  v11->Blink = v11;
  v11->Flink = v11;
  PDEVOBJ::cInactive((PDEVOBJ *)&v13, 0);
  _m_prefetchw((char *)v8 + 40);
  do
    v12 = *((_DWORD *)v8 + 10);
  while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)v8 + 10, v12 | 0x800000, v12) );
  *((_QWORD *)v8 + 439) = v6;
  *((_QWORD *)v8 + 10) = v8;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 2864LL) = RedirTextOut;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 2792LL) = RedirStrokePath;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 2832LL) = RedirCopyBits;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 2824LL) = RedirBitBlt;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 2928LL) = RedirLineTo;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 2800LL) = RedirFillPath;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 2808LL) = RedirStrokeAndFillPath;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 2840LL) = RedirStretchBlt;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 3248LL) = RedirAlphaBlend;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 3272LL) = RedirTransparentBlt;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 3224LL) = RedirGradientFill;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 3400LL) = RedirDrawStream;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 3408LL) = RedirNineGrid;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 3240LL) = RedirPlgBlt;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 3232LL) = RedirStretchBltROP;
  *(_QWORD *)(*(_QWORD *)(v4 + 4728) + 2880LL) = RedirDrawEscape;
  bMakeOpaque(*(struct SURFACE **)(*(_QWORD *)a1 + 496LL));
  *(_QWORD *)(*(_QWORD *)a1 + 48LL) = *(_QWORD *)(v4 + 4728);
  return 1LL;
}
