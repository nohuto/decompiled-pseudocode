/*
 * XREFs of ?GetSyncRootManagerRegistryLocation@SyncRootHelpers@Internal@Windows@@YAJPEAPEBG@Z @ 0x1806A3B0C
 * Callers:
 *     ??R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ @ 0x1806A32F0 (--R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetPersistedRegistryLocationAlloc@@YAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1806A3880 (-GetPersistedRegistryLocationAlloc@@YAJPEBG0AEAV-$unique_any_t@V-$unique_storage@U-$resource_pol.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SyncRootHelpers::GetSyncRootManagerRegistryLocation(
        Windows::Internal::SyncRootHelpers *this,
        const unsigned __int16 **a2)
{
  LPVOID v3; // rax
  int PersistedRegistryLocationAlloc; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  v3 = qword_18089A330;
  if ( !qword_18089A330 )
  {
    wil::AcquireSRWLockExclusive(&v8, &stru_18089D820);
    if ( !qword_18089A330 )
    {
      PersistedRegistryLocationAlloc = GetPersistedRegistryLocationAlloc();
      v5 = PersistedRegistryLocationAlloc;
      if ( PersistedRegistryLocationAlloc < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B,
          (int)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
          (const char *)(unsigned int)PersistedRegistryLocationAlloc);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
        return v5;
      }
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
    v3 = qword_18089A330;
  }
  *(_QWORD *)this = v3;
  return 0LL;
}
