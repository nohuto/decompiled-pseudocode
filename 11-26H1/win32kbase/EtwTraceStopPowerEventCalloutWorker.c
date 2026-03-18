/*
 * XREFs of EtwTraceStopPowerEventCalloutWorker @ 0x140113E04
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x140113E38 (McTemplateK0qxq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceStopPowerEventCalloutWorker(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0qxq_EtwWriteTransfer(a1, (unsigned int)&StopPowerEventCalloutWorker, a3, a1, a2, a3);
  return result;
}
