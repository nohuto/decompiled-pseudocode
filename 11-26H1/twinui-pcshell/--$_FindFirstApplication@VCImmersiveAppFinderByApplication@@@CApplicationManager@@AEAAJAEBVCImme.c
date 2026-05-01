/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800AEC4C
 * Callers:
 *     ?TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS@@PEAW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z @ 0x180056900 (-TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS.c)
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1800A6668 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x1800AD970 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 *     ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1800AE9E0 (-_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DA.c)
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x1800AFAE0 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 *     ?SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewPosition@@W4SET_IMM_APP_POS@@@Z @ 0x180207610 (-SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicatio.c)
 *     ?GetSizeConstraintOverrides@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUtagSIZE@@111@Z @ 0x18022C0B0 (-GetSizeConstraintOverrides@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUtagSIZE@@11.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v6; // r15
  unsigned __int64 i; // rsi
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // r12d
  int (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v14[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h]
  int v17; // [rsp+90h] [rbp+50h] BYREF

  v15 = a1;
  if ( a3 )
    *a3 = 0LL;
  v14[1] = 0LL;
  v6 = 0LL;
  for ( i = 0LL; i < *(_QWORD *)(a1 + 640); ++i )
  {
    v14[2] = 0LL;
    v8 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 632) + 8 * i);
    v14[3] = (__int64)v8;
    if ( v8 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[1])(v8);
    v9 = -1;
    v14[0] = 0LL;
    v10 = **v8;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v14);
    if ( v10(v8, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v14) >= 0 )
    {
      v17 = 0;
      (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v14[0] + 104LL))(v14[0], *a2, &v17);
      v9 = (v17 != 0) - 1;
    }
    v11 = v14[0];
    if ( v14[0] )
    {
      v14[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[2])(v8);
    a1 = v15;
    if ( !v9 )
    {
      v6 = i;
      result = 0LL;
      goto LABEL_14;
    }
  }
  result = 2147647531LL;
LABEL_14:
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)(a1 + 632) + 8 * v6);
      result = (**v13)(v13, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a3);
    }
    if ( a4 )
      *a4 = v6;
  }
  return result;
}
