/*
 * XREFs of ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x1801C162C
 * Callers:
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024590 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x18000ED1C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     _o_sqrtf_0 @ 0x18009AB9C (_o_sqrtf_0.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 */

void __fastcall MPCSixDofProcessor::ResetRayLength(MPCSixDofProcessor *this)
{
  float v2; // xmm1_4
  struct MPCHolographicInputManager *Instance; // rax
  float v4[4]; // [rsp+20h] [rbp-E0h] BYREF
  float v5; // [rsp+30h] [rbp-D0h] BYREF
  float v6; // [rsp+34h] [rbp-CCh]
  float v7; // [rsp+38h] [rbp-C8h]
  _OWORD v8[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v9[16]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v10; // [rsp+90h] [rbp-70h]
  __int128 v11; // [rsp+A0h] [rbp-60h]
  __int128 v12; // [rsp+B0h] [rbp-50h]
  __int128 v13; // [rsp+C0h] [rbp-40h]

  v2 = *((float *)this + 28);
  v4[0] = *((float *)this + 27);
  v4[2] = *((float *)this + 29);
  v4[1] = v2;
  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v9, Instance, 0xCD0uLL);
  v8[0] = v10;
  v8[1] = v11;
  v8[2] = v12;
  v8[3] = v13;
  Windows::Foundation::Numerics::transform(&v5, v4, (float *)v8);
  *((float *)this + 1045) = o_sqrtf_0(
                              (float)((float)((float)(v6 - *((float *)this + 1063))
                                            * (float)(v6 - *((float *)this + 1063)))
                                    + (float)((float)(v5 - *((float *)this + 1062))
                                            * (float)(v5 - *((float *)this + 1062))))
                            + (float)((float)(v7 - *((float *)this + 1064)) * (float)(v7 - *((float *)this + 1064))));
}
