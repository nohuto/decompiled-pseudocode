/*
 * XREFs of TryFillRenderState @ 0x1800139C4
 * Callers:
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180126260 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180126448 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1802161F8 (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 * Callees:
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180013208 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180014280 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18005EB50 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TryFillRenderState(CDrawingContext *this, unsigned __int8 a2, int a3, int a4, __int64 a5)
{
  float v5; // xmm6_4
  int v7; // esi
  __int64 v8; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v9; // r8
  int v10; // r10d
  int v11; // xmm0_4
  int v12; // xmm1_4
  float v13; // xmm2_4
  int v14; // xmm3_4
  int v15; // xmm4_4
  float v16; // xmm5_4
  int v17; // eax
  float v18; // xmm0_4
  __int64 v19; // rax
  int IsHDRTarget; // ecx
  char result; // al
  bool v22; // al
  _DWORD v23[12]; // [rsp+28h] [rbp-21h] BYREF
  __int64 v24; // [rsp+58h] [rbp+Fh]
  int v25; // [rsp+68h] [rbp+1Fh]

  v5 = FLOAT_1_0;
  v24 = 0LL;
  v7 = a2;
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 48) = v24;
  if ( a3 == a4 )
  {
    v11 = 0;
    v12 = 0;
    v13 = FLOAT_1_0;
    v14 = 0;
    v15 = 0;
    v16 = FLOAT_1_0;
  }
  else
  {
    v25 = 0;
    CMatrixStack::Top((CDrawingContext *)((char *)this + 280), (struct CMILMatrix *)v23);
    if ( !v10 )
    {
      v22 = Windows::Foundation::Numerics::invert(
              (Windows::Foundation::Numerics *)v23,
              (const struct Windows::Foundation::Numerics::float4x4 *)v23,
              v9);
      LOWORD(v25) = v25 & 0xC003;
      if ( !v22 )
        return 0;
    }
    LOBYTE(v8) = 1;
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<1>(v23, v8) )
      return 0;
    v11 = HIDWORD(v24);
    v12 = v24;
    v13 = *(float *)&v23[5];
    v14 = v23[4];
    v15 = v23[1];
    v16 = *(float *)v23;
  }
  *(float *)a5 = v16;
  *(_DWORD *)(a5 + 4) = v15;
  *(_DWORD *)(a5 + 8) = v14;
  *(float *)(a5 + 12) = v13;
  *(_DWORD *)(a5 + 16) = v12;
  *(_DWORD *)(a5 + 20) = v11;
  v17 = *((_DWORD *)this + 790);
  if ( v17 )
    v18 = *(float *)(*((_QWORD *)this + 394) + 4LL * (unsigned int)(v17 - 1));
  else
    v18 = FLOAT_1_0;
  *(float *)(a5 + 24) = v18;
  v19 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 16LL))((char *)this + 16);
  if ( *(float *)(v19 + 16) != 0.0 )
    v5 = *(float *)(v19 + 16);
  *(float *)(a5 + 44) = v5;
  IsHDRTarget = (unsigned __int8)CDrawingContext::IsHDRTarget(this);
  result = 1;
  *(_DWORD *)(a5 + 48) = IsHDRTarget;
  *(_DWORD *)(a5 + 52) = v7;
  return result;
}
