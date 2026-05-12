/*
 * XREFs of NvmeNamespaceStorageProtocolCommandIoctlCompletion @ 0x140114940
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorGetStorageProtocolCommandBufferTotalLength @ 0x140097670 (StorGetStorageProtocolCommandBufferTotalLength.c)
 *     StorEtwNvmeNamespaceEvent @ 0x1400B2058 (StorEtwNvmeNamespaceEvent.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

void __fastcall NvmeNamespaceStorageProtocolCommandIoctlCompletion(union _SLIST_HEADER *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v5; // rcx
  PIRP v7; // r14
  __int64 v8; // r13
  _IRP *MasterIrp; // rdi
  int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // edx
  unsigned int v13; // edx
  int v14; // ecx
  unsigned int v15; // edx
  bool v16; // zf
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  _IO_STATUS_BLOCK *p_IoStatus; // r15
  __int64 v22; // rax
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 CurrentStackLocation; // rdx
  int *Information; // rax
  bool v27; // zf
  int v28; // ecx
  unsigned int v29; // edx
  bool v30; // zf
  const void *v31; // rdx
  unsigned int v32; // ecx
  const EVENT_DESCRIPTOR *v33; // rdx
  __int64 v34; // rdx
  char v35; // r13
  _BYTE *v36; // r9
  unsigned __int8 v37; // si
  char v38; // r10
  char v39; // di
  char v40; // r11
  char v41; // bp
  char *v42; // r14
  unsigned int v43; // r12d
  unsigned __int64 v44; // rbp
  __int64 v45; // r8
  int v46; // ecx
  char v47; // cl
  char v48; // r8
  char v49; // al
  char *v50; // r11
  unsigned int v51; // eax
  __int64 v52; // [rsp+20h] [rbp-E8h]
  __int64 v53; // [rsp+28h] [rbp-E0h]
  __int64 v54; // [rsp+30h] [rbp-D8h]
  __int64 v55; // [rsp+38h] [rbp-D0h]
  char v56; // [rsp+A0h] [rbp-68h]
  unsigned int v57; // [rsp+A4h] [rbp-64h] BYREF
  PIRP Irp; // [rsp+A8h] [rbp-60h]
  GUID v59; // [rsp+B0h] [rbp-58h] BYREF

  v3 = 0;
  v5 = *(_QWORD *)a2;
  v7 = *(PIRP *)(*(_QWORD *)a2 + 4184LL);
  v8 = *(_QWORD *)(*(_QWORD *)a2 + 4216LL);
  Irp = v7;
  MasterIrp = v7->AssociatedIrp.MasterIrp;
  if ( a3 )
  {
    *(_WORD *)(v5 + 4260) = *(_WORD *)(a3 + 14);
    *(_DWORD *)&MasterIrp->RequestorMode = *(_DWORD *)a3;
    v10 = *(_DWORD *)(a3 + 4);
  }
  else
  {
    *(_WORD *)(v5 + 4260) = 0;
    *(_WORD *)(*(_QWORD *)a2 + 4260LL) &= 0xF1FFu;
    *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(*(_QWORD *)a2 + 4260LL) & 0xFE01 | 0xC;
    v10 = 0;
    *(_DWORD *)&MasterIrp->RequestorMode = 0;
  }
  *(_DWORD *)&MasterIrp->Cancel = v10;
  v11 = 2LL;
  v12 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) == 2 )
      {
        v13 = v12 >> 1;
        if ( (unsigned __int8)v13 != 128
          && (unsigned __int8)v13 != 129
          && (unsigned __int8)v13 != 130
          && (unsigned __int8)v13 != 131
          && (unsigned __int8)v13 != 132 )
        {
          v14 = (unsigned __int8)v13 - 133;
          if ( (unsigned __int8)v13 != 133 )
          {
LABEL_101:
            if ( v14 == 1 )
              goto LABEL_102;
          }
        }
      }
LABEL_110:
      v20 = -1073741435;
      goto LABEL_29;
    }
    v15 = v12 >> 1;
    if ( (unsigned __int8)v15 > 0x80u )
    {
      if ( (unsigned __int8)v15 == 129 )
        goto LABEL_28;
      v19 = (unsigned __int8)v15 - 130;
      if ( (unsigned __int8)v15 != 130 )
        goto LABEL_90;
    }
    else
    {
      if ( (unsigned __int8)v15 == 128 )
        goto LABEL_28;
      if ( (unsigned __int8)v15 <= 0x11u )
      {
        if ( (unsigned __int8)v15 != 17 )
        {
          if ( (unsigned __int8)v15 <= 9u )
          {
            if ( (unsigned __int8)v15 == 9
              || !(_BYTE)v15
              || (unsigned __int8)v15 == 1
              || (unsigned __int8)v15 == 2
              || (unsigned __int8)v15 == 3 )
            {
              goto LABEL_28;
            }
            v17 = (unsigned __int8)v15 - 5;
            v16 = (unsigned __int8)v15 == 5;
LABEL_25:
            if ( v16 )
              goto LABEL_28;
            v18 = v17 - 1;
            if ( !v18 )
              goto LABEL_28;
            v19 = v18 - 1;
            if ( !v19 )
              goto LABEL_28;
LABEL_90:
            v30 = v19 == 1;
LABEL_109:
            if ( !v30 )
              goto LABEL_110;
LABEL_28:
            v20 = -1073741808;
            goto LABEL_29;
          }
          if ( (unsigned __int8)v15 == 10 )
            goto LABEL_28;
          if ( (unsigned __int8)v15 != 11 )
          {
            if ( (unsigned __int8)v15 == 12
              || (unsigned __int8)v15 == 13
              || (unsigned __int8)v15 == 14
              || (unsigned __int8)v15 == 15 )
            {
              goto LABEL_28;
            }
            if ( (unsigned __int8)v15 != 16 )
              goto LABEL_110;
          }
        }
        v20 = -2147483210;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v15 <= 0x1Au )
      {
        switch ( (unsigned __int8)v15 )
        {
          case 0x1Au:
          case 0x12u:
          case 0x13u:
            goto LABEL_62;
          case 0x14u:
            v20 = -1073741800;
            goto LABEL_29;
          case 0x15u:
            goto LABEL_110;
          case 0x16u:
            goto LABEL_62;
        }
        v28 = (unsigned __int8)v15 - 24;
        v27 = (unsigned __int8)v15 == 24;
        goto LABEL_60;
      }
      if ( (unsigned __int8)v15 == 27 )
      {
        v20 = -1073741637;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v15 == 28 )
        goto LABEL_28;
      if ( (unsigned __int8)v15 != 30 )
      {
        v17 = (unsigned __int8)v15 - 31;
        v16 = (unsigned __int8)v15 == 31;
        goto LABEL_25;
      }
    }
LABEL_102:
    v20 = -1073741790;
    goto LABEL_29;
  }
  v29 = v12 >> 1;
  if ( (unsigned __int8)v29 > 0x80u )
  {
    if ( (unsigned __int8)v29 == 129 )
      goto LABEL_28;
    v19 = (unsigned __int8)v29 - 130;
    if ( (unsigned __int8)v29 != 130 )
      goto LABEL_90;
    v20 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v29 == 128 )
      goto LABEL_28;
    if ( (unsigned __int8)v29 <= 0xEu )
    {
      if ( (unsigned __int8)v29 == 14 )
        goto LABEL_28;
      if ( (unsigned __int8)v29 > 7u )
      {
        if ( (unsigned __int8)v29 != 8 && (unsigned __int8)v29 != 9 && (unsigned __int8)v29 != 10 )
        {
          if ( (unsigned __int8)v29 == 11 )
            goto LABEL_28;
          v19 = (unsigned __int8)v29 - 12;
          if ( (unsigned __int8)v29 == 12 )
          {
            v20 = -1073740758;
            goto LABEL_29;
          }
          goto LABEL_90;
        }
      }
      else if ( (unsigned __int8)v29 != 7 )
      {
        if ( !(_BYTE)v29 )
        {
          v20 = 0;
          goto LABEL_29;
        }
        if ( (unsigned __int8)v29 == 1 || (unsigned __int8)v29 == 2 )
          goto LABEL_28;
        if ( (unsigned __int8)v29 == 3 || (unsigned __int8)v29 == 4 )
          goto LABEL_110;
        v28 = (unsigned __int8)v29 - 5;
        v27 = (unsigned __int8)v29 == 5;
LABEL_60:
        if ( !v27 && v28 != 1 )
          goto LABEL_110;
        goto LABEL_62;
      }
LABEL_92:
      v20 = -1073741248;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v29 <= 0x16u )
    {
      if ( (unsigned __int8)v29 == 22
        || (unsigned __int8)v29 == 15
        || (unsigned __int8)v29 == 16
        || (unsigned __int8)v29 == 17
        || (unsigned __int8)v29 == 18
        || (unsigned __int8)v29 == 19 )
      {
        goto LABEL_28;
      }
      v14 = (unsigned __int8)v29 - 20;
      if ( (unsigned __int8)v29 != 20 )
        goto LABEL_101;
LABEL_62:
      v20 = -1073741436;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v29 == 24 )
      goto LABEL_28;
    if ( (unsigned __int8)v29 != 25 && (unsigned __int8)v29 != 26 )
    {
      if ( (unsigned __int8)v29 != 27 )
      {
        if ( (unsigned __int8)v29 == 28 )
          goto LABEL_110;
        v30 = (unsigned __int8)v29 == 30;
        goto LABEL_109;
      }
      goto LABEL_92;
    }
    v20 = -1073741643;
  }
LABEL_29:
  if ( v20 < 0 )
  {
    MasterIrp->Flags = 2;
    *(&MasterIrp->Flags + 1) = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
    StorEtwNvmeNamespaceEvent(
      v8,
      0,
      2,
      (__int64)L"Controller failed namespace protocol command.",
      L"CDW0",
      (char)MasterIrp->UserEvent,
      L"NvmeStatus",
      *(_WORD *)(*(_QWORD *)a2 + 4260LL));
    p_IoStatus = &v7->IoStatus;
    v7->IoStatus.Status = 0;
LABEL_31:
    v22 = 84LL;
    goto LABEL_32;
  }
  p_IoStatus = &v7->IoStatus;
  v7->IoStatus.Status = 0;
  *(_QWORD *)&MasterIrp->Flags = 1LL;
  v31 = *(const void **)(*(_QWORD *)a2 + 4160LL);
  if ( !v31 )
    goto LABEL_31;
  v32 = *(_DWORD *)(*(_QWORD *)a2 + 4248LL);
  if ( !v32 )
    goto LABEL_31;
  if ( HIDWORD(MasterIrp->ThreadListEntry.Flink) )
    memmove((char *)MasterIrp + HIDWORD(MasterIrp->IoStatus.Pointer), v31, v32);
  v57 = 84;
  StorGetStorageProtocolCommandBufferTotalLength(MasterIrp, &v57);
  v22 = v57;
LABEL_32:
  v7->IoStatus.Information = v22;
  v23 = *(_QWORD *)(*(_QWORD *)a2 + 4160LL);
  if ( v23 )
    NvmeFreeDmaBuffer((__int64)a1, *(_DWORD *)(*(_QWORD *)a2 + 4248LL), v11, v23, *(_QWORD *)(*(_QWORD *)a2 + 4168LL));
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  NvmeControllerReclaimExtendedCommand(a1, a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 120));
  v16 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&v7->Tail.CompletionKey + 21) = -84;
  if ( v16 )
    goto LABEL_176;
  v59 = 0LL;
  IoGetActivityIdIrp(v7, &v59);
  CurrentStackLocation = (__int64)v7->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)CurrentStackLocation == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_176;
    v33 = &EventNonReadWriteRequestComplete;
    goto LABEL_175;
  }
  if ( *(_BYTE *)CurrentStackLocation != 15 )
  {
    if ( *(_BYTE *)CurrentStackLocation != 27 )
      goto LABEL_176;
    if ( *(_BYTE *)(CurrentStackLocation + 1) == 7 && !*(_DWORD *)(CurrentStackLocation + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)v7->IoStatus.Information;
        if ( Information )
          v3 = *Information;
        LODWORD(v53) = p_IoStatus->Status;
        LODWORD(v52) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v24, CurrentStackLocation, &v59, v7, v52, v53);
      }
      goto LABEL_176;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_176;
    v33 = &EventPnpRequestComplete;
LABEL_175:
    LODWORD(v52) = p_IoStatus->Status;
    McTemplateK0pd_EtwWriteTransfer(v24, v33, &v59, v7, v52);
    goto LABEL_176;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_176;
  v34 = *(_QWORD *)(CurrentStackLocation + 8);
  v35 = 0;
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  if ( *(_BYTE *)(v34 + 2) != 40 )
  {
    v47 = *(_BYTE *)(v34 + 72);
    v36 = *(_BYTE **)(v34 + 32);
    v37 = *(_BYTE *)(v34 + 11);
    v35 = *(_BYTE *)(v34 + 4);
    if ( *(_BYTE *)(v34 + 2) )
      goto LABEL_176;
LABEL_150:
    LOBYTE(v24) = v47 - 8;
    if ( (v24 & 0x5D) != 0 )
      goto LABEL_176;
    v48 = *(_BYTE *)(v34 + 3);
    if ( v48 == 1 || !v36 || !v37 )
      goto LABEL_169;
    v49 = *v36 & 0x7F;
    if ( v49 == 114 || v49 == 115 )
    {
      v24 = (unsigned __int64)&v36[v37];
      LOBYTE(v34) = 0;
      if ( (unsigned __int64)(v36 + 8) > v24 )
        goto LABEL_167;
      v39 = v36[2];
      v38 = v36[1] & 0xF;
      v40 = v36[3];
    }
    else
    {
      v24 = (unsigned __int64)&v36[v37];
      LOBYTE(v34) = 0;
      if ( (unsigned __int64)(v36 + 8) > v24 )
        goto LABEL_167;
      v50 = v36 + 13;
      v38 = v36[2] & 0xF;
      v51 = v37;
      if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
        v51 = (unsigned __int8)v36[7] + 8;
      v24 = (unsigned __int64)&v36[v51];
      if ( (unsigned __int64)v50 <= v24 )
        v39 = v36[12];
      if ( (unsigned __int64)(v36 + 14) > v24 )
        v40 = 0;
      else
        v40 = *v50;
    }
    LOBYTE(v34) = 1;
LABEL_167:
    if ( (_BYTE)v34 )
      v41 = 1;
LABEL_169:
    if ( byte_140173441 < 0 )
    {
      if ( !v41 )
      {
        v40 = 0;
        v39 = 0;
        v38 = 0;
      }
      LOBYTE(v55) = v38;
      LOBYTE(v54) = v35;
      LOBYTE(v53) = v48;
      LODWORD(v52) = p_IoStatus->Status;
      McTemplateK0pduuuuup_EtwWriteTransfer(v24, v34, &v59, v7, v52, v53, v54, v55, v39, v40, v7);
    }
    goto LABEL_176;
  }
  v42 = 0LL;
  v56 = 0;
  if ( *(_DWORD *)(v34 + 20) )
    goto LABEL_176;
  v43 = 0;
  v57 = *(_DWORD *)(v34 + 56);
  if ( !v57 )
    goto LABEL_176;
  while ( 1 )
  {
    v24 = *(unsigned int *)(v34 + 4LL * v43 + 120);
    if ( (unsigned int)v24 >= 0x80 )
    {
      v44 = *(unsigned int *)(v34 + 16);
      if ( (unsigned int)v24 < (unsigned int)v44 )
        break;
    }
LABEL_141:
    if ( ++v43 >= v57 )
      goto LABEL_147;
  }
  v45 = (unsigned int)v24;
  v46 = *(_DWORD *)(v24 + v34) - 64;
  if ( v46 )
  {
    v24 = (unsigned int)(v46 - 1);
    if ( (_DWORD)v24 )
    {
      if ( (_DWORD)v24 == 1 )
      {
        v24 = v45 + 40;
        if ( v45 + 40 <= v44 )
        {
          if ( *(_DWORD *)(v45 + v34 + 12) )
            v42 = (char *)(v45 + v34 + 32);
          v36 = *(_BYTE **)(v45 + v34 + 24);
          goto LABEL_146;
        }
      }
    }
    else
    {
      v24 = v45 + 56;
      if ( v45 + 56 <= v44 )
      {
        v56 = 1;
        if ( *(_BYTE *)(v45 + v34 + 10) )
          v42 = (char *)(v45 + v34 + 24);
        v35 = *(_BYTE *)(v45 + v34 + 8);
        v36 = *(_BYTE **)(v45 + v34 + 16);
        v37 = *(_BYTE *)(v45 + v34 + 9);
      }
    }
    goto LABEL_140;
  }
  v24 = v45 + 40;
  if ( v45 + 40 > v44 )
  {
LABEL_140:
    if ( v56 )
      goto LABEL_147;
    goto LABEL_141;
  }
  if ( *(_BYTE *)(v45 + v34 + 10) )
    v42 = (char *)(v45 + v34 + 24);
  v36 = *(_BYTE **)(v45 + v34 + 16);
LABEL_146:
  v37 = *(_BYTE *)(v45 + v34 + 9);
  v35 = *(_BYTE *)(v45 + v34 + 8);
LABEL_147:
  if ( v42 )
  {
    v47 = *v42;
    v41 = 0;
    v7 = Irp;
    goto LABEL_150;
  }
LABEL_176:
  IofCompleteRequest(Irp, 1);
}
