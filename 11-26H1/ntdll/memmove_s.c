/*
 * XREFs of memmove_s @ 0x180133BF0
 * Callers:
 *     _StartPathWithLongPathPrefixIfNeeded @ 0x1800E5DE4 (_StartPathWithLongPathPrefixIfNeeded.c)
 * Callees:
 *     _invalid_parameter @ 0x180126898 (_invalid_parameter.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

errno_t __cdecl memmove_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t v5; // ebx

  if ( !SourceSize )
    return 0;
  if ( Destination && Source )
  {
    if ( DestinationSize >= SourceSize )
    {
      memmove(Destination, Source, SourceSize);
      return 0;
    }
    v5 = 34;
  }
  else
  {
    v5 = 22;
  }
  invalid_parameter();
  return v5;
}
