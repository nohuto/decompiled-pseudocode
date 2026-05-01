/*
 * XREFs of ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800A7BF8
 * Callers:
 *     ?_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@@Z @ 0x1800A7A5C (-_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@P.c)
 *     ?HandleDestruction@CImmersiveWindowManager@@UEAA?AW4WINDOW_DESTROYED_RESULT@@PEAUIImmersiveApplicationInternal@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1800A91C0 (-HandleDestruction@CImmersiveWindowManager@@UEAA-AW4WINDOW_DESTROYED_RESULT@@PEAUIImmersiveAppli.c)
 *     ?_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1800A9334 (-_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x1801E042C (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802DEDD0 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x1802E6510 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 *     ?UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802E69C0 (-UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802EAF80 (-_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned int v6; // esi
  unsigned __int64 i; // r14
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // r15d
  int (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v11; // rcx
  __int64 v13; // [rsp+80h] [rbp+48h] BYREF
  _QWORD *v14; // [rsp+88h] [rbp+50h]
  __int64 v15; // [rsp+90h] [rbp+58h] BYREF
  __int64 v16; // [rsp+98h] [rbp+60h]

  v15 = a3;
  v14 = a2;
  v6 = 0;
  v16 = 0LL;
  *a4 = 0LL;
  for ( i = 0LL; i < *(_QWORD *)(a1 + 16); ++i )
  {
    v8 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 8) + 8 * i);
    if ( v8 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[1])(v8);
    v9 = -1;
    v13 = 0LL;
    v10 = **v8;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    if ( v10(v8, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v13) >= 0 )
    {
      LODWORD(v15) = 0;
      (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 104LL))(v13, *v14, &v15);
      v9 = ((_DWORD)v15 != 0) - 1;
    }
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[2])(v8);
    if ( !v9 )
    {
      *a4 = i;
      return v6;
    }
  }
  return (unsigned int)-2147319765;
}
