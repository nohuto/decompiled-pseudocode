/*
 * XREFs of memcpy_s @ 0x18000ABB4
 * Callers:
 *     ?CopyPnpInstancePath@Win32kInterop@@AEAAXKPEBGKPEAG@Z @ 0x18000AB48 (-CopyPnpInstancePath@Win32kInterop@@AEAAXKPEBGKPEAG@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009AAB2 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s(
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
    goto LABEL_8;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_8:
    v8 = (errno_t *)_o__errno();
    v9 = 22;
LABEL_9:
    *v8 = v9;
    invalid_parameter_noinfo();
    return v9;
  }
  if ( DestinationSize < SourceSize )
  {
    v8 = (errno_t *)_o__errno();
    v9 = 34;
    goto LABEL_9;
  }
  return 22;
}
