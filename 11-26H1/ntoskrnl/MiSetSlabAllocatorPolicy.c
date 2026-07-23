/*
 * XREFs of MiSetSlabAllocatorPolicy @ 0x14070C644
 * Callers:
 *     MiMakePartitionActive @ 0x1404A3310 (MiMakePartitionActive.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetSlabAllocatorPolicy(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( dword_140FBF264 != 1 && (MiFlags & 0x10000) != 0 )
  {
    if ( !*(_DWORD *)(a1 + 21524) || (result = *(_QWORD *)(a1 + 22288), result >= 0xED800) || dword_140FBF264 == 2 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 4), 8u);
  }
  return result;
}
