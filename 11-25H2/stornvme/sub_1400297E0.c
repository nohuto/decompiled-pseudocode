/*
 * XREFs of sub_1400297E0 @ 0x1400297E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 */

__int64 __fastcall sub_1400297E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _DWORD *v4; // r8
  __int64 v5; // r9
  char v6; // dl

  result = sub_140005000(a2);
  if ( v4 )
  {
    v6 = *(_BYTE *)(v3 + 3);
    if ( v6 != 14 )
    {
      if ( v6 == 1 )
        *(_DWORD *)(v5 + 1600) ^= ((unsigned __int8)*(_DWORD *)(v5 + 1600) ^ (unsigned __int8)((unsigned __int8)*v4 << 6)) & 0x40;
      *(_BYTE *)(result + 4225) |= 8u;
    }
  }
  return result;
}
