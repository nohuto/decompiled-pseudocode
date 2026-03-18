/*
 * XREFs of ?SetProperty@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B4D60
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCenterX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x180249FC8 (-SetCenterX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetCenterX@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18024A018 (-SetCenterX@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v5; // edx
  int v6; // edx
  __int64 v8; // rdx
  int v9; // ebx
  int v10; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( a3 == 18 )
    {
      if ( *(float *)a4 != *(float *)(a1 + 160) )
      {
        *(_DWORD *)(a1 + 160) = *a4;
        if ( *(_QWORD *)(a1 + 48) )
          goto LABEL_10;
        goto LABEL_11;
      }
      return 0LL;
    }
    v8 = 15240LL;
    goto LABEL_14;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( a3 == 18 )
    {
      if ( *(float *)a4 != *(float *)(a1 + 164) )
      {
        *(_DWORD *)(a1 + 164) = *a4;
        if ( *(_QWORD *)(a1 + 48) )
LABEL_10:
          CResource::InvalidateConsumingAnimationsInternal(a1);
LABEL_11:
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0LL, 0LL);
      }
      return 0LL;
    }
    v8 = 15245LL;
    goto LABEL_14;
  }
  v10 = v6 - 1;
  if ( !v10 )
  {
    if ( a3 == 18 )
    {
      v9 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetCenterX();
      if ( v9 >= 0 )
        return 0LL;
      v8 = 15251LL;
      goto LABEL_15;
    }
    v8 = 15250LL;
LABEL_14:
    v9 = -2147024809;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( v10 == 1 )
  {
    if ( a3 == 18 )
    {
      v9 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterX();
      if ( v9 >= 0 )
        return 0LL;
      v8 = 15256LL;
      goto LABEL_15;
    }
    v8 = 15255LL;
    goto LABEL_14;
  }
  return 2147942487LL;
}
