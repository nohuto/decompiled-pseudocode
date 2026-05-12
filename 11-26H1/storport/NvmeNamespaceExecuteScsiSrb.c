/*
 * XREFs of NvmeNamespaceExecuteScsiSrb @ 0x140104C20
 * Callers:
 *     NvmeNamespaceScsiIrp @ 0x14010ECE8 (NvmeNamespaceScsiIrp.c)
 * Callees:
 *     NvmeNamespaceQueueRequest @ 0x14010C2DC (NvmeNamespaceQueueRequest.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     NvmeNamespaceScsiInquiryRequest @ 0x140117AC4 (NvmeNamespaceScsiInquiryRequest.c)
 *     NvmeNamespaceScsiLogSenseRequest @ 0x140117C60 (NvmeNamespaceScsiLogSenseRequest.c)
 *     NvmeNamespaceScsiModeSelectRequest @ 0x140117DCC (NvmeNamespaceScsiModeSelectRequest.c)
 *     NvmeNamespaceScsiModeSenseRequest @ 0x140117FC8 (NvmeNamespaceScsiModeSenseRequest.c)
 *     NvmeNamespaceScsiReadCapacityRequest @ 0x1401182B4 (NvmeNamespaceScsiReadCapacityRequest.c)
 *     NvmeNamespaceScsiReadWriteRequest @ 0x140118588 (NvmeNamespaceScsiReadWriteRequest.c)
 *     NvmeNamespaceScsiSyncCacheRequest @ 0x140118768 (NvmeNamespaceScsiSyncCacheRequest.c)
 *     NvmeNamespaceScsiUnmapRequest @ 0x14011889C (NvmeNamespaceScsiUnmapRequest.c)
 */

__int64 __fastcall NvmeNamespaceExecuteScsiSrb(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _BYTE *v7; // rsi
  char v8; // r11
  unsigned int v9; // r10d
  unsigned int i; // r9d
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  _BYTE *v16; // rcx
  char v17; // r10
  unsigned __int8 v18; // r14
  unsigned int v19; // r11d
  unsigned int j; // r9d
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // ecx
  ULONG CurrentProcessorNumber; // eax
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdx
  ULONG v30; // r15d
  char v31; // cl
  unsigned int v33; // eax

  v3 = 0;
  if ( *(_BYTE *)(a2 + 2) != 40 )
  {
    v18 = *(_BYTE *)(a2 + 10);
    v7 = (_BYTE *)(a2 + 72);
    goto LABEL_39;
  }
  v7 = 0LL;
  v8 = 0;
  if ( !*(_DWORD *)(a2 + 20) )
  {
    v9 = *(_DWORD *)(a2 + 56);
    for ( i = 0; i < v9; ++i )
    {
      v11 = *(unsigned int *)(a2 + 4LL * i + 120);
      if ( (unsigned int)v11 >= 0x80 )
      {
        v12 = *(unsigned int *)(a2 + 16);
        if ( (unsigned int)v11 < (unsigned int)v12 )
        {
          v13 = (unsigned int)v11;
          v14 = *(_DWORD *)(v11 + a2) - 64;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              if ( v15 == 1 && v13 + 40 <= v12 )
              {
                v16 = (_BYTE *)(v13 + a2 + 32);
                if ( !*(_DWORD *)(v13 + a2 + 12) )
                  v16 = v7;
                v7 = v16;
                break;
              }
            }
            else if ( v13 + 56 <= v12 )
            {
              v8 = 1;
              if ( !*(_BYTE *)(v13 + a2 + 10) )
                break;
              v7 = (_BYTE *)(v13 + a2 + 24);
            }
          }
          else if ( v13 + 40 <= v12 )
          {
            if ( *(_BYTE *)(v13 + a2 + 10) )
              v7 = (_BYTE *)(v13 + a2 + 24);
            break;
          }
          if ( v8 )
            break;
        }
      }
    }
  }
  v17 = 0;
  v18 = 0;
  if ( !*(_DWORD *)(a2 + 20) )
  {
    v19 = *(_DWORD *)(a2 + 56);
    for ( j = 0; j < v19; ++j )
    {
      v21 = *(unsigned int *)(a2 + 4LL * j + 120);
      if ( (unsigned int)v21 >= 0x80 )
      {
        v22 = *(unsigned int *)(a2 + 16);
        if ( (unsigned int)v21 < (unsigned int)v22 )
        {
          v23 = (unsigned int)v21;
          v24 = *(_DWORD *)(v21 + a2) - 64;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 == 1 && v23 + 40 <= v22 )
                break;
            }
            else if ( v23 + 56 <= v22 )
            {
              v18 = *(_BYTE *)(v23 + a2 + 10);
              v17 = 1;
            }
          }
          else if ( v23 + 40 <= v22 )
          {
            v18 = *(_BYTE *)(v23 + a2 + 10);
            break;
          }
          if ( v17 )
            break;
        }
      }
    }
  }
LABEL_39:
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  LOBYTE(v29) = 6;
  v30 = CurrentProcessorNumber;
  if ( !v7 || v18 < 6u )
  {
LABEL_78:
    LOBYTE(v28) = 32;
    goto LABEL_79;
  }
  v31 = *v7;
  if ( *v7 == 0xA2 || v31 == -75 )
    goto LABEL_50;
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 && *(_DWORD *)(a1 + 64) )
  {
    if ( v31 != -96 )
    {
      if ( v31 == 37 || v31 == -98 )
        return (unsigned int)NvmeNamespaceScsiReadCapacityRequest(a1, v29, a2, v7);
LABEL_50:
      if ( v31 == 77 )
        return (unsigned int)NvmeNamespaceScsiLogSenseRequest(a1, v29, a2, v7);
      if ( v31 == 18 )
        return (unsigned int)NvmeNamespaceScsiInquiryRequest(a1, v29, a2, v7);
      if ( ((v31 - 26) & 0xBF) == 0 )
        return (unsigned int)NvmeNamespaceScsiModeSenseRequest(a1, v29, a2, v7);
      if ( ((v31 - 21) & 0xBF) == 0 )
        return (unsigned int)NvmeNamespaceScsiModeSelectRequest(a1, v29, a2, v7);
      switch ( v31 )
      {
        case 47:
        case -113:
        case 0:
        case 27:
          *(_BYTE *)(a2 + 3) = 1;
          break;
        case 53:
          v33 = NvmeNamespaceScsiSyncCacheRequest(a1, a3, a2, v28, CurrentProcessorNumber);
LABEL_71:
          v3 = v33;
          if ( v33 == -2147483631 || v33 == -1073741300 )
          {
            NvmeNamespaceQueueRequest(a1, a3, v30);
            return 259;
          }
          return v3;
        case 66:
          v33 = NvmeNamespaceScsiUnmapRequest(a1, a3, a2, (_DWORD)v7, CurrentProcessorNumber);
          goto LABEL_71;
        case 40:
        case -120:
        case 42:
        case -118:
          v33 = NvmeNamespaceScsiReadWriteRequest(a1, a3, a2, (_DWORD)v7, CurrentProcessorNumber);
          goto LABEL_71;
        default:
          LOBYTE(v28) = 32;
          LOBYTE(v27) = 5;
          SetSrbSenseData(a2, v29, v27, v28, 0);
          return (unsigned int)-1073741808;
      }
      return v3;
    }
    goto LABEL_78;
  }
  LOBYTE(v28) = 37;
  LOBYTE(v29) = 8;
LABEL_79:
  LOBYTE(v27) = 5;
  SetSrbSenseData(a2, v29, v27, v28, 0);
  return 3221225488LL;
}
