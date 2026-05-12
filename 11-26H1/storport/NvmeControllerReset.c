/*
 * XREFs of NvmeControllerReset @ 0x1400FA490
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400D52F4 (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeControllerEssentialInitialize @ 0x1400F2C48 (NvmeControllerEssentialInitialize.c)
 *     NvmeControllerPowerUp @ 0x1400F8B94 (NvmeControllerPowerUp.c)
 *     NvmeControllerResetWorkItemCallback @ 0x1400FA980 (NvmeControllerResetWorkItemCallback.c)
 *     NvmeControllerResetRecovery @ 0x14012BD30 (NvmeControllerResetRecovery.c)
 * Callees:
 *     StorDelayExecution @ 0x140032790 (StorDelayExecution.c)
 *     StorCheckDpcWatchdogTimerExpire @ 0x140032890 (StorCheckDpcWatchdogTimerExpire.c)
 *     IsNvmeControllerGone @ 0x140032940 (IsNvmeControllerGone.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterDisableFabricController @ 0x1400E7904 (NvmeAdapterDisableFabricController.c)
 *     NvmeAdapterEnableFabricController @ 0x1400E80DC (NvmeAdapterEnableFabricController.c)
 *     NvmeControllerQueryStorMQProperty @ 0x1400F958C (NvmeControllerQueryStorMQProperty.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400FAC28 (NvmeControllerSetStorMQProperty.c)
 *     NvmeAdapterProcessStorageEventNotification @ 0x14012C4F0 (NvmeAdapterProcessStorageEventNotification.c)
 */

__int64 __fastcall NvmeControllerReset(__int64 a1, char a2, int a3)
{
  char v3; // r13
  unsigned int v4; // kr00_4
  unsigned int v5; // r12d
  int v6; // esi
  int v7; // edi
  __int64 v8; // rbx
  int v9; // r15d
  int v11; // ecx
  int v12; // eax
  unsigned int i; // r15d
  unsigned int v14; // eax
  int v15; // eax
  unsigned int j; // r15d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r10
  signed __int32 v24[8]; // [rsp+0h] [rbp-99h] BYREF
  int *v25; // [rsp+20h] [rbp-79h]
  _OWORD v26[5]; // [rsp+A0h] [rbp+7h] BYREF
  int v27; // [rsp+100h] [rbp+67h]
  int v28; // [rsp+108h] [rbp+6Fh] BYREF
  int v29; // [rsp+110h] [rbp+77h]
  int v30; // [rsp+118h] [rbp+7Fh] BYREF

  v29 = a3;
  LOBYTE(v28) = a2;
  v3 = *(_BYTE *)(a1 + 1728);
  v4 = *(_DWORD *)(a1 + 1220);
  v26[0] = 0LL;
  v27 = 0;
  v28 = 0;
  v5 = v4 / 0xA;
  v6 = 0;
  v7 = 0;
  v30 = 0;
  v8 = MEMORY[0xFFFFF78000000014];
  v9 = a3;
  if ( (*(_BYTE *)(a1 + 136) & 2) != 0 )
  {
    v6 = NvmeAdapterDisableFabricController(a1, 0);
    if ( v6 >= 0 )
    {
      v6 = NvmeAdapterEnableFabricController(a1, &v30);
      if ( v6 < 0 )
        v7 = 6;
    }
    else
    {
      v7 = 5;
    }
  }
  else
  {
    if ( v3 == 1 )
    {
      NvmeControllerQueryStorMQProperty(a1, 0x14u, 4LL, 0);
      v25 = &v28;
      NvmeControllerQueryStorMQProperty(a1, 0x1Cu, 4LL, 0);
      LOBYTE(v11) = v28;
    }
    else
    {
      v27 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 20LL);
      v11 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 28LL);
      v28 = v11;
    }
    v12 = v27;
    if ( (v27 & 1) != 0 && (v11 & 1) == 0 )
    {
      for ( i = 0; i < v5; ++i )
      {
        if ( (v11 & 1) != 0 )
          goto LABEL_25;
        if ( IsNvmeControllerGone(a1) )
        {
LABEL_21:
          v7 = 1;
          goto LABEL_41;
        }
        if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
        {
LABEL_20:
          v7 = 4;
          goto LABEL_41;
        }
        StorDelayExecution(0x2710u);
        if ( v3 == 1 )
        {
          v25 = &v28;
          NvmeControllerQueryStorMQProperty(a1, 0x1Cu, 4LL, 0);
          LOBYTE(v11) = v28;
        }
        else
        {
          v11 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 28LL);
          v28 = v11;
        }
      }
      if ( (v11 & 1) == 0 && i == v5 )
      {
        v7 = 2;
        goto LABEL_41;
      }
