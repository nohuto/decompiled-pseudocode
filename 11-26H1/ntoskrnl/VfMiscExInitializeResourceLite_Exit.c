/*
 * XREFs of VfMiscExInitializeResourceLite_Exit @ 0x140C42A50
 * Callers:
 *     <none>
 * Callees:
 *     VfTrackResource @ 0x140C467E0 (VfTrackResource.c)
 */

__int64 __fastcall VfMiscExInitializeResourceLite_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(int *)(a1 + 16) >= 0 )
    return VfTrackResource(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
  return result;
}
