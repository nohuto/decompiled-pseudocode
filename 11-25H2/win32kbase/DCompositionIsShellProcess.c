/*
 * XREFs of DCompositionIsShellProcess @ 0x14004E640
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x14004DA74 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

bool DCompositionIsShellProcess()
{
  char v0; // bl
  struct DirectComposition::CConnection *DefaultConnection; // rsi
  __int64 CurrentProcess; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi

  v0 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    CurrentProcess = PsGetCurrentProcess();
    v3 = *((_QWORD *)DefaultConnection + 33);
    v4 = CurrentProcess;
    DirectComposition::CConnection::Release(DefaultConnection);
    return v4 == v3;
  }
  return v0;
}
