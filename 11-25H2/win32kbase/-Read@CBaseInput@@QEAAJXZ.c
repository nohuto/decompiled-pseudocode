/*
 * XREFs of ?Read@CBaseInput@@QEAAJXZ @ 0x14014A440
 * Callers:
 *     PerfomInitialReadInputOnSharedThread @ 0x14014A3E0 (PerfomInitialReadInputOnSharedThread.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x14018A660 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     PerfomInitialReadInputExplicitly @ 0x1401A08FC (PerfomInitialReadInputExplicitly.c)
 * Callees:
 *     RIMReadInput @ 0x140034A90 (RIMReadInput.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1400DA790 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CBaseInput::Read(CBaseInput *this)
{
  __int64 DispatcherHandleByName; // rdi

  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName((__int64)this, 2u, 0);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1019LL);
  return RIMReadInput(
           *((char **)this + 1),
           (__int64)this + 64,
           *((_DWORD *)this + 14),
           DispatcherHandleByName,
           0,
           (__int64)this + 48,
           (__int64)this + 24,
           (__int64)this + 32);
}
