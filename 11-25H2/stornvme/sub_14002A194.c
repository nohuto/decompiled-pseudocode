/*
 * XREFs of sub_14002A194 @ 0x14002A194
 * Callers:
 *     sub_14001E95C @ 0x14001E95C (sub_14001E95C.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 */

__int64 __fastcall sub_14002A194(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  _QWORD *v4; // rbp
  unsigned __int16 i; // r14
  int j; // edx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 *v9; // rbx
  int v10; // eax

  v1 = *(_QWORD *)(a1 + 1560);
  result = *(unsigned int *)(v1 + 96);
  if ( (result & 4) != 0 && (result = *(unsigned __int16 *)(v1 + 338), (_WORD)result) )
  {
    v4 = (_QWORD *)(a1 + 3984);
    result = StorPortExtendedFunction(0LL, a1, (unsigned int)((_DWORD)result << 7), 1701672526LL);
    if ( !(_DWORD)result )
    {
      if ( *v4 )
      {
        for ( i = 0; i < *(_WORD *)(v1 + 338); i += result )
        {
          sub_140009580(a1, a1 + 1008);
          for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= j )
            ++j;
          *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
          v7 = *(_QWORD *)(a1 + 1104);
          *(_QWORD *)(v7 + 4120) = *(_QWORD *)(a1 + 1664);
          *(_WORD *)(v7 + 4140) = i + 1;
          *(_BYTE *)(v7 + 4096) = 6;
          *(_DWORD *)(v7 + 4100) = 0;
          *(_BYTE *)(v7 + 4136) = 4;
          sub_1400092F0(a1, a1 + 1016);
          LOBYTE(v8) = 1;
          result = sub_140008130(a1, a1 + 1016, v8);
          if ( *(_BYTE *)(a1 + 1019) != 1 )
            break;
          v9 = *(unsigned __int8 **)(a1 + 1656);
          v10 = *v9;
          if ( v10 >= *(unsigned __int16 *)(v1 + 338) - i )
            v10 = *(unsigned __int16 *)(v1 + 338) - i;
          sub_140032980(*v4 + ((unsigned __int64)i << 7), v9 + 128, (__int64)v10 << 7);
          result = *v9;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 3984) = 0LL;
  }
  return result;
}
