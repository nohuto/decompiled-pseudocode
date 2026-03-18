/*
 * XREFs of ?GetProperty@CComponentTransform3D@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801853F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComponentTransform3D::GetProperty(__int64 a1, int a2, CExpressionValue *a3)
{
  const struct AnimationHelper::AnimatedProperty *const near *const *v4; // rax
  unsigned int v6; // ebp
  const struct AnimationHelper::AnimatedProperty *const near *v7; // rcx
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v14; // xmm6_4
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  char v19; // bl
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = &CComponentTransform3D::k_rgAnimDef;
  v6 = 0;
  while ( 1 )
  {
    if ( v4 == &CLineGeometry::k_rgAnimDef )
      goto LABEL_22;
    v7 = *v4;
    if ( a2 == **(_DWORD **)v4 )
      break;
    ++v4;
  }
  if ( !v7 )
  {
LABEL_22:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x61u, 0LL);
    return v6;
  }
  v8 = *((_QWORD *)v7 + 1);
  v9 = *((_DWORD *)v7 + 1);
  if ( v9 > 69 )
  {
    v15 = v9 - 70;
    if ( v15 )
    {
      v17 = v15 - 1;
      if ( v17 )
      {
        v18 = v17 - 33;
        if ( !v18 )
        {
          CExpressionValue::DestroyCurrent(a3);
          *((_DWORD *)a3 + 16) = 104;
          *(_OWORD *)a3 = *(_OWORD *)(a1 + v8);
          *((_QWORD *)a3 + 2) = *(_QWORD *)(a1 + v8 + 16);
          return v6;
        }
        if ( v18 == 161 )
        {
          CExpressionValue::DestroyCurrent(a3);
          *((_DWORD *)a3 + 16) = 265;
          *(_OWORD *)a3 = *(_OWORD *)(a1 + v8);
          *((_OWORD *)a3 + 1) = *(_OWORD *)(a1 + v8 + 16);
          *((_OWORD *)a3 + 2) = *(_OWORD *)(a1 + v8 + 32);
          *((_OWORD *)a3 + 3) = *(_OWORD *)(a1 + v8 + 48);
          return v6;
        }
        goto LABEL_27;
      }
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 71;
    }
    else
    {
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 70;
    }
LABEL_18:
    *(_OWORD *)a3 = *(_OWORD *)(a1 + v8);
    return v6;
  }
  if ( v9 == 69 )
  {
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 69;
    goto LABEL_18;
  }
  v10 = v9 - 17;
  if ( !v10 )
  {
    v19 = *(_BYTE *)(a1 + v8);
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 17;
    *(_BYTE *)a3 = v19;
    return v6;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v14 = *(_DWORD *)(a1 + v8);
    CExpressionValue::DestroyCurrent(a3);
    *(_DWORD *)a3 = v14;
    *((_DWORD *)a3 + 16) = 18;
    return v6;
  }
  v12 = v11 - 17;
  if ( v12 )
  {
    v16 = v12 - 7;
    if ( !v16 )
    {
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 42;
      *(_DWORD *)a3 = *(_DWORD *)(a1 + v8);
      return v6;
    }
    if ( v16 == 10 )
    {
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *(_QWORD *)(a1 + v8);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(a1 + v8 + 8);
      return v6;
    }
LABEL_27:
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  }
  if ( *((_DWORD *)a3 + 16) == 11 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
  *((_DWORD *)a3 + 16) = 35;
  *(_QWORD *)a3 = *(_QWORD *)(a1 + v8);
  return v6;
}
