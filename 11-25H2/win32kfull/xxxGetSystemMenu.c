/*
 * XREFs of xxxGetSystemMenu @ 0x1402CA414
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     NtUserGetSystemMenu @ 0x14024A550 (NtUserGetSystemMenu.c)
 * Callees:
 *     GetpwndNotifypMenuState @ 0x14003F0BC (GetpwndNotifypMenuState.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _GetSubMenu @ 0x1400460A4 (_GetSubMenu.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x140047038 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     _DestroyMenu @ 0x140047890 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x14005C540 (IsWindowBeingDestroyed.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x140190294 (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     xxxLoadSysMenu @ 0x1401B260C (xxxLoadSysMenu.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1401C4E98 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1401C8BD4 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct _HEAD *__fastcall xxxGetSystemMenu(struct tagWND *a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  struct _HEAD *v5; // rdi
  bool v6; // al
  __int64 v7; // rdx
  struct _HEAD *v8; // rcx
  __int64 SysMenu; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  struct _HEAD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 SubMenu; // rax
  _QWORD v20[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v23[2]; // [rsp+50h] [rbp-20h] BYREF
  struct _HEAD *v24; // [rsp+60h] [rbp-10h]

  v3 = a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v23, a2);
  v4 = *((_QWORD *)a1 + 20);
  v5 = 0LL;
  v24 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v23, v4);
  v6 = SmartObjStackRef<tagMENU>::operator==((__int64)v23);
  if ( v3 )
  {
    if ( !v6 && (*(_DWORD *)(*(_QWORD *)(*v23[0] + 40LL) + 40LL) & 0x80u) == 0 )
    {
      if ( UnlockWndMenuWorker(a1, 1u) )
      {
        v8 = v24;
        if ( !v24 )
          v8 = (struct _HEAD *)*v23[0];
        DestroyMenu(v8);
      }
      DwmUpdateCloseButton(a1, 1);
    }
  }
  else if ( (v6 || (*(_DWORD *)(*(_QWORD *)(*v23[0] + 40LL) + 40LL) & 0x80u) != 0)
         && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v20, 0LL);
    SysMenu = xxxLoadSysMenu(*((_QWORD *)a1 + 20) != 0LL ? 48 : 16);
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v23, SysMenu);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v23) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v20, v10);
      goto LABEL_37;
    }
    if ( (unsigned int)IsWindowBeingDestroyed((__int64)a1) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 454);
    LockWndMenuWorker((__int64)a1, 1u, v23);
    v11 = *((_QWORD *)a1 + 20);
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v23, v11);
    v12 = GetpwndNotifypMenuState((__int64)a1);
    if ( v12 )
      v13 = *v12;
    else
      v13 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v20, v13);
    if ( *(_QWORD *)v20[0] && (**(_DWORD **)v20[0] & 8) == 0 && *(struct tagWND **)(*(_QWORD *)v20[0] + 16LL) == a1 )
    {
      v15 = v24;
      if ( (**(_DWORD **)v20[0] & 4) != 0 )
      {
        if ( !v24 )
          v15 = (struct _HEAD *)*v23[0];
        v16 = *(_QWORD *)v20[0] + 40LL;
      }
      else
      {
        if ( !v24 )
          v15 = (struct _HEAD *)*v23[0];
        v16 = *(_QWORD *)v20[0] + 48LL;
      }
      v21[1] = v15;
      v21[0] = v16;
      HMAssignmentLock(v21, 0LL);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v20, v14);
  }
  v17 = *((_QWORD *)a1 + 20);
  if ( v17 )
  {
    SubMenu = GetSubMenu(v17, v7);
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v23, SubMenu);
    if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v23) )
    {
      *(_DWORD *)(*(_QWORD *)(*v23[0] + 40LL) + 40LL) |= 0x100u;
      v22[1] = a1;
      v22[0] = *v23[0] + 80LL;
      HMAssignmentLock(v22, 0LL);
    }
    if ( v24 )
      v5 = v24;
    else
      v5 = (struct _HEAD *)*v23[0];
  }
LABEL_37:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v23, v7);
  return v5;
}
