/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x140859E6C
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140859F40 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmpGetVirtualizationID @ 0x1408B1274 (CmpGetVirtualizationID.c)
 *     CmpGetMappingHiveForString @ 0x1408D11E4 (CmpGetMappingHiveForString.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     CmpReferenceKeyControlBlock @ 0x140A79B80 (CmpReferenceKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x140B53F68 (CmpFindKcbInHashEntryByCellIndex.c)
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
