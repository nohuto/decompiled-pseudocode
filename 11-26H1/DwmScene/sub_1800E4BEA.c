/*
 * XREFs of sub_1800E4BEA @ 0x1800E4BEA
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E0 @ 0x18000E4E0 (sub_18000E4E0.c)
 */

__int64 __fastcall sub_1800E4BEA(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_18000E4E0(*(_QWORD *)(a2 + 72));
  }
  return result;
}
