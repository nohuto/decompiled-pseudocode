/*
 * XREFs of sub_14002DA80 @ 0x14002DA80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 */

__int64 __fastcall sub_14002DA80(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  unsigned int v4; // r9d
  __int64 v5; // rdx

  result = sub_140005000(a2);
  v4 = *(_DWORD *)(v3 + 4056) | 0x400;
  if ( *(_BYTE *)(v5 + 3) != 1 )
    v4 = *(_DWORD *)(v3 + 4056) & 0xFFFFFBFF;
  *(_DWORD *)(v3 + 4056) = v4;
  *(_BYTE *)(result + 4225) |= 8u;
  return result;
}
