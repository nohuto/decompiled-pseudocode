/*
 * XREFs of memcpy_s @ 0x18005C508
 * Callers:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18005BCF0 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18005C480 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18005C5A4 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800879BC (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18008A288 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x1800904A0 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180090518 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x1800917C0 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180092F00 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18008EE5A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18008EF24 (memcpy_0.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
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
    v8 = (errno_t *)_o__errno(Destination, DestinationSize);
    v9 = 22;
LABEL_8:
    *v8 = v9;
    invalid_parameter_noinfo();
    return v9;
  }
  if ( DestinationSize < SourceSize )
  {
    v8 = (errno_t *)_o__errno(Destination, DestinationSize);
    v9 = 34;
    goto LABEL_8;
  }
  return 22;
}
