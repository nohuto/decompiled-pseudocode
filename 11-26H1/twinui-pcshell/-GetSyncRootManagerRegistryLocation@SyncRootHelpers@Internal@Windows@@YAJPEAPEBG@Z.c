/*
 * XREFs of ?GetSyncRootManagerRegistryLocation@SyncRootHelpers@Internal@Windows@@YAJPEAPEBG@Z @ 0x1806CBB4C
 * Callers:
 *     ??R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ @ 0x1806CB3A4 (--R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1800F79B4 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SyncRootHelpers::GetSyncRootManagerRegistryLocation(
        Windows::Internal::SyncRootHelpers *this,
        const unsigned __int16 **a2)
{
  LPVOID v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  _BYTE v7[8]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v8[17]; // [rsp+28h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  RTL_SRWLOCK *v10; // [rsp+C0h] [rbp+67h] BYREF
  const wchar_t *v11; // [rsp+C8h] [rbp+6Fh] BYREF
  const wchar_t *v12; // [rsp+D0h] [rbp+77h] BYREF

  *(_QWORD *)this = 0LL;
  v3 = qword_1808DAA00;
  if ( !qword_1808DAA00 )
  {
    wil::AcquireSRWLockExclusive(&v10, &stru_1808DDE20);
    if ( !qword_1808DAA00 )
    {
      v12 = L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\SyncRootManager";
      v11 = L"FESyncRootManager";
      v8[0] = &wistd::__function::__func<_lambda_0e39b4e02d07fc3330b16054b36d48cc_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
      v8[1] = &v11;
      v8[2] = &v12;
      v8[13] = v8;
      v4 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
             &qword_1808DAA00,
             (__int64)v7);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17,
          (int)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
          (const char *)(unsigned int)v4);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B,
          (int)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
          (const char *)v5);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
        return v5;
      }
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
    v3 = qword_1808DAA00;
  }
  *(_QWORD *)this = v3;
  return 0LL;
}
