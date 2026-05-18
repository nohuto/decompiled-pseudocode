/*
 * XREFs of sub_18001DD70 @ 0x18001DD70
 * Callers:
 *     sub_18001CFE8 @ 0x18001CFE8 (sub_18001CFE8.c)
 *     sub_18002506C @ 0x18002506C (sub_18002506C.c)
 *     sub_1800277FC @ 0x1800277FC (sub_1800277FC.c)
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 *     sub_18002A494 @ 0x18002A494 (sub_18002A494.c)
 *     sub_18002DE54 @ 0x18002DE54 (sub_18002DE54.c)
 *     sub_18002DF50 @ 0x18002DF50 (sub_18002DF50.c)
 *     sub_18002F2EC @ 0x18002F2EC (sub_18002F2EC.c)
 *     sub_18002F3F4 @ 0x18002F3F4 (sub_18002F3F4.c)
 *     sub_18002F4FC @ 0x18002F4FC (sub_18002F4FC.c)
 *     sub_18002F640 @ 0x18002F640 (sub_18002F640.c)
 *     sub_18002F750 @ 0x18002F750 (sub_18002F750.c)
 *     sub_18002F858 @ 0x18002F858 (sub_18002F858.c)
 *     sub_18002F964 @ 0x18002F964 (sub_18002F964.c)
 *     sub_18003E5C0 @ 0x18003E5C0 (sub_18003E5C0.c)
 *     sub_18003EA84 @ 0x18003EA84 (sub_18003EA84.c)
 *     sub_180042664 @ 0x180042664 (sub_180042664.c)
 *     sub_18004BDD8 @ 0x18004BDD8 (sub_18004BDD8.c)
 *     sub_18004BEA0 @ 0x18004BEA0 (sub_18004BEA0.c)
 *     sub_18004BFB8 @ 0x18004BFB8 (sub_18004BFB8.c)
 *     sub_18004C300 @ 0x18004C300 (sub_18004C300.c)
 *     sub_18004C408 @ 0x18004C408 (sub_18004C408.c)
 *     sub_18004C514 @ 0x18004C514 (sub_18004C514.c)
 *     sub_18004C620 @ 0x18004C620 (sub_18004C620.c)
 *     sub_1800509FC @ 0x1800509FC (sub_1800509FC.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 *     sub_180054910 @ 0x180054910 (sub_180054910.c)
 *     sub_18005664C @ 0x18005664C (sub_18005664C.c)
 *     sub_18005C26C @ 0x18005C26C (sub_18005C26C.c)
 *     sub_18005C4F0 @ 0x18005C4F0 (sub_18005C4F0.c)
 *     sub_18005FD88 @ 0x18005FD88 (sub_18005FD88.c)
 *     sub_18005FFB4 @ 0x18005FFB4 (sub_18005FFB4.c)
 *     sub_180075850 @ 0x180075850 (sub_180075850.c)
 *     sub_18007D680 @ 0x18007D680 (sub_18007D680.c)
 *     sub_180097F14 @ 0x180097F14 (sub_180097F14.c)
 *     sub_180099990 @ 0x180099990 (sub_180099990.c)
 *     sub_180099A9C @ 0x180099A9C (sub_180099A9C.c)
 *     sub_1800BEF90 @ 0x1800BEF90 (sub_1800BEF90.c)
 *     sub_1800BF0A0 @ 0x1800BF0A0 (sub_1800BF0A0.c)
 *     sub_1800CF8E4 @ 0x1800CF8E4 (sub_1800CF8E4.c)
 *     sub_1800D20B4 @ 0x1800D20B4 (sub_1800D20B4.c)
 *     sub_1800D21F4 @ 0x1800D21F4 (sub_1800D21F4.c)
 *     sub_1800D2404 @ 0x1800D2404 (sub_1800D2404.c)
 *     sub_1800D44E0 @ 0x1800D44E0 (sub_1800D44E0.c)
 * Callees:
 *     sub_18001DEA0 @ 0x18001DEA0 (sub_18001DEA0.c)
 *     sub_18001DF14 @ 0x18001DF14 (sub_18001DF14.c)
 */

__int64 __fastcall sub_18001DD70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r11
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 i; // r10
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rax

  ++*(_QWORD *)(a1 + 8);
  v3 = a3;
  v4 = *(_QWORD **)a1;
  v6 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v6 != v4 )
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      *v6 = a3;
      if ( v6 == (_QWORD *)*v4 )
        *v4 = a3;
    }
    else
    {
      v6[2] = a3;
      if ( v6 == (_QWORD *)v4[2] )
        v4[2] = a3;
    }
    v7 = *(_QWORD *)(a3 + 8);
    for ( i = a3; ; v7 = *(_QWORD *)(i + 8) )
    {
      if ( *(_BYTE *)(v7 + 24) )
      {
        *(_BYTE *)(v4[1] + 24LL) = 1;
        return v3;
      }
      v9 = *(_QWORD *)(i + 8);
      v10 = *(__int64 **)(v9 + 8);
      v11 = *v10;
      if ( v9 == *v10 )
      {
        v11 = v10[2];
        if ( !*(_BYTE *)(v11 + 24) )
          goto LABEL_15;
        if ( i == *(_QWORD *)(v9 + 16) )
          sub_18001DEA0(a1, v9);
        *(_BYTE *)(*(_QWORD *)(i + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
        sub_18001DF14(a1);
      }
      else
      {
        if ( !*(_BYTE *)(v11 + 24) )
        {
LABEL_15:
          *(_BYTE *)(v9 + 24) = 1;
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
          i = *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL);
          continue;
        }
        if ( i == *(_QWORD *)v9 )
          sub_18001DF14(a1);
        *(_BYTE *)(*(_QWORD *)(i + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
        sub_18001DEA0(a1, *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL));
      }
    }
  }
  *v4 = a3;
  v4[1] = a3;
  v4[2] = a3;
  *(_BYTE *)(a3 + 24) = 1;
  return v3;
}
