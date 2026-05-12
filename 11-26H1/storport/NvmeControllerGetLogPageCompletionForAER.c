/*
 * XREFs of NvmeControllerGetLogPageCompletionForAER @ 0x1400F4110
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeControllerStartReenumeration @ 0x1400C6538 (NvmeControllerStartReenumeration.c)
 *     NvmeControllerReConfigAsyncEvent @ 0x1400CF810 (NvmeControllerReConfigAsyncEvent.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400E3C6C (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeControllerGetAERExtendedCommand @ 0x1400F3CF8 (NvmeControllerGetAERExtendedCommand.c)
 *     NvmeControllerProcessHealthInfoLogForAen @ 0x1400F8E6C (NvmeControllerProcessHealthInfoLogForAen.c)
 *     NvmeControllerSendAsyncEventCommand @ 0x1400FAB1C (NvmeControllerSendAsyncEventCommand.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

void __fastcall NvmeControllerGetLogPageCompletionForAER(__int64 SystemArgument2, __int64 a2, unsigned int *a3)
{
  char v5; // r12
  char v6; // r13
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // esi
  _DWORD *v16; // rax
  __int64 v17; // rdx
  int v18; // r14d
  bool v19; // zf
  int v20; // ecx
  unsigned int v21; // edx
  bool v22; // zf
  const wchar_t *v23; // r9
  wchar_t *v24; // rax
  _BYTE *v25; // rax
  _DWORD *v26; // rdx
  unsigned __int8 *v27; // rax
  unsigned int v28; // ecx
  const char *v29; // rdi
  __int64 v30; // r8
  __int16 v31; // cx
  __int64 v32; // r9
  unsigned int v33; // [rsp+28h] [rbp-110h]
  wchar_t *v34; // [rsp+30h] [rbp-108h]
  int v35; // [rsp+38h] [rbp-100h]
  wchar_t *v36; // [rsp+40h] [rbp-F8h]
  __int64 v37; // [rsp+48h] [rbp-F0h]
  wchar_t *v38; // [rsp+50h] [rbp-E8h]
  char v39; // [rsp+58h] [rbp-E0h]
  int v40; // [rsp+C8h] [rbp-70h]
  int v41; // [rsp+D8h] [rbp-60h]
  int v42; // [rsp+E8h] [rbp-50h]

  if ( !a2 )
    return;
  v5 = 0;
  v6 = 0;
  if ( !a3 )
    return;
  *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *((_WORD *)a3 + 7);
  v7 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((v7 >> 9) & 7) == 0 )
  {
    v21 = v7 >> 1;
    if ( (unsigned __int8)v21 > 0x80u )
    {
      if ( (unsigned __int8)v21 == 129 )
        goto LABEL_27;
      v14 = (unsigned __int8)v21 - 130;
      if ( (unsigned __int8)v21 == 130 )
      {
        v15 = -1073741661;
        goto LABEL_28;
      }
      goto LABEL_90;
    }
    if ( (unsigned __int8)v21 == 128 )
      goto LABEL_27;
    if ( (unsigned __int8)v21 > 0xEu )
    {
      if ( (unsigned __int8)v21 <= 0x16u )
      {
        if ( (unsigned __int8)v21 == 22
          || (unsigned __int8)v21 == 15
          || (unsigned __int8)v21 == 16
          || (unsigned __int8)v21 == 17
          || (unsigned __int8)v21 == 18
          || (unsigned __int8)v21 == 19 )
        {
          goto LABEL_27;
        }
        v9 = (unsigned __int8)v21 - 20;
        if ( (unsigned __int8)v21 != 20 )
        {
LABEL_101:
          if ( v9 == 1 )
            goto LABEL_102;
LABEL_110:
          v15 = -1073741435;
          goto LABEL_28;
        }
LABEL_62:
        v15 = -1073741436;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v21 == 24 )
        goto LABEL_27;
      if ( (unsigned __int8)v21 == 25 || (unsigned __int8)v21 == 26 )
      {
        v15 = -1073741643;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v21 != 27 )
      {
        if ( (unsigned __int8)v21 == 28 )
          goto LABEL_110;
        v22 = (unsigned __int8)v21 == 30;
        goto LABEL_109;
      }
    }
    else
    {
      if ( (unsigned __int8)v21 == 14 )
        goto LABEL_27;
      if ( (unsigned __int8)v21 > 7u )
      {
        if ( (unsigned __int8)v21 != 8 && (unsigned __int8)v21 != 9 && (unsigned __int8)v21 != 10 )
        {
          if ( (unsigned __int8)v21 == 11 )
            goto LABEL_27;
          v14 = (unsigned __int8)v21 - 12;
          if ( (unsigned __int8)v21 == 12 )
          {
            v15 = -1073740758;
            goto LABEL_28;
          }
          goto LABEL_90;
        }
      }
      else if ( (unsigned __int8)v21 != 7 )
      {
        if ( !(_BYTE)v21 )
        {
          v15 = 0;
          goto LABEL_28;
        }
        if ( (unsigned __int8)v21 == 1 || (unsigned __int8)v21 == 2 )
          goto LABEL_27;
        if ( (unsigned __int8)v21 == 3 || (unsigned __int8)v21 == 4 )
          goto LABEL_110;
        v20 = (unsigned __int8)v21 - 5;
        v19 = (unsigned __int8)v21 == 5;
LABEL_60:
        if ( !v19 && v20 != 1 )
          goto LABEL_110;
        goto LABEL_62;
      }
    }
    v15 = -1073741248;
    goto LABEL_28;
  }
  if ( ((v7 >> 9) & 7) != 1 )
  {
    if ( ((v7 >> 9) & 7) != 2 )
      goto LABEL_110;
    v8 = v7 >> 1;
    switch ( (unsigned __int8)v8 )
    {
      case 0x80u:
        goto LABEL_110;
      case 0x81u:
        goto LABEL_110;
      case 0x82u:
        goto LABEL_110;
      case 0x83u:
        goto LABEL_110;
      case 0x84u:
        goto LABEL_110;
    }
    v9 = (unsigned __int8)v8 - 133;
    if ( (unsigned __int8)v8 == 133 )
      goto LABEL_110;
    goto LABEL_101;
  }
  v10 = v7 >> 1;
  if ( (unsigned __int8)v10 > 0x80u )
  {
    if ( (unsigned __int8)v10 == 129 )
      goto LABEL_27;
    v14 = (unsigned __int8)v10 - 130;
    if ( (unsigned __int8)v10 == 130 )
      goto LABEL_102;
LABEL_90:
    v22 = v14 == 1;
LABEL_109:
    if ( !v22 )
      goto LABEL_110;
    goto LABEL_27;
  }
  if ( (unsigned __int8)v10 == 128 )
    goto LABEL_27;
  if ( (unsigned __int8)v10 > 0x11u )
  {
    if ( (unsigned __int8)v10 <= 0x1Au )
    {
      switch ( (unsigned __int8)v10 )
      {
        case 0x1Au:
        case 0x12u:
        case 0x13u:
          goto LABEL_62;
        case 0x14u:
          v15 = -1073741800;
          goto LABEL_28;
        case 0x15u:
          goto LABEL_110;
        case 0x16u:
          goto LABEL_62;
      }
      v20 = (unsigned __int8)v10 - 24;
      v19 = (unsigned __int8)v10 == 24;
      goto LABEL_60;
    }
    if ( (unsigned __int8)v10 == 27 )
    {
      v15 = -1073741637;
      goto LABEL_28;
    }
    if ( (unsigned __int8)v10 == 28 )
      goto LABEL_27;
    if ( (unsigned __int8)v10 != 30 )
    {
      v12 = (unsigned __int8)v10 - 31;
      v11 = (unsigned __int8)v10 == 31;
      goto LABEL_24;
    }
LABEL_102:
    v15 = -1073741790;
    goto LABEL_28;
  }
  if ( (unsigned __int8)v10 == 17 )
    goto LABEL_51;
  if ( (unsigned __int8)v10 <= 9u )
  {
    if ( (unsigned __int8)v10 == 9
      || !(_BYTE)v10
      || (unsigned __int8)v10 == 1
      || (unsigned __int8)v10 == 2
      || (unsigned __int8)v10 == 3 )
    {
      goto LABEL_27;
    }
    v12 = (unsigned __int8)v10 - 5;
    v11 = (unsigned __int8)v10 == 5;
LABEL_24:
    if ( v11 )
      goto LABEL_27;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_27;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_27;
    goto LABEL_90;
  }
  if ( (unsigned __int8)v10 != 10 )
  {
    if ( (unsigned __int8)v10 != 11 )
    {
      if ( (unsigned __int8)v10 == 12
        || (unsigned __int8)v10 == 13
        || (unsigned __int8)v10 == 14
        || (unsigned __int8)v10 == 15 )
      {
        goto LABEL_27;
      }
      if ( (unsigned __int8)v10 != 16 )
        goto LABEL_110;
    }
LABEL_51:
    v15 = -2147483210;
    goto LABEL_28;
  }
LABEL_27:
  v15 = -1073741808;
LABEL_28:
  if ( (*(_QWORD *)(SystemArgument2 + 968) & 1) == 0 )
    goto LABEL_134;
  if ( (*(_QWORD *)(SystemArgument2 + 968) & 2) != 0 )
    goto LABEL_134;
  if ( (*(_QWORD *)(SystemArgument2 + 968) & 4) != 0 )
    goto LABEL_134;
  if ( (*(_QWORD *)(SystemArgument2 + 968) & 8) != 0 )
    goto LABEL_134;
  if ( (*(_QWORD *)(SystemArgument2 + 968) & 0x10) != 0 )
    goto LABEL_134;
  v16 = *(_DWORD **)(SystemArgument2 + 1288);
  if ( v16 )
  {
    if ( *v16 )
      goto LABEL_134;
  }
  v17 = *(_QWORD *)a2;
  v6 = 1;
  v18 = *(unsigned __int8 *)(*(_QWORD *)a2 + 4136LL);
  if ( v15 < 0 )
  {
    if ( (byte_14017344A & 1) != 0 )
    {
      v29 = (const char *)&dword_140154ADC;
      v30 = *a3;
      if ( *(_QWORD *)(SystemArgument2 + 752) )
        v29 = *(const char **)(SystemArgument2 + 752);
      McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
        0LL,
        v17,
        v30,
        *(_DWORD *)(*(_QWORD *)(SystemArgument2 + 128) + 56LL),
        *(_QWORD *)(SystemArgument2 + 128) + 1048LL,
        *(const wchar_t **)(*(_QWORD *)(SystemArgument2 + 128) + 1032LL),
        *(const char **)(SystemArgument2 + 792),
        *(_WORD *)(SystemArgument2 + 4),
        0,
        *(_BYTE *)(SystemArgument2 + 744),
        v29,
        (const char *)(SystemArgument2 + 800),
        (const char *)(SystemArgument2 + 841),
        "Get log page for AER",
        "DW0",
        v30,
        "LogPageId",
        v18,
        byte_14015304C,
        0,
        byte_14015304C,
        0,
        byte_14015304C,
        0,
        byte_14015304C,
        v40,
        byte_14015304C,
        v41,
        byte_14015304C,
        v42,
        v15,
        0,
        (*(_WORD *)(v17 + 4260) >> 9) & 7,
        *(_WORD *)(v17 + 4260) >> 1);
      v17 = *(_QWORD *)a2;
    }
    if ( (_BYTE)v18 != 4 )
      goto LABEL_134;
    v31 = *(_WORD *)(v17 + 4260);
    if ( (v31 & 0xE00) != 0x200 || (v31 & 0x1FE) != 0x12 )
      goto LABEL_134;
    v26 = 0LL;
    goto LABEL_133;
  }
  switch ( v18 )
  {
    case 2:
      v5 = NvmeControllerProcessHealthInfoLogForAen(SystemArgument2, *(_QWORD *)(v17 + 4160));
      goto LABEL_134;
    case 3:
      v27 = *(unsigned __int8 **)(v17 + 4160);
      if ( !v27 )
        goto LABEL_134;
      v28 = *v27;
      v23 = L"Firmware Activation Starting Async Event";
      v39 = 0;
      v38 = (wchar_t *)&word_140152E7C;
      LOBYTE(v37) = 0;
      v36 = (wchar_t *)&word_140152E7C;
      v35 = (v28 >> 4) & 7;
      v34 = L"Pending Activate Slot";
      v24 = L"Active Slot";
      LOBYTE(v33) = v28 & 7;
      goto LABEL_118;
    case 4:
      v26 = *(_DWORD **)(v17 + 4160);
LABEL_133:
      NvmeControllerStartReenumeration((char *)SystemArgument2, v26);
      goto LABEL_134;
    case 8:
      v25 = *(_BYTE **)(v17 + 4160);
      if ( !v25 )
        goto LABEL_134;
      v23 = L"Telemetry Controller Initiated Async Event";
      v39 = 0;
      v38 = (wchar_t *)&word_140152E7C;
      LOBYTE(v37) = 0;
      v36 = (wchar_t *)&word_140152E7C;
      LOBYTE(v35) = 0;
      v34 = (wchar_t *)&word_140152E7C;
      LOBYTE(v33) = *v25;
      v24 = L"LogPageIdentifier";
      goto LABEL_118;
  }
  if ( v18 != 128 )
  {
    if ( v18 == 129 )
    {
      a3 = *(unsigned int **)(v17 + 4160);
      if ( a3 )
        StorEtwNvmeControllerEvent(
          SystemArgument2,
          1,
          4LL,
          (__int64)L"Sanitize Async Event",
          L"Sanitize Status",
          *((_WORD *)a3 + 1) & 7,
          L"Sanitize Progress",
          *(_WORD *)a3,
          L"Sanitize Command CDW10",
          a3[1],
          L"Global Data Erased",
          (*((_WORD *)a3 + 1) & 0x80LL) != 0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0);
    }
    goto LABEL_134;
  }
  a3 = *(unsigned int **)(v17 + 4160);
  if ( a3 && *((_BYTE *)a3 + 8) )
  {
    v23 = L"Reservation Notification Async Event";
    v39 = *((_BYTE *)a3 + 9);
    v38 = L"Available Log Page Count";
    v37 = *(_QWORD *)a3;
    v36 = L"Log Page Count";
    LOBYTE(v35) = *((_BYTE *)a3 + 8);
    v34 = L"LogPageType";
    v24 = L"NamespaceID";
    v33 = a3[3];
LABEL_118:
    StorEtwNvmeControllerEvent(
      SystemArgument2,
      1,
      4LL,
      (__int64)v23,
      v24,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
  }
LABEL_134:
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  v32 = *(_QWORD *)(*(_QWORD *)a2 + 4160LL);
  if ( v32 )
    NvmeFreeDmaBuffer(
      SystemArgument2,
      *(_DWORD *)(*(_QWORD *)a2 + 4248LL),
      (_DWORD)a3,
      v32,
      *(_QWORD *)(*(_QWORD *)a2 + 4168LL));
  NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)SystemArgument2, a2);
  if ( v5 )
  {
    NvmeControllerReConfigAsyncEvent((union _SLIST_HEADER *)SystemArgument2);
  }
  else if ( v6 )
  {
    NvmeControllerGetAERExtendedCommand(SystemArgument2);
    if ( (int)NvmeControllerSendAsyncEventCommand((PVOID)SystemArgument2) < 0 )
      *(_QWORD *)(SystemArgument2 + 136) |= 0x40000000uLL;
  }
}
