/*
 * XREFs of MiOffsetToProtos @ 0x140340254
 * Callers:
 *     MiProtoFaultApplyPrivateFixups @ 0x1402DA280 (MiProtoFaultApplyPrivateFixups.c)
 *     MiReferenceDataSubsections @ 0x14033F1DC (MiReferenceDataSubsections.c)
 *     MiRemoveMappedPtes @ 0x14033FBF8 (MiRemoveMappedPtes.c)
 *     MiAddMappedPtes @ 0x14033FE10 (MiAddMappedPtes.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MiSystemImageHasPrivateFixups @ 0x140499228 (MiSystemImageHasPrivateFixups.c)
 *     MiInsertInSystemSpace @ 0x1404EDA44 (MiInsertInSystemSpace.c)
 *     MiDereferenceDataSubsections @ 0x14070A1D8 (MiDereferenceDataSubsections.c)
 *     MiScanRelocationPage @ 0x14087B644 (MiScanRelocationPage.c)
 *     MiRelocateValidateFixups @ 0x1409CB26C (MiRelocateValidateFixups.c)
 *     MiLogRelocationRva @ 0x1409CC718 (MiLogRelocationRva.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetControlAreaPtes @ 0x1402E3790 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x1402E48B0 (MiLocateSubsectionNode.c)
 *     MiLocatePagefileSubsection @ 0x140340310 (MiLocatePagefileSubsection.c)
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
