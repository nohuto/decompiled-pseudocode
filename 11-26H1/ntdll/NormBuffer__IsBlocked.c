/*
 * XREFs of NormBuffer__IsBlocked @ 0x1800AF5A4
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800AE3FC (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x1800AF94C (NormBuffer__GetCurrentOutputChar.c)
 */

bool __fastcall NormBuffer__IsBlocked(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  int CurrentOutputChar; // eax
  __int64 v7; // r10
  unsigned __int8 v8; // r11
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1[5];
  a1[13] = v1;
  v2 = a1[10];
  if ( v1 != v2 )
  {
    v3 = v1 - 2;
    v4 = v2 - 2;
    while ( 1 )
    {
      v11 = v3;
      if ( v3 == v4 )
        break;
      CurrentOutputChar = NormBuffer__GetCurrentOutputChar(v2, &v11);
      v2 = (__int64)CurrentOutputChar >> 7;
      v9 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 112) + 40LL)
                    + ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 112) + 32LL) + v2) << 7)
                    + (CurrentOutputChar & 0x7F)
                    - 128) & 0x3F;
      if ( v9 <= v8 )
        return v9 == v8;
      v10 = v11;
      *(_QWORD *)(v7 + 104) = v11;
      v3 = v10 - 2;
    }
  }
  return 0;
}