LABEL_25:
      v12 = v27;
    }
    v14 = v12 & 0xFFFFFFFE;
    if ( v3 == 1 )
    {
      NvmeControllerSetStorMQProperty(a1, 20LL, 4LL);
      v25 = &v28;
      NvmeControllerQueryStorMQProperty(a1, 0x1Cu, 4LL, 0);
      LOBYTE(v15) = v28;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 920) + 20LL) = v14;
      _InterlockedOr(v24, 0);
      v15 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 28LL);
      v28 = v15;
    }
    for ( j = 0; j < v5; ++j )
    {
      if ( (v15 & 1) == 0 )
        goto LABEL_41;
      if ( IsNvmeControllerGone(a1) )
        goto LABEL_21;
      if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
        goto LABEL_20;
      StorDelayExecution(0x2710u);
      if ( v3 == 1 )
      {
        v25 = &v28;
        NvmeControllerQueryStorMQProperty(a1, 0x1Cu, 4LL, 0);
        LOBYTE(v15) = v28;
      }
      else
      {
        v15 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 28LL);
        v28 = v15;
      }
    }
    if ( (v15 & 1) != 0 && j == v5 )
      v7 = 3;
LABEL_41:
    v9 = v29;
  }
  v17 = *(_QWORD *)(a1 + 1288);
  if ( v17 )
  {
    v18 = *(_QWORD *)(v17 + 32);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 16);
      if ( v19 )
      {
        v20 = *(unsigned __int8 *)(v19 + 62);
        if ( v7 )
          ++*(_DWORD *)(v19 + 12);
        else
          ++*(_DWORD *)(v19 + 8);
        v21 = 2 * v20;
        *(_QWORD *)(*(_QWORD *)(v19 + 64) + 8 * v21) = v8;
        *(_DWORD *)(*(_QWORD *)(v19 + 64) + 8 * v21 + 8) = v9;
        *(_DWORD *)(*(_QWORD *)(v19 + 64) + 8 * v21 + 12) = v7;
        if ( ++*(_BYTE *)(v19 + 62) >= *(_BYTE *)(v19 + 63) )
          *(_BYTE *)(v19 + 62) = 1;
      }
    }
  }
  v22 = *(_QWORD *)(a1 + 136);
  if ( (v22 & 2) != 0 )
  {
    if ( v6 >= 0 )
      goto LABEL_64;
  }
  else
  {
    switch ( v7 )
    {
      case 0:
        v6 = 0;
LABEL_64:
        StorEtwNvmeControllerEvent(
          a1,
          v9 != 2,
          4LL,
          (__int64)L"Controller reset succeeded",
          L"ResetReason",
          v9,
          L"Flags",
          v22,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0);
        *(_QWORD *)&v26[0] |= 0x200uLL;
        NvmeAdapterProcessStorageEventNotification(*(_QWORD *)(a1 + 128), v26, 0LL, 0LL);
        return (unsigned int)v6;
      case 1:
        v6 = -1073741810;
        break;
      case 2:
      case 3:
        v6 = -2147483631;
        break;
      case 4:
        v6 = -1073741595;
        break;
      default:
        v6 = -1073741823;
        break;
    }
  }
  StorEtwNvmeControllerEvent(
    a1,
    1,
    2LL,
    (__int64)L"Controller reset failed",
    L"ResetReason",
    v9,
    L"FailureReason",
    v7,
    L"Status",
    v6,
    L"Flags",
    v22,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0);
  return (unsigned int)v6;
}
