/*
 * XREFs of ?GetTooltipIdFromHitTest@@YA?AW4tagTOOLTIPID@@PEAUtagWND@@H@Z @ 0x140261970
 * Callers:
 *     ?xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1402EF498 (-xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1400112B8 (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 */

__int64 __fastcall GetTooltipIdFromHitTest(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v11; // rcx

  v2 = 0;
  v4 = a2 - 2;
  if ( v4 )
  {
    v5 = v4 - 6;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 11;
        if ( !v7 )
          return 6;
        v8 = v7 - 1;
        if ( !v8 )
          return 5;
        v9 = v8 - 45;
        if ( !v9 )
          return 4;
        v10 = v9 - 1;
        if ( !v10 )
          return 1;
        if ( v10 == 1 )
          return 6;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 1) != 0
             && !ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x100) )
      {
        return (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) != 0 ? 4 : 2;
      }
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v11 + 30) & 2) != 0 )
        return (*(_BYTE *)(v11 + 31) & 0x20 | 0x10u) >> 4;
    }
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 23LL) & 8) != 0 )
  {
    return 7;
  }
  return v2;
}
