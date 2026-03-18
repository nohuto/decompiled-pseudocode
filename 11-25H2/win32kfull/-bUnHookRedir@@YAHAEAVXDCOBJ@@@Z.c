/*
 * XREFs of ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x14026D434
 * Callers:
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x14008AC84 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x140152E60 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140174CBC (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1402FFD20 (-bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1402FFDB4 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall bUnHookRedir(struct XDCOBJ *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  struct SURFACE *v5; // rcx
  __int64 v6; // rsi
  signed __int32 v7; // ett
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  _OWORD *v11; // rax
  _OWORD *v12; // rbx
  __int128 v13; // xmm1
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 4728LL) )
    return 0LL;
  v3 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (*(_DWORD *)(v3 + 36) & 0x4000) == 0 )
    return 0LL;
  v4 = *(_QWORD *)(v3 + 48);
  v5 = *(struct SURFACE **)(v3 + 496);
  v15 = v4;
  v6 = *(_QWORD *)(v4 + 3512);
  _m_prefetchw((const void *)(v4 + 40));
  do
    v7 = *(_DWORD *)(v4 + 40);
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 40), v7 & 0xFF7FFFFF, v7) );
  v8 = v15;
  *(_QWORD *)(v15 + 3512) = 0LL;
  bUndoMakeOpaque(v5);
  *(_QWORD *)(*(_QWORD *)a1 + 48LL) = v6;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v16 = v9;
  vFindAndReplaceRFONT((struct PDEVOBJ *)&v16, (struct PDEVOBJ *)&v15, (struct PDEVOBJ *)&v16);
  memmove((void *)(v9 + 80), (const void *)(v8 + 80), 0x5A0uLL);
  v10 = 8LL;
  v11 = (_OWORD *)(v9 + 1560);
  v12 = (_OWORD *)(v8 + 1560);
  do
  {
    *v11 = *v12;
    v11[1] = v12[1];
    v11[2] = v12[2];
    v11[3] = v12[3];
    v11[4] = v12[4];
    v11[5] = v12[5];
    v11[6] = v12[6];
    v11 += 8;
    v13 = v12[7];
    v12 += 8;
    *(v11 - 1) = v13;
    --v10;
  }
  while ( v10 );
  *v11 = *v12;
  v11[1] = v12[1];
  v11[2] = v12[2];
  v11[3] = v12[3];
  v11[4] = v12[4];
  v11[5] = v12[5];
  *(_QWORD *)(v9 + 80) = v9;
  return 1LL;
}
