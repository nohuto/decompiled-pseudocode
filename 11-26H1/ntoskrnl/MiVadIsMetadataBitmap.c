/*
 * XREFs of MiVadIsMetadataBitmap @ 0x140A06A94
 * Callers:
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 *     NtAreMappedFilesTheSame @ 0x140A06AE0 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadIsMetadataBitmap(__int64 a1)
{
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  unsigned int i; // edx

  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
      return 0LL;
    if ( ActiveProcessors[5].StaticBitmap[4 * i + 9] == a1 )
      break;
  }
  return 1LL;
}
