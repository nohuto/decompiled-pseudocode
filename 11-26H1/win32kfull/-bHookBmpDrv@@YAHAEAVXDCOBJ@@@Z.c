/*
 * XREFs of ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x14030CA70
 * Callers:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x140071F20 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1400AA178 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x140175778 (-prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x14019CB6C (-prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAII@Z @ 0x1401C4AE0 (-cInactive@PDEVOBJ@@QEAAII@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x14030C97C (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall bHookBmpDrv(struct XDCOBJ *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  _DWORD *v4; // rbx
  _DWORD *v5; // rcx
  HSEMAPHORE v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rbp
  HSEMAPHORE v10; // rdi
  struct PDEV *v11; // rax
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rax
  __int64 v14; // rdx
  signed __int32 v15; // ett
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 16LL) )
    return 0LL;
  v3 = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 || (*((_DWORD *)v3 + 9) & 0x4000) != 0 )
    return 0LL;
  v4 = (_DWORD *)v3[6];
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v16, *((_QWORD **)a1 + 2));
  v5 = v4 + 528;
  if ( (v4[10] & 0x20000000) == 0 && (*v5 & 0x8000) == 0 || (*v5 & 0x1000) == 0 )
  {
    v6 = (HSEMAPHORE)v16;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 112LL) &= ~0x10u;
    if ( v6 )
      GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        (__int64)v6);
    return 0LL;
  }
  v8 = v16;
  if ( v16 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v16);
  v9 = *(_QWORD *)(W32GetSessionState((_DWORD)v5, v8) + 96);
  v10 = *(HSEMAPHORE *)(v9 + 8);
  if ( !v10 )
  {
    v11 = PDEV::Allocate(0);
    *(_QWORD *)(v9 + 8) = v11;
    v10 = (HSEMAPHORE)v11;
    if ( !v11 )
      return 0LL;
  }
  if ( *(HSEMAPHORE *)(*(_QWORD *)a1 + 48LL) == v10 )
    return 0LL;
  v16 = (__int64)v10;
  memmove(v10, v4, 0xDB8uLL);
  v12 = PDEVOBJ::prfntActive((PDEVOBJ *)&v16);
  v12->Blink = v12;
  v12->Flink = v12;
  v13 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v16);
  v13->Blink = v13;
  v13->Flink = v13;
  PDEVOBJ::cInactive((PDEVOBJ *)&v16, 0);
  _m_prefetchw(v10 + 10);
  do
    v15 = *((_DWORD *)v10 + 10);
  while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)v10 + 10, v15 | 0x800000, v15) );
  *((_QWORD *)v10 + 439) = v4;
  *((_QWORD *)v10 + 10) = v10;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 2864LL) = BmpDevTextOut;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 2792LL) = BmpDevStrokePath;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 2832LL) = BmpDevCopyBits;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 2824LL) = BmpDevBitBlt;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 2928LL) = BmpDevLineTo;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 2800LL) = BmpDevFillPath;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 2808LL) = BmpDevStrokeAndFillPath;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 2840LL) = BmpDevStretchBlt;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 3248LL) = BmpDevAlphaBlend;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 3272LL) = BmpDevTransparentBlt;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 3224LL) = BmpDevGradientFill;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 3400LL) = BmpDevDrawStream;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 3408LL) = BmpDevNineGrid;
  *(_QWORD *)(*(_QWORD *)(v9 + 8) + 3240LL) = BmpDevPlgBlt;
  bBmpMakeOpaque(*(struct SURFACE **)(*(_QWORD *)a1 + 496LL), v14);
  *(_QWORD *)(*(_QWORD *)a1 + 48LL) = *(_QWORD *)(v9 + 8);
  return 1LL;
}
