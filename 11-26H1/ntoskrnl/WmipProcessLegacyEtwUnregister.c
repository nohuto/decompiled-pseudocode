/*
 * XREFs of WmipProcessLegacyEtwUnregister @ 0x140A84E68
 * Callers:
 *     WmipLegacyEtwWorker @ 0x140B22A20 (WmipLegacyEtwWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
 */

NTSTATUS __fastcall WmipProcessLegacyEtwUnregister(__int64 a1)
{
  REGHANDLE v2; // rdi
  NTSTATUS result; // eax

  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  result = KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
  if ( v2 )
    return EtwUnregister(v2);
  return result;
}
