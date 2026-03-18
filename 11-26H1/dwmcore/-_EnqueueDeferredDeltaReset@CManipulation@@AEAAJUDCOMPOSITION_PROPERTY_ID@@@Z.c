/*
 * XREFs of ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1801BECA0
 * Callers:
 *     ?GetProperty@CManipulation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801BEBB0 (-GetProperty@CManipulation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800E5A50 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::_EnqueueDeferredDeltaReset(__int64 a1, int a2)
{
  struct CManipulationManager *v2; // rbx
  int v4; // edx
  char v5; // cl
  char v6; // al
  int v7; // edi
  CComposition *v9; // rbx
  int ManipulationManager; // eax
  unsigned __int8 v11; // cl
  struct CManipulationManager *v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v12 = 0LL;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 2 )
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x3A2u, 0LL);
      goto LABEL_5;
    }
    v11 = *(_BYTE *)(a1 + 456);
    v6 = v11 | 2;
    v5 = v11 >> 1;
  }
  else
  {
    v5 = *(_BYTE *)(a1 + 456);
    v6 = v5 | 1;
  }
  *(_BYTE *)(a1 + 456) = v6;
  if ( (v5 & 1) != 0 )
  {
LABEL_4:
    v7 = 0;
    goto LABEL_5;
  }
  v9 = *(CComposition **)(a1 + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  ManipulationManager = CComposition::GetManipulationManager(v9, &v12);
  v7 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ManipulationManager, 0x3A7u, 0LL);
    v2 = v12;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v2 = v12;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64, __int64))(**(_QWORD **)(*((_QWORD *)v12 + 2) + 5680LL)
                                                                                             + 152LL))(
           *(_QWORD *)(*((_QWORD *)v12 + 2) + 5680LL),
           CManipulation::s_ResetDeltaProperties,
           a1,
           4LL);
    if ( v7 >= 0 )
      goto LABEL_4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x3B5u, 0LL);
  }
LABEL_5:
  if ( v2 )
    (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v7;
}
