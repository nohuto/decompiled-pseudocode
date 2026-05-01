/*
 * XREFs of ??$GetAppPosition@VCImmersiveAppFinderByFrameProxy@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByFrameProxy@@_KPEA_K@Z @ 0x180063380
 * Callers:
 *     ?GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x180062570 (-GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_G.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByFrameProxy>(
        __int64 a1,
        _QWORD *a2,
        ...)
{
  unsigned int v3; // r14d
  unsigned __int64 i; // r15
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  int v6; // r12d
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, __int64 *); // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+90h] [rbp+48h] BYREF
  _QWORD *v14; // [rsp+98h] [rbp+50h]
  __int64 v15; // [rsp+A0h] [rbp+58h] BYREF
  va_list va; // [rsp+A0h] [rbp+58h]
  unsigned __int64 *v17; // [rsp+A8h] [rbp+60h]
  va_list va1; // [rsp+B0h] [rbp+68h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v15 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, unsigned __int64 *);
  v14 = a2;
  v3 = 0;
  *v17 = 0LL;
  for ( i = 0LL; i < *(_QWORD *)(a1 + 16); ++i )
  {
    v5 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 8) + 8 * i);
    if ( v5 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[1])(v5);
    v6 = -1;
    v13 = 0LL;
    v7 = **v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    if ( v7(v5, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v13) >= 0 )
    {
      v15 = 0LL;
      v8 = v13;
      v9 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 496LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)va);
      if ( v9(v8, (__int64 *)va) >= 0 )
        v6 = ((*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 232LL))(v15, *v14) != 0) - 1;
      v10 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[2])(v5);
    if ( !v6 )
    {
      *v17 = i;
      return v3;
    }
  }
  return (unsigned int)-2147319765;
}
