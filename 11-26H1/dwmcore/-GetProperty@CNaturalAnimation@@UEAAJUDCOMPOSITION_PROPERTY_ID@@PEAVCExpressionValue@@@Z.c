/*
 * XREFs of ?GetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18027B660
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801E2E9C (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXAEBTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x18027B38C (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXAEBTInternalValue@1@PEAVCExpressionVal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNaturalAnimation::GetProperty(__int64 a1, int a2, CExpressionValue *a3, const char *a4)
{
  unsigned int v4; // esi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // xmm6_4
  float *v15; // rbx
  float v16; // xmm6_4
  const union CNaturalAnimation::InternalValue *v17; // rdx
  float v18; // xmm6_4

  v4 = 0;
  v7 = a2 - 16;
  if ( !v7 )
  {
    v18 = (float)*(int *)(a1 + 360);
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 42;
    *(float *)a3 = v18;
    return v4;
  }
  v8 = v7 - 24;
  if ( !v8 )
  {
    v17 = (const union CNaturalAnimation::InternalValue *)(a1 + 304);
    goto LABEL_21;
  }
  v9 = v8 - 4;
  if ( !v9 )
  {
    v17 = (const union CNaturalAnimation::InternalValue *)(a1 + 280);
    goto LABEL_21;
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    v17 = (const union CNaturalAnimation::InternalValue *)(a1 + 316);
LABEL_21:
    CNaturalAnimation::ExpressionValueFromInternalValue((CNaturalAnimation *)a1, v17, a3, a4);
    return v4;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    CNaturalAnimation::EnsureAccelerator(a1, 2);
    v15 = *(float **)(a1 + 392);
    if ( v15 )
      (**(void (__fastcall ***)(float *))v15)(v15);
    v16 = v15[7];
    goto LABEL_19;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    CNaturalAnimation::EnsureAccelerator(a1, 2);
    v15 = *(float **)(a1 + 392);
    if ( v15 )
      (**(void (__fastcall ***)(float *))v15)(v15);
    v16 = 1.0 / v15[8];
LABEL_19:
    CExpressionValue::DestroyCurrent(a3);
    *(float *)a3 = v16;
    *((_DWORD *)a3 + 16) = 18;
    (*(void (__fastcall **)(float *))(*(_QWORD *)v15 + 8LL))(v15);
    return v4;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    CNaturalAnimation::EnsureAccelerator(a1, 1);
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 392) + 20LL);
    goto LABEL_12;
  }
  if ( v13 == 1 )
  {
    CNaturalAnimation::EnsureAccelerator(a1, 1);
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 392) + 28LL);
LABEL_12:
    CExpressionValue::DestroyCurrent(a3);
    *(_DWORD *)a3 = v14;
    *((_DWORD *)a3 + 16) = 18;
    return v4;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x280u, 0LL);
  return v4;
}
