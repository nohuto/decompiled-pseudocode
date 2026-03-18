/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x14002E100
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002D9FC (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Set<DMMVIDPNSOURCEMODE>::FindByValue(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v5; // rbx
  int v6; // ecx
  bool v7; // al
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a1 + 24;
  if ( v2 == a1 + 24 )
    return 0LL;
  v5 = v2 - 8;
  while ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 72);
    if ( v6 == a2[18] )
    {
      switch ( v6 )
      {
        case 4:
        case 1:
LABEL_5:
          v7 = *(_DWORD *)(v5 + 76) == a2[19]
            && *(_DWORD *)(v5 + 80) == a2[20]
            && *(_DWORD *)(v5 + 84) == a2[21]
            && *(_DWORD *)(v5 + 88) == a2[22]
            && *(_DWORD *)(v5 + 92) == a2[23]
            && *(_DWORD *)(v5 + 96) == a2[24]
            && *(_DWORD *)(v5 + 100) == a2[25]
            && *(_DWORD *)(v5 + 104) == a2[26];
LABEL_7:
          if ( v7 )
            return v5;
          goto LABEL_12;
        case 2:
          v7 = *(_DWORD *)(v5 + 76) == a2[19];
          goto LABEL_7;
        case 3:
          goto LABEL_5;
      }
      if ( (unsigned int)(v6 - 1) <= 2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 265;
      }
    }
LABEL_12:
    v9 = *(_QWORD *)(v5 + 8);
    v5 = v9 - 8;
    if ( v9 == v3 )
      v5 = 0LL;
  }
  return v5;
}
