/*
 * XREFs of memcpy_s_0 @ 0x1800F4030
 * Callers:
 *     ?TmQueryPcwCounter@Cpu@@QEAAJPEAPEAU_COUNTER_BUFFER@@0PEAX@Z @ 0x18035D738 (-TmQueryPcwCounter@Cpu@@QEAAJPEAPEAU_COUNTER_BUFFER@@0PEAX@Z.c)
 *     ?UpdateCpuQuery@Cpu@@QEAAJPEAN@Z @ 0x18035D8C0 (-UpdateCpuQuery@Cpu@@QEAAJPEAN@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1802C9DB6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_7;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_7:
    *(_DWORD *)_o__errno(Destination, DestinationSize, Source) = 22;
    invalid_parameter_noinfo();
    return 22;
  }
  if ( DestinationSize >= SourceSize )
    return 22;
  *(_DWORD *)_o__errno(Destination, DestinationSize, Source) = 34;
  invalid_parameter_noinfo();
  return 34;
}
