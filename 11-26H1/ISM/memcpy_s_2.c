/*
 * XREFs of memcpy_s_2 @ 0x1800A5214
 * Callers:
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800A4030 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800A4120 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009AAB2 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_2(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v8; // rax
  errno_t v9; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_4;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_4:
    v8 = (errno_t *)_o__errno(Destination, DestinationSize, Source);
    v9 = 22;
LABEL_5:
    *v8 = v9;
    invalid_parameter_noinfo();
    return v9;
  }
  if ( DestinationSize < SourceSize )
  {
    v8 = (errno_t *)_o__errno(Destination, DestinationSize, Source);
    v9 = 34;
    goto LABEL_5;
  }
  return 22;
}
