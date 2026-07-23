/*
 * XREFs of MiAdvanceVadView @ 0x1403178D0
 * Callers:
 *     MiPerformVadSplitting @ 0x140317B74 (MiPerformVadSplitting.c)
 *     MiInitializePartialVad @ 0x140AC26F4 (MiInitializePartialVad.c)
 * Callees:
 *     MiLocateSubsectionNode @ 0x1402C68F0 (MiLocateSubsectionNode.c)
 *     MiLocatePagefileSubsection @ 0x140342390 (MiLocatePagefileSubsection.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiComputeContiguousSubsectionPte @ 0x14048ADEC (MiComputeContiguousSubsectionPte.c)
 */

__int64 __fastcall MiAdvanceVadView(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 *v8; // rcx
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  _DWORD *SubsectionNode; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 48);
  v7 = a2 + (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32));
  if ( (result & 0x80000) == 0 )
  {
    v8 = *(__int64 **)(a1 + 80);
    v9 = *v8;
    v10 = MiStartingOffset(v8, *(_QWORD *)(a1 + 88), 0xFFFFFFFFLL) + (a2 << 12);
    v11 = *(_QWORD *)(v9 + 64);
    v12 = v10 >> 12;
    v17 = v10 >> 12;
    if ( v11 )
    {
      SubsectionNode = MiLocateSubsectionNode(v9, v10, a3);
    }
    else
    {
      SubsectionNode = (_DWORD *)MiLocatePagefileSubsection(v9 + 128, &v17);
      v12 = v17;
    }
    v14 = *(unsigned int *)(a1 + 28);
    v15 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
    v16 = v12 - ((unsigned int)SubsectionNode[9] | ((unsigned __int64)(SubsectionNode[8] & 0xFFC0) << 26));
    *(_QWORD *)(a1 + 80) = SubsectionNode;
    *(_QWORD *)(a1 + 88) = *((_QWORD *)SubsectionNode + 1) + 8 * v16;
    result = MiComputeContiguousSubsectionPte(SubsectionNode, v16 + (v14 | v15) - v7);
    *(_QWORD *)(a1 + 96) = result;
  }
  if ( a2 )
  {
    *(_DWORD *)(a1 + 24) = v7;
    *(_BYTE *)(a1 + 32) = BYTE4(v7);
  }
  return result;
}
