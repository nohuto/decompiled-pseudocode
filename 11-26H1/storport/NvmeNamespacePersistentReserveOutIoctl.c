/*
 * XREFs of NvmeNamespacePersistentReserveOutIoctl @ 0x140107C84
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceReservationAcquire @ 0x14010D88C (NvmeNamespaceReservationAcquire.c)
 *     NvmeNamespaceReservationRegister @ 0x14010DAC4 (NvmeNamespaceReservationRegister.c)
 *     NvmeNamespaceReservationRegisterAndMove @ 0x14010DD1C (NvmeNamespaceReservationRegisterAndMove.c)
 *     NvmeNamespaceReservationRelease @ 0x14010DF2C (NvmeNamespaceReservationRelease.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespacePersistentReserveOutIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int v3; // ebx
  __int64 v6; // r8
  char v7; // cl
  unsigned int v8; // edi
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  char v13; // al
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // r9
  __int64 v18; // r9
  const EVENT_DESCRIPTOR *v19; // rdx
  __int64 v20; // rdx
  _BYTE *v21; // r9
  unsigned __int8 v22; // r14
  char v23; // r11
  char v24; // bp
  char v25; // r10
  char v26; // r15
  char *v27; // r15
  unsigned int v28; // r13d
  unsigned __int64 v29; // r12
  __int64 v30; // r8
  int v31; // ecx
  char v32; // r12
  char v33; // cl
  char v34; // r8
  char v35; // al
  char *v36; // r10
  unsigned int v37; // eax
  char v39; // [rsp+60h] [rbp-58h]
  char v40; // [rsp+61h] [rbp-57h]
  unsigned int v41; // [rsp+64h] [rbp-54h]
  GUID v42; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v6 = 0LL;
  switch ( *(_BYTE *)(v2 + 9) & 0xF )
  {
    case 1:
      v6 = 1LL;
      break;
    case 3:
      v6 = 2LL;
      break;
    case 5:
      v6 = 3LL;
      break;
    case 6:
      v6 = 4LL;
      break;
    case 7:
      v6 = 5LL;
      break;
    case 8:
      v6 = 6LL;
      break;
    default:
      v7 = *(_BYTE *)(v2 + 8) & 0x1F;
      if ( v7 == 1 || ((v7 - 2) & 0xFC) == 0 && v7 != 3 )
        goto LABEL_10;
      break;
  }
  if ( (*(_BYTE *)(v2 + 9) & 0xF0) != 0 )
  {
    v13 = *(_BYTE *)(v2 + 8) & 0x1F;
    if ( v13 )
    {
      if ( v13 != 3 && (unsigned __int8)(v13 - 6) > 1u )
        goto LABEL_10;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL) + 520LL) & 0x20) == 0
    || !*(_BYTE *)(*(_QWORD *)(a1 + 176) + 31LL) )
  {
    v8 = -1073741808;
    goto LABEL_11;
  }
  v14 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( v14 < 0x24 || *(_DWORD *)(v2 + 4) < v14 || (v15 = v2 + 10, (*(_BYTE *)(v2 + 30) & 8) != 0) )
  {
LABEL_10:
    v8 = -1073741811;
    goto LABEL_11;
  }
  switch ( *(_BYTE *)(v2 + 8) & 0x1F )
  {
    case 0:
      v6 = 0LL;
      goto LABEL_55;
    case 1:
      v17 = 0LL;
      goto LABEL_53;
    case 2:
      v18 = 0LL;
      goto LABEL_51;
    case 3:
      v18 = 1LL;
LABEL_51:
      v16 = NvmeNamespaceReservationRelease(a1, v15, v6, v18);
      goto LABEL_56;
    case 4:
      v17 = 1LL;
      goto LABEL_53;
    case 5:
      v17 = 2LL;
LABEL_53:
      v16 = NvmeNamespaceReservationAcquire(a1, v15, v6, v17);
      goto LABEL_56;
    case 6:
      LOBYTE(v6) = 1;
LABEL_55:
      v16 = NvmeNamespaceReservationRegister(a1, v15, v6);
      goto LABEL_56;
  }
  if ( (*(_BYTE *)(v2 + 8) & 0x1F) != 7 )
    goto LABEL_10;
  v16 = NvmeNamespaceReservationRegisterAndMove(a1, v15, v6);
LABEL_56:
  v8 = v16;
LABEL_11:
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v9 )
    goto LABEL_113;
  v42 = 0LL;
  IoGetActivityIdIrp(a2, &v42);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_113;
    v19 = &EventNonReadWriteRequestComplete;
    goto LABEL_112;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_113;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v3 = *v12;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v42, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_113;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_113;
    v19 = &EventPnpRequestComplete;
LABEL_112:
    McTemplateK0pd_EtwWriteTransfer(v10, v19, &v42, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_113;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_113;
  v20 = *(_QWORD *)(v11 + 8);
  v21 = 0LL;
  v39 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( *(_BYTE *)(v20 + 2) != 40 )
  {
    v33 = *(_BYTE *)(v20 + 72);
    v21 = *(_BYTE **)(v20 + 32);
    v22 = *(_BYTE *)(v20 + 11);
    v32 = *(_BYTE *)(v20 + 4);
    if ( *(_BYTE *)(v20 + 2) )
      goto LABEL_113;
LABEL_87:
    LOBYTE(v10) = v33 - 8;
    if ( (v10 & 0x5D) != 0 )
      goto LABEL_113;
    v34 = *(_BYTE *)(v20 + 3);
    if ( v34 == 1 || !v21 || !v22 )
      goto LABEL_106;
    v35 = *v21 & 0x7F;
    if ( v35 == 114 || v35 == 115 )
    {
      v10 = (unsigned __int64)&v21[v22];
      LOBYTE(v20) = 0;
      if ( (unsigned __int64)(v21 + 8) > v10 )
        goto LABEL_104;
      v24 = v21[2];
      v23 = v21[1] & 0xF;
      v25 = v21[3];
    }
    else
    {
      v10 = (unsigned __int64)&v21[v22];
      LOBYTE(v20) = 0;
      if ( (unsigned __int64)(v21 + 8) > v10 )
        goto LABEL_104;
      v36 = v21 + 13;
      v23 = v21[2] & 0xF;
      v37 = v22;
      if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
        v37 = (unsigned __int8)v21[7] + 8;
      v10 = (unsigned __int64)&v21[v37];
      if ( (unsigned __int64)v36 <= v10 )
        v24 = v21[12];
      if ( (unsigned __int64)(v21 + 14) > v10 )
        v25 = 0;
      else
        v25 = *v36;
    }
    LOBYTE(v20) = 1;
LABEL_104:
    if ( (_BYTE)v20 )
      v26 = 1;
LABEL_106:
    if ( byte_140173441 < 0 )
    {
      if ( !v26 )
      {
        v25 = 0;
        v24 = 0;
        v23 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v10, v20, &v42, a2, *(_DWORD *)(a2 + 48), v34, v32, v23, v24, v25, a2);
    }
    goto LABEL_113;
  }
  v27 = 0LL;
  v40 = 0;
  if ( !*(_DWORD *)(v20 + 20) )
  {
    v28 = 0;
    v41 = *(_DWORD *)(v20 + 56);
    if ( v41 )
    {
      do
      {
        v10 = *(unsigned int *)(v20 + 4LL * v28 + 120);
        if ( (unsigned int)v10 >= 0x80 )
        {
          v29 = *(unsigned int *)(v20 + 16);
          if ( (unsigned int)v10 < (unsigned int)v29 )
          {
            v30 = (unsigned int)v10;
            v31 = *(_DWORD *)(v10 + v20) - 64;
            if ( v31 )
            {
              v10 = (unsigned int)(v31 - 1);
              if ( (_DWORD)v10 )
              {
                if ( (_DWORD)v10 == 1 )
                {
                  v10 = v30 + 40;
                  if ( v30 + 40 <= v29 )
                  {
                    if ( *(_DWORD *)(v30 + v20 + 12) )
                      v27 = (char *)(v30 + v20 + 32);
                    v21 = *(_BYTE **)(v30 + v20 + 24);
LABEL_72:
                    v32 = *(_BYTE *)(v30 + v20 + 8);
                    v22 = *(_BYTE *)(v30 + v20 + 9);
                    goto LABEL_81;
                  }
                }
              }
              else
              {
                v10 = v30 + 56;
                if ( v30 + 56 <= v29 )
                {
                  v40 = 1;
                  if ( *(_BYTE *)(v30 + v20 + 10) )
                    v27 = (char *)(v30 + v20 + 24);
                  v21 = *(_BYTE **)(v30 + v20 + 16);
                  v22 = *(_BYTE *)(v30 + v20 + 9);
                  v39 = *(_BYTE *)(v30 + v20 + 8);
                }
              }
            }
            else
            {
              v10 = v30 + 40;
              if ( v30 + 40 <= v29 )
              {
                if ( *(_BYTE *)(v30 + v20 + 10) )
                  v27 = (char *)(v30 + v20 + 24);
                v21 = *(_BYTE **)(v30 + v20 + 16);
                goto LABEL_72;
              }
            }
            if ( v40 )
              break;
          }
        }
        ++v28;
      }
      while ( v28 < v41 );
      v32 = v39;
LABEL_81:
      if ( v27 )
      {
        v33 = *v27;
        v26 = 0;
        goto LABEL_87;
      }
    }
  }
LABEL_113:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
