/*
 * XREFs of Match_32 @ 0x1400175CC
 * Callers:
 *     Match @ 0x1400166A0 (Match.c)
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     IsCompatableDSDTRevision @ 0x140014C60 (IsCompatableDSDTRevision.c)
 *     MatchData_32 @ 0x140017720 (MatchData_32.c)
 */

__int64 __fastcall Match_32(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int *v5; // rbp
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // r9
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v3 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "PIIIII");
  if ( !v3 )
  {
    v4 = *(_QWORD *)(a2 + 80);
    v5 = *(unsigned int **)(v4 + 32);
    v10 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    v6 = *(_DWORD *)(v4 + 216);
    do
    {
      FreeDataBuffs((__int64)&v10, 1u);
      if ( v6 >= *v5 )
        goto LABEL_12;
      v3 = DupObjData((_QWORD *)gpheapGlobal, (__int64)&v10, (__int64)&v5[8 * v6 + 2 + 2 * v6]);
      if ( !v3
        && WORD1(v10) == 1
        && (unsigned __int8)MatchData_32(
                              (unsigned int)v11,
                              *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL),
                              *(unsigned int *)(*(_QWORD *)(a2 + 80) + 96LL))
        && (unsigned __int8)MatchData_32(v7, *(unsigned int *)(v8 + 136), *(unsigned int *)(v8 + 176)) )
      {
        break;
      }
      ++v6;
    }
    while ( !v3 );
    if ( !v3 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = v6;
      goto LABEL_13;
    }
    if ( v3 == -1072431100 )
    {
LABEL_12:
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      IsCompatableDSDTRevision();
      v3 = 0;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = -1;
    }
LABEL_13:
    FreeDataBuffs((__int64)&v10, 1u);
  }
  return v3;
}
