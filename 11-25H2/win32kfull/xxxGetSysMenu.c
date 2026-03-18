/*
 * XREFs of xxxGetSysMenu @ 0x1401BC884
 * Callers:
 *     xxxMNStartMenu @ 0x14015D464 (xxxMNStartMenu.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1401BAE34 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetMenuBarInfo @ 0x1401BC1C0 (xxxGetMenuBarInfo.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140259D40 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1402B58D8 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 * Callees:
 *     _GetSubMenu @ 0x1400460A4 (_GetSubMenu.c)
 *     xxxSetSysMenu @ 0x140046248 (xxxSetSysMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxGetSysMenuPtr @ 0x140047518 (xxxGetSysMenuPtr.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxGetSysMenu(struct tagWND *a1, __int64 a2)
{
  int v3; // edi
  __int64 SysMenuPtr; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 SubMenu; // rax
  __int64 v8; // rbx
  __int64 v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v3 = a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v10, a2);
  xxxSetSysMenu(a1);
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v11 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v10, SysMenuPtr);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v10) && v3 )
  {
    v6 = v11;
    if ( !v11 )
      v6 = *(_QWORD *)v10[0];
    SubMenu = GetSubMenu(v6, v5);
    v11 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v10, SubMenu);
  }
  v8 = v11;
  if ( !v11 )
    v8 = *(_QWORD *)v10[0];
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v10, v5);
  return v8;
}
