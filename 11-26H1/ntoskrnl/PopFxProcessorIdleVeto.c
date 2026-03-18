/*
 * XREFs of PopFxProcessorIdleVeto @ 0x140605430
 * Callers:
 *     <none>
 * Callees:
 *     PopFxTryReferenceDevice @ 0x140218E68 (PopFxTryReferenceDevice.c)
 *     PopFxDereferenceDevice @ 0x1403B61F4 (PopFxDereferenceDevice.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxProcessorIdleVeto(__int64 a1)
{
  int v2; // ebx

  v2 = -1073741822;
  if ( *(_QWORD *)(a1 + 152) )
  {
    v2 = PopFxTryReferenceDevice(a1, 1);
    if ( v2 >= 0 )
    {
      v2 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 192), &GUID_PROCESSOR_IDLE_VETO);
      PopFxDereferenceDevice(a1, 1);
    }
  }
  return (unsigned int)v2;
}
