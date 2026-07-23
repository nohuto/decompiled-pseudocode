/*
 * XREFs of ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z @ 0x1403DB1B0
 * Callers:
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x1403DA7C8 (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x14052DF14 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K0KVCDirectFnEnt@@PEAU_CONTEXT@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x14062320C (--$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x1403D9FF0 (RtlLocateExtendedFeature.c)
 */

__int64 __fastcall RtlpVirtualPopShadowStack<_CONTEXT *>(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  _QWORD *ExtendedFeature; // rax

  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x100040) == 0x100040 )
    {
      ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a1 + 1232), 0xBu, 0LL);
      if ( ExtendedFeature )
      {
        if ( (*(_BYTE *)ExtendedFeature & 1) != 0 )
          ExtendedFeature[1] += (unsigned int)(8 * a2);
      }
    }
  }
  result = *(_DWORD *)(a1 + 48) & 0x100080;
  if ( (_DWORD)result == 1048704 )
    *(_QWORD *)(*(int *)(a1 + 1256) + a1 + 1232) += (unsigned int)(8 * a3);
  return result;
}
