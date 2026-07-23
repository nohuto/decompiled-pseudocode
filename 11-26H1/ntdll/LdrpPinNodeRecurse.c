/*
 * XREFs of LdrpPinNodeRecurse @ 0x180119670
 * Callers:
 *     LdrpPinModule @ 0x1800C3C6C (LdrpPinModule.c)
 *     LdrpPinNodeRecurse @ 0x180119670 (LdrpPinNodeRecurse.c)
 * Callees:
 *     LdrpPinNodeRecurse @ 0x180119670 (LdrpPinNodeRecurse.c)
 */

__int64 __fastcall LdrpPinNodeRecurse(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  result = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)result != -1 )
  {
    result = *(_QWORD *)a1;
    if ( (*(_DWORD *)(*(_QWORD *)a1 - 56LL) & 0x20) == 0 )
    {
      *(_DWORD *)(a1 + 24) = -1;
      result = *(_QWORD *)a1;
      *(_WORD *)(*(_QWORD *)a1 - 52LL) = -1;
      v2 = *(_QWORD **)(a1 + 40);
      if ( v2 )
      {
        v3 = *(_QWORD **)(a1 + 40);
        do
        {
          v3 = (_QWORD *)*v3;
          result = LdrpPinNodeRecurse(v3[1]);
        }
        while ( v3 != v2 );
      }
    }
  }
  return result;
}
