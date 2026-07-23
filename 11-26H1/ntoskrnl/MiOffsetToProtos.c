/*
 * XREFs of MiOffsetToProtos @ 0x1403422D4
 * Callers:
 *     MiProtoFaultApplyPrivateFixups @ 0x1402BC040 (MiProtoFaultApplyPrivateFixups.c)
 *     MiReferenceDataSubsections @ 0x14034125C (MiReferenceDataSubsections.c)
 *     MiRemoveMappedPtes @ 0x140341C78 (MiRemoveMappedPtes.c)
 *     MiAddMappedPtes @ 0x140341E90 (MiAddMappedPtes.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiSystemImageHasPrivateFixups @ 0x140492D78 (MiSystemImageHasPrivateFixups.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiDereferenceDataSubsections @ 0x14070EE8C (MiDereferenceDataSubsections.c)
 *     MiScanRelocationPage @ 0x140881A44 (MiScanRelocationPage.c)
 *     MiRelocateValidateFixups @ 0x14099C24C (MiRelocateValidateFixups.c)
 *     MiLogRelocationRva @ 0x14099D6F8 (MiLogRelocationRva.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetControlAreaPtes @ 0x1402C57D0 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x1402C68F0 (MiLocateSubsectionNode.c)
 *     MiLocatePagefileSubsection @ 0x140342390 (MiLocatePagefileSubsection.c)
 */

__int64 __fastcall MiOffsetToProtos(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  _DWORD *i; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx

  *a3 = a2 >> 12;
  if ( *a3 >= MiGetControlAreaPtes(a1) )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 64) )
    return MiLocatePagefileSubsection(a1 + 128, a3);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v8 = *a3;
    for ( i = (_DWORD *)(a1 + 128); ; i = (_DWORD *)*((_QWORD *)i + 2) )
    {
      v9 = (unsigned int)i[11];
      if ( v8 < v9 )
        break;
      v8 -= v9;
      *a3 = v8;
    }
  }
  else
  {
    i = MiLocateSubsectionNode(a1, a2, 0);
    *a3 -= (unsigned int)i[9] | ((unsigned __int64)(i[8] & 0xFFC0) << 26);
  }
  return (__int64)i;
}
