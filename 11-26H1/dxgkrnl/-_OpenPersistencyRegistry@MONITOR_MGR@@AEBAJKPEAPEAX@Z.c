/*
 * XREFs of ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1402752AC
 * Callers:
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x140273BEC (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140273E20 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1402743DC (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1400546F4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x140098748 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall MONITOR_MGR::_OpenPersistencyRegistry(MONITOR_MGR *this, ACCESS_MASK a2, void **a3)
{
  __int64 v6; // rax
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r15
  __int64 v8; // rbx
  void *v9; // r8
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  NTSTATUS v14; // eax
  void *DeviceRegKey; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING v17; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v18[2]; // [rsp+38h] [rbp-38h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  wchar_t v20; // [rsp+5Ch] [rbp-14h]

  if ( a2 != 131097 && a2 != 131078 && a2 != 983103 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3519;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3520;
  }
  v6 = *((_QWORD *)this + 3);
  DeviceRegKey = 0LL;
  if ( !*(_QWORD *)(v6 + 16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3528;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 216LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3529;
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL)
                                                                           + 216LL));
  if ( !DeviceAttachmentBaseRef )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3532;
  }
  v8 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 1u, a2, &DeviceRegKey);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( (int)v8 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), v8);
    WdLogGlobalForLineNumber = 3603;
  }
  else
  {
    v9 = DeviceRegKey;
    if ( !DeviceRegKey )
    {
      WdLogSingleEntry0(1LL);
      v9 = DeviceRegKey;
      WdLogGlobalForLineNumber = 3540;
    }
    v19 = *(_DWORD *)L"cy";
    v20 = aMonitorpersist[18];
    v17.Buffer = (wchar_t *)v18;
    v18[0] = *(_OWORD *)L"MonitorPersistency";
    *(_QWORD *)&v17.Length = 2490404LL;
    v18[1] = *(_OWORD *)L"ersistency";
    *a3 = 0LL;
    v10 = DxgkOpenRegistrySubkey(a3, a2, v9, &v17);
    LODWORD(v8) = v10;
    if ( v10 == -1073741772 )
    {
      if ( a2 == 131078 || a2 == 983103 )
      {
        v14 = DxgkCreateRegistrySubkey(a3, a2, DeviceRegKey, &v17);
        LODWORD(v8) = v14;
        if ( v14 < 0 )
        {
          WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), v14);
          WdLogGlobalForLineNumber = 3568;
        }
      }
      else
      {
        v13 = WdLogNewEntry5_WdTrace(v12, v11);
        *(_QWORD *)(v13 + 24) = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
        *(_QWORD *)(v13 + 32) = -1073741772LL;
        WdLogGlobalForLineNumber = 3578;
      }
    }
    else if ( v10 >= 0 )
    {
      if ( !*a3 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3590;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), v10);
      WdLogGlobalForLineNumber = 3586;
    }
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v8;
}
