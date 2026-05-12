/*
 * XREFs of sub_14005A2EC @ 0x14005A2EC
 * Callers:
 *     sub_1401B0538 @ 0x1401B0538 (sub_1401B0538.c)
 *     sub_1401B0790 @ 0x1401B0790 (sub_1401B0790.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_14005A2EC(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 5552) )
    return IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5544), 0);
  return result;
}
