/*
 * XREFs of DCompositionForceRender @ 0x140135368
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     PowerOnMonitor @ 0x1401D6660 (PowerOnMonitor.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJXZ @ 0x1401353AC (-ForceRender@CConnection@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DCompositionForceRender(__int64 a1)
{
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v2; // rbx
  unsigned int v3; // edi

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  v2 = DefaultConnection;
  if ( DefaultConnection )
  {
    v3 = DirectComposition::CConnection::ForceRender(DefaultConnection);
    DirectComposition::CConnection::Release(v2);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
