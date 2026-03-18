/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x1408D0EE0
 * Callers:
 *     CmpCreateTombstone @ 0x1406E2950 (CmpCreateTombstone.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1408BE6F8 (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmpGetKeyNodeForKcb @ 0x1408D4900 (CmpGetKeyNodeForKcb.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408DF268 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmQueryMultipleValueKey @ 0x14097EB2C (CmQueryMultipleValueKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140C58690 (HvpGetCellMap.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  ULONG_PTR v4; // rsi
  int v5; // ecx
  __int64 CellFlat; // rax
  int v8; // ebx
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+54h] [rbp+Ch]

  v4 = (unsigned int)a3;
  v5 = *(_DWORD *)(BugCheckParameter3 + 160);
  if ( (v5 & 0x8001) != 0 || (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) != 0 )
    return;
  v9 = -1;
  v10 = 0;
  if ( (v5 & 1) != 0 || a3 < 0 )
  {
LABEL_16:
    *(_BYTE *)(a2 + 12) |= CmpAccessBitForPhase;
    return;
  }
  HvLockHiveWriter(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v4, &v9);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  if ( ((CellFlat - 4) & -(__int64)(CellFlat != 0)) == 0 )
  {
    HvUnlockHiveWriter(BugCheckParameter3);
    return;
  }
  if ( !HvpGetCellMap(BugCheckParameter3, (unsigned int)v4) )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v4, 0x2A7uLL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v9);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v9);
  v8 = HvpMarkDirty(BugCheckParameter3);
  HvUnlockHiveWriter(BugCheckParameter3);
  if ( v8 >= 0 )
  {
    *(_BYTE *)(BugCheckParameter3 + 141) = 1;
    goto LABEL_16;
  }
}
