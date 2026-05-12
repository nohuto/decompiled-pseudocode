/*
 * XREFs of sub_140077B00 @ 0x140077B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 */

__int64 __fastcall sub_140077B00(__int64 a1)
{
  __int64 result; // rax

  sub_1400296E0(a1 + 376);
  result = *(_QWORD *)(a1 + 4960);
  if ( result )
    _interlockedbittestandreset((volatile signed __int32 *)(result + 120), 0);
  return result;
}
