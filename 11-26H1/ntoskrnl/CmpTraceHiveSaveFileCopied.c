/*
 * XREFs of CmpTraceHiveSaveFileCopied @ 0x14085B988
 * Callers:
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN CmpTraceHiveSaveFileCopied()
{
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-28h] BYREF

  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_SAVE_FILE_COPIED;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
    return EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 0, 0LL);
  return result;
}
