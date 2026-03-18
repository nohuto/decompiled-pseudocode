/*
 * XREFs of ExpPoolHeapDestroy @ 0x1408466CC
 * Callers:
 *     ExpPoolCreate @ 0x14077DC90 (ExpPoolCreate.c)
 *     ExpPoolDestroy @ 0x140846574 (ExpPoolDestroy.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x1403524BC (RtlpHpMetadataFree.c)
 *     RtlpHpHeapDestroy @ 0x1406386F4 (RtlpHpHeapDestroy.c)
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
