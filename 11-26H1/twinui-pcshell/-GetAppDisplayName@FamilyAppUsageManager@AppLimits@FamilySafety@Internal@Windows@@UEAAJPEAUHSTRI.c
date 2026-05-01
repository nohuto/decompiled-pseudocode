/*
 * XREFs of ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x18056D400
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$GetAppDisplayName@PEBGPEBG@AppUsageTelemetry@@SAX$$QEAPEBG0@Z @ 0x18056AFA4 (--$GetAppDisplayName@PEBGPEBG@AppUsageTelemetry@@SAX$$QEAPEBG0@Z.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18057088C (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetAppDisplayName(
        RTL_SRWLOCK *this,
        HSTRING a2,
        HSTRING *a3)
{
  PCWSTR StringRawBuffer; // rdx
  __int64 v6; // r8
  PVOID Ptr; // rcx
  char *v8; // r8
  _QWORD *v9; // rax
  const WCHAR *v10; // rcx
  HRESULT String; // eax
  const WCHAR *v12; // rax
  const WCHAR *v13; // rax
  const WCHAR *v15; // [rsp+20h] [rbp-88h] BYREF
  const WCHAR *v16; // [rsp+28h] [rbp-80h] BYREF
  RTL_SRWLOCK *v17; // [rsp+30h] [rbp-78h] BYREF
  PCNZWCH sourceString[2]; // [rsp+38h] [rbp-70h] BYREF
  UINT32 length; // [rsp+48h] [rbp-60h]
  unsigned __int64 v20; // [rsp+50h] [rbp-58h]
  char v21[24]; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-38h]
  _QWORD v23[4]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  *a3 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  Windows::Internal::FamilySafety::AppLimits::ToLowerCase(v21, StringRawBuffer);
  std::wstring::wstring((__int64)sourceString);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v17, this + 18);
  Ptr = this[17].Ptr;
  if ( Ptr )
  {
    v8 = v21;
    if ( v22 > 7 )
      v8 = *(char **)v21;
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(PVOID, _QWORD *, char *))(*(_QWORD *)Ptr + 88LL))(Ptr, v23, v8);
    std::wstring::operator=(sourceString, v9);
    std::wstring::_Tidy_deallocate(v23);
  }
  else
  {
    std::wstring::operator=((char *)sourceString, v21, v6);
  }
  v10 = (const WCHAR *)sourceString;
  if ( v20 > 7 )
    v10 = sourceString[0];
  String = WindowsCreateString(v10, length, a3);
  if ( String < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF2,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)String,
      (int)v15);
  v12 = (const WCHAR *)sourceString;
  if ( v20 > 7 )
    v12 = sourceString[0];
  v15 = v12;
  v13 = (const WCHAR *)v21;
  if ( v22 > 7 )
    v13 = *(const WCHAR **)v21;
  v16 = v13;
  AppUsageTelemetry::GetAppDisplayName<unsigned short const *,unsigned short const *>(&v16, &v15);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v17);
  std::wstring::_Tidy_deallocate(sourceString);
  std::wstring::_Tidy_deallocate(v21);
  return 0LL;
}
