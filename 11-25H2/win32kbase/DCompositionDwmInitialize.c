/*
 * XREFs of DCompositionDwmInitialize @ 0x140157530
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ @ 0x140227F4C (-OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ.c)
 */

__int64 DCompositionDwmInitialize()
{
  unsigned int v0; // ebx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v2; // rdi
  unsigned int v3; // edx

  v0 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v2 = DefaultConnection;
  if ( DefaultConnection )
  {
    v0 = DirectComposition::CConnection::OnDwmInitializeInternal(DefaultConnection);
    DirectComposition::CConnection::Release(v2, v3);
  }
  return v0;
}
