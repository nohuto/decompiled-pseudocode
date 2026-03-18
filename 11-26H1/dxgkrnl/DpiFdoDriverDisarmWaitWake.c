/*
 * XREFs of DpiFdoDriverDisarmWaitWake @ 0x14025561C
 * Callers:
 *     DpiFdoArmWaitWake @ 0x140255350 (DpiFdoArmWaitWake.c)
 *     DpiFdoWaitWakePoCompletionWorkItem @ 0x140255680 (DpiFdoWaitWakePoCompletionWorkItem.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011178 (McTemplateK0p_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiFdoDriverDisarmWaitWake(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 2776))-- == 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 2824))(*(_QWORD *)(a1 + 2792));
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        return McTemplateK0p_EtwWriteTransfer(
                 (__int64)&DxgkControlGuid_Context,
                 (__int64)&EventDpiDxgkDdiWaitWakeDisarming);
    }
  }
  return result;
}
