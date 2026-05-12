/*
 * XREFs of NvmeSetProtocolInfoCompletion @ 0x140121FB0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeProtocolSpecificRequestGetData @ 0x1400901DC (NvmeProtocolSpecificRequestGetData.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

void __fastcall NvmeSetProtocolInfoCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rdx
  __int64 v6; // rsi
  PIRP v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r13
  unsigned __int64 *p_Information; // rsi
  int v11; // ebx
  unsigned __int64 *v12; // rax
  union _SLIST_HEADER *v13; // r14
  unsigned __int64 v14; // rcx
  __int64 CurrentStackLocation; // rdx
  int Data; // eax
  __int64 v17; // r14
  unsigned int v18; // edx
  unsigned int v19; // edx
  int v20; // ecx
  unsigned int v21; // edx
  bool v22; // zf
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  bool v26; // zf
  unsigned __int64 *v27; // rdx
  _IRP *MasterIrp; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned int v31; // edx
  unsigned int v32; // eax
  const void *v33; // rdx
  const EVENT_DESCRIPTOR *v34; // rdx
  __int64 v35; // rdx
  char v36; // r12
  _BYTE *v37; // r9
  unsigned __int8 v38; // si
  char v39; // r11
  char v40; // bl
  char v41; // r10
  char v42; // r14
  char *v43; // r14
  char v44; // r13
  unsigned int v45; // r15d
  unsigned __int64 v46; // rbp
  __int64 v47; // r8
  int v48; // ecx
  char v49; // cl
  char v50; // r8
  char v51; // al
  char *v52; // r10
  unsigned int v53; // eax
  __int64 v54; // [rsp+20h] [rbp-A8h]
  char v55[4]; // [rsp+60h] [rbp-68h] BYREF
  unsigned int Length; // [rsp+64h] [rbp-64h]
  __int64 v57; // [rsp+68h] [rbp-60h] BYREF
  PIRP Irp; // [rsp+70h] [rbp-58h]
  GUID v59; // [rsp+78h] [rbp-50h] BYREF

  v3 = 0;
  *(_QWORD *)&v59.Data1 = a1;
  v57 = 0LL;
  v5 = *(_QWORD *)a2;
  v6 = a3;
  v7 = *(PIRP *)(v5 + 4184);
  v8 = *(_QWORD *)(v5 + 4224);
  v9 = *(_QWORD *)(v5 + 4216);
  Irp = v7;
  Length = v7->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( !a3 )
  {
    p_Information = &v7->IoStatus.Information;
    v11 = -1073741435;
    v12 = &v7->IoStatus.Information;
LABEL_3:
    *v12 = 0LL;
    goto LABEL_4;
  }
  Data = NvmeProtocolSpecificRequestGetData((__int64)v7, (*(_DWORD *)(v5 + 4256) & 0x400) != 0, &v57, v55);
  v17 = v57;
  v11 = Data;
  if ( Data < 0 )
    goto LABEL_49;
  *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(v6 + 14);
  a3 = *(_QWORD *)a2;
  v18 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((v18 >> 9) & 7) == 0 )
  {
    v31 = v18 >> 1;
    if ( (unsigned __int8)v31 > 0x80u )
    {
      if ( (unsigned __int8)v31 == 129 )
        goto LABEL_47;
      v25 = (unsigned __int8)v31 - 130;
      if ( (unsigned __int8)v31 == 130 )
      {
        v11 = -1073741661;
        goto LABEL_48;
      }
      goto LABEL_45;
    }
    if ( (unsigned __int8)v31 == 128 )
      goto LABEL_47;
    if ( (unsigned __int8)v31 > 0xEu )
    {
      if ( (unsigned __int8)v31 <= 0x16u )
      {
        if ( (unsigned __int8)v31 == 22
          || (unsigned __int8)v31 == 15
          || (unsigned __int8)v31 == 16
          || (unsigned __int8)v31 == 17
          || (unsigned __int8)v31 == 18
          || (unsigned __int8)v31 == 19 )
        {
          goto LABEL_47;
        }
        v20 = (unsigned __int8)v31 - 20;
        if ( (unsigned __int8)v31 != 20 )
          goto LABEL_28;
        goto LABEL_70;
      }
      if ( (unsigned __int8)v31 == 24 )
        goto LABEL_47;
      if ( (unsigned __int8)v31 == 25 || (unsigned __int8)v31 == 26 )
      {
        v11 = -1073741643;
        goto LABEL_48;
      }
      if ( (unsigned __int8)v31 != 27 )
      {
        if ( (unsigned __int8)v31 == 28 )
          goto LABEL_30;
        v26 = (unsigned __int8)v31 == 30;
LABEL_46:
        if ( !v26 )
          goto LABEL_30;
LABEL_47:
        v11 = -1073741808;
        goto LABEL_48;
      }
    }
    else
    {
      if ( (unsigned __int8)v31 == 14 )
        goto LABEL_47;
      if ( (unsigned __int8)v31 > 7u )
      {
        if ( (unsigned __int8)v31 != 8 && (unsigned __int8)v31 != 9 && (unsigned __int8)v31 != 10 )
        {
          if ( (unsigned __int8)v31 == 11 )
            goto LABEL_47;
          v25 = (unsigned __int8)v31 - 12;
          if ( (unsigned __int8)v31 == 12 )
          {
            v11 = -1073740758;
            goto LABEL_48;
          }
          goto LABEL_45;
        }
      }
      else if ( (unsigned __int8)v31 != 7 )
      {
        if ( !(_BYTE)v31 )
        {
          v11 = 0;
          v17 = v57;
          *(_DWORD *)(v57 + 20) = *(_DWORD *)(a3 + 4248);
          v32 = *(_DWORD *)(*(_QWORD *)a2 + 4248LL);
          if ( v32 )
          {
            v33 = *(const void **)(*(_QWORD *)a2 + 4160LL);
            if ( v33 )
              memmove((void *)(v17 + *(unsigned int *)(v17 + 16)), v33, v32);
          }
          p_Information = &v7->IoStatus.Information;
          v27 = &v7->IoStatus.Information;
          goto LABEL_50;
        }
        if ( (unsigned __int8)v31 == 1 || (unsigned __int8)v31 == 2 )
          goto LABEL_47;
        if ( (unsigned __int8)v31 == 3 || (unsigned __int8)v31 == 4 || (unsigned int)(unsigned __int8)v31 - 5 > 1 )
          goto LABEL_30;
        goto LABEL_70;
      }
    }
    v11 = -1073741248;
    goto LABEL_48;
  }
  if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) == 1 )
  {
    v21 = v18 >> 1;
    if ( (unsigned __int8)v21 > 0x80u )
    {
      if ( (unsigned __int8)v21 == 129 )
        goto LABEL_47;
      v25 = (unsigned __int8)v21 - 130;
      if ( (unsigned __int8)v21 == 130 )
        goto LABEL_29;
      goto LABEL_45;
    }
    if ( (unsigned __int8)v21 == 128 )
      goto LABEL_47;
    if ( (unsigned __int8)v21 <= 0x11u )
    {
      if ( (unsigned __int8)v21 != 17 )
      {
        if ( (unsigned __int8)v21 <= 9u )
        {
          if ( (unsigned __int8)v21 == 9
            || !(_BYTE)v21
            || (unsigned __int8)v21 == 1
            || (unsigned __int8)v21 == 2
            || (unsigned __int8)v21 == 3 )
          {
            goto LABEL_47;
          }
          v23 = (unsigned __int8)v21 - 5;
          v22 = (unsigned __int8)v21 == 5;
LABEL_42:
          if ( v22 )
            goto LABEL_47;
          v24 = v23 - 1;
          if ( !v24 )
            goto LABEL_47;
          v25 = v24 - 1;
          if ( !v25 )
            goto LABEL_47;
LABEL_45:
          v26 = v25 == 1;
          goto LABEL_46;
        }
        if ( (unsigned __int8)v21 == 10 )
          goto LABEL_47;
        if ( (unsigned __int8)v21 != 11 )
        {
          if ( (unsigned __int8)v21 == 12
            || (unsigned __int8)v21 == 13
            || (unsigned __int8)v21 == 14
            || (unsigned __int8)v21 == 15 )
          {
            goto LABEL_47;
          }
          if ( (unsigned __int8)v21 != 16 )
            goto LABEL_30;
        }
      }
      v11 = -2147483210;
      goto LABEL_48;
    }
    if ( (unsigned __int8)v21 > 0x1Au )
    {
      switch ( (unsigned __int8)v21 )
      {
        case 0x1Bu:
          v11 = -1073741637;
          goto LABEL_48;
        case 0x1Cu:
          goto LABEL_47;
        case 0x1Eu:
          goto LABEL_29;
      }
      v23 = (unsigned __int8)v21 - 31;
      v22 = (unsigned __int8)v21 == 31;
      goto LABEL_42;
    }
    if ( (unsigned __int8)v21 != 26 && (unsigned __int8)v21 != 18 && (unsigned __int8)v21 != 19 )
    {
      if ( (unsigned __int8)v21 == 20 )
      {
        v11 = -1073741800;
        goto LABEL_48;
      }
      if ( (unsigned __int8)v21 == 21 || (unsigned __int8)v21 != 22 && (unsigned int)(unsigned __int8)v21 - 24 > 1 )
        goto LABEL_30;
    }
LABEL_70:
    v11 = -1073741436;
    goto LABEL_48;
  }
  if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 2 )
    goto LABEL_30;
  v19 = v18 >> 1;
  switch ( (unsigned __int8)v19 )
  {
    case 0x80u:
      goto LABEL_30;
    case 0x81u:
      goto LABEL_30;
    case 0x82u:
      goto LABEL_30;
    case 0x83u:
      goto LABEL_30;
    case 0x84u:
      goto LABEL_30;
  }
  v20 = (unsigned __int8)v19 - 133;
  if ( (unsigned __int8)v19 == 133 )
    goto LABEL_30;
LABEL_28:
  if ( v20 != 1 )
  {
LABEL_30:
    v11 = -1073741435;
    goto LABEL_48;
  }
LABEL_29:
  v11 = -1073741790;
LABEL_48:
  *(_DWORD *)(v17 + 20) = 0;
LABEL_49:
  p_Information = &v7->IoStatus.Information;
  v12 = &v7->IoStatus.Information;
  v27 = &v7->IoStatus.Information;
  if ( v11 < 0 )
    goto LABEL_3;
LABEL_50:
  MasterIrp = v7->AssociatedIrp.MasterIrp;
  v29 = 72LL;
  *(_DWORD *)&MasterIrp->Type = 1;
  *(_DWORD *)(&MasterIrp->Size + 1) = 72;
  if ( HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) )
    v29 = (unsigned int)(*(_DWORD *)(v17 + 16) + *(_DWORD *)(v17 + 20) + 8);
  v30 = Length;
  *v27 = v29;
  if ( v29 > v30 )
  {
    *p_Information = v30;
    v11 = -2147483643;
  }
LABEL_4:
  v13 = *(union _SLIST_HEADER **)&v59.Data1;
  NvmeFreeDmaBuffer(
    *(__int64 *)&v59.Data1,
    *(_DWORD *)(*(_QWORD *)a2 + 4248LL),
    a3,
    *(_QWORD *)(*(_QWORD *)a2 + 4160LL),
    *(_QWORD *)(*(_QWORD *)a2 + 4168LL));
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  NvmeControllerReclaimExtendedCommand(v13, a2);
  if ( v8 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 152));
  if ( v9 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v9 + 120));
  v22 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&v7->Tail.CompletionKey + 21) = -84;
  v7->IoStatus.Status = v11;
  if ( v22 )
    goto LABEL_179;
  v59 = 0LL;
  IoGetActivityIdIrp(v7, &v59);
  CurrentStackLocation = (__int64)v7->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)CurrentStackLocation == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_179;
    v34 = &EventNonReadWriteRequestComplete;
    goto LABEL_178;
  }
  if ( *(_BYTE *)CurrentStackLocation != 15 )
  {
    if ( *(_BYTE *)CurrentStackLocation != 27 )
      goto LABEL_179;
    if ( *(_BYTE *)(CurrentStackLocation + 1) == 7 && !*(_DWORD *)(CurrentStackLocation + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        if ( *p_Information )
          v3 = *(_DWORD *)*p_Information;
        LODWORD(v54) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v14, CurrentStackLocation, &v59, v7, v54, v7->IoStatus.Status);
      }
      goto LABEL_179;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_179;
    v34 = &EventPnpRequestComplete;
LABEL_178:
    LODWORD(v54) = v7->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v14, v34, &v59, v7, v54);
    goto LABEL_179;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_179;
  v35 = *(_QWORD *)(CurrentStackLocation + 8);
  v36 = 0;
  v37 = 0LL;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  if ( *(_BYTE *)(v35 + 2) != 40 )
  {
    v49 = *(_BYTE *)(v35 + 72);
    v37 = *(_BYTE **)(v35 + 32);
    v38 = *(_BYTE *)(v35 + 11);
    v36 = *(_BYTE *)(v35 + 4);
    if ( *(_BYTE *)(v35 + 2) )
      goto LABEL_179;
LABEL_153:
    LOBYTE(v14) = v49 - 8;
    if ( (v14 & 0x5D) != 0 )
      goto LABEL_179;
    v50 = *(_BYTE *)(v35 + 3);
    if ( v50 == 1 || !v37 || !v38 )
      goto LABEL_172;
    v51 = *v37 & 0x7F;
    if ( v51 == 114 || v51 == 115 )
    {
      v14 = (unsigned __int64)&v37[v38];
      LOBYTE(v35) = 0;
      if ( (unsigned __int64)(v37 + 8) > v14 )
        goto LABEL_170;
      v40 = v37[2];
      v39 = v37[1] & 0xF;
      v41 = v37[3];
    }
    else
    {
      v14 = (unsigned __int64)&v37[v38];
      LOBYTE(v35) = 0;
      if ( (unsigned __int64)(v37 + 8) > v14 )
        goto LABEL_170;
      v52 = v37 + 13;
      v39 = v37[2] & 0xF;
      v53 = v38;
      if ( (unsigned int)(unsigned __int8)v37[7] + 8 <= v38 )
        v53 = (unsigned __int8)v37[7] + 8;
      v14 = (unsigned __int64)&v37[v53];
      if ( (unsigned __int64)v52 <= v14 )
        v40 = v37[12];
      if ( (unsigned __int64)(v37 + 14) > v14 )
        v41 = 0;
      else
        v41 = *v52;
    }
    LOBYTE(v35) = 1;
LABEL_170:
    if ( (_BYTE)v35 )
      v42 = 1;
LABEL_172:
    if ( byte_140173441 < 0 )
    {
      if ( !v42 )
      {
        v41 = 0;
        v40 = 0;
        v39 = 0;
      }
      LODWORD(v54) = v7->IoStatus.Status;
      McTemplateK0pduuuuup_EtwWriteTransfer(v14, v35, &v59, v7, v54, v50, v36, v39, v40, v41, v7);
    }
    goto LABEL_179;
  }
  v43 = 0LL;
  v44 = 0;
  if ( *(_DWORD *)(v35 + 20) )
    goto LABEL_179;
  v45 = 0;
  Length = *(_DWORD *)(v35 + 56);
  if ( !Length )
    goto LABEL_179;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v35 + 4LL * v45 + 120);
    if ( (unsigned int)v14 >= 0x80 )
    {
      v46 = *(unsigned int *)(v35 + 16);
      if ( (unsigned int)v14 < (unsigned int)v46 )
        break;
    }
LABEL_144:
    if ( ++v45 >= Length )
      goto LABEL_150;
  }
  v47 = (unsigned int)v14;
  v48 = *(_DWORD *)(v14 + v35) - 64;
  if ( v48 )
  {
    v14 = (unsigned int)(v48 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == 1 )
      {
        v14 = v47 + 40;
        if ( v47 + 40 <= v46 )
        {
          if ( *(_DWORD *)(v47 + v35 + 12) )
            v43 = (char *)(v47 + v35 + 32);
          v37 = *(_BYTE **)(v47 + v35 + 24);
          goto LABEL_149;
        }
      }
    }
    else
    {
      v14 = v47 + 56;
      if ( v47 + 56 <= v46 )
      {
        v44 = 1;
        if ( *(_BYTE *)(v47 + v35 + 10) )
          v43 = (char *)(v47 + v35 + 24);
        v36 = *(_BYTE *)(v47 + v35 + 8);
        v37 = *(_BYTE **)(v47 + v35 + 16);
        v38 = *(_BYTE *)(v47 + v35 + 9);
      }
    }
    goto LABEL_143;
  }
  v14 = v47 + 40;
  if ( v47 + 40 > v46 )
  {
LABEL_143:
    if ( v44 )
      goto LABEL_150;
    goto LABEL_144;
  }
  if ( *(_BYTE *)(v47 + v35 + 10) )
    v43 = (char *)(v47 + v35 + 24);
  v37 = *(_BYTE **)(v47 + v35 + 16);
LABEL_149:
  v38 = *(_BYTE *)(v47 + v35 + 9);
  v36 = *(_BYTE *)(v47 + v35 + 8);
LABEL_150:
  if ( v43 )
  {
    v49 = *v43;
    v42 = 0;
    v7 = Irp;
    goto LABEL_153;
  }
LABEL_179:
  IofCompleteRequest(Irp, 1);
}
