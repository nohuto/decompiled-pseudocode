/*
 * XREFs of NVMeControllerRemove @ 0x14000E0B0
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeIsDeviceGone @ 0x140006B90 (NVMeIsDeviceGone.c)
 *     IoQueuesFreeResources @ 0x14000D2C0 (IoQueuesFreeResources.c)
 *     FreeProcessorInfo @ 0x14000EAC0 (FreeProcessorInfo.c)
 *     RoundUp64 @ 0x14000EB40 (RoundUp64.c)
 *     NVMeDisableThrottling @ 0x1400107A0 (NVMeDisableThrottling.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     NVMeControllerDeleteTimestampSyncCommand @ 0x1400113E0 (NVMeControllerDeleteTimestampSyncCommand.c)
 *     NVMePowerCleanUp @ 0x140011500 (NVMePowerCleanUp.c)
 *     FreeMsiInfo @ 0x1400115A0 (FreeMsiInfo.c)
 *     FreeProcessorGroupInfo @ 0x140011900 (FreeProcessorGroupInfo.c)
 *     NVMeControllerDeleteLocalCommandPool @ 0x140011950 (NVMeControllerDeleteLocalCommandPool.c)
 *     AdminQueuesFreeResources @ 0x140011A00 (AdminQueuesFreeResources.c)
 *     NVMeFreeHostMemoryBuffer @ 0x140017CC0 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeIceRemoveExclusionRanges @ 0x140031F54 (NVMeIceRemoveExclusionRanges.c)
 */

