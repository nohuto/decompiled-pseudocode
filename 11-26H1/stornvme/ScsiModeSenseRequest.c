/*
 * XREFs of ScsiModeSenseRequest @ 0x140005450
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeIceConfigureExclusionAddress @ 0x1400315BC (NVMeIceConfigureExclusionAddress.c)
 */

__int64 __fastcall ScsiModeSenseRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  bool v4; // zf
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r15
  unsigned int v11; // edx
  unsigned __int8 v12; // cl
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // r8
  __int64 result; // rax
  __int64 SrbExtension; // rax
  _OWORD *v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+18h]

  v4 = *(_BYTE *)(a2 + 2) == 40;
  v23 = 0LL;
  v6 = 0LL;
  if ( v4 )
  {
    v7 = 60LL;
    v8 = 64LL;
  }
  else
  {
    v7 = 16LL;
    v8 = 24LL;
  }
  v9 = *(_QWORD *)(a2 + v8);
  v10 = 4LL;
  v11 = 4;
  if ( *a3 != 26 )
    v11 = 8;
  v12 = a3[2];
  if ( v12 >= 0x40u || !v9 )
    goto LABEL_20;
  v13 = *(_DWORD *)(v7 + a2);
  if ( v13 < v11 )
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return 3238002692LL;
  }
  if ( v12 != 63 && v12 != 8 )
  {
LABEL_20:
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
  if ( v13 - v11 < 0xC )
  {
    NVMeSetSenseData(a2, 18, 5, 0x24u);
    return 3238002694LL;
  }
  v14 = *(_DWORD *)(a1 + 56);
  v24 = 0LL;
  if ( (v14 & 2) != 0 )
    v15 = 0x80000000;
  else
    v15 = *(_DWORD *)(a1 + 244);
  if ( (unsigned int)StorPortExtendedFunction(82LL, a1, 512LL, 0LL)
    && (v15 == 0x80000000 || (unsigned int)StorPortExtendedFunction(82LL, a1, 512LL, 0LL)) )
  {
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(a1 + 4344) & 4) == 0 || !(unsigned int)NVMeIceConfigureExclusionAddress(a1, v24, 512, 0, 1, 1) )
  {
    v6 = v24;
LABEL_15:
    v16 = v23;
    goto LABEL_16;
  }
  NVMeFreeDmaBuffer(a1, 512LL, &v23, v24);
  v16 = 0LL;
  v23 = 0LL;
LABEL_16:
  if ( v16 )
  {
    SrbExtension = GetSrbExtension(a2);
    v20 = SrbExtension;
    do
    {
      *v19 = 0LL;
      v19[1] = 0LL;
      v19[2] = 0LL;
      v19[3] = 0LL;
      v19[4] = 0LL;
      v19[5] = 0LL;
      v19[6] = 0LL;
      v19 += 8;
      *(v19 - 1) = 0LL;
      --v10;
    }
    while ( v10 );
    *(_BYTE *)(SrbExtension + 4225) |= 3u;
    SrbAssignQueueId(a1, a2);
    v21 = *(_QWORD *)(a1 + 1560);
    *(_BYTE *)(v20 + 4136) = 2;
    v22 = *(_DWORD *)(v20 + 4136) & 0xF07F7FFF;
    *(_BYTE *)(v20 + 4096) = 2;
    *(_DWORD *)(v20 + 4100) = -1;
    *(_DWORD *)(v20 + 4136) = v22 | 0x7F0000;
    if ( (v6 & 0xFFF) == 0 )
    {
      *(_QWORD *)(v20 + 4120) = v6;
      *(_QWORD *)(v20 + 4128) = 0LL;
    }
    *(_WORD *)(v20 + 4142) = 0;
    if ( (*(_BYTE *)(v21 + 261) & 4) != 0 )
    {
      *(_DWORD *)(v20 + 4138) = 127;
      *(_QWORD *)(v20 + 4144) = 0LL;
    }
    *(_BYTE *)(v20 + 4225) |= 4u;
    *(_QWORD *)(v20 + 4192) = NVMeModeSenseGetLogPageHealthInfoCompletion;
    *(_QWORD *)(v20 + 4160) = v23;
    result = 0LL;
    *(_QWORD *)(v20 + 4168) = v6;
    *(_DWORD *)(v20 + 4208) = 512;
    *(_QWORD *)(v20 + 4200) = 0LL;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  return result;
}
