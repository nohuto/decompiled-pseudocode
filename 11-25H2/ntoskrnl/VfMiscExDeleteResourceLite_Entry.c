/*
 * XREFs of VfMiscExDeleteResourceLite_Entry @ 0x140B8D870
 * Callers:
 *     <none>
 * Callees:
 *     VfDeleteResource @ 0x140B918AC (VfDeleteResource.c)
 */

__int64 __fastcall VfMiscExDeleteResourceLite_Entry(__int64 a1)
{
  return VfDeleteResource(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
}
