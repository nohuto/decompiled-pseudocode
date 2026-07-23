/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x1408D74A0
 * Callers:
 *     CmpCreateTombstone @ 0x1406E6C30 (CmpCreateTombstone.c)
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1408C4CC8 (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmpGetKeyNodeForKcb @ 0x1408DAEC0 (CmpGetKeyNodeForKcb.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmQueryMultipleValueKey @ 0x140940B3C (CmQueryMultipleValueKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
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
