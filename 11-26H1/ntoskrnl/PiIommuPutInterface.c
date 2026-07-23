/*
 * XREFs of PiIommuPutInterface @ 0x1407B7AA8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1409DB224 (PiIommuGetInterface.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiIommuPutInterface(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
  return result;
}
