/*
 * XREFs of ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402B4D44
 * Callers:
 *     ?ProcessSingleNewDirtyRect@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1401EFC4C (-ProcessSingleNewDirtyRect@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1402B32A4 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402B4E74 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402B5328 (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewDirtyRects(DDAMetaData *this, struct _D3DKMT_PRESENT_RGNS *a2)
{
  struct tagRECT *pDirtyRects; // rdi
  UINT i; // ebx
  struct tagRECT *v6; // rdi
  __int64 v7; // rbx

  pDirtyRects = (struct tagRECT *)a2->pDirtyRects;
  for ( i = 0; i < a2->DirtyRectCount; ++i )
  {
    if ( !(unsigned int)DDAMetaData::ProcessDirtyRectAgainstMoveList(this, pDirtyRects) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 704;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to process new dirty against move list",
        704LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 0LL;
    }
    ++pDirtyRects;
  }
  v6 = (struct tagRECT *)a2->pDirtyRects;
  v7 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= a2->DirtyRectCount )
      return 1LL;
    if ( !(unsigned int)DDAMetaData::ProcessDirtyRectAgainstDirtyList(this, v6) )
      break;
    v7 = (unsigned int)(v7 + 1);
    ++v6;
  }
  WdLogSingleEntry2(2LL, v7, v6);
  WdLogGlobalForLineNumber = 718;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to process dirty rect against dirty list, Idx 0x%I64x, pRect 0x%I64x",
    v7,
    (__int64)v6,
    0LL,
    0LL,
    0LL);
  return 0LL;
}
