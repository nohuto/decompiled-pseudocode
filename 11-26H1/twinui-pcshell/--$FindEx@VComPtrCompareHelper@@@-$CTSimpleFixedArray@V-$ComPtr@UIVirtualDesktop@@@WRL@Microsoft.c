/*
 * XREFs of ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180161968
 * Callers:
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18012A870 (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 *     ?Remove@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K@Z @ 0x18054EEA0 (-Remove@-$CTSimpleArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTask.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
        _QWORD *a1,
        __int64 a2,
        __int64 (__fastcall ****a3)(_QWORD, GUID *, __int64 *),
        unsigned __int64 *a4)
{
  unsigned __int64 i; // rbx
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall **v10)(_QWORD, GUID *, __int64 *); // rax
  int v11; // edi
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  *a4 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= a1[1] )
      return 2147647531LL;
    v8 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*a1 + 8 * i);
    if ( v8 )
    {
      v9 = *a3;
      if ( *a3 )
      {
        if ( v8 == (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v9 )
          break;
        v10 = *v8;
        v13 = 0LL;
        v14 = 0LL;
        if ( (*v10)(v8, &GUID_00000000_0000_0000_c000_000000000046, &v13) >= 0 )
        {
          v11 = (**v9)(v9, &GUID_00000000_0000_0000_c000_000000000046, &v14);
          if ( v11 >= 0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          if ( v11 >= 0 && v13 == v14 )
            break;
        }
      }
    }
  }
  *a4 = i;
  return 0LL;
}
