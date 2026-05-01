/*
 * XREFs of ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x1800AE6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x1800AE7DC (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800E74D0 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CImmersiveApp::MatchByWindow(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  bool result; // al
  unsigned __int64 i; // rbx
  HWND v8; // r15
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // ebx
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( (a3 & 4) != 0 )
    return CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176)) == *(HWND *)a2;
  v14 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= *(_QWORD *)(a1 + 344) )
    {
      v11 = -2147319765;
      goto LABEL_13;
    }
    if ( *(_BYTE *)(a2 + 16) )
      break;
    v9 = *(__int64 **)(*(_QWORD *)(a1 + 336) + 8 * i);
    v10 = *v9;
    if ( *(_QWORD *)a2 )
    {
      v8 = *(HWND *)a2;
      if ( (HWND)(*(__int64 (**)(void))(v10 + 32))() == v8 )
        break;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v10 + 48))(v9, *(_QWORD *)(a2 + 8)) )
    {
      break;
    }
  }
  v11 = 0;
LABEL_13:
  result = v11 >= 0
        || (v3 & 1) != 0
        && (v14 = 0LL,
            v12 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
                    a1 + 424,
                    a2,
                    a3,
                    v13),
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14),
            v12 >= 0)
        || (v3 & 2) != 0
        && *(_QWORD *)a2
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 192LL))(*(_QWORD *)(a1 + 320));
  return result;
}
