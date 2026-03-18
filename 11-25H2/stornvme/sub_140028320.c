/*
 * XREFs of sub_140028320 @ 0x140028320
 * Callers:
 *     sub_140011F70 @ 0x140011F70 (sub_140011F70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140028320(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  StorPortQuerySystemTime(&v6, a2, a3);
  if ( (*(_DWORD *)(a1 + 4056) & 0x180) == 0x80 )
  {
    v4 = *(unsigned int *)(a1 + 4296);
    if ( (_DWORD)v4 )
    {
      if ( (v6 - *(_QWORD *)(a1 + 4304)) / 10000 > v4 )
        *(_DWORD *)(a1 + 4056) |= 0x100u;
    }
  }
  result = *(unsigned int *)(a1 + 4276);
  *(_DWORD *)(a1 + 4280) = result;
  return result;
}
