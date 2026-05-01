/*
 * XREFs of ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x1802F0DA0
 * Callers:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x18017E65C (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18023062C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_32debc2fc80ca1e0059f85a00ba9919c_::__lambda_32debc2fc80ca1e0059f85a00ba9919c_ @ 0x1802F0528 (_lambda_32debc2fc80ca1e0059f85a00ba9919c_--__lambda_32debc2fc80ca1e0059f85a00ba9919c_.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x1802F0CC4 (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveMode::_ScheduleDesktopVisibilityNotification(
        CImmersiveMode *this,
        struct IImmersiveMonitor *a2,
        char a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  unsigned __int64 i; // rdx
  unsigned __int64 v11; // r8
  _DWORD *v12; // rcx
  unsigned int Ptr; // r12d
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  _QWORD *v17; // [rsp+30h] [rbp-30h] BYREF
  struct IImmersiveMonitor *v18; // [rsp+38h] [rbp-28h] BYREF
  char v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+48h] [rbp-18h]
  __int64 v21[2]; // [rsp+50h] [rbp-10h] BYREF
  void *v22; // [rsp+A0h] [rbp+40h] BYREF
  struct IImmersiveMonitor *v23; // [rsp+B8h] [rbp+58h] BYREF

  v6 = *((_QWORD *)this + 49);
  v7 = 0LL;
  if ( !v6 )
    return;
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    *v8 = &CRefCountedObject<CCoSimpleArray<unsigned long,4294967294,CSimpleArrayStandardCompareHelper<unsigned long>>>::`vftable';
    *((_DWORD *)v8 + 10) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  v17 = v9;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
  if ( !v9
    || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
              v9 + 1,
              v6,
              v11) < 0 )
  {
    goto LABEL_24;
  }
  for ( i = 0LL; i < v6; ++i )
  {
    v12 = *(_DWORD **)(*((_QWORD *)this + 48) + 8 * i);
    if ( a2 )
    {
      if ( v12[1] != 1 )
        continue;
LABEL_12:
      *(_DWORD *)(v9[1] + 4 * v7++) = *v12;
      continue;
    }
    if ( !v12[1] )
      goto LABEL_12;
  }
  if ( v7 )
  {
    v23 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
    v18 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    v19 = a3;
    v20 = v7;
    v21[0] = (__int64)v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v21);
    Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
    v14 = 0LL;
    v15 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15;
    v22 = v15;
    if ( v15 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v15);
      v16[2] = 0LL;
      if ( v16 + 2 != &v18 )
      {
        v16[2] = a2;
        v18 = 0LL;
      }
      *((_BYTE *)v16 + 24) = a3;
      v16[4] = v7;
      v16[5] = 0LL;
      if ( v16 + 5 != v21 )
      {
        v16[5] = v9;
        v21[0] = 0LL;
      }
      *v16 = &off_1807059F8;
      v14 = v16;
      v22 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v22);
    SHTaskPoolQueueTask(3LL, 2LL, Ptr);
    if ( v14 )
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
    lambda_32debc2fc80ca1e0059f85a00ba9919c_::__lambda_32debc2fc80ca1e0059f85a00ba9919c_((__int64 *)&v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  }
LABEL_24:
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v9 + 16LL))(v9, i);
}
