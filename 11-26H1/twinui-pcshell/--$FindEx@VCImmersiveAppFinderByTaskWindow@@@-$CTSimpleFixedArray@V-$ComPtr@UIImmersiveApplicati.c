/*
 * XREFs of ??$FindEx@VCImmersiveAppFinderByTaskWindow@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18016EC10
 * Callers:
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x18016EA30 (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByTaskWindow>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 *a4,
        void (__fastcall ***a5)(_QWORD, _QWORD, _QWORD))
{
  unsigned __int64 i; // rbp
  __int64 v10; // rbx
  void (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rsi
  char v13; // si
  __int64 v14; // rcx
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h]

  *a4 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= a1[1] )
      return 2147647531LL;
    v10 = *a3;
    v17 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(*a1 + 8 * i);
    a5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v11;
    if ( v11 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[1])(v11);
    v16 = 0LL;
    v12 = **v11;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v12(v11, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v16);
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v16 + 296LL))(
            v16,
            a2,
            *(unsigned int *)(a2 + 24));
    v14 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v13 )
      break;
  }
  *a4 = i;
  return 0LL;
}
