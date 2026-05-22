/*
 * XREFs of memcpy_s_0 @ 0x18005CC60
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007EF50 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009AAB2 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v7; // rax
  errno_t v8; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_5;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_5:
    v7 = (errno_t *)_o__errno();
    v8 = 22;
LABEL_6:
    *v7 = v8;
    invalid_parameter_noinfo();
    return v8;
  }
  if ( DestinationSize < SourceSize )
  {
    v7 = (errno_t *)_o__errno();
    v8 = 34;
    goto LABEL_6;
  }
  return 22;
}
