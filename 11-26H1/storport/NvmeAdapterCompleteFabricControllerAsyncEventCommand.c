/*
 * XREFs of NvmeAdapterCompleteFabricControllerAsyncEventCommand @ 0x1400E53B0
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterGetControllerLogPageAsync @ 0x1400E9344 (NvmeAdapterGetControllerLogPageAsync.c)
 *     NvmeAdapterScheduleFabricNvmeControllerBackgroundWork @ 0x1400ED198 (NvmeAdapterScheduleFabricNvmeControllerBackgroundWork.c)
 *     NvmeAdapterSendFabricControllerAsyncEventCommand @ 0x1400ED31C (NvmeAdapterSendFabricControllerAsyncEventCommand.c)
 */

void __fastcall NvmeAdapterCompleteFabricControllerAsyncEventCommand(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  __int64 i; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  char v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r9
  bool v13; // zf
  char v14; // al
  unsigned __int16 v15; // ax
  __int16 v16; // dx
  char v17; // r9

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_DWORD *)(a2 + 56);
    if ( v4 )
    {
      for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
      {
        v6 = *(unsigned int *)(a2 + 4 * i + 120);
        if ( (unsigned int)v6 >= 0x80 && (unsigned int)v6 < *(_DWORD *)(a2 + 16) )
        {
          v7 = a2 + v6;
          if ( *(_DWORD *)(a2 + v6) == 67 )
            goto LABEL_10;
        }
      }
    }
  }
  v7 = 0LL;
LABEL_10:
  v8 = *(_BYTE *)(a2 + 3);
  if ( v8 == 1 && (*(_WORD *)(v7 + 86) & 0xFFE) == 0 )
  {
    StorEtwNvmeControllerEvent(
      a1,
      1,
      4LL,
      (__int64)L"Async Event Request completion - success",
      L"AsyncEventType",
      *(_BYTE *)(v7 + 96) & 7,
      L"AsyncEventInfo",
      *(_BYTE *)(v7 + 97),
      L"LogPage",
      *(_BYTE *)(v7 + 98),
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
    LOBYTE(v10) = *(_BYTE *)(v7 + 98);
    v11 = *(_DWORD *)(v7 + 96) & 7;
    switch ( v11 )
    {
      case 0:
        if ( (_BYTE)v10 == 1 )
        {
          v12 = (unsigned int)(v11 + 64);
          goto LABEL_26;
        }
LABEL_31:
        if ( (int)NvmeAdapterSendFabricControllerAsyncEventCommand(a1, a2) >= 0 )
          return;
        goto LABEL_38;
      case 1:
        v13 = (_BYTE)v10 == 2;
        break;
      case 2:
        v14 = *(_BYTE *)(v7 + 97);
        if ( !v14 )
        {
          if ( (_BYTE)v10 != 4 )
            goto LABEL_31;
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 1072), 1u);
          if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1072), 2u) )
            goto LABEL_31;
          v12 = 4096LL;
LABEL_26:
          if ( (int)NvmeAdapterGetControllerLogPageAsync(a1, v9, v10, v12) >= 0 )
            return;
          goto LABEL_31;
        }
        if ( v14 != 2 )
        {
          if ( v14 == -16 )
          {
            *(_QWORD *)(a1 + 136) |= 0x200000000uLL;
            if ( KeCancelTimer((PKTIMER)(a1 + 280)) )
              NvmeAdapterScheduleFabricNvmeControllerBackgroundWork(a1, 100LL);
          }
          goto LABEL_31;
        }
        v13 = (_BYTE)v10 == 8;
        break;
      default:
        goto LABEL_31;
    }
    if ( !v13 )
      goto LABEL_31;
    v12 = 512LL;
    goto LABEL_26;
  }
  if ( v8 != 37 && v8 != 2 )
  {
    v15 = *(_WORD *)(v7 + 86);
    v16 = v15 >> 1;
    v17 = v15 >> 9;
    if ( (v17 & 7) != 1 || (_BYTE)v16 != 5 )
    {
      StorEtwNvmeControllerEvent(
        a1,
        1,
        3LL,
        (__int64)L"Async Event Request completion - failure",
        L"SrbStatus",
        v8,
        L"SCT",
        v17 & 7,
        L"SC",
        v16,
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
      *(_BYTE *)(a2 + 3) = 48;
LABEL_38:
      *(_QWORD *)(a1 + 136) |= 0x40000000uLL;
      if ( *(_DWORD *)(a1 + 572) == 1 )
        NvmeAdapterScheduleFabricNvmeControllerBackgroundWork(a1, 5000LL);
    }
  }
}
