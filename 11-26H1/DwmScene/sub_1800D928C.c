/*
 * XREFs of sub_1800D928C @ 0x1800D928C
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 */

__int64 __fastcall sub_1800D928C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_180011E54(*(_QWORD *)(a2 + 72));
  }
  return result;
}
