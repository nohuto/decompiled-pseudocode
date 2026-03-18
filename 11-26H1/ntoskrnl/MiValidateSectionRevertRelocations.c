/*
 * XREFs of MiValidateSectionRevertRelocations @ 0x1409CD26C
 * Callers:
 *     MiValidateSectionCreate @ 0x1409CB8F4 (MiValidateSectionCreate.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     KeZeroSinglePage @ 0x1407307A0 (KeZeroSinglePage.c)
 *     KeCopyPageNoOverride @ 0x140730860 (KeCopyPageNoOverride.c)
 *     MiRevertRelocations @ 0x1409CE770 (MiRevertRelocations.c)
 */

__int64 __fastcall MiValidateSectionRevertRelocations(__int64 a1)
{
  __int64 v2; // r15
  unsigned int v3; // edx
  unsigned int v4; // ebx
  unsigned int v5; // edi
  int CurrentProcessorColor; // eax
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rsi

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 44) == 2 )
  {
    v5 = *(_DWORD *)(a1 + 104);
    v4 = 0;
  }
  else
  {
    v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 56LL) + 64LL);
    v4 = 0;
    v5 = ((v3 & 0xFFF) != 0) + (v3 >> 12);
    *(_DWORD *)(a1 + 104) = v5;
  }
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = ExAllocatePoolMm(256LL, v5 << 12, 1749642573, CurrentProcessorColor | 0x80000000);
  v8 = result;
  if ( result )
  {
    v9 = result;
    v10 = *(_QWORD *)(a1 + 64);
    while ( v4 < v5 )
    {
      KeCopyPageNoOverride(v9 + (v4 << 12), (v4 << 12) + v10);
      ++v4;
    }
    MiRevertRelocations(v8, v2, v5);
    return v8;
  }
  return result;
}
