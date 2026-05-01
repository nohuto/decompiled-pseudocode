/*
 * XREFs of ?_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18069D2FC
 * Callers:
 *     ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180503E10 (-ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180659884 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::_HandleNormalLayoutEnvChange(
        CAppLayoutOperation *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  int v4; // esi
  int v5; // eax
  struct tagSIZE v6; // rdx
  enum DEVICE_SCALE_FACTOR v7; // r8d
  unsigned int v8; // r13d
  __int64 v9; // r12
  unsigned int v10; // r15d
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v13; // rbx
  int (__fastcall *v14)(__int64, __int64 *); // rdi
  bool v15; // al
  int v16; // eax
  unsigned int v18; // [rsp+80h] [rbp+48h] BYREF
  ImmersiveApplicationLayout *v19; // [rsp+88h] [rbp+50h] BYREF
  __int64 v20; // [rsp+90h] [rbp+58h] BYREF
  __int64 v21; // [rsp+98h] [rbp+60h] BYREF

  v4 = 0;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 216LL))(*((_QWORD *)this + 5));
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 264LL))(*((_QWORD *)this + 5), 2LL);
  v5 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
  v6 = (struct tagSIZE)*((unsigned int *)a2 + 4);
  v18 = 0;
  LODWORD(v19) = v5;
  HIDWORD(v19) = *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1);
  v8 = ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(v19, v6, v7);
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), 5LL) <= v8
    || (*(int (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 5) + 168LL))(
         *((_QWORD *)this + 5),
         0LL,
         &v18) < 0
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 256LL))(*((_QWORD *)this + 5), v18),
        v4 >= 0) )
  {
    if ( (unsigned int)Mirror_IsThreadRTL() )
    {
      v9 = 1LL;
      v10 = 0;
    }
    else
    {
      v9 = -1LL;
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5)) - 1;
    }
    while ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(
              *((_QWORD *)this + 5),
              1LL) > v8 )
    {
      if ( v4 < 0 )
        return (unsigned int)v4;
      v11 = *((_QWORD *)this + 5);
      LODWORD(v19) = 0;
      v21 = 0LL;
      v12 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v11 + 96LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      if ( v12(v11, v10, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v21) >= 0 )
      {
        v13 = v21;
        v20 = 0LL;
        v14 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 40LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
        if ( v14(v13, &v20) >= 0 )
          (*(void (__fastcall **)(__int64, ImmersiveApplicationLayout **))(*(_QWORD *)v20 + 72LL))(v20, &v19);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      }
      v15 = 0;
      if ( !(_DWORD)v19 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 256LL))(*((_QWORD *)this + 5), v10);
        v15 = v4 >= 0;
      }
      if ( v9 == -1 || !v15 )
      {
        v16 = 1;
        if ( v9 != 1 )
          v16 = -1;
        v10 += v16;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
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
