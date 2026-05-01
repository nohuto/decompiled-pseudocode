/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c___ @ 0x18012A688
 * Callers:
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18012A618 (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     _lambda_4d39dc8836a747feab7d20b0af3bfeac_::__lambda_4d39dc8836a747feab7d20b0af3bfeac_ @ 0x18012A748 (_lambda_4d39dc8836a747feab7d20b0af3bfeac_--__lambda_4d39dc8836a747feab7d20b0af3bfeac_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___ @ 0x18012B968 (Windows--Internal--ComTaskPool--QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c___(
        __int64 a1,
        __int64 a2)
{
  PSRWLOCK v2; // rbx
  __int64 Ptr_low; // r8
  __int64 v6; // rdx
  unsigned int v7; // ebx
  PVOID Ptr; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+30h] [rbp-18h]

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v9, (_QWORD *)a2);
  Ptr_low = LODWORD(v2[15].Ptr);
  v10 = *(_DWORD *)(a2 + 8);
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___(v10, v6, Ptr_low, &Ptr);
  lambda_4d39dc8836a747feab7d20b0af3bfeac_::__lambda_4d39dc8836a747feab7d20b0af3bfeac_(&Ptr);
  return v7;
}
