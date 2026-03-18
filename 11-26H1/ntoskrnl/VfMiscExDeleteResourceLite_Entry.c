/*
 * XREFs of VfMiscExDeleteResourceLite_Entry @ 0x140C3C8B0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeleteResource @ 0x140C406AC (VfDeleteResource.c)
 */

__int64 __fastcall VfMiscExDeleteResourceLite_Entry(__int64 a1)
{
  return VfDeleteResource(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
}
