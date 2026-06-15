/*
 * XREFs of ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180044144
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180015DB4 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180015510 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180017BD0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180021430 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCApplication@@@std@@@std@@@std@@PEAVCApplication@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCApplication@@@std@@@std@@@0@V10@V10@AEBQEAVCApplication@@@Z @ 0x180029FE0 (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAVCApplication@@@std@@@std@@@std@@.c)
 *     ??$emplace_back@AEAPEAVCApplication@@@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@QEAAAEAPEAVCApplication@@AEAPEAV2@@Z @ 0x180043030 (--$emplace_back@AEAPEAVCApplication@@@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdAddActiveMediaApp(__int64 a1, struct CApplication *a2)
{
  DWORD v2; // ebx
  int v3; // eax
  unsigned int v4; // ebx
  const char *v5; // r9
  __int64 result; // rax
  struct TSSession *v7; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CApplication *v9; // [rsp+38h] [rbp+10h] BYREF
  struct TSSession *v10; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+20h] BYREF

  v9 = a2;
  v2 = a1;
  CWindowsPolicyManager::Lock(a1, &v11);
  v10 = 0LL;
  try
  {
    v3 = TsSessionFromSessionId(v2, 0, &v10);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v7 = v10;
      std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CApplication *>>>,CApplication *>(
        &v10,
        *((_QWORD *)v10 + 6),
        *((_QWORD *)v10 + 7),
        &v9);
      if ( v10 == *((struct TSSession **)v7 + 7) )
        std::vector<CApplication *>::emplace_back<CApplication * &>((_QWORD *)v7 + 6, (__int64 *)&v9);
      TsSessionSendAppManagerNotification(v7);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x519,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v3);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x527,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                           v5);
  }
  return result;
}
