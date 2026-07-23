/*
 * XREFs of PpmCheckMaintainArtificialDomain @ 0x1404EE990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PpmCheckMaintainArtificialDomain()
{
  __int64 v0; // rcx

  if ( !PpmPerfArtificialDomainEnabled )
  {
    LODWORD(v0) = PpmCheckPipelineIndex;
    if ( *(__int64 (**)())(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex) != PpmCheckReportComplete )
    {
      do
        v0 = (unsigned int)(v0 + 1);
      while ( *(__int64 (**)())(PpmCheckPipeline + 8 * v0) != PpmCheckReportComplete );
      PpmCheckPipelineIndex = v0;
    }
  }
}
