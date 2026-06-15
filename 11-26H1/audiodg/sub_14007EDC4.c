/*
 * XREFs of sub_14007EDC4 @ 0x14007EDC4
 * Callers:
 *     sub_140077D64 @ 0x140077D64 (sub_140077D64.c)
 *     sub_140079AA0 @ 0x140079AA0 (sub_140079AA0.c)
 *     sub_140079B90 @ 0x140079B90 (sub_140079B90.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007EDC4(__int64 a1)
{
  signed __int32 v1; // edx
  __int64 result; // rax
  signed __int32 v3; // [rsp+68h] [rbp+10h] BYREF

  if ( qword_1400E8978 )
  {
    v1 = *(_DWORD *)(a1 + 56);
    v3 = 0;
    _InterlockedCompareExchange(&v3, v1, 0);
    return sub_1400B6010(qword_1400E8978);
  }
  return result;
}
