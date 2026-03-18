/*
 * XREFs of ??0CDwmAppHost@@QEAA@XZ @ 0x140003DDC
 * Callers:
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001E80 (_dynamic_initializer_for__g_dwmAppHost__.c)
 * Callees:
 *     <none>
 */

CDwmAppHost *__fastcall CDwmAppHost::CDwmAppHost(CDwmAppHost *this)
{
  HANDLE CurrentProcess; // rax
  _OWORD ProcessInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v4; // [rsp+50h] [rbp-18h]

  dword_14001C4C8 = 1;
  qword_14001C4E0 = 0LL;
  *(_OWORD *)&hInstance = 0LL;
  g_dwmAppHost = (__int64)&CDwmAppHost::`vftable';
  qword_14001C4F8[0] = (__int64)&CSettingsManager::`vftable';
  dword_14001C4E8 = 0;
  hWnd = 0LL;
  byte_14001C518 = 1;
  SRWLock.Ptr = 0LL;
  dword_14001C530 = 0;
  *(_QWORD *)&uExitCode = 0LL;
  byte_14001C548 = 0;
  qword_14001C550 = 0LL;
  byte_14001C558 = 0;
  dword_14001C55C = 3000;
  qword_14001C560 = 0LL;
  byte_14001C568 = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  v4 = 0LL;
  CurrentProcess = GetCurrentProcess();
  if ( NtQueryInformationProcess(CurrentProcess, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) >= 0 )
    LODWORD(qword_14001C4E0) = DWORD2(v4);
  return (CDwmAppHost *)&g_dwmAppHost;
}
