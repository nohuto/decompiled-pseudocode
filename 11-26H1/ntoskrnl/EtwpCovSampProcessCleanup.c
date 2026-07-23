/*
 * XREFs of EtwpCovSampProcessCleanup @ 0x140A33ED0
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x1409BDF40 (EtwpCoverageSamplerStop.c)
 *     EtwExitProcess @ 0x140A33B70 (EtwExitProcess.c)
 *     EtwpCovSampProcessEnsureContext @ 0x140A35120 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampContextCleanup @ 0x140B229A0 (EtwpCovSampContextCleanup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     EtwpCovSampModuleDereference @ 0x140A340B4 (EtwpCovSampModuleDereference.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
