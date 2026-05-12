/*
 * XREFs of sub_140055A00 @ 0x140055A00
 * Callers:
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140055A00(__int64 a1)
{
  __int64 result; // rax

  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 24));
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  result = 0LL;
  *(_DWORD *)(a1 + 56) = 1;
  return result;
}
