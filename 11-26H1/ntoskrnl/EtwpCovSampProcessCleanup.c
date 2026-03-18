/*
 * XREFs of EtwpCovSampProcessCleanup @ 0x140940DC0
 * Callers:
 *     EtwExitProcess @ 0x140940A60 (EtwExitProcess.c)
 *     EtwpCovSampProcessEnsureContext @ 0x140942010 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCoverageSamplerStop @ 0x140A84B18 (EtwpCoverageSamplerStop.c)
 *     EtwpCovSampContextCleanup @ 0x140B205A0 (EtwpCovSampContextCleanup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     EtwpCovSampModuleDereference @ 0x140940FA4 (EtwpCovSampModuleDereference.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampProcessCleanup(PVOID **a1, char a2)
{
  int v4; // r8d

  if ( a1[3] )
  {
    if ( *((_DWORD *)a1 + 8) )
    {
      do
        EtwpCovSampModuleDereference(*a1);
      while ( (unsigned int)(v4 + 1) < *((_DWORD *)a1 + 8) );
    }
    ExFreePoolWithTag(a1[3], 0x56777445u);
    a1[3] = 0LL;
    a1[4] = 0LL;
  }
  if ( a1[6] )
  {
    EtwpCovSampModuleDereference(*a1);
    a1[6] = 0LL;
  }
  if ( *a1 )
  {
    if ( a2 )
      ObfDereferenceObject(**a1);
    *a1 = 0LL;
  }
}
