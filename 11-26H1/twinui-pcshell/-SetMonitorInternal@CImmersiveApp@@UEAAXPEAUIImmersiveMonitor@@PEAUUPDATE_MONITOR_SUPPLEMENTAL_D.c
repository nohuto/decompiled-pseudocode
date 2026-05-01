/*
 * XREFs of ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x1801CFFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180058A9C (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180064C80 (-_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x1800655C0 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveApp::SetMonitorInternal(_QWORD *a1, struct IUnknown *a2, __int64 *a3, char a4)
{
  int v8; // r15d
  struct IUnknown *v9; // rbx
  __int64 v10; // rdi
  __int64 result; // rax
  void (__fastcall *v12)(_QWORD *, struct IUnknown **); // rdi
  BOOL v13; // esi
  struct IUnknown **v14; // rax
  unsigned __int8 IsReportingEnabled; // al
  void (__fastcall *v16)(_QWORD *, struct IUnknown **); // rdi
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  void *v18; // [rsp+38h] [rbp-28h] BYREF
  struct IUnknown *v19; // [rsp+40h] [rbp-20h] BYREF
  struct IUnknown *v20; // [rsp+48h] [rbp-18h] BYREF
  struct IUnknown *v21; // [rsp+50h] [rbp-10h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v8 = a4 & 8;
  v9 = 0LL;
  v21 = 0LL;
  if ( (a4 & 8) != 0 )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v21, a1 + 82);
    v9 = v21;
  }
  else
  {
    v10 = a1[81];
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(a1[81]);
      v9 = (struct IUnknown *)v10;
      v21 = (struct IUnknown *)v10;
    }
  }
  result = SHIsSameObject(a2, v9);
  if ( !(_DWORD)result )
  {
    if ( (a4 & 1) == 0 || (result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 400LL))(a1), !(_BYTE)result) )
    {
      v20 = 0LL;
      v12 = *(void (__fastcall **)(_QWORD *, struct IUnknown **))(*a1 + 464LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      v12(a1, &v20);
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(
        (_QWORD *)((char *)a1 + (v8 != 0 ? 656LL : 648LL)),
        (__int64)a2);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 400LL))(a1) && (a4 & 6) != 0 )
      {
        v13 = (a4 & 2) == 0;
        v17 = 0LL;
        if ( a3 )
        {
          v17 = *a3;
        }
        else
        {
          v18 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
          v14 = (struct IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)(a1 - 8), &v22);
          IAMPrivate_QueryObject(
            *v14,
            (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
            &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
            &v18);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
          (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v18 + 120LL))(v18, &v17);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
        }
        IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                               (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                               a2,
                               0LL);
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, BOOL))(*a1 + 264LL))(
          a1,
          (unsigned int)IsReportingEnabled + 1,
          (unsigned int)v17,
          HIDWORD(v17),
          v13);
      }
      v19 = 0LL;
      v16 = *(void (__fastcall **)(_QWORD *, struct IUnknown **))(*a1 + 464LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      v16(a1, &v19);
      if ( !SHIsSameObject(v20, v19) )
      {
        if ( !a1[83] )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7A7,
            (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
            (const char *)0x8000FFFFLL);
        CImmersiveApp::_ScheduleApplicationNotification((CImmersiveApp *)(a1 - 14), 17, 0LL);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    }
  }
  if ( v9 )
    return ((__int64 (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  return result;
}
