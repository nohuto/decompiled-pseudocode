/*
 * XREFs of ?OnDeviceUpdate@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800CCFE0
 * Callers:
 *     ?OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x1800CD120 (-OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIInputProcessor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessor@@@Z @ 0x1800CCBB4 (--4-$ComPtr@UIInputProcessor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputStateManager::OnDeviceUpdate(InputStateManager *this, struct DeviceInfo *a2)
{
  __int64 i; // rdx
  int (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rdi
  const char *v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  int (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  for ( i = *((_QWORD *)this + 10); ; i += 16LL )
  {
    if ( i == *((_QWORD *)this + 11) )
    {
      v9 = -2147467259;
      v11 = 2147500037LL;
      v10 = 363LL;
      goto LABEL_16;
    }
    if ( *(_DWORD *)i == *(_DWORD *)a2 )
      break;
  }
  Microsoft::WRL::ComPtr<IInputProcessor>::operator=((__int64 *)&v15, *(_QWORD *)(i + 8));
  v5 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
  v6 = **v15;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  if ( v6(v5, &GUID_3cc27501_dfa8_48b9_9841_43a516320b1d, &v14) < 0
    || (v8 = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v14 + 24LL))(v14, a2), v9 = v8, v8 >= 0) )
  {
    if ( !ISMScenarios::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
        v7);
    if ( *(_DWORD *)ISMScenarios::s_instance
      || (v8 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 32LL))(
                 *((_QWORD *)this + 5),
                 a2),
          v9 = v8,
          v8 >= 0) )
    {
      v9 = 0;
      goto LABEL_17;
    }
    v10 = 355LL;
  }
  else
  {
    v10 = 350LL;
  }
  v11 = (unsigned int)v8;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)v11);
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  return v9;
}
