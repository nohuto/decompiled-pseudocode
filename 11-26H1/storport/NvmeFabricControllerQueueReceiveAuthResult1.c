/*
 * XREFs of NvmeFabricControllerQueueReceiveAuthResult1 @ 0x1400FDA30
 * Callers:
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400FBB60 (NvmeFabricControllerQueueAuthenticate.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     NvmeControllerQueueIncrementProcessingCount @ 0x1400F9698 (NvmeControllerQueueIncrementProcessingCount.c)
 *     NvmeFabricControllerQueueSendAuthFailure @ 0x1400FDE64 (NvmeFabricControllerQueueSendAuthFailure.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeFabricControllerQueueReceiveAuthResult1(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v4; // r12
  unsigned int v7; // r9d
  __int64 i; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  char v11; // r14
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rbx
  char v17; // r9
  char v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8

  v4 = *(_QWORD *)(a1 + 88);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = *(_DWORD *)(a2 + 56);
    if ( v7 )
    {
      for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
      {
        v9 = *(unsigned int *)(a2 + 4 * i + 120);
        if ( (unsigned int)v9 >= 0x80 && (unsigned int)v9 < *(_DWORD *)(a2 + 16) )
        {
          v10 = a2 + v9;
          if ( *(_DWORD *)(a2 + v9) == 67 )
            goto LABEL_10;
        }
      }
    }
  }
  v10 = 0LL;
LABEL_10:
  memset_0((void *)(*(_QWORD *)(a1 + 96) + 1576LL), 0, 0x1000uLL);
  v11 = 64;
  memset_0((void *)(v10 + 16), 0, 0x40uLL);
  *(_BYTE *)(v10 + 16) = 127;
  *(_BYTE *)(v10 + 20) = 6;
  *(_WORD *)(v10 + 57) = 257;
  *(_BYTE *)(v10 + 59) = -23;
  *(_DWORD *)(v10 + 60) = 4096;
  v14 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a2 + 60) = 4096;
  *(_QWORD *)(a2 + 64) = v14 + 1576;
  *(_DWORD *)(a2 + 24) = 64;
  *(_BYTE *)(v10 + 80) = 2;
  *(_WORD *)(v10 + 82) = 1;
  *(_WORD *)(v10 + 106) = *(_WORD *)(a1 + 136);
  if ( *(_WORD *)(a1 + 136) )
    NvmeControllerQueueIncrementProcessingCount(a1);
  v15 = NvmeAdapterProcessControllerQueueRequestSync(a1, a2, v12, v13, 1, 0LL, 0LL, 0);
  if ( v15 < 0 || *(_BYTE *)(a2 + 3) != 1 || (*(_WORD *)(v10 + 86) & 0xFFE) != 0 )
  {
    StorEtwNvmeControllerEvent(
      v4,
      1,
      2LL,
      (__int64)L"Authentication receive - result1 failed",
      L"Status",
      v15,
      L"SrbStatus",
      *(_BYTE *)(a2 + 3),
      L"SCT",
      ((unsigned __int64)*(unsigned __int16 *)(v10 + 86) >> 9) & 7,
      L"SC",
      (unsigned __int64)*(unsigned __int16 *)(v10 + 86) >> 1,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    return (unsigned int)-1073741823;
  }
  v16 = *(_QWORD *)(a1 + 96);
  v17 = *(_BYTE *)(v16 + 1576);
  if ( v17 )
  {
    if ( v17 != 1 )
      goto LABEL_27;
    if ( *(_BYTE *)(v16 + 1577) != 3 )
      goto LABEL_27;
    if ( *(_WORD *)(v16 + 1580) != *(_WORD *)v16 )
      goto LABEL_27;
    v18 = *(_BYTE *)(v16 + 1582);
    if ( !v18 )
      goto LABEL_27;
    switch ( *(_BYTE *)(v16 + 3) )
    {
      case 1:
        v11 = 32;
        break;
      case 2:
        v11 = 48;
        break;
      case 3:
        break;
      default:
        goto LABEL_27;
    }
    if ( v18 == v11 )
    {
      *a3 = *(_BYTE *)(v16 + 1584) == 1;
      return (unsigned int)v15;
    }
    goto LABEL_27;
  }
  if ( *(_BYTE *)(v16 + 1577) != 0xF1 )
  {
LABEL_27:
    StorEtwNvmeControllerEvent(
      v4,
      1,
      2LL,
      (__int64)L"Authentication receive - invalid success1",
      L"AUTH_TYPE | AUTH_ID",
      *(_BYTE *)(v16 + 1577),
      L"T_ID | ExpectedTransactionId",
      *(_WORD *)v16,
      L"HL",
      *(_BYTE *)(v16 + 1582),
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
    LOBYTE(v19) = 6;
    NvmeFabricControllerQueueSendAuthFailure(a1, a2, v20, v19);
    return (unsigned int)-1073741823;
  }
  StorEtwNvmeControllerEvent(
    v4,
    1,
    2LL,
    (__int64)L"Authentication receive - failure1 received",
    L"ReasonCode",
    *(_BYTE *)(v16 + 1582),
    L"ReasonExplanation",
    *(_BYTE *)(v16 + 1583),
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
  if ( *(_BYTE *)(v16 + 1582) != 1 || *(_BYTE *)(v16 + 1583) != 1 )
    return (unsigned int)-1073741823;
  return (unsigned int)-1073741715;
}
