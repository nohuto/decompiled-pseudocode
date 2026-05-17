/*
 * XREFs of RtlpHpMetadataHeapCreate @ 0x18008DE20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapCreate @ 0x18008DE64 (RtlpHpHeapCreate.c)
 */

bool __fastcall RtlpHpMetadataHeapCreate(__int64 a1, __int128 *a2)
{
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a2;
  v3 = RtlpHpHeapCreate(37748736LL, 0LL, 0LL, &v5);
  if ( v3 )
    *(_QWORD *)(a1 - 8) = v3;
  return v3 != 0;
}
