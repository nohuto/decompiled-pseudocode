/*
 * XREFs of ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1401BB010
 * Callers:
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1401BAF24 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1401BB010 (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1401BB010 (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 */

__int64 __fastcall ItemContainingSubMenu(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  _QWORD *i; // rsi
  __int64 v6; // rdx
  int v8; // ebx
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(**(_QWORD **)a1 + 40LL);
  v4 = *(_DWORD *)(v3 + 44) - 1;
  if ( !*(_DWORD *)(v3 + 44) )
    return 0xFFFFFFFFLL;
  for ( i = (_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 88LL) + 96LL * (int)v4); (v4 & 0x80000000) == 0; --v4 )
  {
    v6 = i[2];
    if ( v6 )
    {
      if ( v6 == a2 )
        return v4;
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v9, v6);
      v8 = ItemContainingSubMenu(v9, a2);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v9);
      if ( v8 != -1 )
        return v4;
    }
    else if ( *(_DWORD *)(*i + 8LL) == a2 )
    {
      return v4;
    }
    i -= 12;
  }
  return v4;
}
