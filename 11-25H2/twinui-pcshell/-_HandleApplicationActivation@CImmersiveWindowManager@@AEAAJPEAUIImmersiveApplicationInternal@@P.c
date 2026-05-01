/*
 * XREFs of ?_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@@Z @ 0x180139404
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180138A30 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800546A0 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ??$_InsertAt@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x180139620 (--$_InsertAt@AEBV-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@-$CTSimpleArray@V-$Co.c)
 *     ?_DeactivatePrevActiveApp@CImmersiveWindowManager@@AEAAJW4ZBID@@@Z @ 0x18013A584 (-_DeactivatePrevActiveApp@CImmersiveWindowManager@@AEAAJW4ZBID@@@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveWindowManager::_HandleApplicationActivation(
        CImmersiveWindowManager *this,
        struct IImmersiveApplicationInternal *a2,
        HWND a3)
{
  void (__fastcall *v6)(struct IImmersiveApplicationInternal *, GUID *, struct IImmersiveApplicationInternal **); // rbx
  __int64 v7; // r8
  int App; // ebp
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  bool v11; // bl
  _QWORD *v12; // rbx
  __int64 v13; // r8
  unsigned int v15; // eax
  struct IImmersiveApplicationInternal *v16; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v6 = **(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, struct IImmersiveApplicationInternal **))a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  v6(a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v16);
  App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
          (__int64)this + 208,
          &v16,
          v7,
          &v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  if ( App >= 0 )
  {
    v10 = v17;
    v11 = *((_BYTE *)this + 248) && !v17;
    LOBYTE(v9) = v11;
    App = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, HWND, __int64))(*(_QWORD *)a2 + 64LL))(
            a2,
            a3,
            v9);
    if ( App >= 0 )
    {
      if ( !v11 )
      {
        v15 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 136LL))(a2);
        App = 0;
        if ( *((_BYTE *)this + 248) )
          App = CImmersiveWindowManager::_DeactivatePrevActiveApp(this, v15);
      }
      if ( v10 )
      {
        v16 = a2;
        (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 8LL))(a2);
        v12 = (_QWORD *)((char *)this + 216);
        if ( v10 < *((_QWORD *)this + 28) )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*v12 + 8 * v10));
          v13 = *((_QWORD *)this + 28);
          if ( v10 != v13 - 1 )
            memmove_0((void *)(*v12 + 8 * v10), (const void *)(*v12 + 8 * v10 + 8), 8 * (v13 - v10) - 8);
          --*((_QWORD *)this + 28);
        }
        CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::_InsertAt<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal> const &>(
          (char *)this + 216,
          &v16,
          0LL);
        (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 16LL))(a2);
      }
      if ( App >= 0 )
        *((_BYTE *)this + 248) = 1;
    }
  }
  return (unsigned int)App;
}
