/*
 * XREFs of WmipProcessLegacyEtwUnregister @ 0x1409BE4E0
 * Callers:
 *     WmipLegacyEtwWorker @ 0x140B24E20 (WmipLegacyEtwWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 */

NTSTATUS __fastcall WmipProcessLegacyEtwUnregister(__int64 a1)
{
  REGHANDLE v2; // rdi
  NTSTATUS result; // eax

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  result = KeReleaseMutex(&WmipSMMutex, 0);
  if ( v2 )
    return EtwUnregister(v2);
  return result;
}
