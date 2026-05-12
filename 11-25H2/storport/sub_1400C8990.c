/*
 * XREFs of sub_1400C8990 @ 0x1400C8990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400C8990(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // r10d
  __int64 result; // rax

  if ( a3 )
  {
    *(_WORD *)(*a2 + 4260) = *(_WORD *)(a3 + 14);
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) == 0 )
    {
      v3 = *(unsigned __int16 *)(*a2 + 4260) >> 1;
      if ( (unsigned __int8)v3 <= 6u && !(_BYTE)v3 )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 176LL) ^= ((unsigned __int16)*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 176LL) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)a3 << 11)) & 0x800;
    }
  }
  result = *a2;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  return result;
}
