/*
 * XREFs of sub_140131D8C @ 0x140131D8C
 * Callers:
 *     HandleInformation @ 0x140132940 (HandleInformation.c)
 * Callees:
 *     sub_140131F80 @ 0x140131F80 (sub_140131F80.c)
 *     sub_140132010 @ 0x140132010 (sub_140132010.c)
 *     sub_140132B04 @ 0x140132B04 (sub_140132B04.c)
 */

void __fastcall sub_140131D8C(__int64 a1, int a2)
{
  __int64 v2; // rbp
  int v5; // edi
  int v6; // r9d

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
    {
      if ( (*(_DWORD *)(a1 + 12) & 1) != 0 && (int)sub_140132010() >= 0 )
      {
        v5 = *(_DWORD *)(a1 + 8);
        if ( a2 == 1 )
        {
          v6 = *(_DWORD *)(a1 + 60);
          if ( v5 == v6 )
            return;
          goto LABEL_10;
        }
        if ( a2 == 2 && v5 > 1 )
        {
          v6 = v5 - 1;
LABEL_10:
          if ( (int)sub_140132B04(a1, *(_QWORD *)(v2 + 6216), a2, v6, *(_WORD *)(a1 + 4)) >= 0 )
            sub_140131F80(a1, (unsigned int)v5);
        }
      }
    }
  }
}
