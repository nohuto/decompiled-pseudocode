/*
 * XREFs of _lambda_cab7c03a2b5ac7190be81e45414ea272_::operator() @ 0x1801EBE2C
 * Callers:
 *     EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_4bda98b3a01c558fc217a4a30bde81e2___ @ 0x1801EBDF0 (EnumWindowsHelpers--LambdaEnumWindowsProc__lambda_4bda98b3a01c558fc217a4a30bde81e2___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$emplace_back@AEAPEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAAAEAPEAUHWND__@@AEAPEAU2@@Z @ 0x1804A2AB0 (--$emplace_back@AEAPEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAAAE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_cab7c03a2b5ac7190be81e45414ea272_::operator()(__int64 a1, HWND a2)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, HWND, __int64 *); // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v9; // [rsp+50h] [rbp+30h] BYREF
  HWND v10; // [rsp+58h] [rbp+38h] BYREF
  __int64 v11; // [rsp+60h] [rbp+40h] BYREF

  v10 = a2;
  v9 = 0;
  v11 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v5 = *(void (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v4 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  v5(v4, a2, &v11);
  if ( a2 == **(HWND **)(a1 + 8) )
  {
    std::vector<HWND__ *>::emplace_back<HWND__ * &>(*(_QWORD *)(a1 + 16), &v10);
    v6 = *(_QWORD *)(a1 + 24);
LABEL_13:
    std::vector<HWND__ *>::emplace_back<HWND__ * &>(v6, &v10);
    goto LABEL_14;
  }
  if ( IsWindowVisible(a2)
    && (unsigned int)GetWindowCompositionAttribute(a2, *(_QWORD *)(a1 + 32))
    && !**(_DWORD **)(a1 + 40) )
  {
    if ( GetPropW(a2, L"DesktopWindow") )
    {
      std::vector<HWND__ *>::emplace_back<HWND__ * &>(*(_QWORD *)(a1 + 16), &v10);
      v6 = *(_QWORD *)(a1 + 48);
    }
    else
    {
      if ( (!(unsigned int)GetWindowBand(a2, &v9) || v9 == 1 || v9 == 8) && v11 )
        goto LABEL_14;
      v6 = *(_QWORD *)(a1 + 16);
    }
    goto LABEL_13;
  }
LABEL_14:
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
