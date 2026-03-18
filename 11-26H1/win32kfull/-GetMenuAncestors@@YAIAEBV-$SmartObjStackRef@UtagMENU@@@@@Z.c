/*
 * XREFs of ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14000BD3C
 * Callers:
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14000BD3C (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140033B50 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 * Callees:
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14000BD3C (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall GetMenuAncestors(__int64 a1)
{
  unsigned int v1; // edi
  _QWORD *v2; // rsi
  unsigned int MenuAncestors; // ebx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v2 = *(_QWORD **)(**(_QWORD **)a1 + 104LL);
  while ( v2 )
  {
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v5, v2[1]);
    MenuAncestors = GetMenuAncestors(v5);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v5);
    v2 = (_QWORD *)*v2;
    if ( MenuAncestors > v1 )
      v1 = MenuAncestors;
  }
  return v1 + 1;
}
