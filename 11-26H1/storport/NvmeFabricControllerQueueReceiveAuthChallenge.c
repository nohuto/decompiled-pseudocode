/*
 * XREFs of NvmeFabricControllerQueueReceiveAuthChallenge @ 0x1400FD5A8
 * Callers:
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400FBB60 (NvmeFabricControllerQueueAuthenticate.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     DhGetKeyLength @ 0x1400E31B4 (DhGetKeyLength.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     NvmeControllerQueueIncrementProcessingCount @ 0x1400F9698 (NvmeControllerQueueIncrementProcessingCount.c)
 *     NvmeFabricControllerQueueSendAuthFailure @ 0x1400FDE64 (NvmeFabricControllerQueueSendAuthFailure.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeFabricControllerQueueReceiveAuthChallenge(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v5; // r8d
  unsigned int i; // ecx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdi
  char v14; // r11
  _BYTE *v15; // r8
  char v16; // dl
  char v17; // r8
  int v18; // ecx
  unsigned __int16 v19; // dx
  __int16 KeyLength; // ax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // r9d
  __int64 v24; // r9
  __int64 v25; // r8

  v2 = *(_QWORD *)(a1 + 88);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_DWORD *)(a2 + 56);
    if ( v5 )
    {
      for ( i = 0; i < v5; ++i )
      {
        v7 = *(unsigned int *)(a2 + 4LL * i + 120);
        if ( (unsigned int)v7 >= 0x80 && (unsigned int)v7 < *(_DWORD *)(a2 + 16) )
        {
          v8 = a2 + v7;
          if ( *(_DWORD *)(a2 + v7) == 67 )
            goto LABEL_10;
        }
      }
    }
  }
  v8 = 0LL;
LABEL_10:
  memset_0((void *)(*(_QWORD *)(a1 + 96) + 1576LL), 0, 0x1000uLL);
  memset_0((void *)(v8 + 16), 0, 0x40uLL);
  *(_BYTE *)(v8 + 16) = 127;
  *(_BYTE *)(v8 + 20) = 6;
  *(_WORD *)(v8 + 57) = 257;
  *(_BYTE *)(v8 + 59) = -23;
  *(_DWORD *)(v8 + 60) = 4096;
  v11 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a2 + 60) = 4096;
  *(_QWORD *)(a2 + 64) = v11 + 1576;
  *(_DWORD *)(a2 + 24) = 64;
  *(_BYTE *)(v8 + 80) = 2;
  *(_WORD *)(v8 + 82) = 1;
  *(_WORD *)(v8 + 106) = *(_WORD *)(a1 + 136);
  if ( *(_WORD *)(a1 + 136) )
    NvmeControllerQueueIncrementProcessingCount(a1);
  v12 = NvmeAdapterProcessControllerQueueRequestSync(a1, a2, v9, v10, 1, 0LL, 0LL, 0);
  if ( v12 < 0 || *(_BYTE *)(a2 + 3) != 1 || (*(_WORD *)(v8 + 86) & 0xFFE) != 0 )
  {
    StorEtwNvmeControllerEvent(
      v2,
      1,
      2LL,
      (__int64)L"Authentication receive - challenge failed",
      L"Status",
      v12,
      L"SrbStatus",
      *(_BYTE *)(a2 + 3),
      L"SCT",
      ((unsigned __int64)*(unsigned __int16 *)(v8 + 86) >> 9) & 7,
      L"SC",
      (unsigned __int64)*(unsigned __int16 *)(v8 + 86) >> 1,
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
  v13 = *(_QWORD *)(a1 + 96);
  v14 = *(_BYTE *)(v13 + 1576);
  v15 = (_BYTE *)(v13 + 1577);
  if ( !v14 && *v15 == 0xF1 )
  {
    StorEtwNvmeControllerEvent(
      v2,
      1,
      2LL,
      (__int64)L"Authentication receive - failure1 received",
      L"ReasonCode",
      *(_BYTE *)(v13 + 1582),
      L"ReasonExplanation",
      *(_BYTE *)(v13 + 1583),
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
    return (unsigned int)-1073741823;
  }
  v16 = 0;
  switch ( *(_BYTE *)(v13 + 1584) )
  {
    case 1:
      v16 = 32;
      break;
    case 2:
      v16 = 48;
      break;
    case 3:
      v16 = 64;
      break;
  }
  if ( v14 != 1 )
    goto LABEL_40;
  if ( *v15 != 1 )
    goto LABEL_40;
  if ( *(_WORD *)(v13 + 1580) != *(_WORD *)v13 )
    goto LABEL_40;
  if ( !*(_BYTE *)(v13 + 1584) )
    goto LABEL_40;
  if ( !v16 )
    goto LABEL_40;
  v17 = *(_BYTE *)(v13 + 1582);
  if ( !v17 || v17 != v16 )
    goto LABEL_40;
  v18 = *(unsigned __int8 *)(v13 + 1585);
  if ( !(_BYTE)v18 )
  {
    if ( !*(_WORD *)(v13 + 1586) )
      goto LABEL_35;
LABEL_40:
    StorEtwNvmeControllerEvent(
      v2,
      1,
      2LL,
      (__int64)L"Authentication receive - invalid challenge",
      L"AUTH_TYPE | AUTH_ID",
      *(_BYTE *)(v13 + 1577),
      L"T_ID | ExpectedTransactionId",
      *(_BYTE *)v13,
      L"HL",
      *(_BYTE *)(v13 + 1582),
      L"HashID",
      *(_BYTE *)(v13 + 1584),
      L"DHgID",
      *(_BYTE *)(v13 + 1585),
      L"DHVLEN",
      *(_WORD *)(v13 + 1586),
      L"SEQNUM",
      *(_DWORD *)(v13 + 1588),
      (void *)&word_140152E7C,
      0);
    LOBYTE(v24) = 6;
    NvmeFabricControllerQueueSendAuthFailure(a1, a2, v25, v24);
    return (unsigned int)-1073741823;
  }
  if ( (unsigned __int8)(v18 - 1) > 2u )
    goto LABEL_40;
LABEL_35:
  v19 = *(_WORD *)(v13 + 1586);
  if ( (v19 & 3) != 0 )
    goto LABEL_40;
  if ( v19 > 0x400u )
    goto LABEL_40;
  KeyLength = DhGetKeyLength(v18);
  if ( (_WORD)v21 != KeyLength || !*(_DWORD *)(v13 + 1588) || (unsigned __int64)(v21 + v22 + 16) > 0x1000 )
    goto LABEL_40;
  return v23;
}
