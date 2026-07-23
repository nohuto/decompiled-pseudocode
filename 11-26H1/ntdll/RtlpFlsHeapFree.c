/*
 * XREFs of RtlpFlsHeapFree @ 0x18007F21C
 * Callers:
 *     RtlpFlsDataCleanup @ 0x18007F010 (RtlpFlsDataCleanup.c)
 *     ?Cleanup@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z @ 0x18007F190 (-Cleanup@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 */

LOGICAL __fastcall RtlpFlsHeapFree(PVOID BaseAddress)
{
  _DWORD *ProcessHeap; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( ProcessHeap[4] != -571548178 )
    return RtlFreeHeap_0(ProcessHeap, 0, BaseAddress);
  v4 = *(_OWORD *)ProcessHeap;
  return RtlpHpMetadataFree(BaseAddress, &v4);
}
