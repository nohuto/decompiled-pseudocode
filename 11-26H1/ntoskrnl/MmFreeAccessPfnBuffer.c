/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x1404A3E88
 * Callers:
 *     PfpReturnAccessBuffer @ 0x1404D94E0 (PfpReturnAccessBuffer.c)
 *     PfpFlushBuffers @ 0x140A05BE0 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x140BF8DFC (PfTAccessTracingCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MmFreeAccessPfnBuffer(_QWORD *P, char a2)
{
  void *v3; // rcx

  if ( !*((_DWORD *)P + 2) )
  {
    v3 = (void *)P[7];
    if ( (unsigned __int64)v3 > 1 )
    {
      if ( a2 )
        ObDereferenceObjectDeferDeleteWithTag(v3, 0x4C416D4Du);
      else
        ObfDereferenceObjectWithTag(v3, 0x4C416D4Du);
    }
  }
  ExFreePoolWithTag(P, 0);
}
