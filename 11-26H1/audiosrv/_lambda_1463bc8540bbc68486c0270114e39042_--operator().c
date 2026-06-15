/*
 * XREFs of _lambda_1463bc8540bbc68486c0270114e39042_::operator() @ 0x1800CD500
 * Callers:
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800CDEF0 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800139B0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800CD0B4 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vecto.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_1463bc8540bbc68486c0270114e39042_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  _DWORD *v5; // rax
  bool v6; // zf
  int v8; // eax
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  __int64 v10; // rbx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  if ( *(_BYTE *)(*a2 + 120) )
    return 0;
  v5 = *(_DWORD **)a1;
  if ( **(_DWORD **)a1 == -1 )
    goto LABEL_12;
  if ( *v5 == 1 )
  {
    v6 = *(_BYTE *)(v4 + 40) == 0;
  }
  else
  {
    if ( *v5 )
    {
      if ( *v5 != 2 )
        return 0;
      v8 = *(_DWORD *)(v4 + 404);
      if ( v8 != 2 && v8 != 3 )
        return 0;
      goto LABEL_12;
    }
    v6 = *(_BYTE *)(v4 + 41) == 0;
  }
  if ( v6 )
    return 0;
LABEL_12:
  v9 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 136LL);
  EnterCriticalSection(v9);
  v11 = v9;
  v10 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v10 + 184) == *(_QWORD *)(v10 + 192) )
  {
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> const &>(
      (__int64 **)(v10 + 176),
      *(__int64 **)(v10 + 184),
      a2);
  }
  else
  {
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
      *(_QWORD **)(v10 + 184),
      *a2);
    *(_QWORD *)(v10 + 184) += 8LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  return 1;
}
