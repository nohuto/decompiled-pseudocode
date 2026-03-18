/*
 * XREFs of IoResetCompletion @ 0x1400230F0
 * Callers:
 *     IoTimeoutCallback @ 0x140023190 (IoTimeoutCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoResetCompletion(__int64 a1)
{
  __int64 v2; // r9
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  StorPortQuerySystemTime(&v4);
  if ( (*(_DWORD *)(a1 + 4064) & 0x180) == 0x80 )
  {
    v2 = *(unsigned int *)(a1 + 4304);
    if ( (_DWORD)v2 )
    {
      if ( (v4 - *(_QWORD *)(a1 + 4312)) / 10000 > v2 )
        *(_DWORD *)(a1 + 4064) |= 0x100u;
    }
  }
  result = *(unsigned int *)(a1 + 4284);
  *(_DWORD *)(a1 + 4288) = result;
  return result;
}
