/*
 * XREFs of ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x1800CE9EC
 * Callers:
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x1800843B0 (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::IsExclusiveModeSession(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v3; // ebx
  __int64 i; // rdx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v6 = v1;
  v3 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x59u, (__int64)&WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, 0LL);
  }
  for ( i = *((_QWORD *)this + 14); i != *((_QWORD *)this + 15); i += 8LL )
  {
    if ( *(_BYTE *)(*(_QWORD *)i + 40LL) )
      v3 = 1;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v6);
  return v3;
}
