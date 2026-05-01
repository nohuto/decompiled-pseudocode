/*
 * XREFs of ?_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1806C50B4
 * Callers:
 *     ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180526020 (-ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067F8D8 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::_HandleNormalLayoutEnvChange(
        CAppLayoutOperation *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  int v4; // esi
  struct tagSIZE v5; // rdx
  enum DEVICE_SCALE_FACTOR v6; // r8d
  unsigned int v7; // r13d
  __int64 v8; // r12
  unsigned int v9; // r15d
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, __int64 *); // rdi
  bool v14; // al
  int v15; // eax
  unsigned int v17; // [rsp+80h] [rbp+48h] BYREF
  ImmersiveApplicationLayout *v18; // [rsp+88h] [rbp+50h] BYREF
  __int64 v19; // [rsp+90h] [rbp+58h] BYREF
  __int64 v20; // [rsp+98h] [rbp+60h] BYREF

  v4 = 0;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 216LL))(*((_QWORD *)this + 5));
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 264LL))(*((_QWORD *)this + 5), 2LL);
  v5 = (struct tagSIZE)*((unsigned int *)a2 + 4);
  LODWORD(v18) = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
  HIDWORD(v18) = *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1);
  v17 = 0;
  v7 = ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(v18, v5, v6);
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), 5LL) <= v7
    || (*(int (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 5) + 168LL))(
         *((_QWORD *)this + 5),
         0LL,
         &v17) < 0
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 256LL))(*((_QWORD *)this + 5), v17),
        v4 >= 0) )
  {
    if ( (unsigned int)Mirror_IsThreadRTL() )
    {
      v8 = 1LL;
      v9 = 0;
    }
    else
    {
      v8 = -1LL;
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5)) - 1;
    }
    while ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(
              *((_QWORD *)this + 5),
              1LL) > v7 )
    {
      if ( v4 < 0 )
        return (unsigned int)v4;
      v10 = *((_QWORD *)this + 5);
      LODWORD(v18) = 0;
      v20 = 0LL;
      v11 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v10 + 96LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      if ( v11(v10, v9, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v20) >= 0 )
      {
        v12 = v20;
        v19 = 0LL;
        v13 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 40LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
        if ( v13(v12, &v19) >= 0 )
          (*(void (__fastcall **)(__int64, ImmersiveApplicationLayout **))(*(_QWORD *)v19 + 72LL))(v19, &v18);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
      }
      v14 = 0;
      if ( !(_DWORD)v18 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 256LL))(*((_QWORD *)this + 5), v9);
        v14 = v4 >= 0;
      }
      if ( v8 == -1 || !v14 )
      {
        v15 = 1;
        if ( v8 != 1 )
          v15 = -1;
        v9 += v15;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    }
    if ( v4 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5)) )
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 240LL))(
                             *((_QWORD *)this + 5),
                             0LL,
                             0LL,
                             0LL);
  }
  return (unsigned int)v4;
}
