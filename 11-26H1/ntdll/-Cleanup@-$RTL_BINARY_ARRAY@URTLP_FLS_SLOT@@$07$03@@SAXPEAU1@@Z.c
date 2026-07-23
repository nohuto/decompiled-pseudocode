/*
 * XREFs of ?Cleanup@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z @ 0x18007F190
 * Callers:
 *     RtlpFlsDataCleanup @ 0x18007F010 (RtlpFlsDataCleanup.c)
 * Callees:
 *     RtlpFlsHeapFree @ 0x18007F21C (RtlpFlsHeapFree.c)
 */

__int64 __fastcall RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::Cleanup(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    result = RtlpFlsHeapFree(v2);
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    result = RtlpFlsHeapFree(v4);
  v5 = *(void **)(a1 + 16);
  if ( v5 )
    result = RtlpFlsHeapFree(v5);
  v6 = *(void **)(a1 + 24);
  if ( v6 )
    result = RtlpFlsHeapFree(v6);
  v7 = *(void **)(a1 + 32);
  if ( v7 )
    result = RtlpFlsHeapFree(v7);
  v8 = *(void **)(a1 + 40);
  if ( v8 )
    result = RtlpFlsHeapFree(v8);
  v9 = *(void **)(a1 + 48);
  if ( v9 )
    result = RtlpFlsHeapFree(v9);
  v10 = *(void **)(a1 + 56);
  if ( v10 )
    return RtlpFlsHeapFree(v10);
  return result;
}
