/*
 * XREFs of _GetPointerDeviceCursors @ 0x14028DE50
 * Callers:
 *     NtUserGetPointerDeviceCursors @ 0x140222990 (NtUserGetPointerDeviceCursors.c)
 * Callees:
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 */

__int64 __fastcall GetPointerDeviceCursors(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 i; // r10

  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    *(_DWORD *)(a3 + 8 * i) = *(_DWORD *)(*(_QWORD *)(a1 + 1032) + 12 * i + 4);
    *(_DWORD *)(a3 + 8 * i + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 1032) + 12 * i);
  }
  return 1LL;
}
