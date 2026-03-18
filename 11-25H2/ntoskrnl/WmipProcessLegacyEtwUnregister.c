/*
 * XREFs of WmipProcessLegacyEtwUnregister @ 0x14079639C
 * Callers:
 *     WmipLegacyEtwWorker @ 0x1409B8B90 (WmipLegacyEtwWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     EtwUnregister @ 0x140A01CC0 (EtwUnregister.c)
 */

NTSTATUS __fastcall WmipProcessLegacyEtwUnregister(__int64 a1)
{
  REGHANDLE v2; // rdi
  NTSTATUS result; // eax

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  result = KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  if ( v2 )
    return EtwUnregister(v2);
  return result;
}
