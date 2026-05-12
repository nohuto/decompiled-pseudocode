/*
 * XREFs of sub_14005A248 @ 0x14005A248
 * Callers:
 *     sub_1401B0538 @ 0x1401B0538 (sub_1401B0538.c)
 *     sub_1401B0790 @ 0x1401B0790 (sub_1401B0790.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_14005A248(struct _UNICODE_STRING *a1)
{
  NTSTATUS result; // eax

  if ( a1[358].Buffer )
    return IoSetDeviceInterfaceState(a1 + 358, 0);
  return result;
}
