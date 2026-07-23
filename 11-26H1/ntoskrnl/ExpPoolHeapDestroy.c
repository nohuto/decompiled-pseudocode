/*
 * XREFs of ExpPoolHeapDestroy @ 0x14084C92C
 * Callers:
 *     ExpPoolCreate @ 0x140780790 (ExpPoolCreate.c)
 *     ExpPoolDestroy @ 0x14084C7D4 (ExpPoolDestroy.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 *     RtlpHpHeapDestroy @ 0x14063B6F8 (RtlpHpHeapDestroy.c)
 */

__int64 __fastcall ExpPoolHeapDestroy(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    v4 = *(_OWORD *)a1;
    RtlpHpMetadataFree(v2, &v4);
  }
  return RtlpHpHeapDestroy(a1);
}
