/*
 * XREFs of sub_18001B520 @ 0x18001B520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001B520(__int64 a1, __int64 a2)
{
  __int64 i; // r8
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-18h]

  for ( i = 0LL; i < 4; ++i )
  {
    result = (unsigned int)(int)*(float *)(a2 + 4 * i);
    *((_DWORD *)&v4 + i) = result;
  }
  *(_OWORD *)(a1 + 128) = v4;
  return result;
}
