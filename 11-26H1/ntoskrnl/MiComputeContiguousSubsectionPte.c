/*
 * XREFs of MiComputeContiguousSubsectionPte @ 0x14048ADEC
 * Callers:
 *     MiAdvanceVadView @ 0x1403178D0 (MiAdvanceVadView.c)
 *     MiInitializeDataVad @ 0x140996B10 (MiInitializeDataVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeContiguousSubsectionPte(__int64 a1, unsigned __int64 a2)
{
  if ( a2 >= (unsigned int)(*(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 52)) )
    a2 = (unsigned int)(*(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 52) - 1);
  return *(_QWORD *)(a1 + 8) + 8 * a2;
}
