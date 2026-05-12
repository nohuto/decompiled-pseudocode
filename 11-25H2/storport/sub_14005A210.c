/*
 * XREFs of sub_14005A210 @ 0x14005A210
 * Callers:
 *     sub_1401B0538 @ 0x1401B0538 (sub_1401B0538.c)
 *     sub_1401B0790 @ 0x1401B0790 (sub_1401B0790.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_14005A210(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rcx
  NTSTATUS result; // eax

  v1 = *(struct _UNICODE_STRING **)(a1 + 6160);
  if ( v1 )
  {
    if ( v1[1].Buffer )
      return IoSetDeviceInterfaceState(v1 + 1, 0);
  }
  return result;
}
