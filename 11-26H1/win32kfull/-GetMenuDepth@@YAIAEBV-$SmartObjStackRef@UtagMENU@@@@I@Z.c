/*
 * XREFs of ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x14000BDA4
 * Callers:
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x14000BDA4 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140033B50 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 * Callees:
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x14000BDA4 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall GetMenuDepth(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _QWORD *v4; // rdi
  int v5; // esi
  unsigned int MenuDepth; // ebp
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( !a2 )
    return 25LL;
  v4 = (_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 88LL) + 16LL);
  v5 = *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 44LL);
  while ( v5-- )
  {
    if ( *v4 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v9, *v4);
      MenuDepth = GetMenuDepth(v9, (unsigned int)(a2 - 1));
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v9);
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
