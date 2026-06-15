/*
 * XREFs of ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000D5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@PEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000D790 (-GetApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@PEAPEAUIApplicationSpecific.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::GetApplicationSpecificEndpointInfoForProcess(
        CWindowsPolicyManager *this,
        int a2,
        struct IApplicationSpecificEndpointInfo **a3)
{
  CApplicationManager *v5; // rdi
  signed __int32 *v6; // rbx
  RTL_SRWLOCK *v7; // rbp
  _QWORD *v8; // rax
  signed __int32 *v9; // rdx
  signed __int32 i; // eax
  int ApplicationSpecificEndpointInfo; // eax
  unsigned int v12; // edi
  signed __int32 j; // edx
  signed __int32 k; // edx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v5 = g_ApplicationManager;
  v6 = 0LL;
  v7 = (RTL_SRWLOCK *)((char *)g_ApplicationManager + 120);
  AcquireSRWLockShared((PSRWLOCK)g_ApplicationManager + 15);
  v8 = (_QWORD *)*((_QWORD *)v5 + 16);
  while ( v8 )
  {
    v9 = (signed __int32 *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( !v9[104] && v9[40] == a2 )
    {
      for ( i = v9[5]; i != 0x7FFFFFFF; i = v9[5] )
      {
        if ( i == _InterlockedCompareExchange(v9 + 5, i + 1, i) )
          break;
      }
      v6 = v9;
      break;
    }
  }
  if ( v7 )
    ReleaseSRWLockShared(v7);
  if ( !v6 )
    return 0LL;
  *a3 = 0LL;
  ApplicationSpecificEndpointInfo = CApplication::GetApplicationSpecificEndpointInfo(
                                      *((CApplication **)v6 + 28),
                                      (struct CProcess *)v6,
                                      a3);
  v12 = ApplicationSpecificEndpointInfo;
  if ( ApplicationSpecificEndpointInfo >= 0 )
  {
    for ( j = v6[5]; j != 0x7FFFFFFF; j = v6[5] )
    {
      if ( j == _InterlockedCompareExchange(v6 + 5, j - 1, j) )
        break;
    }
    if ( j == 1 )
    {
      (*(void (__fastcall **)(signed __int32 *, __int64))(*(_QWORD *)v6 + 560LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x176,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)ApplicationSpecificEndpointInfo);
  for ( k = v6[5]; k != 0x7FFFFFFF; k = v6[5] )
  {
    if ( k == _InterlockedCompareExchange(v6 + 5, k - 1, k) )
      break;
  }
  if ( k == 1 )
  {
    (*(void (__fastcall **)(signed __int32 *, __int64))(*(_QWORD *)v6 + 560LL))(v6, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v12;
}
