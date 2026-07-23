/*
 * XREFs of MiUpdateTradePagePreCopy @ 0x140480A80
 * Callers:
 *     MiTradePageMarkedActive @ 0x140292720 (MiTradePageMarkedActive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateTradePagePreCopy(__int64 a1)
{
  __int64 result; // rax
  int v3; // r8d
  int v4; // ecx

  result = *(unsigned int *)(a1 + 16);
  if ( (result & 0x20) != 0 )
    return result;
  v3 = *(_DWORD *)(a1 + 56);
  if ( v3 == 2 )
    return result;
  if ( (result & 0x100) != 0 )
  {
LABEL_8:
    result = *(_QWORD *)(a1 + 256);
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_BYTE *)(a1 + 156) = 17;
    return result;
  }
  if ( (result & 8) == 0 && !*(_DWORD *)(a1 + 208)
    || (v4 = *(_DWORD *)(a1 + 16) & 0xA, v4 == 10)
    || (result & 0x80u) != 0LL )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 32LL) & 0xFFF8FFFF | 0x50000;
    goto LABEL_8;
  }
  if ( v4 == 8 && !*(_DWORD *)(a1 + 208) || v3 == 3 && (result & 4) != 0 )
    goto LABEL_8;
  return result;
}
