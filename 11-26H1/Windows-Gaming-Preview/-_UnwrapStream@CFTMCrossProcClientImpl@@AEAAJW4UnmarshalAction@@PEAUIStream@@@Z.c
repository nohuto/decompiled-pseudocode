/*
 * XREFs of ?_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z @ 0x180042E64
 * Callers:
 *     ?ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z @ 0x180042CB0 (-ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z.c)
 *     ?UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x180042CF0 (-UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x180003139 (CoTaskMemFree_0.c)
 *     RoGetAgileReference_0 @ 0x18000315D (RoGetAgileReference_0.c)
 *     CoReleaseMarshalData_0 @ 0x180003169 (CoReleaseMarshalData_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180006C98 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003CD14 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFTMCrossProcClientImpl::_UnwrapStream(__int64 a1, unsigned int a2, IStream *a3)
{
  int AgileReference_0; // edi
  __int64 *v7; // rbx
  LPVOID v8; // r15
  UINT *v9; // r15
  BYTE *v10; // rbx
  IStream *v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+48h] BYREF

  if ( a2 )
  {
    AgileReference_0 = CoReleaseMarshalData_0(a3);
  }
  else
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
    AgileReference_0 = CoUnmarshalInterface(a3, &GUID_00000000_0000_0000_c000_000000000046, &ppv);
    if ( AgileReference_0 >= 0 )
    {
      v7 = (__int64 *)(a1 + 72);
      v8 = ppv;
      v15 = 0LL;
      v14 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
      AgileReference_0 = 0;
      if ( v8 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 72));
        AgileReference_0 = RoGetAgileReference_0();
      }
      else
      {
        v14 = 0LL;
        v15 = *v7;
        *v7 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
  }
  if ( AgileReference_0 >= 0 )
  {
    v9 = (UINT *)(a1 + 32);
    AgileReference_0 = IStream_Read(a3, (void *)(a1 + 32), 4u);
    if ( AgileReference_0 >= 0 )
    {
      v10 = 0LL;
      ppv = 0LL;
      if ( is_mul_ok(*v9, 1uLL) )
      {
        AgileReference_0 = CTCoAllocPolicy::Alloc((IMalloc *)*v9, (*v9 * (unsigned __int128)1uLL) >> 64, *v9, &ppv);
        v10 = (BYTE *)ppv;
        if ( AgileReference_0 >= 0 )
        {
          if ( !*v9 || (AgileReference_0 = IStream_Read(a3, ppv, *v9), AgileReference_0 >= 0) )
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 88));
            v11 = SHCreateMemStream(v10, *v9);
            v12 = *(_QWORD *)(a1 + 80);
            if ( v12 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            *(_QWORD *)(a1 + 80) = v11;
            if ( v11 )
              AgileReference_0 = (*(__int64 (__fastcall **)(__int64, _QWORD, IStream *))(*(_QWORD *)a1 + 96LL))(
                                   a1,
                                   a2,
                                   v11);
            else
              AgileReference_0 = -2147024882;
            if ( a1 != -88 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 88));
          }
        }
      }
      else
      {
        AgileReference_0 = -2147024362;
      }
      CoTaskMemFree_0(v10);
    }
  }
  return (unsigned int)AgileReference_0;
}
