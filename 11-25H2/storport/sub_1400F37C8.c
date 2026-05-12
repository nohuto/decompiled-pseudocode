/*
 * XREFs of sub_1400F37C8 @ 0x1400F37C8
 * Callers:
 *     sub_1400E08E8 @ 0x1400E08E8 (sub_1400E08E8.c)
 *     sub_1400E0960 @ 0x1400E0960 (sub_1400E0960.c)
 *     sub_1400F3324 @ 0x1400F3324 (sub_1400F3324.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400F37C8(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 result; // rax
  void *v5; // rcx

  v2 = *(void **)(*(_QWORD *)(a1 + 96) + 32LL);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x414E6152u);
    *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL) = 0LL;
  }
  v3 = *(void **)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( v3 )
  {
    BCryptDestroyKey(v3);
    *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) = 0LL;
  }
  result = *(_QWORD *)(a1 + 96);
  v5 = *(void **)(result + 16);
  if ( v5 )
  {
    BCryptCloseAlgorithmProvider(v5, 0);
    result = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(result + 16) = 0LL;
  }
  return result;
}
