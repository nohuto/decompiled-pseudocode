/*
 * XREFs of memcpy_s_1 @ 0x1801D7C5C
 * Callers:
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180126880 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

errno_t __cdecl memcpy_s_1(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  int *v7; // rax
  errno_t v8; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_10;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_10:
    v7 = _errno();
    v8 = 22;
    goto LABEL_11;
  }
  if ( DestinationSize < SourceSize )
  {
    v7 = _errno();
    v8 = 34;
LABEL_11:
    *v7 = v8;
    _invalid_parameter_noinfo();
    return v8;
  }
  return 22;
}
