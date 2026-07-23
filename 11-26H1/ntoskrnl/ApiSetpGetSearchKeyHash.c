/*
 * XREFs of ApiSetpGetSearchKeyHash @ 0x1406DF524
 * Callers:
 *     ApiSetpResolveHost @ 0x14051F22C (ApiSetpResolveHost.c)
 *     ApiSetQuerySchemaInfo2_V7 @ 0x1406DE0EC (ApiSetQuerySchemaInfo2_V7.c)
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x1406DEC64 (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1406DF79C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1406E01F8 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 *     ApiSetpInsertHashEntry @ 0x1406E0788 (ApiSetpInsertHashEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpGetSearchKeyHash(__int64 a1, char a2, char a3, char a4, unsigned __int8 a5)
{
  unsigned __int8 *v5; // r10
  bool v6; // cf
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // edi
  bool v11; // cl
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned __int8 v14; // al
  unsigned __int8 v15; // cl

  v5 = (unsigned __int8 *)(*(_QWORD *)a1 + *(unsigned __int16 *)(a1 + 16));
  v6 = a2 != 0;
  v8 = 0;
  v9 = 0;
  v10 = *(unsigned __int16 *)((v6 ? 2 : 0) + a1 + 18);
  if ( a4 )
  {
    v9 = 4;
    v5 += (-(__int64)(*(_BYTE *)(a1 + 10) != 0) & 4) + 4;
  }
  for ( ; v9 < v10; ++v9 )
  {
    v11 = 0;
    if ( !a3 )
      goto LABEL_12;
    v12 = *(unsigned __int16 *)(a1 + 26);
    if ( (_WORD)v12 && v9 >= v12 )
      v11 = v9 <= *(unsigned __int16 *)(a1 + 28);
    v13 = *(unsigned __int16 *)(a1 + 30);
    if ( (!(_WORD)v13 || v9 < v13 || v9 > *(unsigned __int16 *)(a1 + 32)) && !v11 )
    {
LABEL_12:
      v14 = *v5;
      v15 = *v5;
      if ( *v5 >= 0x41u && v14 <= 0x5Au )
        v15 = v14 + 32;
      v8 = v8 * a5 + v15;
    }
    v5 += (*(_BYTE *)(a1 + 10) != 0) + 1;
  }
  return v8;
}
