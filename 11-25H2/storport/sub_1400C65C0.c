/*
 * XREFs of sub_1400C65C0 @ 0x1400C65C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400C65C0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdx
  int v6; // r10d
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // cl
  _BYTE *v10; // rax
  __int64 result; // rax

  if ( a3 )
  {
    *(_WORD *)(*a2 + 4260) = *(_WORD *)(a3 + 14);
    v5 = *a2;
    if ( ((*(unsigned __int16 *)(v5 + 4260) >> 9) & 7) == 0 )
    {
      v6 = *(unsigned __int16 *)(v5 + 4260) >> 1;
      if ( (unsigned __int8)v6 <= 6u && !(_BYTE)v6 )
      {
        v7 = *(_QWORD *)(v5 + 4160);
        if ( *(_DWORD *)a3 == 1313882949 )
        {
          *(_WORD *)(*(_QWORD *)(a1 + 1736) + 16LL) = *(_WORD *)v7;
          v8 = *(_QWORD *)(a1 + 1736);
          if ( *(_WORD *)(v8 + 16) == 256 )
          {
            v9 = *(_WORD *)(v7 + 2);
            if ( *(_WORD *)(v7 + 2) > 0x64u )
              v9 = 100;
            *(_BYTE *)(v8 + 20) = v9;
            *(_DWORD *)(*(_QWORD *)(a1 + 1736) + 24LL) = *(_DWORD *)(v7 + 4);
            *(_DWORD *)(*(_QWORD *)(a1 + 1736) + 28LL) = *(_DWORD *)(v7 + 8);
            v10 = *(_BYTE **)(a1 + 1736);
            if ( v10[20] )
              *v10 = 1;
          }
        }
      }
    }
  }
  result = *a2;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  return result;
}
