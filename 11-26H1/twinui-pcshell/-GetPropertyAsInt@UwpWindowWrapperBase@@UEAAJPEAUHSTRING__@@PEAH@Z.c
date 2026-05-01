/*
 * XREFs of ?GetPropertyAsInt@UwpWindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAH@Z @ 0x1801B78F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetPropertyAsInt(UwpWindowWrapperBase *this, HSTRING a2, int *a3)
{
  __int64 v6; // rcx
  const WCHAR *StringRawBuffer; // rax
  const char *v8; // r9
  int v9; // eax
  __int64 result; // rax
  const WCHAR *v11; // rax
  const WCHAR *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v6 = *((_QWORD *)this + 34);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 216LL))(v6);
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"BackVisible", -1, 1) == 2 )
    {
      v9 = *((_DWORD *)this + 110);
LABEL_4:
      *a3 = v9;
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      return 0LL;
    }
    v11 = WindowsGetStringRawBuffer(a2, 0LL);
    if ( CompareStringOrdinal(v11, -1, L"WindowFrameStyle", -1, 1) == 2 )
    {
      if ( !*((_BYTE *)this + 452) )
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&SRWLock);
        return 2147943568LL;
      }
      v9 = *((_DWORD *)this + 112);
      goto LABEL_4;
    }
    v12 = WindowsGetStringRawBuffer(a2, 0LL);
    if ( CompareStringOrdinal(v12, -1, L"TitleBarVisible", -1, 1) == 2 )
    {
      if ( *((_BYTE *)this + 453) )
      {
        v9 = *((_BYTE *)this + 454) == 0;
        goto LABEL_4;
      }
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      result = 2147943568LL;
    }
    else
    {
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      result = 2147942487LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x301,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v8);
  }
  return result;
}
