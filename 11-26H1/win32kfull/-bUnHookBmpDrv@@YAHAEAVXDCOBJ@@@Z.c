/*
 * XREFs of ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x140294A84
 * Callers:
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x14006F670 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14018CD74 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1401AAE74 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x14030C9E8 (-bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x14030EED4 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall bUnHookBmpDrv(struct XDCOBJ *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  struct SURFACE *v5; // rcx
  __int64 v6; // rsi
  signed __int32 v7; // ett
  __int64 v8; // rdi
  __int64 v9; // rcx
  _OWORD *v10; // rax
  _OWORD *v11; // rbx
  __int128 v12; // xmm1
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF
  _QWORD *v15; // [rsp+40h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 8LL) )
    return 0LL;
  v3 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (*(_DWORD *)(v3 + 36) & 0x4000) != 0 )
    return 0LL;
  v4 = *(_QWORD **)(v3 + 48);
  v5 = *(struct SURFACE **)(v3 + 496);
  v15 = v4;
  v6 = v4[439];
  _m_prefetchw(v4 + 5);
  do
    v7 = *((_DWORD *)v4 + 10);
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)v4 + 10, v7 & 0xFF7FFFFF, v7) );
  v4[439] = 0LL;
  bBmpUndoMakeOpaque(v5);
  *(_QWORD *)(*(_QWORD *)a1 + 48LL) = v6;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v14 = v8;
  vFindAndReplaceRFONT((struct PDEVOBJ *)&v14, (struct PDEVOBJ *)&v15, (struct PDEVOBJ *)&v14);
  memmove((void *)(v8 + 80), v4 + 10, 0x5A0uLL);
  v9 = 8LL;
  v10 = (_OWORD *)(v8 + 1560);
  v11 = v4 + 195;
  do
  {
    *v10 = *v11;
    v10[1] = v11[1];
    v10[2] = v11[2];
    v10[3] = v11[3];
    v10[4] = v11[4];
    v10[5] = v11[5];
    v10[6] = v11[6];
    v10 += 8;
    v12 = v11[7];
    v11 += 8;
    *(v10 - 1) = v12;
    --v9;
  }
  while ( v9 );
  *v10 = *v11;
  v10[1] = v11[1];
  v10[2] = v11[2];
  v10[3] = v11[3];
  v10[4] = v11[4];
  v10[5] = v11[5];
  *(_QWORD *)(v8 + 80) = v8;
  return 1LL;
}
