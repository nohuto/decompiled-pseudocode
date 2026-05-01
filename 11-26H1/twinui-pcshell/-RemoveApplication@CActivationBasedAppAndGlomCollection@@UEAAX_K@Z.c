/*
 * XREFs of ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x1800A7E60
 * Callers:
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1800A6668 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x1800A809C (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800A8200 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?RemoveAt@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K@Z @ 0x1801640AC (-RemoveAt@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$C.c)
 *     ??ACGlomCollection@CActivationBasedAppAndGlomCollection@@QEBA?BV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x180205280 (--ACGlomCollection@CActivationBasedAppAndGlomCollection@@QEBA-BV-$ComPtr@UIImmersiveApplicationI.c)
 *     ??$QueueViewManagementTask@V_lambda_6ff91a5acb023164635626d4f2ce69ec_@@@CIAMGlobals@@QEAAJ$$QEAV_lambda_6ff91a5acb023164635626d4f2ce69ec_@@@Z @ 0x1802BF534 (--$QueueViewManagementTask@V_lambda_6ff91a5acb023164635626d4f2ce69ec_@@@CIAMGlobals@@QEAAJ$$QEAV.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CActivationBasedAppAndGlomCollection::RemoveApplication(
        CActivationBasedAppAndGlomCollection *this,
        unsigned __int64 a2)
{
  struct IUnknown *v4; // rbx
  unsigned __int64 v5; // r15
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v6; // r13
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int GlomCollection; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  HRESULT (__stdcall *v11)(IUnknown *, const IID *const, void **); // rdi
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // r12
  struct IUnknown **v16; // rax
  BOOL v17; // edi
  LPVOID pv; // [rsp+28h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]
  __int64 v20; // [rsp+38h] [rbp-10h]
  __int64 *v21; // [rsp+90h] [rbp+48h] BYREF
  __int64 *v22; // [rsp+98h] [rbp+50h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v23; // [rsp+A0h] [rbp+58h] BYREF
  unsigned __int64 v24; // [rsp+A8h] [rbp+60h] BYREF

  v4 = *(struct IUnknown **)(*((_QWORD *)this + 1) + 8 * a2);
  v5 = 0LL;
  if ( v4 )
    ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->AddRef)(v4);
  v6 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  QueryInterface = v4->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  GlomCollection = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 **))QueryInterface)(
                     v4,
                     &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                     &v21);
  if ( GlomCollection >= 0 )
  {
    pv = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v9 = *v21;
    v19 = -1LL;
    v20 = -1LL;
    GlomCollection = (*(__int64 (__fastcall **)(__int64 *, LPVOID *))(v9 + 32))(v21, &pv);
    if ( GlomCollection >= 0 )
    {
      GlomCollection = CActivationBasedAppAndGlomCollection::_GetGlomCollection(
                         this,
                         (const unsigned __int16 *)pv,
                         &v23,
                         &v24);
      v6 = v23;
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  v10 = (__int64)v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( GlomCollection >= 0 )
  {
    v15 = *((_QWORD *)v6 + 1);
    while ( v5 < v15 )
    {
      v16 = (struct IUnknown **)CActivationBasedAppAndGlomCollection::CGlomCollection::operator[](v6, &v21, v5);
      v17 = SHIsSameObject(*v16, v4);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
      if ( v17 )
      {
        CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
          v6,
          v5);
        break;
      }
      ++v5;
    }
    if ( !*((_QWORD *)v6 + 1) )
      CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::RemoveAt(
        (char *)this + 40,
        v24);
  }
  v22 = 0LL;
  v11 = v4->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 **))v11)(
         v4,
         &GUID_8b14e88b_5663_4caf_b196_c31479262831,
         &v22) >= 0 )
  {
    v21 = v22;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    CIAMGlobals::QueueViewManagementTask<_lambda_6ff91a5acb023164635626d4f2ce69ec_>(v14, &v21);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  }
  if ( a2 < *((_QWORD *)this + 2) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 1) + 8 * a2));
    v12 = *((_QWORD *)this + 2);
    if ( a2 != v12 - 1 )
      memmove_0(
        (void *)(*((_QWORD *)this + 1) + 8 * a2),
        (const void *)(*((_QWORD *)this + 1) + 8 * a2 + 8),
        8 * (v12 - a2) - 8);
    --*((_QWORD *)this + 2);
  }
  v13 = (__int64)v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
}
