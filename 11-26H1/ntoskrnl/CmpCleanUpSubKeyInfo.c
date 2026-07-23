/*
 * XREFs of CmpCleanUpSubKeyInfo @ 0x1408E6E78
 * Callers:
 *     CmpCreateTombstone @ 0x1406E6C30 (CmpCreateTombstone.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E6D20 (CmpRebuildKcbCacheFromNode.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A3FFF0 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpInvalidateSubtreeWorker @ 0x140B1EA00 (CmpInvalidateSubtreeWorker.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCleanUpSubKeyInfo(__int64 a1, char a2)
{
  _WORD *v2; // rdi
  __int64 result; // rax
  _WORD *v6; // rsi
  __int64 v7; // rdx
  ULONG_PTR v8; // rcx
  __int64 CellFlat; // rax
  __int64 v10; // rcx
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]

  v11 = -1;
  v2 = (_WORD *)(a1 + 8);
  v12 = 0;
  result = *(unsigned int *)(a1 + 8);
  if ( (result & 7) != 0 )
  {
    if ( (result & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x6E494D43u);
    result = 65528LL;
    v6 = (_WORD *)(a1 + 8);
    *v2 &= 0xFFF8u;
  }
  else
  {
    v6 = (_WORD *)(a1 + 8);
  }
  *v2 |= 0x40u;
  if ( a2 )
  {
    v7 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v7 != -1 )
    {
      v8 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v8, v7, &v11);
      else
        CellFlat = HvpGetCellPaged(v8, v7);
      *v6 &= ~0x40u;
      v10 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(CellFlat + 20) + *(_DWORD *)(CellFlat + 24);
      if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
        return HvpReleaseCellFlat(v10, (__int64)&v11);
      else
        return HvpReleaseCellPaged(v10, &v11);
    }
  }
  return result;
}
