/*
 * XREFs of memcpy_s_0 @ 0x18005D5C0
 * Callers:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x18005D48C (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x18005D65C (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x18008A5C0 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ??$make_unique_ansistring_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@0@PEBD_K@Z @ 0x1800D1E2C (--$make_unique_ansistring_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXP.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18008EE5A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18008EF24 (memcpy_0.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
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
    v7 = (errno_t *)_o__errno(Destination, DestinationSize);
    v8 = 22;
LABEL_6:
    *v7 = v8;
    invalid_parameter_noinfo();
    return v8;
  }
  if ( DestinationSize < SourceSize )
  {
    v7 = (errno_t *)_o__errno(Destination, DestinationSize);
    v8 = 34;
    goto LABEL_6;
  }
  return 22;
}
