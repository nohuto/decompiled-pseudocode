/*
 * XREFs of DCompositionForceRender @ 0x1400E82F8
 * Callers:
 *     PowerOnMonitor @ 0x14007FA80 (PowerOnMonitor.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJXZ @ 0x1400E833C (-ForceRender@CConnection@DirectComposition@@QEAAJXZ.c)
 */

__int64 DCompositionForceRender()
{
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v1; // rbx
  unsigned int v2; // edi
  unsigned int v3; // edx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v1 = DefaultConnection;
  if ( DefaultConnection )
  {
    v2 = DirectComposition::CConnection::ForceRender(DefaultConnection);
    DirectComposition::CConnection::Release(v1, v3);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}
