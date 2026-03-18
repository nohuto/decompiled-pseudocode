/*
 * XREFs of WdtpCancelTimer @ 0x1409DDFE0
 * Callers:
 *     PnpDisableWatchdog @ 0x1409DDFA8 (PnpDisableWatchdog.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExCancelTimer @ 0x1403AA0D0 (ExCancelTimer.c)
 *     ExDeleteTimer @ 0x1403AABC0 (ExDeleteTimer.c)
 */

NTSTATUS __fastcall WdtpCancelTimer(__int64 a1, char a2)
{
  ULONG_PTR v3; // rcx
  NTSTATUS result; // eax

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 )
  {
    ExDeleteTimer(v3, 1, 1, 0LL);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  else
  {
    ExCancelTimer(v3, 0LL);
  }
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  result = *(_DWORD *)(a1 + 88);
  if ( result > 0 )
    return KeWaitForSingleObject((PVOID)(a1 + 96), Executive, 0, 0, 0LL);
  return result;
}
