/*
 * XREFs of CmpCreateTombstone @ 0x1406E6C30
 * Callers:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408C12C0 (CmpGetKcbAtLayerHeight.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     CmpAddSubKey @ 0x1408C6284 (CmpAddSubKey.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D74A0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvMarkCellDirty @ 0x1408E1C90 (HvMarkCellDirty.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     CmLockHiveSecurityExclusive @ 0x1408E575C (CmLockHiveSecurityExclusive.c)
 *     CmpAssignSecurityDescriptor @ 0x1408E57F4 (CmpAssignSecurityDescriptor.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E6D20 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408E6E78 (CmpCleanUpSubKeyInfo.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140A28160 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpIncrementKcbSequenceNumber @ 0x140AC2010 (CmpIncrementKcbSequenceNumber.c)
 *     CmpGetPhaseAccessBit @ 0x140B700A4 (CmpGetPhaseAccessBit.c)
 *     CmUnlockHiveSecurity @ 0x140C5EBA8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpCreateTombstone(__int64 a1, __int64 a2)
{
  __int64 KcbAtLayerHeight; // r14
  __int64 v4; // rdi
  __int64 v5; // rax
  __int16 v6; // dx
  int v7; // r8d
  unsigned int v8; // r12d
  int Cell; // eax
  char *v10; // rsi
  int v11; // ebx
  unsigned int v12; // ecx
  __int64 SecurityDescriptorForKcbStack; // rbx
  ULONG_PTR v14; // rcx
  ULONG_PTR v15; // rcx
  __int64 CellFlat; // rax
  __int64 v17; // rbx
  unsigned __int16 v18; // dx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // [rsp+88h] [rbp+50h] BYREF
  __int64 v24; // [rsp+90h] [rbp+58h] BYREF
  void *v25; // [rsp+98h] [rbp+60h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  HvpGetCellContextInitialize(&v24);
  HvpGetCellContextInitialize(&v23);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2);
  v4 = *(_QWORD *)(KcbAtLayerHeight + 72);
  if ( *(__int16 *)(KcbAtLayerHeight + 66) >= 0 )
  {
    do
      v5 = CmpGetKcbAtLayerHeight(a2);
    while ( *(_DWORD *)(v5 + 40) == v7 && (__int16)(v6 - 1) >= 0 );
  }
  HvLockHiveFlusherShared(*(_QWORD *)(KcbAtLayerHeight + 32));
  v8 = *(unsigned __int16 *)(*(_QWORD *)(KcbAtLayerHeight + 80) + 24LL) + 76;
  Cell = HvAllocateCell(*(_QWORD *)(KcbAtLayerHeight + 32), (__int64)&v25, (__int64)&v24);
  v10 = (char *)v25;
  v11 = Cell;
  if ( Cell >= 0 )
  {
    memset_0(v25, 0, v8);
    *(_DWORD *)v10 = 27502;
    v10[12] = CmpGetPhaseAccessBit();
    v10[13] = v10[13] & 0xFC | 1;
    if ( (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 80) + 12LL) & 1) != 0 )
      *((_WORD *)v10 + 1) = 32;
    *(_QWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 4) = *(_DWORD *)(v4 + 40);
    *((_DWORD *)v10 + 7) = -1;
    *((_DWORD *)v10 + 8) = -1;
    *((_DWORD *)v10 + 10) = -1;
    *((_DWORD *)v10 + 11) = -1;
    *((_DWORD *)v10 + 12) = -1;
    *((_WORD *)v10 + 37) = 0;
    *((_DWORD *)v10 + 13) &= 0xFFF0FFFF;
    v10[55] = 0;
    *((_DWORD *)v10 + 13) &= 0xFF0FFFFF;
    v12 = *(unsigned __int16 *)(*(_QWORD *)(KcbAtLayerHeight + 80) + 24LL);
    *((_WORD *)v10 + 36) = v12;
    memmove(v10 + 76, (const void *)(*(_QWORD *)(KcbAtLayerHeight + 80) + 26LL), v12);
    SecurityDescriptorForKcbStack = CmpGetSecurityDescriptorForKcbStack(a2, 0LL);
    CmLockHiveSecurityExclusive(*(_QWORD *)(KcbAtLayerHeight + 32));
    v11 = CmpAssignSecurityDescriptor(
            *(_QWORD *)(KcbAtLayerHeight + 32),
            0xFFFFFFFFLL,
            v10,
            SecurityDescriptorForKcbStack);
    CmUnlockHiveSecurity(*(_QWORD *)(KcbAtLayerHeight + 32));
    if ( v11 >= 0 )
    {
      v11 = HvMarkCellDirty(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40));
      if ( v11 >= 0 )
      {
        v11 = CmpAddSubKey(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40), 0xFFFFFFFFLL);
        if ( v11 >= 0 )
        {
          CmpIncrementKcbSequenceNumber(KcbAtLayerHeight);
          *(_DWORD *)(KcbAtLayerHeight + 40) = -1;
          CmpRebuildKcbCacheFromNode(v14);
          v15 = *(_QWORD *)(v4 + 32);
          if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v15, *(unsigned int *)(v4 + 40), &v23);
          else
            CellFlat = HvpGetCellPaged(v15);
          v17 = CellFlat;
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v4 + 32));
          v18 = *((_WORD *)v10 + 36);
          if ( (v10[2] & 0x20) != 0 )
            v18 *= 2;
          if ( (unsigned __int16)*(_DWORD *)(v17 + 52) < (unsigned int)v18 )
            *(_WORD *)(v17 + 52) = v18;
          CmpIncrementKcbSequenceNumber(v4);
          v19 = *(_QWORD *)(v4 + 32);
          *(_WORD *)(v4 + 176) = *(_WORD *)(v17 + 52);
          if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v19, &v23);
          else
            HvpReleaseCellPaged(v19, &v23);
          LOBYTE(v20) = 1;
          CmpCleanUpSubKeyInfo(v4, v20);
          v11 = 0;
        }
      }
    }
  }
  if ( v10 )
  {
    v21 = *(_QWORD *)(KcbAtLayerHeight + 32);
    if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v21, &v24);
    else
      HvpReleaseCellPaged(v21, &v24);
  }
  HvUnlockHiveFlusherShared(*(_QWORD *)(KcbAtLayerHeight + 32));
  return (unsigned int)v11;
}
