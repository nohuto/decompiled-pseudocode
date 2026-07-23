/*
 * XREFs of NormBuffer__IsBlocked @ 0x140622168
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x14080DFB8 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x140621F84 (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__PageLookup @ 0x14080E7D4 (Normalization__PageLookup.c)
 *     Normalization__TableLookup @ 0x14080E7EC (Normalization__TableLookup.c)
 */

bool __fastcall NormBuffer__IsBlocked(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int16 *v3; // rax
  unsigned __int16 *v4; // rbx
  unsigned int CurrentOutputChar; // eax
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  __int64 v11; // r10
  unsigned __int8 v12; // r11
  unsigned __int16 *v13; // rax
  unsigned __int16 *v15; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1[5];
  a1[13] = v1;
  v2 = a1[10];
  if ( v1 != v2 )
  {
    v3 = (unsigned __int16 *)(v1 - 2);
    v4 = (unsigned __int16 *)(v2 - 2);
    while ( 1 )
    {
      v15 = v3;
      if ( v3 == v4 )
        break;
      CurrentOutputChar = NormBuffer__GetCurrentOutputChar(v2, &v15);
      LOBYTE(v7) = Normalization__PageLookup(*(_QWORD *)(v6 + 112), CurrentOutputChar);
      v10 = Normalization__TableLookup(v9, v8, v7) & 0x3F;
      if ( v10 <= v12 )
        return v10 == v12;
      v13 = v15;
      *(_QWORD *)(v11 + 104) = v15;
      v3 = v13 - 1;
    }
  }
  return 0;
}
