/*
 * XREFs of _getbuf @ 0x180132650
 * Callers:
 *     _ungetc_nolock @ 0x1801325A4 (_ungetc_nolock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall getbuf(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 24) |= 4u;
  result = a1 + 32;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)a1 = a1 + 32;
  *(_DWORD *)(a1 + 36) = 2;
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
