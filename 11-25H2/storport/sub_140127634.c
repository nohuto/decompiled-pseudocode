/*
 * XREFs of sub_140127634 @ 0x140127634
 * Callers:
 *     sub_140191D68 @ 0x140191D68 (sub_140191D68.c)
 *     sub_1401942EC @ 0x1401942EC (sub_1401942EC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_140127634(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rcx
  NTSTATUS result; // eax

  v1 = *(struct _UNICODE_STRING **)(a1 + 160);
  if ( v1[21].Buffer )
    return IoSetDeviceInterfaceState(v1 + 21, 0);
  return result;
}
