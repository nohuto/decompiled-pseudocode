/*
 * XREFs of memcpy_s_0 @ 0x1800797C8
 * Callers:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800796F4 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800975E4 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ??$make_unique_ansistring_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@0@PEBD_K@Z @ 0x1800D48FC (--$make_unique_ansistring_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXP.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009B65A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 *     memcpy_0 @ 0x1800EB118 (memcpy_0.c)
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
  if ( !Source || DestinationSize < SourceSize )
  {
    memset_0(Destination, 0, DestinationSize);
    if ( Source )
    {
      if ( DestinationSize >= SourceSize )
        return 22;
      v7 = (errno_t *)_o__errno();
      v8 = 34;
LABEL_6:
      *v7 = v8;
      invalid_parameter_noinfo();
      return v8;
    }
LABEL_5:
    v7 = (errno_t *)_o__errno();
    v8 = 22;
    goto LABEL_6;
  }
  memcpy_0(Destination, Source, SourceSize);
  return 0;
}
