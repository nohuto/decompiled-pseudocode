/*
 * XREFs of ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402E378C
 * Callers:
 *     xxxDoScrollMenu @ 0x1402E8138 (xxxDoScrollMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetSubMenu @ 0x1400460A4 (_GetSubMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxClientLoadMenu @ 0x1401B2838 (xxxClientLoadMenu.c)
 *     LockDesktopMenu @ 0x1401B2D64 (LockDesktopMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1401F16B4 (RtlInitUnicodeStringOrId.c)
 */

struct tagMENU *__fastcall xxxGetScrollMenu(struct tagWND *a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 *Menu; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 SubMenu; // rbx
  struct _UNICODE_STRING v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v15[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]

  v3 = a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v15, a2);
  v4 = *((_QWORD *)a1 + 3);
  v5 = (__int64 *)(v4 + 80);
  if ( !v3 )
    v5 = (__int64 *)(v4 + 72);
  v6 = *v5;
  v16 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v15, v6);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v15)
    && (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v8, v7) + 132, 0, 0) & 5) == 0 )
  {
    v14 = 0LL;
    RtlInitUnicodeStringOrId(&v14, (WCHAR *)(v3 != 0 ? 80LL : 64LL));
    Menu = xxxClientLoadMenu(0LL, (void **)&v14);
    v16 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v15, (__int64)Menu);
    LockDesktopMenu((__int64)v5, v15);
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v15) )
  {
    SubMenu = 0LL;
  }
  else
  {
    v11 = v16;
    if ( !v16 )
      v11 = *v15[0];
    SubMenu = GetSubMenu(v11, v10);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v15, v10);
  return (struct tagMENU *)SubMenu;
}
