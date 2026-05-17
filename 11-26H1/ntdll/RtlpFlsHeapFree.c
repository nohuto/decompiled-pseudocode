/*
 * XREFs of RtlpFlsHeapFree @ 0x180087E9C
 * Callers:
 *     RtlpFlsDataCleanup @ 0x180087C90 (RtlpFlsDataCleanup.c)
 *     ?Cleanup@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z @ 0x180087E10 (-Cleanup@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 */

__int64 __fastcall RtlpFlsHeapFree(__int64 a1)
{
  _DWORD *ProcessHeap; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( ProcessHeap[4] != -571548178 )
    return RtlFreeHeap_0();
  v4 = *(_OWORD *)ProcessHeap;
  return RtlpHpMetadataFree(a1, &v4);
}
