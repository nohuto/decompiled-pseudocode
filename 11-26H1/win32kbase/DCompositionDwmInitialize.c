/*
 * XREFs of DCompositionDwmInitialize @ 0x140194C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ @ 0x14022A248 (-OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DCompositionDwmInitialize(__int64 a1)
{
  unsigned int v1; // ebx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v3; // rdi

  v1 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  v3 = DefaultConnection;
  if ( DefaultConnection )
  {
    v1 = DirectComposition::CConnection::OnDwmInitializeInternal(DefaultConnection);
    DirectComposition::CConnection::Release(v3);
  }
  return v1;
}
