/*
 * XREFs of memmove_s @ 0x18005C0E0
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18005BA90 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18008EE5A (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800E6C7C (memmove_0.c)
 */

errno_t __cdecl memmove_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v4; // rax
  errno_t v5; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination || !Source )
  {
    v4 = (errno_t *)_o__errno(Destination, DestinationSize);
    v5 = 22;
LABEL_4:
    *v4 = v5;
    invalid_parameter_noinfo();
    return v5;
  }
  if ( DestinationSize < SourceSize )
  {
    v4 = (errno_t *)((__int64 (*)(void))_o__errno)();
    v5 = 34;
    goto LABEL_4;
  }
  memmove_0(Destination, Source, SourceSize);
  return 0;
}
