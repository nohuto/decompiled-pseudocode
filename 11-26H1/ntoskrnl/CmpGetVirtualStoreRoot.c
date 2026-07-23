/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x140860160
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140860234 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpGetVirtualizationID @ 0x1408B7880 (CmpGetVirtualizationID.c)
 *     CmpGetMappingHiveForString @ 0x1408D77A4 (CmpGetMappingHiveForString.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     CmpReferenceKeyControlBlock @ 0x140A81AC0 (CmpReferenceKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x140B56808 (CmpFindKcbInHashEntryByCellIndex.c)
 */

__int64 __fastcall CmpGetVirtualStoreRoot(__int64 a1, __int64 *a2, _DWORD *a3, ULONG_PTR *a4)
{
  int VirtualizationID; // esi
  __int64 v8; // rcx
  __int64 v9; // rdi
  ULONG_PTR KcbInHashEntryByCellIndex; // rbx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  VirtualizationID = CmpGetVirtualizationID(&UnicodeString);
  if ( VirtualizationID >= 0 )
  {
    VirtualizationID = CmpGetMappingHiveForString(&UnicodeString, a2);
    if ( VirtualizationID >= 0 )
    {
      v8 = *a2;
      v9 = *(unsigned int *)(*(_QWORD *)(*a2 + 64) + 36LL);
      KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v8, 0LL, v9);
      CmpReferenceKeyControlBlock(KcbInHashEntryByCellIndex);
      *a3 = v9;
      *a4 = KcbInHashEntryByCellIndex;
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)VirtualizationID;
}
