/*
 * XREFs of EtwTraceSleepInputIdle @ 0x14012DC40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14001E620 (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceSleepInputIdle(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0p_EtwWriteTransfer(a1, (__int64)&SleepInputIdleEvent, a1, a2);
  return result;
}
