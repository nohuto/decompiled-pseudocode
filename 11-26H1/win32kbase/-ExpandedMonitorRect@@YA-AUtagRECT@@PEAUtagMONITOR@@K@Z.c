/*
 * XREFs of ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1400828DC
 * Callers:
 *     FindAdjacentMonitor @ 0x140081B2C (FindAdjacentMonitor.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140082FC0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x140082970 (ExpandMonitorSpaceVertex.c)
 */

struct tagRECT *__fastcall ExpandedMonitorRect(
        struct tagRECT *__return_ptr retstr,
        struct tagMONITOR *a2,
        unsigned int a3)
{
  unsigned __int16 v4; // si
  unsigned __int16 v5; // bx
  __int64 v6; // rax
  __int64 v7; // r8

  *retstr = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 28LL);
  if ( (a3 & 0xF) != 2 )
  {
    v4 = (a3 >> 8) & 0x1FF;
    v5 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)retstr, (_DWORD)a2, a3) + 56968)
                                          + 96LL)
                              + 40LL)
                  + 62LL);
    v6 = ExpandMonitorSpaceVertex(v4, v5, *(_QWORD *)&retstr->left);
    v7 = *(_QWORD *)&retstr->right;
    *(_QWORD *)&retstr->left = v6;
    *(_QWORD *)&retstr->right = ExpandMonitorSpaceVertex(v4, v5, v7);
  }
  return retstr;
}
