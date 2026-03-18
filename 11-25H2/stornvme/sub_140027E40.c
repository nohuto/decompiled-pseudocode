/*
 * XREFs of sub_140027E40 @ 0x140027E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 */

__int64 __fastcall sub_140027E40(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx

  result = sub_140005000(a2);
  v5 = result;
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v6 = *(_QWORD *)(v4 + 64);
  else
    v6 = *(_QWORD *)(v4 + 24);
  if ( *(_BYTE *)(v4 + 3) == 1 )
  {
    *(_DWORD *)(v6 + 56) = *(_DWORD *)(result + 4208);
    result = *(unsigned int *)(result + 4208);
    if ( (_DWORD)result )
    {
      v7 = *(_QWORD *)(v5 + 4160);
      if ( v7 )
        result = sub_140032980(v6 + 36 + *(unsigned int *)(v6 + 52), v7, (unsigned int)result);
    }
  }
  else
  {
    *(_DWORD *)(v6 + 56) = 0;
  }
  if ( *(_QWORD *)(v5 + 4160) )
    result = sub_14000CF50(a1, *(unsigned int *)(v5 + 4208), (__int64 *)(v5 + 4160), *(_QWORD *)(v5 + 4168));
  *(_DWORD *)(v5 + 4208) = 0;
  *(_QWORD *)(v5 + 4160) = 0LL;
  *(_BYTE *)(v5 + 4225) |= 8u;
  return result;
}
