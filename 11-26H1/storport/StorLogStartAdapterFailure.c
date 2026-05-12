/*
 * XREFs of StorLogStartAdapterFailure @ 0x140097CA8
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x140035C2C (RaidAdapterStartDeviceIrp.c)
 *     RaidPnPAsyncStartComplete @ 0x14006CF80 (RaidPnPAsyncStartComplete.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x14006D350 (RaidPnPAsyncStartCompleteWorker.c)
 * Callees:
 *     McTemplateK0qjzzqxxqq_EtwWriteTransfer @ 0x14008E894 (McTemplateK0qjzzqxxqq_EtwWriteTransfer.c)
 */

void __fastcall StorLogStartAdapterFailure(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  const wchar_t *v3; // rdx

  v2 = a2;
  if ( a1 && StorEtwLoggingEnabled && byte_140173446 < 0 )
  {
    v3 = (const wchar_t *)&unk_140153274;
    if ( *(_QWORD *)(a1 + 5144) )
      v3 = *(const wchar_t **)(a1 + 5144);
    McTemplateK0qjzzqxxqq_EtwWriteTransfer(
      a1 + 5128,
      (__int64)v3,
      v2,
      *(_DWORD *)(a1 + 56),
      a1 + 5128,
      *(const wchar_t **)(a1 + 4784),
      v3,
      *(_DWORD *)(a1 + 392),
      *(_QWORD *)(a1 + 104),
      *(_QWORD *)(a1 + 112),
      *(_DWORD *)(a1 + 6252),
      v2);
  }
}
