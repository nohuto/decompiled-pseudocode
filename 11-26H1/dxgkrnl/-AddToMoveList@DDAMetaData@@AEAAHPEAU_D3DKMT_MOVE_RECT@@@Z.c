/*
 * XREFs of ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1401EF680
 * Callers:
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1401EFA94 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ProcessSingleNewDirtyRect@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1401EFC4C (-ProcessSingleNewDirtyRect@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall DDAMetaData::AddToMoveList(DDAMetaData *this, struct _D3DKMT_MOVE_RECT *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  unsigned int v6; // esi
  _QWORD *Buffer; // rdx
  __int64 v9; // rcx

  v4 = *((_DWORD *)this + 10);
  v5 = *((_DWORD *)this + 11);
  if ( v5 >= v4 )
  {
    if ( !(unsigned int)DDAMetaData::ProcessSingleNewDirtyRect(this, &a2->DestRect) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1016;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to add new move to dirty list",
        1016LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 0LL;
    }
  }
  else
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) / 0x18u == v5 )
    {
      v6 = v5 + 4;
      if ( v6 >= v4 )
        v6 = v4;
    }
    else
    {
      v6 = v5 + 1;
    }
    Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((AUTOEXPANDALLOCATION **)this + 6), 24 * v6, 1);
    if ( !Buffer )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1001;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to expand move list to 0x%I64x move",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
      return 0LL;
    }
    v9 = 3LL * *((unsigned int *)this + 11);
    *(_OWORD *)&Buffer[v9] = *(_OWORD *)&a2->SourcePoint.x;
    Buffer[v9 + 2] = *(_QWORD *)&a2->DestRect.right;
    ++*((_DWORD *)this + 11);
  }
  return 1LL;
}
