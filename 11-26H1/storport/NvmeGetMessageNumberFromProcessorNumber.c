/*
 * XREFs of NvmeGetMessageNumberFromProcessorNumber @ 0x14008FC2C
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     RaUnitFillIrpData @ 0x140021950 (RaUnitFillIrpData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeGetMessageNumberFromProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2, unsigned int *a3)
{
  __int64 v3; // rax
  __int64 v7; // rbx
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v9; // r9d
  unsigned int i; // edx
  __int64 v11; // r10

  v3 = *(_QWORD *)(a1 + 600);
  if ( !v3 )
    return 3238002689LL;
  v7 = *(_QWORD *)(v3 + 120);
  if ( !v7 || !*(_QWORD *)(v3 + 128) )
    return 3238002689LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a2);
  v9 = *(_DWORD *)(v7 + 4);
  for ( i = 1; i < v9; ++i )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 600) + 128LL);
    if ( a2->Group == *(_WORD *)(v11 + 16LL * i + 8) && (a2->Number & *(_BYTE *)(v11 + 16LL * i)) != 0 )
      goto LABEL_10;
  }
  i = ProcessorIndexFromNumber % (v9 - 1) + 1;
LABEL_10:
  *a3 = i;
  return 0LL;
}
