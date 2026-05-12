/*
 * XREFs of sub_14009E318 @ 0x14009E318
 * Callers:
 *     sub_1400977C0 @ 0x1400977C0 (sub_1400977C0.c)
 * Callees:
 *     sub_14005A278 @ 0x14005A278 (sub_14005A278.c)
 */

__int64 __fastcall sub_14009E318(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3400), 0, 1);
  if ( (_DWORD)result == 1 )
    return sub_14005A278(*(_QWORD *)(a1 + 24));
  return result;
}
