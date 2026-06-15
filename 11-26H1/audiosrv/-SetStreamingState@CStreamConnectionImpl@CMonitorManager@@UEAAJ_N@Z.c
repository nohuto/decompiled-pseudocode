/*
 * XREFs of ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N@Z @ 0x18011FF70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18005F134 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007D194 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18011C120 (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011FB6C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMonitorManager::CStreamConnectionImpl::SetStreamingState(
        CMonitorManager::CStreamConnectionImpl *this,
        char a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // edi
  int restarted; // ebx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+20h]

  v4 = (RTL_SRWLOCK *)((char *)this + 8);
  AcquireSRWLockExclusive((PSRWLOCK)this + 1);
  v11 = v4;
  v5 = 0;
  if ( a2 != *((_BYTE *)this + 16) )
  {
    restarted = 0;
    v7 = *((_QWORD *)this + 3);
    if ( a2 )
    {
      v10 = *((_QWORD *)this + 4);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v10);
      v12 = &v10;
      v8 = v10;
      if ( v10 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 72));
        ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
          (__int64 *)(v7 + 112),
          v10);
        LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 72));
        v8 = v10;
      }
      if ( v8 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      restarted = CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(*((CMonitorManager::CaptureMonitor **)this
                                                                               + 4));
      if ( restarted < 0 )
        CMonitorManager::RemoveMonitor(
          *((CMonitorManager **)this + 3),
          *((CMonitorManager::CaptureMonitor **)this + 4),
          0);
      else
        *((_BYTE *)this + 16) = 1;
    }
    else
    {
      CMonitorManager::RemoveMonitor(
        *((CMonitorManager **)this + 3),
        *((CMonitorManager::CaptureMonitor **)this + 4),
        1);
      *((_BYTE *)this + 16) = 0;
    }
    v5 = restarted;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  return v5;
}
