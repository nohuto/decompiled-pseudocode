/*
 * XREFs of PopFxUpdateProcessorIdleState @ 0x140608830
 * Callers:
 *     <none>
 * Callees:
 *     PopFxTryReferenceDevice @ 0x14021B7B8 (PopFxTryReferenceDevice.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxUpdateProcessorIdleState(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // ebx

  if ( *a3 )
  {
    v4 = -1073741822;
    if ( *(_QWORD *)(a1 + 152) )
    {
      v4 = PopFxTryReferenceDevice(a1, 1);
      if ( v4 >= 0 )
      {
        v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 192), &GUID_PROCESSOR_IDLE_UPDATE);
        PopFxDereferenceDevice(a1, 1);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v4;
}
