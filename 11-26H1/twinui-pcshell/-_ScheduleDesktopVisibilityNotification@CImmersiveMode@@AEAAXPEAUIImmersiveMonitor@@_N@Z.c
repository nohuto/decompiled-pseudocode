/*
 * XREFs of ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x1802EB940
 * Callers:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180170AF8 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x1802214C8 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_32debc2fc80ca1e0059f85a00ba9919c_::__lambda_32debc2fc80ca1e0059f85a00ba9919c_ @ 0x1802EB0C8 (_lambda_32debc2fc80ca1e0059f85a00ba9919c_--__lambda_32debc2fc80ca1e0059f85a00ba9919c_.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x1802EB864 (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveMode::_ScheduleDesktopVisibilityNotification(
        CImmersiveMode *this,
        struct IImmersiveMonitor *a2,
        char a3)
{
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  unsigned __int64 i; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rsi
  _DWORD *v12; // rax
  unsigned int Ptr; // r14d
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // r8
  __int64 *v18; // r8
  _QWORD *v19; // [rsp+30h] [rbp-30h] BYREF
  struct IImmersiveMonitor *v20; // [rsp+38h] [rbp-28h] BYREF
  char v21; // [rsp+40h] [rbp-20h]
  __int64 v22; // [rsp+48h] [rbp-18h]
  __int64 v23[2]; // [rsp+50h] [rbp-10h] BYREF
  void *v24; // [rsp+A0h] [rbp+40h] BYREF
  struct IImmersiveMonitor *v25; // [rsp+B8h] [rbp+58h] BYREF

  v6 = *((_QWORD *)this + 49);
  if ( !v6 )
    return;
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7[1] = 0LL;
    v7[2] = 0LL;
    v7[3] = 0LL;
    v7[4] = 0LL;
    *v7 = &CRefCountedObject<CCoSimpleArray<unsigned long,4294967294,CSimpleArrayStandardCompareHelper<unsigned long>>>::`vftable';
    *((_DWORD *)v7 + 10) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  v19 = v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  if ( !v8
    || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
              v8 + 1,
              v6,
              v10) < 0 )
  {
    goto LABEL_22;
  }
  v11 = 0LL;
  for ( i = 0LL; i < v6; ++i )
  {
    v12 = *(_DWORD **)(*((_QWORD *)this + 48) + 8 * i);
    if ( a2 )
    {
      if ( v12[1] != 1 )
        continue;
LABEL_12:
      *(_DWORD *)(v8[1] + 4 * v11++) = *v12;
      continue;
    }
    if ( !v12[1] )
      goto LABEL_12;
  }
  if ( v11 )
  {
    v25 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
    v20 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
    v21 = a3;
    v22 = v11;
    v23[0] = (__int64)v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v23);
    Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
    v14 = 0LL;
    v15 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15;
    v24 = v15;
    if ( v15 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v15);
      Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(v16 + 2, &v20);
      *(_BYTE *)(v17 + 8) = v21;
      *(_QWORD *)(v17 + 16) = v22;
      v18 = (__int64 *)(v17 + 24);
      *v18 = 0LL;
      if ( v18 != v23 )
      {
        *v18 = v23[0];
        v23[0] = 0LL;
      }
      *v16 = &off_18072E590;
      v14 = v16;
      v24 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v24);
    SHTaskPoolQueueTask(3LL, 2LL, Ptr);
    if ( v14 )
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
    lambda_32debc2fc80ca1e0059f85a00ba9919c_::__lambda_32debc2fc80ca1e0059f85a00ba9919c_((__int64 *)&v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
  }
LABEL_22:
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v8 + 16LL))(v8, i);
}
