/*
 * XREFs of sub_14002DBBC @ 0x14002DBBC
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 * Callees:
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140023A4C @ 0x140023A4C (sub_140023A4C.c)
 */

__int64 __fastcall sub_14002DBBC(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // eax

  result = *(_QWORD *)(a1 + 1560);
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 7u);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( (v5 & 8) == 0 )
    {
      if ( result )
      {
        result = *(unsigned int *)(result + 96);
        if ( (result & 2) != 0 )
        {
          if ( (v5 & 4) != 0
            || (*(_DWORD *)(a1 + 3748) & 0x40) != 0
            || (*(_DWORD *)(a1 + 3748) & 0x20) != 0
            || (*(_DWORD *)(a1 + 3748) & 0x100) != 0 )
          {
            result = (*(_DWORD *)(a1 + 4056) | 2) ^ ((*(_BYTE *)(a1 + 4056) | 2) ^ (unsigned __int8)(4 * a2)) & 4u;
            *(_DWORD *)(a1 + 4056) = result;
          }
          else
          {
            result = *(unsigned int *)(a1 + 24);
            if ( (result & 1) != 0 )
            {
              result = (__int64)sub_140023A4C(a1);
              v6 = result;
              if ( result )
              {
                *(_BYTE *)(*(_QWORD *)(result + 96) + 4225LL) |= 1u;
                *(_BYTE *)(*(_QWORD *)(result + 96) + 4225LL) &= ~2u;
                *(_WORD *)(*(_QWORD *)(result + 96) + 4212LL) = 0;
                v7 = *(_QWORD *)(result + 96);
                v8 = *(_DWORD *)(v7 + 4140);
                *(_BYTE *)(v7 + 4096) = 9;
                *(_BYTE *)(v7 + 4136) = 17;
                *(_DWORD *)(v7 + 4140) = v8 ^ ((unsigned __int8)v8 ^ a2) & 1;
                *(_QWORD *)(*(_QWORD *)(v6 + 96) + 4192LL) = sub_14002DD10;
                result = sub_1400092F0(a1, v6 + 8);
              }
            }
          }
        }
      }
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 7u);
  return result;
}
