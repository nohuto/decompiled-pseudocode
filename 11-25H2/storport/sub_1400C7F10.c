/*
 * XREFs of sub_1400C7F10 @ 0x1400C7F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400C7F10(__int64 a1, __int64 *a2, unsigned __int16 *a3)
{
  unsigned __int16 v5; // cx
  int v6; // eax
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // ax
  __int64 v9; // r9
  unsigned __int16 v10; // ax
  __int64 v11; // rcx
  __int16 v12; // dx
  __int16 v13; // ax
  __int64 v14; // rax
  __int64 result; // rax

  if ( a3 )
  {
    *(_WORD *)(*a2 + 4260) = a3[7];
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) == 0
      && !(unsigned __int8)(*(unsigned __int16 *)(*a2 + 4260) >> 1) )
    {
      *(_DWORD *)(a1 + 12) = *a3 + 1;
      v5 = *(_WORD *)(a1 + 12);
      v6 = a3[1] + 1;
      v7 = a3[1] + 1;
      *(_DWORD *)(a1 + 16) = v6;
      if ( *(_BYTE *)(a1 + 1728) == 1 )
      {
        *(_WORD *)(a1 + 22) = v5;
        *(_WORD *)(a1 + 26) = v6;
      }
      else
      {
        v8 = *(_WORD *)(a1 + 22);
        v9 = *(_QWORD *)(a1 + 1736);
        if ( v8 >= v5 )
          v8 = v5;
        *(_WORD *)(a1 + 22) = v8;
        v10 = *(_WORD *)(a1 + 26);
        if ( v10 >= v7 )
          v10 = v7;
        *(_WORD *)(a1 + 26) = v10;
        if ( *(_BYTE *)v9 )
        {
          *(_WORD *)(v9 + 2) = v10 * (unsigned __int64)*(unsigned __int8 *)(v9 + 4) / 0x64;
          v11 = *(_QWORD *)(a1 + 1736);
          v12 = *(_WORD *)(a1 + 26);
          if ( (*(_DWORD *)(v11 + 12) & 0x80) != 0 )
          {
            *(_WORD *)(v11 + 2) = v12;
          }
          else if ( v12 )
          {
            v13 = *(_WORD *)(v11 + 2);
            if ( v13 == v12 )
              *(_WORD *)(v11 + 2) = v13 - 1;
          }
          v14 = *(_QWORD *)(a1 + 1736);
          if ( *(_WORD *)(v14 + 2) )
            *(_WORD *)(a1 + 22) = *(_WORD *)(a1 + 26);
          else
            *(_BYTE *)v14 = 0;
        }
      }
    }
  }
  result = *a2;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  return result;
}
