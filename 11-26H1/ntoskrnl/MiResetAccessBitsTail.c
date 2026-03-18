/*
 * XREFs of MiResetAccessBitsTail @ 0x140464050
 * Callers:
 *     <none>
 * Callees:
 *     MiAgeTrimListsTail @ 0x140464350 (MiAgeTrimListsTail.c)
 */

__int64 __fastcall MiResetAccessBitsTail(__int64 a1)
{
  MiAgeTrimListsTail(
    a1,
    *(_QWORD *)(a1 + 184) + 8,
    0,
    *(_DWORD *)(*(_QWORD *)(a1 + 184) + 4LL),
    (__int64)MiResetAccessBitsVpabCallback);
  return 0LL;
}
