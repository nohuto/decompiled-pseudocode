/*
 * XREFs of ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180110B94
 * Callers:
 *     ?WindowDiscoveredFromShellHook@UwpWindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180110A00 (-WindowDiscoveredFromShellHook@UwpWindowWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     _lambda_a977afc9c59ce0858e320274f367b95a_::operator() @ 0x180439E08 (_lambda_a977afc9c59ce0858e320274f367b95a_--operator().c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x180110DD4 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1801110DC (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801113B0 (-CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel.c)
 *     ?TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ @ 0x1801123D4 (-TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1801129B4 (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x180112AEC (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     ?PushZbidToWindow@UwpWindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x180112B64 (-PushZbidToWindow@UwpWindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 *     ?PushPointerActivationPolicyToWindow@UwpWindowWrapperBase@@AEAAXXZ @ 0x180112C7C (-PushPointerActivationPolicyToWindow@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowWrapperBase::SetWindowId(__int64 a1, int a2, int a3)
{
  HWND v4; // rbx
  __int64 v6; // rcx
  const char *v7; // r9
  int v8; // edi
  int v9; // edi
  __int64 v10; // r14
  unsigned int v11; // r15d
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  __int64 v14[2]; // [rsp+38h] [rbp-20h] BYREF
  int v15; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (HWND)a2;
  v6 = *(_QWORD *)(a1 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 224LL))(v6);
    v8 = *(_DWORD *)(a1 + 296);
    if ( (_DWORD)v4 != v8 )
    {
      *(_DWORD *)(a1 + 296) = (_DWORD)v4;
      WakeAllConditionVariable((PCONDITION_VARIABLE)(a1 + 304));
      UwpWindowReadyState::SetWindow(a1 + 360, v4, 0LL);
      if ( !*(_QWORD *)(a1 + 552) )
        UwpWindowWrapperBase::CachePersistingStateName(a1, *(unsigned int *)(a1 + 296));
      if ( (_DWORD)v4 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 200LL))(a1, 0LL);
        if ( a3 != 1 )
        {
          UwpWindowWrapperBase::PushZbidToWindow(a1, *(unsigned int *)(a1 + 508));
          UwpWindowWrapperBase::PushBoundsToWindow(a1, 3LL);
          UwpWindowWrapperBase::PushPointerActivationPolicyToWindow((UwpWindowWrapperBase *)a1);
          LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(a1 + 200), v4);
          UwpWindowWrapperBase::TryPushWindowResizingState((UwpWindowWrapperBase *)a1);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL))(a1);
        v9 = 0;
      }
      else
      {
        LODWORD(v4) = v8;
        v9 = 1;
      }
      v10 = (int)v4;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
      if ( (*(_BYTE *)(a1 + 356) & 1) == 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        v14[0] = a1;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        v14[1] = (int)v4;
        v15 = v9;
        v11 = *(_DWORD *)(a1 + 560);
        v12 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v13 = v12;
        if ( v12 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v12);
          v13[2] = a1;
          v14[0] = 0LL;
          v13[3] = a1;
          v13[4] = v10;
          *((_DWORD *)v13 + 10) = v9;
          *v13 = &off_1806EFD98;
        }
        else
        {
          v13 = 0LL;
        }
        SHTaskPoolQueueTask(3LL, 2LL, v11);
        if ( v13 )
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v14);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
      }
      UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion((UwpWindowWrapperBase *)a1);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x6A1,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      v7);
  }
}
