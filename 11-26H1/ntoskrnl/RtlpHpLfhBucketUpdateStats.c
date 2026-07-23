/*
 * XREFs of RtlpHpLfhBucketUpdateStats @ 0x1404C6F30
 * Callers:
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404C6EF8 (RtlpHpLfhBucketCheckAndUpdate.c)
 * Callees:
 *     RtlpHpLfhBucketActivate @ 0x140347E74 (RtlpHpLfhBucketActivate.c)
 *     RtlpLfhBucketUsageUpdate @ 0x1404C6FA0 (RtlpLfhBucketUsageUpdate.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateStats(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // r8d
  unsigned __int64 v8; // rax

  v2 = a2;
  v4 = RtlpLfhBucketUsageUpdate();
  v5 = 0LL;
  if ( v6 )
  {
    v8 = v4 >> 16;
    if ( (v8 & 0x1F) > 0x10 || (unsigned __int16)v8 > 0xFF00u )
      RtlpHpLfhBucketActivate(a1, v2);
  }
  if ( (*(_QWORD *)(a1 + 8 * v2 + 448) & 1) == 0 )
    return *(_QWORD *)(a1 + 8 * v2 + 448);
  return v5;
}
