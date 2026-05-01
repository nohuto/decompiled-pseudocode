/*
 * XREFs of ?StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802F9200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D54D0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     WPP_SF_ @ 0x18022DA04 (WPP_SF_.c)
 *     ?_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PEAPEAU2@@Z @ 0x1802FB0A8 (-_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PE.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802FD2EC (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::StealForegroundActivateGlom(
        CAppViewManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **))
{
  __int64 (__fastcall *v4)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **); // rbx
  __int64 v5; // rcx
  int AnotherGlom; // ebx
  char v7; // di
  __int64 v8; // r8
  struct IImmersiveApplicationInternal *v10; // [rsp+48h] [rbp+28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  RTL_SRWLOCK *v12; // [rsp+58h] [rbp+38h] BYREF

  v10 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  AnotherGlom = v4((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v10);
  if ( AnotherGlom >= 0 )
  {
    v7 = 0;
    CIAMGlobals::AcquireExclusive(v5, &v12);
    if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v10 + 416LL))(v10) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0x22u,
          &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
      }
    }
    else
    {
      v11 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
      AnotherGlom = CAppViewManager::_FindAnotherGlom((char *)this - 40, v10, v8, &v11);
      if ( AnotherGlom >= 0 )
      {
        v7 = 1;
      }
      else
      {
        if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            0x21u,
            &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
        }
        AnotherGlom = -2147024891;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
    if ( v7 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0x23u,
          &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
      }
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
      AnotherGlom = CAppViewManager::_TrySwitchToApplication((CAppViewManager *)((char *)this - 40), v10, 0LL);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  return (unsigned int)AnotherGlom;
}
