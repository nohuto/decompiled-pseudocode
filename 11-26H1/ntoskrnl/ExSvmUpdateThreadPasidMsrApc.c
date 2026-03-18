/*
 * XREFs of ExSvmUpdateThreadPasidMsrApc @ 0x140840E50
 * Callers:
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407F0584 (PsUpdateSvmProcessPasidAllThreads.c)
 * Callees:
 *     ExBuildPasidMsrForThread @ 0x14050472C (ExBuildPasidMsrForThread.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExSvmUpdateThreadPasidMsrApc(__int64 a1)
{
  __int64 v1; // r9

  __writemsr(0xD93u, ExBuildPasidMsrForThread(*(_QWORD *)(a1 + 88)));
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(v1 + 96), 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(*(PVOID *)(v1 + 96), 0);
}
