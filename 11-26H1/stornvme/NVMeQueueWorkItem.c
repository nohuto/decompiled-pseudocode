/*
 * XREFs of NVMeQueueWorkItem @ 0x14001EC70
 * Callers:
 *     NVMeWriteBufferFirmwareDownload @ 0x140002A30 (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 *     NVMeCompletionDpcRoutine @ 0x1400096D0 (NVMeCompletionDpcRoutine.c)
 *     FirmwareDownload @ 0x14001A63C (FirmwareDownload.c)
 *     NVMeFirmwareActivateCompletion @ 0x14001D5A0 (NVMeFirmwareActivateCompletion.c)
 *     NVMeSanitizeCommandCompletion @ 0x14001FEF0 (NVMeSanitizeCommandCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x140020630 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x140023580 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x140028618 (NVMeReenumerateNameSpaceIdentify.c)
 *     ProcessNvmeSanitizeStatus @ 0x14002C040 (ProcessNvmeSanitizeStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeQueueWorkItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  result = StorPortExtendedFunction(29LL, a1, &v7, a4);
  if ( !(_DWORD)result )
    return StorPortExtendedFunction(30LL, a1, a2, v7);
  return result;
}
