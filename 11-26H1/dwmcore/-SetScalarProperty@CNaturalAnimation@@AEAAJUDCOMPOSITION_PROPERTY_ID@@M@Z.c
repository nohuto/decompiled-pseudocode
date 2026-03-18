/*
 * XREFs of ?SetScalarProperty@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@M@Z @ 0x18027C0F8
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18027C010 (-SetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801E2E9C (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNaturalAnimation::SetScalarProperty(__int64 a1, int a2, float a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  float *v11; // rbx
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v3 = 0;
  v5 = a2 - 40;
  if ( !v5 )
  {
    *(_BYTE *)(a1 + 532) |= 0x20u;
    *(float *)(a1 + 304) = a3;
    return v3;
  }
  v6 = v5 - 4;
  if ( !v6 )
  {
    *(_BYTE *)(a1 + 532) |= 0x10u;
    *(float *)(a1 + 280) = a3;
    return v3;
  }
  v7 = v6 - 4;
  if ( !v7 )
  {
    *(float *)(a1 + 316) = a3;
    return v3;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    CNaturalAnimation::EnsureAccelerator(a1, 2);
    v11 = *(float **)(a1 + 392);
    if ( v11 )
      (**(void (__fastcall ***)(float *))v11)(v11);
    v15 = v11[8];
    v11[7] = a3;
    v13 = v15 * v15;
    v14 = (float)(a3 + a3) * v11[8];
    goto LABEL_18;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    CNaturalAnimation::EnsureAccelerator(a1, 2);
    v11 = *(float **)(a1 + 392);
    if ( v11 )
      (**(void (__fastcall ***)(float *))v11)(v11);
    v12 = v11[7];
    v11[8] = 1.0 / a3;
    v13 = (float)(1.0 / a3) * (float)(1.0 / a3);
    v14 = (float)(v12 + v12) * (float)(1.0 / a3);
LABEL_18:
    v11[6] = v14;
    v11[5] = v13;
LABEL_19:
    (*(void (__fastcall **)(float *))(*(_QWORD *)v11 + 8LL))(v11);
    return v3;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    CNaturalAnimation::EnsureAccelerator(a1, 1);
    v11 = *(float **)(a1 + 392);
    if ( v11 )
      (**(void (__fastcall ***)(float *))v11)(v11);
    v11[5] = a3;
    v11[6] = a3 / 0.0099999998;
    goto LABEL_19;
  }
  if ( v10 == 1 )
  {
    CNaturalAnimation::EnsureAccelerator(a1, 1);
    v11 = *(float **)(a1 + 392);
    if ( v11 )
      (**(void (__fastcall ***)(float *))v11)(v11);
    *((_DWORD *)v11 + 7) = LODWORD(a3) & _xmm;
    v11[8] = (float)((float)(COERCE_FLOAT(LODWORD(a3) & _xmm) + 1.0) * -1.0) / 0.0099999998;
    goto LABEL_19;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x3F4u, 0LL);
  return v3;
}
