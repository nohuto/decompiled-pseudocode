/*
 * XREFs of ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800CDEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800149BC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??4?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001C7DC (--4-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV0.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x180049784 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     ??$_Move_unchecked@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x180087E40 (--$_Move_unchecked@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@.c)
 *     _lambda_1463bc8540bbc68486c0270114e39042_::operator() @ 0x1800CD500 (_lambda_1463bc8540bbc68486c0270114e39042_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::DisconnectStreams(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 *v4; // r14
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  const char *v9; // r9
  __int64 result; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v13 = v3;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x5Au, (__int64)&WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, 0LL);
  }
  v11[0] = &v14;
  v11[1] = a1 - 8;
  v4 = *(__int64 **)(a1 + 112);
  v5 = *(__int64 **)(a1 + 104);
  try
  {
    while ( v5 != v4 && !lambda_1463bc8540bbc68486c0270114e39042_::operator()((__int64)v11, v5) )
      ++v5;
    v6 = v5;
    if ( v5 != v4 )
    {
      while ( ++v5 != v4 )
      {
        if ( !lambda_1463bc8540bbc68486c0270114e39042_::operator()((__int64)v11, v5) )
          wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>::operator=(v6++, v5);
      }
    }
    v7 = *(__int64 **)(a1 + 112);
    if ( v6 != v7 )
    {
      v8 = std::_Move_unchecked<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
             v7,
             *(__int64 **)(a1 + 112),
             v6);
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
        v8,
        *(__int64 **)(a1 + 112));
      *(_QWORD *)(a1 + 112) = v8;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
    CAudioSession::DisconnectStreamList((CAudioSession *)(a1 - 8));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x12B8,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v9);
  }
  return result;
}
