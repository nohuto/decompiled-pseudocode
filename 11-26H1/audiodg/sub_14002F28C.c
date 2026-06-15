/*
 * XREFs of sub_14002F28C @ 0x14002F28C
 * Callers:
 *     sub_14000EC5C @ 0x14000EC5C (sub_14000EC5C.c)
 *     sub_14002F280 @ 0x14002F280 (sub_14002F280.c)
 *     sub_1400440C4 @ 0x1400440C4 (sub_1400440C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14002F28C(volatile __int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = _InterlockedExchange64(a1, 0LL);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      CloseHandle(*(HANDLE *)v1);
      return j_j__o_free(v1, 16LL);
    }
  }
  return result;
}
