/*
 * XREFs of DCompositionIsShellProcess @ 0x140028F9C
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x140027938 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

bool DCompositionIsShellProcess()
{
  bool v0; // bl
  struct DirectComposition::CConnection *DefaultConnection; // rdi

  v0 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v0 = PsGetCurrentProcess() == *((_QWORD *)DefaultConnection + 33);
    DirectComposition::CConnection::Release(DefaultConnection);
  }
  return v0;
}
