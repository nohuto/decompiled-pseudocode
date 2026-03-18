/*
 * XREFs of ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402E1904
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z @ 0x1402E18AC (-FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

_QWORD *__fastcall SetupFakeMDIAppStuff(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  struct tagWND *FakeMDIChild; // rax
  __int64 v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v7);
  v4 = a2[2];
  v8 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v7, v4);
  if ( v8 || *(_QWORD *)v7[0] )
  {
    if ( *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
    {
      FakeMDIChild = FindFakeMDIChild(*(struct tagWND **)(**(_QWORD **)a1 + 80LL));
      if ( FakeMDIChild )
        *(_QWORD *)(*a2 + 56LL) = *(_QWORD *)FakeMDIChild;
    }
  }
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v7);
}
