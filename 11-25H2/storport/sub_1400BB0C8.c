/*
 * XREFs of sub_1400BB0C8 @ 0x1400BB0C8
 * Callers:
 *     sub_1400BB140 @ 0x1400BB140 (sub_1400BB140.c)
 *     sub_140183184 @ 0x140183184 (sub_140183184.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400BB0C8(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax
  void *v4; // rcx

  *(_QWORD *)(a1 + 112) &= ~0x100uLL;
  v2 = *(void **)(*(_QWORD *)(a1 + 608) + 16LL);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    *(_QWORD *)(*(_QWORD *)(a1 + 608) + 16LL) = 0LL;
  }
  result = *(_QWORD *)(a1 + 608);
  v4 = *(void **)(result + 40);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    result = *(_QWORD *)(a1 + 608);
    *(_QWORD *)(result + 40) = 0LL;
  }
  return result;
}
