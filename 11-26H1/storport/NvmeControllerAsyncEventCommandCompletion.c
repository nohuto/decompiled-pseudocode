/*
 * XREFs of NvmeControllerAsyncEventCommandCompletion @ 0x1400F06B0
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400E3C6C (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeControllerAsyncReset @ 0x1400F1410 (NvmeControllerAsyncReset.c)
 *     NvmeControllerGetAERExtendedCommand @ 0x1400F3CF8 (NvmeControllerGetAERExtendedCommand.c)
 *     NvmeControllerSendAsyncEventCommand @ 0x1400FAB1C (NvmeControllerSendAsyncEventCommand.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     NvmeAdapterProcessStorageEventNotification @ 0x14012C4F0 (NvmeAdapterProcessStorageEventNotification.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall NvmeControllerAsyncEventCommandCompletion(__int64 SystemArgument2, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v4; // r14
  __int64 *ExtendedCommand; // r12
  unsigned int v8; // edi
  bool v9; // r13
  _DWORD *v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // edx
  int v13; // ecx
  unsigned int v14; // edx
  bool v15; // zf
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // r11d
  __int64 v20; // rax
  bool v21; // zf
  int v22; // ecx
  unsigned int v23; // edx
  bool v24; // zf
  char v25; // cl
  unsigned __int16 v26; // bp
  const char *v27; // r10
  _DWORD *v28; // rax
  __int64 v29; // rax
  _DWORD *v30; // rax
  int v31; // [rsp+C8h] [rbp-90h]
  int v32; // [rsp+D8h] [rbp-80h]
  int v33; // [rsp+E8h] [rbp-70h]
  __int128 v34; // [rsp+110h] [rbp-48h] BYREF
  __int128 v35; // [rsp+120h] [rbp-38h] BYREF

  v34 = 0uLL;
  v3 = 0;
  v4 = a3;
  ExtendedCommand = 0LL;
  v8 = 0;
  v9 = 0;
  v35 = 0LL;
  if ( !a2 )
    return;
  if ( !a3 )
    return;
  v10 = *(_DWORD **)(SystemArgument2 + 1288);
  if ( v10 )
  {
    if ( *v10 )
      return;
  }
  *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(a3 + 14);
  LODWORD(a3) = 128;
  v11 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((v11 >> 9) & 7) == 0 )
  {
    v23 = v11 >> 1;
    if ( (unsigned __int8)v23 > 0x80u )
    {
      if ( (unsigned __int8)v23 == 129 )
        goto LABEL_29;
      v18 = (unsigned __int8)v23 - 130;
      if ( (unsigned __int8)v23 == 130 )
      {
        v19 = -1073741661;
        goto LABEL_30;
      }
      goto LABEL_93;
    }
    if ( (unsigned __int8)v23 == 128 )
      goto LABEL_29;
    if ( (unsigned __int8)v23 > 0xEu )
    {
      if ( (unsigned __int8)v23 <= 0x16u )
      {
        if ( (unsigned __int8)v23 == 22
          || (unsigned __int8)v23 == 15
          || (unsigned __int8)v23 == 16
          || (unsigned __int8)v23 == 17
          || (unsigned __int8)v23 == 18
          || (unsigned __int8)v23 == 19 )
        {
          goto LABEL_29;
        }
        v13 = (unsigned __int8)v23 - 20;
        if ( (unsigned __int8)v23 != 20 )
        {
LABEL_104:
          if ( v13 == 1 )
            goto LABEL_105;
LABEL_113:
          v19 = -1073741435;
          goto LABEL_30;
        }
LABEL_65:
        v19 = -1073741436;
        goto LABEL_30;
      }
      if ( (unsigned __int8)v23 == 24 )
        goto LABEL_29;
      if ( (unsigned __int8)v23 == 25 || (unsigned __int8)v23 == 26 )
      {
        v19 = -1073741643;
        goto LABEL_30;
      }
      if ( (unsigned __int8)v23 != 27 )
      {
        if ( (unsigned __int8)v23 == 28 )
          goto LABEL_113;
        v24 = (unsigned __int8)v23 == 30;
        goto LABEL_112;
      }
    }
    else
    {
      if ( (unsigned __int8)v23 == 14 )
        goto LABEL_29;
      if ( (unsigned __int8)v23 > 7u )
      {
        if ( (unsigned __int8)v23 != 8 && (unsigned __int8)v23 != 9 && (unsigned __int8)v23 != 10 )
        {
          if ( (unsigned __int8)v23 == 11 )
            goto LABEL_29;
          v18 = (unsigned __int8)v23 - 12;
          if ( (unsigned __int8)v23 == 12 )
          {
            v19 = -1073740758;
            goto LABEL_30;
          }
          goto LABEL_93;
        }
      }
      else if ( (unsigned __int8)v23 != 7 )
      {
        if ( !(_BYTE)v23 )
        {
          v19 = 0;
          goto LABEL_30;
        }
        if ( (unsigned __int8)v23 == 1 || (unsigned __int8)v23 == 2 )
          goto LABEL_29;
        if ( (unsigned __int8)v23 == 3 || (unsigned __int8)v23 == 4 )
          goto LABEL_113;
        v22 = (unsigned __int8)v23 - 5;
        v21 = (unsigned __int8)v23 == 5;
LABEL_63:
        if ( !v21 && v22 != 1 )
          goto LABEL_113;
        goto LABEL_65;
      }
    }
    v19 = -1073741248;
    goto LABEL_30;
  }
  if ( ((v11 >> 9) & 7) != 1 )
  {
    if ( ((v11 >> 9) & 7) != 2 )
      goto LABEL_113;
    v12 = v11 >> 1;
    switch ( (unsigned __int8)v12 )
    {
      case 0x80u:
        goto LABEL_113;
      case 0x81u:
        goto LABEL_113;
      case 0x82u:
        goto LABEL_113;
      case 0x83u:
        goto LABEL_113;
      case 0x84u:
        goto LABEL_113;
    }
    v13 = (unsigned __int8)v12 - 133;
    if ( (unsigned __int8)v12 == 133 )
      goto LABEL_113;
    goto LABEL_104;
  }
  v14 = v11 >> 1;
  if ( (unsigned __int8)v14 > 0x80u )
  {
    if ( (unsigned __int8)v14 == 129 )
      goto LABEL_29;
    v18 = (unsigned __int8)v14 - 130;
    if ( (unsigned __int8)v14 == 130 )
      goto LABEL_105;
LABEL_93:
    v24 = v18 == 1;
LABEL_112:
    if ( !v24 )
      goto LABEL_113;
    goto LABEL_29;
  }
  if ( (unsigned __int8)v14 == 128 )
    goto LABEL_29;
  if ( (unsigned __int8)v14 > 0x11u )
  {
    if ( (unsigned __int8)v14 <= 0x1Au )
    {
      switch ( (unsigned __int8)v14 )
      {
        case 0x1Au:
        case 0x12u:
        case 0x13u:
          goto LABEL_65;
        case 0x14u:
          v19 = -1073741800;
          goto LABEL_30;
        case 0x15u:
          goto LABEL_113;
        case 0x16u:
          goto LABEL_65;
      }
      v22 = (unsigned __int8)v14 - 24;
      v21 = (unsigned __int8)v14 == 24;
      goto LABEL_63;
    }
    if ( (unsigned __int8)v14 == 27 )
    {
      v19 = -1073741637;
      goto LABEL_30;
    }
    if ( (unsigned __int8)v14 == 28 )
      goto LABEL_29;
    if ( (unsigned __int8)v14 != 30 )
    {
      v16 = (unsigned __int8)v14 - 31;
      v15 = (unsigned __int8)v14 == 31;
      goto LABEL_26;
    }
LABEL_105:
    v19 = -1073741790;
    goto LABEL_30;
  }
  if ( (unsigned __int8)v14 == 17 )
    goto LABEL_54;
  if ( (unsigned __int8)v14 <= 9u )
  {
    if ( (unsigned __int8)v14 == 9
      || !(_BYTE)v14
      || (unsigned __int8)v14 == 1
      || (unsigned __int8)v14 == 2
      || (unsigned __int8)v14 == 3 )
    {
      goto LABEL_29;
    }
    v16 = (unsigned __int8)v14 - 5;
    v15 = (unsigned __int8)v14 == 5;
LABEL_26:
    if ( v15 )
      goto LABEL_29;
    v17 = v16 - 1;
    if ( !v17 )
      goto LABEL_29;
    v18 = v17 - 1;
    if ( !v18 )
      goto LABEL_29;
    goto LABEL_93;
  }
  if ( (unsigned __int8)v14 != 10 )
  {
    if ( (unsigned __int8)v14 != 11 )
    {
      if ( (unsigned __int8)v14 == 12
        || (unsigned __int8)v14 == 13
        || (unsigned __int8)v14 == 14
        || (unsigned __int8)v14 == 15 )
      {
        goto LABEL_29;
      }
      if ( (unsigned __int8)v14 != 16 )
        goto LABEL_113;
    }
LABEL_54:
    v19 = -2147483210;
    goto LABEL_30;
  }
LABEL_29:
  v19 = -1073741808;
LABEL_30:
  if ( (*(_QWORD *)(SystemArgument2 + 968) & 1) == 0
    || (*(_QWORD *)(SystemArgument2 + 968) & 2) != 0
    || (*(_QWORD *)(SystemArgument2 + 968) & 4) != 0
    || (*(_QWORD *)(SystemArgument2 + 968) & 8) != 0
    || (*(_QWORD *)(SystemArgument2 + 968) & 0x10) != 0 )
  {
    goto LABEL_152;
  }
  v20 = *(_QWORD *)(SystemArgument2 + 1416);
  if ( v20 )
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 4));
  v9 = 1;
  if ( v19 < 0 )
  {
    v26 = *(_WORD *)(*(_QWORD *)a2 + 4260LL);
    if ( ((v26 >> 9) & 7) == 1 )
      v9 = (v26 & 0x1FE) != 10;
    if ( (byte_14017344A & 1) != 0 )
    {
      v27 = (const char *)&dword_140154ADC;
      if ( *(_QWORD *)(SystemArgument2 + 752) )
        v27 = *(const char **)(SystemArgument2 + 752);
      McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
        SystemArgument2 + 841,
        SystemArgument2 + 800,
        *(_QWORD *)(SystemArgument2 + 128) + 1048LL,
        *(_DWORD *)(*(_QWORD *)(SystemArgument2 + 128) + 56LL),
        *(_QWORD *)(SystemArgument2 + 128) + 1048LL,
        *(const wchar_t **)(*(_QWORD *)(SystemArgument2 + 128) + 1032LL),
        *(const char **)(SystemArgument2 + 792),
        *(_WORD *)(SystemArgument2 + 4),
        0,
        *(_BYTE *)(SystemArgument2 + 744),
        v27,
        (const char *)(SystemArgument2 + 800),
        (const char *)(SystemArgument2 + 841),
        "Async Event Request Command",
        "DW0",
        *(_DWORD *)v4,
        byte_14015304C,
        0,
        byte_14015304C,
        0,
        byte_14015304C,
        0,
        byte_14015304C,
        0,
        byte_14015304C,
        v31,
        byte_14015304C,
        v32,
        byte_14015304C,
        v33,
        v19,
        0,
        (v26 >> 9) & 7,
        v26 >> 1);
    }
    v3 = 0;
    goto LABEL_152;
  }
  v3 = *(_BYTE *)(v4 + 2);
  StorEtwNvmeControllerEvent(
    SystemArgument2,
    1,
    4LL,
    (__int64)L"Async Event Request completed successfully",
    L"AsyncEventType",
    *(_BYTE *)v4 & 7,
    L"AsyncEventInfo",
    *(_BYTE *)(v4 + 1),
    L"LogPage",
    v3,
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
  switch ( *(_DWORD *)v4 & 7 )
  {
    case 0:
      v25 = *(_BYTE *)(v4 + 1);
      v8 = 64;
      if ( v25 )
      {
        switch ( *(_BYTE *)(v4 + 1) )
        {
          case 1:
            StorEtwNvmeControllerEvent(
              SystemArgument2,
              1,
              2LL,
              (__int64)L"Asynchronous Event Notification : Invalid Doorbell Write",
              L"Asynchronous Event Info",
              v25,
              L"LogPage",
              v3,
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
            NvmeControllerAsyncReset(SystemArgument2);
            *((_QWORD *)&v34 + 1) = 2LL;
            break;
          case 2:
            StorEtwNvmeControllerEvent(
              SystemArgument2,
              1,
              2LL,
              (__int64)L"Asynchronous Event Notification : Diagnostic Failure",
              L"Asynchronous Event Info",
              v25,
              L"LogPage",
              v3,
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
            *(_QWORD *)&v34 = 32LL;
            break;
          case 3:
            StorEtwNvmeControllerEvent(
              SystemArgument2,
              1,
              2LL,
              (__int64)L"Asynchronous Event Notification : Persistent Internal Device Error",
              L"Asynchronous Event Info",
              v25,
              L"LogPage",
              v3,
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
            if ( (*(_DWORD *)(*(_QWORD *)(SystemArgument2 + 920) + 28LL) & 2) != 0 )
              NvmeControllerAsyncReset(SystemArgument2);
            *(_QWORD *)&v34 = 64LL;
            break;
          case 4:
            StorEtwNvmeControllerEvent(
              SystemArgument2,
              1,
              2LL,
              (__int64)L"Asynchronous Event Notification : Transient Internal Device Error",
              L"Asynchronous Event Info",
              v25,
              L"LogPage",
              v3,
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
            *(_QWORD *)&v34 = 128LL;
            break;
          case 5:
            StorEtwNvmeControllerEvent(
              SystemArgument2,
              1,
              2LL,
              (__int64)L"Asynchronous Event Notification : Firmware Image Load Error",
              L"Asynchronous Event Info",
              v25,
              L"LogPage",
              v3,
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
            *(_QWORD *)&v34 = 256LL;
            break;
          default:
            *(_QWORD *)&v34 = 4096LL;
            break;
        }
      }
      else
      {
        StorEtwNvmeControllerEvent(
          SystemArgument2,
          1,
          2LL,
          (__int64)L"Asynchronous Event Notification : Write to Invalid Doorbell Register",
          L"Asynchronous Event Info",
          0,
          L"LogPage",
          v3,
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
        *((_QWORD *)&v34 + 1) = 1LL;
      }
      NvmeAdapterProcessStorageEventNotification(*(_QWORD *)(SystemArgument2 + 128), &v34, 0LL, 0LL);
      break;
    case 1:
      goto LABEL_120;
    case 2:
      if ( !*(_BYTE *)(v4 + 1) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(SystemArgument2 + 1072), 1u);
        if ( _interlockedbittestandset((volatile signed __int32 *)(SystemArgument2 + 1072), 2u) )
          break;
        _interlockedbittestandreset((volatile signed __int32 *)(SystemArgument2 + 1072), 1u);
        goto LABEL_126;
      }
      if ( *(_BYTE *)(v4 + 1) == 1 || *(_BYTE *)(v4 + 1) == 2 )
        goto LABEL_120;
      if ( *(unsigned __int8 *)(v4 + 1) == 239 )
LABEL_126:
        v8 = 4096;
      break;
    case 6:
      if ( !*(_BYTE *)(v4 + 1) )
      {
        v8 = 64;
        break;
      }
      if ( (unsigned int)*(unsigned __int8 *)(v4 + 1) - 1 <= 1 )
        goto LABEL_120;
      break;
    default:
      if ( (*(_DWORD *)v4 & 7) != 7 || *(_BYTE *)(v4 + 1) == 1 )
        break;
      if ( *(unsigned __int8 *)(v4 + 1) == 254 )
      {
        if ( (*(_DWORD *)(SystemArgument2 + 136) & 0x800000) != 0 )
          goto LABEL_126;
        break;
      }
LABEL_120:
      v8 = 512;
      break;
  }
LABEL_152:
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  if ( *(_QWORD *)(SystemArgument2 + 1416) )
  {
    memset_0(*(void **)a2, 0, 0x10B0uLL);
    *(_DWORD *)(a2 + 48) &= ~1u;
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(SystemArgument2 + 1416) + 16LL), (PSLIST_ENTRY)(a2 + 16));
  }
  if ( !v8 )
    goto LABEL_160;
  v28 = *(_DWORD **)(SystemArgument2 + 1288);
  if ( !v28 )
    goto LABEL_160;
  if ( *v28 )
    goto LABEL_160;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)SystemArgument2);
  if ( !ExtendedCommand )
    goto LABEL_160;
  if ( (int)NvmeAllocateDmaBuffer(SystemArgument2, v8, a3, (void **)&v35, (_QWORD *)&v35 + 1, 0) < 0 )
    goto LABEL_160;
  LOBYTE(a3) = v3;
  v29 = *ExtendedCommand;
  *((_WORD *)ExtendedCommand + 26) = *(_WORD *)(*(_QWORD *)(SystemArgument2 + 128) + 1108LL);
  *(_DWORD *)(*ExtendedCommand + 4256) = *(_DWORD *)(v29 + 4256) | 1;
  *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
  *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
  *(_DWORD *)(*ExtendedCommand + 4256) &= ~0x40u;
  *(_WORD *)(*ExtendedCommand + 4252) = 0;
  *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
  *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerGetLogPageCompletionForAER;
  *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
  *(_OWORD *)(*ExtendedCommand + 4160) = v35;
  *(_DWORD *)(*ExtendedCommand + 4248) = v8;
  BuildGetLogPageCommand(
    SystemArgument2,
    *ExtendedCommand + 4096,
    a3,
    v8,
    *((__int64 *)&v35 + 1),
    -1,
    0LL,
    0,
    *ExtendedCommand,
    ExtendedCommand[1]);
  if ( (int)NvmeControllerProcessCommand(SystemArgument2, ExtendedCommand) < 0 )
  {
LABEL_160:
    if ( (_QWORD)v35 )
      NvmeFreeDmaBuffer(SystemArgument2, v8, a3, v35, *((__int64 *)&v35 + 1));
    if ( ExtendedCommand )
      NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)SystemArgument2, (__int64)ExtendedCommand);
    if ( v9 )
    {
      v30 = *(_DWORD **)(SystemArgument2 + 1288);
      if ( v30 )
      {
        if ( !*v30 )
        {
          NvmeControllerGetAERExtendedCommand(SystemArgument2);
          if ( (int)NvmeControllerSendAsyncEventCommand((PVOID)SystemArgument2) < 0 )
            *(_QWORD *)(SystemArgument2 + 136) |= 0x40000000uLL;
        }
      }
    }
  }
}
