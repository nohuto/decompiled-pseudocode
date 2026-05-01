/*
 * XREFs of ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18024D520
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ @ 0x18006F7C0 (--1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrapperInternal@@@Z @ 0x1800FE35C (-FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrappe.c)
 *     ?WindowWrapperFromWindow@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18013EA28 (-WindowWrapperFromWindow@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1801466AC (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ??$WindowEventDispatcher_OnShellHookMessage@AEA_KI@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAI@Z @ 0x180155C04 (--$WindowEventDispatcher_OnShellHookMessage@AEA_KI@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEA.c)
 *     ?WindowWrapperFromWindowLockNotHeld@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18016A128 (-WindowWrapperFromWindowLockNotHeld@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrap.c)
 *     ?HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18017D7B0 (-HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     ?IsValidWindow@@YA_NPEAUHWND__@@@Z @ 0x1801B4480 (-IsValidWindow@@YA_NPEAUHWND__@@@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_56bc88237345be46eea563c70201c1d4___ @ 0x180416C00 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_56bc88237345be46eea563c70201c1d4.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang@@@details@wil@@QEAA_NXZ @ 0x18041A360 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall UwpWindowEventDispatcher::OnShellHookMessage(RTL_SRWLOCK *this, RTL_SRWLOCK *a2, HWND a3)
{
  const char *v5; // r9
  char *v6; // rbx
  char *v7; // rbx
  char *v8; // rbx
  char *v9; // rbx
  RTL_SRWLOCK **v10; // rcx
  __int64 result; // rax
  struct UwpWindowEventDispatcher *v12; // rsi
  _QWORD *Uwlm; // rax
  char v14; // r14
  __int64 v15; // rdi
  int (__fastcall *v16)(__int64, _QWORD, int *); // rbx
  int v17; // eax
  DWORD CurrentThreadId; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v21[2]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v22[5]; // [rsp+28h] [rbp-90h] BYREF
  char v23[8]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v24; // [rsp+58h] [rbp-60h]
  __int64 v25; // [rsp+60h] [rbp-58h]
  int v26; // [rsp+68h] [rbp-50h]
  char v27; // [rsp+6Ch] [rbp-4Ch]
  int v28; // [rsp+70h] [rbp-48h]
  char v29; // [rsp+74h] [rbp-44h]
  int v30; // [rsp+78h] [rbp-40h]
  char v31; // [rsp+7Ch] [rbp-3Ch]
  int v32; // [rsp+80h] [rbp-38h]
  char v33; // [rsp+84h] [rbp-34h]
  int v34; // [rsp+88h] [rbp-30h]
  char v35; // [rsp+8Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  RTL_SRWLOCK *v37; // [rsp+C8h] [rbp+10h] BYREF
  struct IUwpWindowWrapperInternal *v38; // [rsp+D0h] [rbp+18h] BYREF
  HWND v39; // [rsp+D8h] [rbp+20h] BYREF

  v37 = a2;
  v39 = a3;
  LODWORD(v38) = (_DWORD)a3;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnShellHookMessage<unsigned __int64 &,unsigned int>(
    (__int64 *)&v37,
    (int *)&v38);
  try
  {
    if ( (unsigned __int64)a2 > 0x1A )
    {
      if ( a2 != (RTL_SRWLOCK *)27 )
      {
        if ( a2 == (RTL_SRWLOCK *)31 )
        {
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::GetImpl'::`2'::impl) )
            goto LABEL_11;
          UwpWindowEventDispatcher::WindowWrapperFromWindowLockNotHeld(this - 10, (__int64 *)&v37, (__int64)v39);
          if ( v37 )
            (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))v37->Ptr + 41))(v37, 31LL);
        }
        else
        {
          if ( a2 == (RTL_SRWLOCK *)34 )
          {
            wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v38, this + 51);
            UwpWindowEventDispatcher::WindowWrapperFromWindow((__int64)&this[-10], (__int64 *)&v37, (__int64)v39);
            if ( v37 )
              (*((void (__fastcall **)(RTL_SRWLOCK *))v37->Ptr + 42))(v37);
            goto LABEL_15;
          }
          if ( (((unsigned __int64)&a2[-5].Ptr + 4) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            goto LABEL_11;
          UwpWindowEventDispatcher::WindowWrapperFromWindowLockNotHeld(this - 10, (__int64 *)&v37, (__int64)v39);
          if ( v37 )
            (*((void (__fastcall **)(RTL_SRWLOCK *, RTL_SRWLOCK *))v37->Ptr + 41))(v37, a2);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v37);
        goto LABEL_11;
      }
    }
    else if ( a2 != (RTL_SRWLOCK *)26 )
    {
      v6 = (char *)&a2[-3].Ptr + 7;
      if ( !v6 )
      {
        *(_QWORD *)v21 = 0LL;
        v12 = (struct UwpWindowEventDispatcher *)&this[-10];
        Uwlm = UwpWindowEventDispatcher::GetUwlm((__int64)&this[-10], &v37);
        v14 = 1;
        LODWORD(v38) = 1;
        v15 = *Uwlm;
        v16 = *(int (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)*Uwlm + 112LL);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v21);
        if ( v16(v15, (unsigned int)v39, v21) < 0 || !*(_QWORD *)v21 )
          v14 = 0;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v37);
        if ( v14 )
        {
          LODWORD(v37) = 0;
          v17 = (*(__int64 (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)v21 + 48LL))(*(_QWORD *)v21, &v37);
          if ( v17 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x19B,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)(unsigned int)v17,
              v21[0]);
          v23[0] = 0;
          v24 = 0LL;
          v25 = 0LL;
          v26 = 0;
          v27 = 0;
          v28 = 0;
          v29 = 0;
          v30 = 6;
          v31 = 0;
          v32 = 0;
          v33 = 0;
          v34 = 0;
          v35 = 0;
          v38 = 0LL;
          v22[0] = v12;
          v22[1] = &v38;
          v22[2] = &v37;
          v22[3] = v23;
          v22[4] = &v39;
          CurrentThreadId = GetCurrentThreadId();
          v20 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_56bc88237345be46eea563c70201c1d4___(
                  v19,
                  CurrentThreadId,
                  v22);
          if ( v20 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x1B3,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)(unsigned int)v20,
              v21[0]);
          UwpWindowEventDispatcher::WindowIdChangedEventHelper::FireEvents(
            (UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v23,
            v12,
            (__int64 (__fastcall ***)(struct IUwpWindowWrapperInternal *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))v38);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v38);
          UwpWindowEventDispatcher::WindowIdChangedEventHelper::~WindowIdChangedEventHelper((UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v23);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v21);
        goto LABEL_11;
      }
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 4;
          if ( v9 )
          {
            if ( v9 != (char *)2 )
              goto LABEL_11;
          }
        }
        goto LABEL_9;
      }
      if ( IsValidWindow(v39) )
        goto LABEL_11;
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v38, this + 51);
      UwpWindowEventDispatcher::WindowWrapperFromWindow((__int64)&this[-10], (__int64 *)&v37, (__int64)v39);
      if ( v37 )
        (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD))v37->Ptr + 24))(v37, 0LL);
LABEL_15:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v37);
      v10 = (RTL_SRWLOCK **)&v38;
      goto LABEL_10;
    }
LABEL_9:
    wil::AcquireSRWLockExclusive(&v37, this + 51);
    UwpWindowEventDispatcher::HandleForegroundWindow((UwpWindowEventDispatcher *)&this[-10], v39);
    v10 = &v37;
LABEL_10:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v10);
LABEL_11:
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v37) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x208,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                     v5);
    return (unsigned int)v37;
  }
  return result;
}
