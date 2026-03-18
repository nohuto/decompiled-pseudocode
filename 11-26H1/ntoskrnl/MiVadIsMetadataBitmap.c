/*
 * XREFs of MiVadIsMetadataBitmap @ 0x1409611E0
 * Callers:
 *     MiLockVadRange @ 0x140960DAC (MiLockVadRange.c)
 *     NtAreMappedFilesTheSame @ 0x140961230 (NtAreMappedFilesTheSame.c)
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
