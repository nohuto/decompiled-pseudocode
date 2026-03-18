/*
 * XREFs of ??0CPortClient@@QEAA@I@Z @ 0x14000D348
 * Callers:
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x14000223C (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140002C30 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003644 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

CPortClient *__fastcall CPortClient::CPortClient(CPortClient *this)
{
  *(_QWORD *)this = &CPortClient::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