char __fastcall NVMeControllerRemove(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // kr00_4
  unsigned int v3; // esi
  unsigned int v4; // r15d
  int v6; // ebx
  unsigned int v7; // eax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned int v10; // r10d
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int i; // ebp
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *j; // r14
  __int64 v26; // r9
  __int64 v27; // r8
  int v28; // eax
  int v29; // ebp
  int v30; // eax
  __int64 v31; // r9
  signed __int32 v33[8]; // [rsp+0h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 1560);
  v2 = *(_DWORD *)(a1 + 204);
  *(_DWORD *)(a1 + 24) &= 0xFFFFFDFE;
  v3 = 0;
  v4 = v2 / 0xA;
  LOBYTE(v6) = 0;
  NVMePowerCleanUp();
  if ( *(_QWORD *)(a1 + 3720) )
    NVMeFreeHostMemoryBuffer(a1);
  v7 = *(_DWORD *)(v1 + 88);
  if ( v7 )
    v8 = RoundUp64(v7, 10000LL) / 0x2710uLL;
  else
    LODWORD(v8) = 500;
  if ( *(_BYTE *)(a1 + 47) )
  {
    v9 = RoundUp64((unsigned int)v8, 100LL);
    v11 = v10;
    if ( (unsigned int)(v9 / 0x64) > v10 )
      v11 = v9 / 0x64;
    LODWORD(v8) = 100 * v11;
  }
  IoQueuesFreeResources(a1);
  AdminQueuesFreeResources(a1);
  LOBYTE(v12) = 1;
  NVMeFreeDmaBufferEx(a1, 0, v12, 4096, a1 + 3712, *(_QWORD *)(a1 + 3944));
  v14 = *(_QWORD *)(a1 + 4232);
  if ( v14 )
  {
    StorPortExtendedFunction(1LL, a1, v14, v13);
    *(_QWORD *)(a1 + 4232) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 4240) )
  {
    LOBYTE(v14) = 1;
    NVMeFreeDmaBufferEx(a1, 0, v14, 1024, a1 + 4240, *(_QWORD *)(a1 + 4248));
    *(_QWORD *)(a1 + 4240) = 0LL;
    *(_QWORD *)(a1 + 4248) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 4256) )
  {
    LOBYTE(v14) = 1;
    NVMeFreeDmaBufferEx(a1, 0, v14, 1024, a1 + 4256, *(_QWORD *)(a1 + 4264));
    *(_QWORD *)(a1 + 4256) = 0LL;
    *(_QWORD *)(a1 + 4264) = 0LL;
  }
  LOBYTE(v14) = 1;
  NVMeFreeDmaBufferEx(a1, 0, v14, 512, a1 + 3936, *(_QWORD *)(a1 + 3952));
  v16 = *(_QWORD *)(a1 + 3992);
  if ( v16 )
    StorPortExtendedFunction(1LL, a1, v16, v15);
  FreeProcessorInfo(a1);
  FreeProcessorGroupInfo(a1);
  FreeMsiInfo(a1);
  NVMeDisableThrottling(a1);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 224); ++i )
    {
      v19 = *(_QWORD *)(a1 + 8LL * i + 1672);
      if ( v19 )
        StorPortExtendedFunction(1LL, a1, v19, v17);
    }
  }
  v20 = (_QWORD *)(a1 + 1672);
  v21 = 31LL;
  do
  {
    *v20 = 0LL;
    v20[1] = 0LL;
    v20[2] = 0LL;
    v20 += 8;
    *(v20 - 5) = 0LL;
    *(v20 - 4) = 0LL;
    *(v20 - 3) = 0LL;
    *(v20 - 2) = 0LL;
    *(v20 - 1) = 0LL;
    --v21;
  }
  while ( v21 );
  *v20 = 0LL;
  v20[1] = 0LL;
  v20[2] = 0LL;
  v20[3] = 0LL;
  v20[4] = 0LL;
  v20[5] = 0LL;
  v20[6] = 0LL;
  v22 = *(_QWORD *)(a1 + 3816);
  *(_DWORD *)(a1 + 212) = 0;
  if ( v22 )
  {
    StorPortExtendedFunction(1LL, a1, v22, v17);
    *(_QWORD *)(a1 + 3816) = 0LL;
  }
  v23 = *(_QWORD *)(a1 + 4272);
  if ( v23 )
  {
    StorPortExtendedFunction(34LL, a1, v23, v17);
    *(_QWORD *)(a1 + 4272) = 0LL;
    *(_DWORD *)(a1 + 4280) = 0;
  }
  NVMeControllerDeleteLocalCommandPool(a1);
  NVMeControllerDeleteTimestampSyncCommand(a1);
  if ( (*(_DWORD *)(a1 + 4344) & 4) != 0 )
  {
    for ( j = *(_QWORD **)(a1 + 4360); j != (_QWORD *)(a1 + 4360); j = (_QWORD *)*j )
    {
      NVMeIceRemoveExclusionRanges(a1, j + 2);
      StorPortExtendedFunction(1LL, a1, j, v26);
    }
  }
  v27 = *(_QWORD *)(a1 + 4352);
  if ( v27 )
    StorPortExtendedFunction(1LL, a1, v27, v24);
  if ( (*(_DWORD *)(a1 + 24) & 0x8000) != 0 )
  {
    v28 = *(unsigned __int8 *)(a1 + 142);
    if ( !(_BYTE)v28 )
      return 1;
    if ( (unsigned int)v8 <= 100 * v28 )
      LODWORD(v8) = 100 * v28;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v33, 0);
  v29 = 0;
  if ( (_DWORD)v8 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
      if ( (v6 & 0xC) == 8 )
        break;
      StorPortExtendedFunction(81LL, a1, 10000LL, v24);
      if ( ++v29 >= (unsigned int)v8 )
        goto LABEL_41;
    }
  }
  else
  {
LABEL_41:
    *(_DWORD *)(a1 + 24) |= 0x200000u;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x2000) != 0 && (*(_BYTE *)(a1 + 12) & 2) != 0 && (v6 & 1) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) &= ~1u;
    _InterlockedOr(v33, 0);
    v30 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    if ( !v4 )
      v4 = 3000;
    do
    {
      if ( (v30 & 1) == 0 )
        break;
      if ( NVMeIsDeviceGone(a1) )
        break;
      StorPortExtendedFunction(81LL, a1, 10000LL, v31);
      ++v3;
      v30 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    }
    while ( v3 < v4 );
  }
  return 1;
}
