/*
 * XREFs of MiPfConvertFileOffsetToProto @ 0x14036E9D0
 * Callers:
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 * Callees:
 *     MiLocateSubsectionNode @ 0x1402C68F0 (MiLocateSubsectionNode.c)
 *     MiEndingOffsetWithLock @ 0x14036EDA0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x14036EF30 (MiStartingOffsetNeedLock.c)
 *     MiPfReferenceDataSubsection @ 0x140398A10 (MiPfReferenceDataSubsection.c)
 */

__int64 __fastcall MiPfConvertFileOffsetToProto(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rcx
  int v6; // r12d
  unsigned __int64 v7; // r14
  _DWORD *SubsectionNode; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  int v13; // r13d
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+50h] [rbp+8h]

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v15 = v4;
  v7 = *(_QWORD *)(a1 + 32);
  SubsectionNode = *(_DWORD **)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 40);
  if ( a2 >= v7 && a2 < v9 )
    goto LABEL_3;
  v13 = *(_DWORD *)(v4 + 56) & 0x20;
  while ( v13 && !SubsectionNode[9] && SubsectionNode != (_DWORD *)(v4 + 128) )
  {
    SubsectionNode = (_DWORD *)*((_QWORD *)SubsectionNode + 2);
LABEL_25:
    if ( !SubsectionNode )
      goto LABEL_15;
  }
  v7 = MiStartingOffsetNeedLock(SubsectionNode, *(unsigned int *)(a1 + 16));
  v14 = MiEndingOffsetWithLock(SubsectionNode);
  v9 = v14;
  if ( v7 > a2 )
    return 3221225550LL;
  if ( a2 >= v14 )
  {
    if ( v13 )
    {
      SubsectionNode = (_DWORD *)*((_QWORD *)SubsectionNode + 2);
    }
    else
    {
      if ( a2 > 0x40000000000000LL )
        return 3221225536LL;
      SubsectionNode = MiLocateSubsectionNode(v15, a2, 0);
    }
    v4 = v15;
    goto LABEL_25;
  }
  v6 = 1;
LABEL_15:
  if ( !SubsectionNode )
    return 3221225536LL;
  if ( v6 && !v13 && (int)MiPfReferenceDataSubsection(a1, SubsectionNode) < 0 )
    return 3221225626LL;
  v4 = v15;
LABEL_3:
  v10 = (a2 - v7) >> 12;
  if ( v10 >= (unsigned int)SubsectionNode[11] )
    return 3221225536LL;
  if ( (SubsectionNode[8] & 0x20000) != 0 && (*(_DWORD *)(v4 + 56) & 8) != 0 && (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
    return 3221225550LL;
  v11 = *((_QWORD *)SubsectionNode + 1);
  *(_QWORD *)(a1 + 48) = v11 + 8 * v10;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 24) = SubsectionNode;
    *(_QWORD *)(a1 + 32) = v7;
    *(_QWORD *)(a1 + 40) = v9;
  }
  if ( (((_WORD)v9 - (_WORD)v7) & 0xFFF) != 0 )
    v3 = v11 + 8 * (((v9 - v7 + 4095) >> 12) - 1);
  *(_QWORD *)(a1 + 56) = v3;
  return 0LL;
}
