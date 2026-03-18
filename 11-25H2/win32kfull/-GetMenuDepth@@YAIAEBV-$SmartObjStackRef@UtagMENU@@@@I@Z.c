/*
 * XREFs of ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1401ADA40
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140048FE0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1401ADA40 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1401ADA40 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 */

__int64 __fastcall GetMenuDepth(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 *v4; // rdi
  int v5; // esi
  unsigned int MenuDepth; // ebp
  __int64 v9; // rdx
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( !a2 )
    return 25LL;
  v4 = (__int64 *)(*(_QWORD *)(**(_QWORD **)a1 + 88LL) + 16LL);
  v5 = *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 44LL);
  while ( v5-- )
  {
    if ( *v4 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v10, *v4);
      MenuDepth = GetMenuDepth(v10, (unsigned int)(a2 - 1));
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v10, v9);
      if ( MenuDepth > v2 )
      {
        if ( MenuDepth >= 0x19 )
          return 25LL;
        v2 = MenuDepth;
      }
    }
    v4 += 12;
  }
  return v2 + 1;
}
