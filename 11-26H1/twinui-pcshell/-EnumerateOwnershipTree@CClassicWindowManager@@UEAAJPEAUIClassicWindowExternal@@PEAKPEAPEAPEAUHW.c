/*
 * XREFs of ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x1802EC6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18006F940 (--1-$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@UENUMERA.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180164630 (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     ?s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindowExternal@@@Z @ 0x18016935C (-s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA-AV-$ComPtr@UIClassicWindow@@.c)
 *     CClassicWindowManager::ForEachOwnee__lambda_f9eae87d6f3e756ba3ea7bb51b575bf4___ @ 0x1802EBDE0 (CClassicWindowManager--ForEachOwnee__lambda_f9eae87d6f3e756ba3ea7bb51b575bf4___.c)
 *     _lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_::_lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_ @ 0x1802EBFD0 (_lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_--_lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager::EnumerateOwnershipTree(
        CClassicWindowManager *this,
        struct IClassicWindowExternal *a2,
        unsigned int *a3,
        HWND **a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  void *v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 *v13; // r8
  _QWORD *v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  _QWORD v18[3]; // [rsp+20h] [rbp-40h] BYREF
  HWND *v19; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h]
  __int64 v21; // [rsp+48h] [rbp-18h]
  __int64 v22; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v24; // [rsp+90h] [rbp+30h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+40h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  CClassicWindowManager::s_ClassicWindowFromClassicWindowExternal(
    &v24,
    (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  CClassicWindowManager::GetRootOwner(v7, &v25, v24);
  v8 = v25;
  if ( v25 != v24 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 24LL))(v25);
    v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
            (__int64)&v19,
            v20 + 1,
            v10);
    if ( v11 >= 0 )
    {
      v12 = v20++;
      v13 = (__int64 *)&v19[v12];
      if ( v13 )
        *v13 = v9;
    }
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA3D,
        (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
        (const char *)(unsigned int)v11);
  }
  v14 = lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_::_lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_(
          v18,
          (__int64)this - 120,
          &v24,
          (__int64)&v19);
  CClassicWindowManager::ForEachOwnee__lambda_f9eae87d6f3e756ba3ea7bb51b575bf4___((__int64)this - 120, v8, (__int64)v14);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v15 = v20;
  if ( v20 )
  {
    *a4 = v19;
    v19 = 0LL;
    v20 = 0LL;
    v22 = 0LL;
    *a3 = v15;
  }
  v16 = *a4 == 0LL ? 0x80070490 : 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)&v19);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  return v16;
}
