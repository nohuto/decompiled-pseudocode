/*
 * XREFs of ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x14016ECFC
 * Callers:
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x14016EC10 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x14016ECFC (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x14016ECFC (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 */

__int64 __fastcall ItemContainingSubMenu(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  _QWORD *i; // rsi
  __int64 v6; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF

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
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v10, v6);
      v8 = ItemContainingSubMenu(v10, a2);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v10, v9);
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
