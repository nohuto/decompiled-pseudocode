/*
 * XREFs of ?OnDeviceQueryRemove@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800CCD50
 * Callers:
 *     ?OnDeviceQueryRemove@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x1800CCE50 (-OnDeviceQueryRemove@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A6364 (-InternalRelease@-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInputProcessor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessor@@@Z @ 0x1800CCBB4 (--4-$ComPtr@UIInputProcessor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputStateManager::OnDeviceQueryRemove(InputStateManager *this, struct DeviceInfo *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+18h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  v3 = *((_QWORD *)this + 10);
  v4 = *((_QWORD *)this + 11);
  if ( v3 == v4 )
  {
LABEL_4:
    v5 = -2147467259;
    v6 = 2147500037LL;
    v7 = 393LL;
  }
  else
  {
    while ( *(_DWORD *)v3 != *(_DWORD *)a2 )
    {
      v3 += 16LL;
      if ( v3 == v4 )
        goto LABEL_4;
    }
    Microsoft::WRL::ComPtr<IInputProcessor>::operator=((__int64 *)&v14, *(_QWORD *)(v3 + 8));
    v9 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v14;
    v10 = **v14;
    Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease(&v13);
    if ( v10(v9, &GUID_f756c565_2d4c_4013_9970_5b846179080c, &v13) < 0
      || (v11 = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v13 + 24LL))(v13, a2),
          v5 = v11,
          v11 >= 0) )
    {
      v5 = 0;
      goto LABEL_6;
    }
    v6 = (unsigned int)v11;
    v7 = 385LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)v6);
LABEL_6:
  Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  return v5;
}
