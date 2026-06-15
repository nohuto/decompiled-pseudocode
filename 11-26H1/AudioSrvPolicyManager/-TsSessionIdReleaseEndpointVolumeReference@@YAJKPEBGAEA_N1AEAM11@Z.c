/*
 * XREFs of ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z @ 0x180044828
 * Callers:
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18003D0A8 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180017BD0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180021430 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TsSessionIdReleaseEndpointVolumeReference(
        __int64 a1,
        const unsigned __int16 *a2,
        bool *a3,
        bool *a4,
        float *a5,
        struct TSSession *a6,
        bool *a7)
{
  DWORD v10; // ebx
  struct TSSession *v11; // r14
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+70h] [rbp+18h] BYREF

  v10 = a1;
  *a3 = 0;
  *a4 = 0;
  v11 = a6;
  *(_BYTE *)a6 = 0;
  CWindowsPolicyManager::Lock(a1, &v17);
  a6 = 0LL;
  v12 = TsSessionFromSessionId(v10, 1, &a6);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, bool *, bool *, float *, struct TSSession *, bool *))(**((_QWORD **)a6 + 130) + 40LL))(
            *((_QWORD *)a6 + 130),
            a2,
            a3,
            a4,
            a5,
            v11,
            a7);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v13 = 0;
      goto LABEL_7;
    }
    v14 = 2106LL;
  }
  else
  {
    v14 = 2104LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)v12);
LABEL_7:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  return v13;
}
