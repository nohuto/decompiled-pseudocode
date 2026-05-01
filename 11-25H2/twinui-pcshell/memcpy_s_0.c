/*
 * XREFs of memcpy_s_0 @ 0x1800F1820
 * Callers:
 *     ?TmQueryPcwCounter@Cpu@@QEAAJPEAPEAU_COUNTER_BUFFER@@0PEAX@Z @ 0x180356E3C (-TmQueryPcwCounter@Cpu@@QEAAJPEAPEAU_COUNTER_BUFFER@@0PEAX@Z.c)
 *     ?UpdateCpuQuery@Cpu@@QEAAJPEAN@Z @ 0x180356FB4 (-UpdateCpuQuery@Cpu@@QEAAJPEAN@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1802D2EE6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
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
