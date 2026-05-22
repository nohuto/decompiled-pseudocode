/*
 * XREFs of ?OnPromotedToPrimary@MPCGamepadProcessor@@MEAAXXZ @ 0x1801C43F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x18000ED1C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 */

void __fastcall MPCGamepadProcessor::OnPromotedToPrimary(MPCGamepadProcessor *this)
{
  char *v2; // rbx
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v4; // rax
  float *v5; // rax
  float v6[4]; // [rsp+20h] [rbp-D28h] BYREF
  _OWORD v7[4]; // [rsp+30h] [rbp-D18h] BYREF
  _BYTE v8[16]; // [rsp+70h] [rbp-CD8h] BYREF
  __int128 v9; // [rsp+80h] [rbp-CC8h]
  __int128 v10; // [rsp+90h] [rbp-CB8h]
  __int128 v11; // [rsp+A0h] [rbp-CA8h]
  __int128 v12; // [rsp+B0h] [rbp-C98h]

  v2 = (char *)this + 4184;
  Instance = MPCHolographicInputManager::GetInstance();
  *(_QWORD *)v2 = *((_QWORD *)Instance + 30);
  *((_DWORD *)v2 + 2) = *((_DWORD *)Instance + 62);
  v4 = MPCHolographicInputManager::GetInstance();
  memcpy_0(v8, v4, 0xCD0uLL);
  v7[0] = v9;
  v7[1] = v10;
  v7[2] = v11;
  v7[3] = v12;
  v5 = Windows::Foundation::Numerics::transform(v6, (float *)v2, (float *)v7);
  *(_QWORD *)((char *)this + 4196) = *(_QWORD *)v5;
  *((float *)this + 1051) = v5[2];
  *((_QWORD *)this + 528) = 0LL;
  *((_QWORD *)this + 529) = 0LL;
}
