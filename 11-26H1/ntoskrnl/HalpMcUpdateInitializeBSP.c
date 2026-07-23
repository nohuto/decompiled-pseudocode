/*
 * XREFs of HalpMcUpdateInitializeBSP @ 0x1405964E8
 * Callers:
 *     HalpProcInitSystem @ 0x140BF1320 (HalpProcInitSystem.c)
 * Callees:
 *     HalpGetCurrentMicrocodePlatform @ 0x140595854 (HalpGetCurrentMicrocodePlatform.c)
 *     PrExtControlOperations @ 0x1406E0CC8 (PrExtControlOperations.c)
 *     HalpMcExportAndChargeNeededData @ 0x140787D24 (HalpMcExportAndChargeNeededData.c)
 */

__int64 __fastcall HalpMcUpdateInitializeBSP(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  unsigned int v4; // ebx

  HalpMcUpdateSelfHosting = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x8000000) != 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 3800LL);
  if ( v2 && (int)PrExtControlOperations(5LL, v2) < 0 || (int)PrExtControlOperations(3LL, &HalpMcUpdateSelfHosting) < 0 )
    return 3221225473LL;
  result = HalpGetCurrentMicrocodePlatform();
  v4 = result;
  if ( (int)result >= 0 )
  {
    HalpMcExportAndChargeNeededData(
      *(void **)(*(_QWORD *)(a1 + 240) + 3920LL),
      *(unsigned int *)(*(_QWORD *)(a1 + 240) + 3928LL));
    return v4;
  }
  return result;
}
