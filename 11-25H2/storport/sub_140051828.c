/*
 * XREFs of sub_140051828 @ 0x140051828
 * Callers:
 *     sub_14000B0B0 @ 0x14000B0B0 (sub_14000B0B0.c)
 *     sub_14000B424 @ 0x14000B424 (sub_14000B424.c)
 * Callees:
 *     sub_1400A6778 @ 0x1400A6778 (sub_1400A6778.c)
 */

__int64 __fastcall sub_140051828(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 968LL) > 1u && (_BYTE)a2 )
    {
      return sub_1400A6778(*(_QWORD *)(a1 + 48), a2, a3);
    }
    else
    {
      result = *(unsigned int *)(a1 + 40);
      if ( (_DWORD)result )
      {
        result = *(unsigned int *)(a1 + 28);
        *(_DWORD *)(a1 + 32) = result;
        *(_DWORD *)(a1 + 40) = 0;
      }
    }
  }
  return result;
}
