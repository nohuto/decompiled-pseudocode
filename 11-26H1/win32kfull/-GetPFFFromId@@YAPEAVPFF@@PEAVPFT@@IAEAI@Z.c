/*
 * XREFs of ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IAEAI@Z @ 0x1400FE480
 * Callers:
 *     NtGdiGetFontFileData @ 0x1400CF300 (NtGdiGetFontFileData.c)
 *     NtGdiGetFontFileInfo @ 0x1400FE220 (NtGdiGetFontFileInfo.c)
 *     ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x14024FF90 (-GrepRemoveFontMemResource@@YAHPEAX@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x140312030 (NtGdiAddEmbFontToDC.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x140326AC4 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 * Callees:
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x140101320 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFF *__fastcall GetPFFFromId(struct PFT *a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rbx
  int v5; // edi
  unsigned int v6; // ebp
  __int64 SessionState; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 i; // rcx
  char v13; // cl
  char v15; // cl
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v5 = 0;
  v6 = a2;
  SessionState = W32GetSessionState(a1, a2, a3);
  v9 = HIBYTE(v6);
  v10 = *(_QWORD *)(SessionState + 96);
  if ( (unsigned int)v9 >= *((_DWORD *)a1 + 6) )
    return 0LL;
  v11 = *((_QWORD *)a1 + v9 + 5);
  for ( i = v11; ; v11 = i )
  {
    if ( !i || (v5 |= 1u, v13 = 1, !_bittest((const signed __int32 *)(v11 + 52), 0x10u)) )
      v13 = 0;
    if ( (v5 & 1) != 0 )
      v5 &= ~1u;
    if ( !v13 )
      break;
    i = *(_QWORD *)(v11 + 8);
  }
  while ( v11 )
  {
    if ( *(_DWORD *)(v11 + 148) == v6 )
    {
      v3 = v11;
      *a3 = v9;
      if ( a1 == *(struct PFT **)(v10 + 20384) )
      {
        v16[0] = v11;
        return (struct PFF *)(-(__int64)(PFFOBJ::pPvtDataMatch((PFFOBJ *)v16) != 0LL) & v11);
      }
      return (struct PFF *)v3;
    }
    do
    {
      v11 = *(_QWORD *)(v11 + 8);
      if ( !v11 || (v5 |= 2u, v15 = 1, !_bittest((const signed __int32 *)(v11 + 52), 0x10u)) )
        v15 = 0;
      if ( (v5 & 2) != 0 )
        v5 &= ~2u;
    }
    while ( v15 );
  }
  return (struct PFF *)v3;
}
