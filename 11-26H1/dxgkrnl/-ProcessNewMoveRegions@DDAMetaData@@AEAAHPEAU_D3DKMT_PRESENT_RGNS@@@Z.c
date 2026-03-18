/*
 * XREFs of ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402B34CC
 * Callers:
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1402B32A4 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1401EFA08 (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1401EFA94 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewMoveRegions(DDAMetaData *this, struct _D3DKMT_PRESENT_RGNS *a2)
{
  D3DKMT_MOVE_RECT *pMoveRects; // rbx
  __int64 result; // rax
  UINT i; // edi
  __int64 v7; // rax
  const wchar_t *v8; // r9
  int v9; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v10; // [rsp+58h] [rbp-30h] BYREF

  pMoveRects = (D3DKMT_MOVE_RECT *)a2->pMoveRects;
  result = 1LL;
  for ( i = 0; i < a2->MoveRectCount; ++i )
  {
    v10.left = pMoveRects->SourcePoint.x;
    v10.right = pMoveRects->SourcePoint.x + pMoveRects->DestRect.right - pMoveRects->DestRect.left;
    v10.top = pMoveRects->SourcePoint.y;
    v10.bottom = pMoveRects->SourcePoint.y + pMoveRects->DestRect.bottom - pMoveRects->DestRect.top;
    v9 = 0;
    result = DDAMetaData::ProcessMoveAgainstDirtyList(this, pMoveRects, &v10, &v9);
    if ( !(_DWORD)result )
    {
      WdLogSingleEntry0(2LL);
      v7 = 669LL;
      v8 = L"Failed to process new move dst against dirty list";
      goto LABEL_9;
    }
    if ( v9 )
    {
      result = DDAMetaData::ProcessMoveAgainstMoveList(this, pMoveRects, &v10);
      if ( !(_DWORD)result )
      {
        WdLogSingleEntry0(2LL);
        v7 = 682LL;
        v8 = L"Failed to process new move dst against move list";
LABEL_9:
        WdLogGlobalForLineNumber = v7;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, 0LL, 0LL, 0LL, 0LL);
        return 0LL;
      }
    }
    ++pMoveRects;
  }
  return result;
}
