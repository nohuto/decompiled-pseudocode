/*
 * XREFs of ?ProcessSingleNewDirtyRect@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1401EFC4C
 * Callers:
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1401EF680 (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1401EFA08 (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1401EFA94 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402B4D44 (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessSingleNewDirtyRect(DDAMetaData *this, struct tagRECT *a2)
{
  struct _D3DKMT_PRESENT_RGNS v3; // [rsp+20h] [rbp-28h] BYREF

  v3.pDirtyRects = a2;
  *(_QWORD *)&v3.DirtyRectCount = 1LL;
  *(_OWORD *)&v3.MoveRectCount = 0LL;
  return DDAMetaData::ProcessNewDirtyRects(this, &v3);
}
