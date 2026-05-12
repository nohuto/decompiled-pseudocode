/*
 * XREFs of NvmeQueryProtocolInfoCompletion @ 0x14011FFE0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeProtocolSpecificRequestGetData @ 0x1400901DC (NvmeProtocolSpecificRequestGetData.c)
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 *     NvmeControllerSupportsUUIDList @ 0x1400C6630 (NvmeControllerSupportsUUIDList.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerReuseExtendedCommand @ 0x14011FE74 (NvmeControllerReuseExtendedCommand.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

void __fastcall NvmeQueryProtocolInfoCompletion(void *a1, __int64 *a2, __int64 a3)
{
  int v3; // ebx
  __int64 v5; // rdx
  char v6; // si
  PIRP v7; // r15
  __int64 v8; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v10; // edi
  unsigned __int64 *p_Information; // rdx
  union _SLIST_HEADER *v12; // rsi
  void *v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *Information; // rax
  int Data; // eax
  _DWORD *v18; // r13
  _DWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r10
  unsigned int v23; // edx
  unsigned int v24; // edx
  int v25; // ecx
  unsigned int v26; // edx
  bool v27; // zf
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  char v31; // al
  bool v32; // zf
  int v33; // ecx
  unsigned int v34; // edx
  bool v35; // zf
  unsigned int v36; // ecx
  const void *v37; // rdx
  const void *v38; // r9
  size_t v39; // rcx
  __int64 v40; // r10
  unsigned __int64 v41; // r8
  int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // esi
  PVOID v45; // rdi
  unsigned int v46; // esi
  PVOID v47; // rcx
  unsigned int v48; // r8d
  int v49; // edx
  int v50; // eax
  unsigned int v51; // edx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  __int64 v54; // r8
  _DWORD *v55; // r9
  unsigned int v56; // esi
  int v57; // eax
  _IRP *MasterIrp; // rcx
  int SystemBuffer_high; // r9d
  unsigned __int64 v60; // rax
  __int16 v61; // ax
  unsigned __int64 v62; // rcx
  const EVENT_DESCRIPTOR *v63; // rdx
  __int64 v64; // rdx
  char v65; // r12
  _BYTE *v66; // r9
  unsigned __int8 v67; // si
  char v68; // r10
  char v69; // di
  char v70; // r11
  char v71; // r14
  char *v72; // r14
  unsigned int v73; // r13d
  unsigned __int64 v74; // r15
  __int64 v75; // r8
  int v76; // ecx
  char v77; // cl
  char v78; // al
  char v79; // r8
  char *v80; // r11
  unsigned int v81; // eax
  __int64 v82; // [rsp+20h] [rbp-69h]
  __int64 v83; // [rsp+28h] [rbp-61h]
  __int64 v84; // [rsp+30h] [rbp-59h]
  __int64 v85; // [rsp+38h] [rbp-51h]
  __int64 v86; // [rsp+40h] [rbp-49h]
  __int64 v87; // [rsp+48h] [rbp-41h]
  char v88; // [rsp+60h] [rbp-29h] BYREF
  char v89; // [rsp+61h] [rbp-28h]
  unsigned int Length; // [rsp+64h] [rbp-25h]
  _DWORD *v91; // [rsp+68h] [rbp-21h]
  _DWORD *v92; // [rsp+70h] [rbp-19h] BYREF
  PVOID SystemArgument2; // [rsp+78h] [rbp-11h]
  PIRP Irp; // [rsp+80h] [rbp-9h]
  __int64 v95; // [rsp+88h] [rbp-1h]
  __int64 v96; // [rsp+90h] [rbp+7h]
  GUID v97; // [rsp+98h] [rbp+Fh] BYREF

  v3 = 0;
  v95 = a3;
  SystemArgument2 = a1;
  v5 = *a2;
  v6 = 0;
  v92 = 0LL;
  v91 = 0LL;
  v88 = 0;
  v7 = *(PIRP *)(v5 + 4184);
  v8 = *(_QWORD *)(v5 + 4208);
  v96 = *(_QWORD *)(v5 + 4224);
  *(_QWORD *)&v97.Data1 = *(_QWORD *)(v5 + 4216);
  CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
  Irp = v7;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( a3 )
  {
    Data = NvmeProtocolSpecificRequestGetData((__int64)v7, (*(_DWORD *)(v5 + 4256) & 0x400) != 0, &v92, &v88);
    v18 = v92;
    v10 = Data;
    if ( Data < 0 )
      goto LABEL_170;
    v19 = 0LL;
    v20 = *a2;
    a3 = 3221225861LL;
    v21 = v95;
    if ( v88 )
      v19 = v92;
    v91 = v19;
    *(_WORD *)(v20 + 4260) = *(_WORD *)(v95 + 14);
    v22 = *a2;
    v23 = *(unsigned __int16 *)(*a2 + 4260);
    if ( ((v23 >> 9) & 7) != 0 )
    {
      if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 1 )
      {
        if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 2 )
          goto LABEL_120;
        v24 = v23 >> 1;
        switch ( (unsigned __int8)v24 )
        {
          case 0x80u:
            goto LABEL_120;
          case 0x81u:
            goto LABEL_120;
          case 0x82u:
            goto LABEL_120;
          case 0x83u:
            goto LABEL_120;
          case 0x84u:
            goto LABEL_120;
        }
        v25 = (unsigned __int8)v24 - 133;
        if ( (unsigned __int8)v24 == 133 )
          goto LABEL_120;
        goto LABEL_111;
      }
      v26 = v23 >> 1;
      if ( (unsigned __int8)v26 <= 0x80u )
      {
        if ( (unsigned __int8)v26 == 128 )
          goto LABEL_48;
        if ( (unsigned __int8)v26 <= 0x11u )
        {
          if ( (unsigned __int8)v26 == 17 )
            goto LABEL_61;
          if ( (unsigned __int8)v26 <= 9u )
          {
            if ( (unsigned __int8)v26 == 9
              || !(_BYTE)v26
              || (unsigned __int8)v26 == 1
              || (unsigned __int8)v26 == 2
              || (unsigned __int8)v26 == 3 )
            {
              goto LABEL_48;
            }
            v28 = (unsigned __int8)v26 - 5;
            v27 = (unsigned __int8)v26 == 5;
LABEL_45:
            if ( v27 )
              goto LABEL_48;
            v29 = v28 - 1;
            if ( !v29 )
              goto LABEL_48;
            v30 = v29 - 1;
            if ( !v30 )
              goto LABEL_48;
            goto LABEL_100;
          }
          if ( (unsigned __int8)v26 != 10 )
          {
            if ( (unsigned __int8)v26 != 11 )
            {
              if ( (unsigned __int8)v26 == 12
                || (unsigned __int8)v26 == 13
                || (unsigned __int8)v26 == 14
                || (unsigned __int8)v26 == 15 )
              {
                goto LABEL_48;
              }
              if ( (unsigned __int8)v26 != 16 )
                goto LABEL_120;
            }
LABEL_61:
            v10 = -2147483210;
            goto LABEL_49;
          }
LABEL_48:
          v10 = -1073741808;
LABEL_49:
          switch ( v18[1] )
          {
            case 2:
              goto LABEL_125;
            case 3:
LABEL_53:
              v31 = 1;
              goto LABEL_127;
            case 4:
LABEL_125:
              v6 = 1;
              break;
            case 5:
              goto LABEL_53;
          }
          v31 = 0;
LABEL_127:
          if ( v10 < 0 )
          {
            if ( !v6
              || !v8
              || (*(_DWORD *)(v8 + 4) & 1) != 0
              || (v61 = *(_WORD *)(v21 + 14), (v61 & 0xE00) != 0)
              || (v61 & 0x1FE) != 4 )
            {
              v18[5] = 0;
              goto LABEL_3;
            }
            v10 = 0;
            goto LABEL_141;
          }
          if ( v8 )
          {
            if ( v6 )
            {
              v38 = *(const void **)(v22 + 4160);
              if ( !v38
                || (v39 = *(unsigned int *)(v22 + 4248), !(_DWORD)v39)
                || (v40 = *(unsigned int *)(v8 + 44), *(_DWORD *)(v8 + 40) < (unsigned int)(v39 + v40))
                || (v41 = *(_QWORD *)(v8 + 48)) != 0 && v41 < *(_QWORD *)(v8 + 32) + (unsigned __int64)(unsigned int)v39 )
              {
                v18[5] = 0;
                goto LABEL_141;
              }
              memmove((char *)v18 + (unsigned int)v18[4] + v40, v38, v39);
              v42 = *(_DWORD *)(*a2 + 4248);
              if ( *(_DWORD *)(v8 + 44) )
                v18[5] += v42;
              else
                v18[5] = v42;
              v43 = v18[5];
              v44 = *(_DWORD *)(v8 + 40);
              if ( v44 != v43 )
              {
                if ( v44 <= v43 )
                {
                  v18[5] = v44;
                  goto LABEL_141;
                }
                v45 = SystemArgument2;
                v46 = v44 - v43;
                v47 = SystemArgument2;
                _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
                NvmeControllerReuseExtendedCommand((__int64)v47, (__int64)a2);
                v49 = *(_DWORD *)(v8 + 44);
                if ( !v49 )
                  *(_DWORD *)(v8 + 4) &= ~1u;
                *(_QWORD *)(v8 + 32) += *(unsigned int *)(*a2 + 4248);
                v50 = v49 + *(_DWORD *)(*a2 + 4248);
                v51 = *(_DWORD *)(v8 + 12);
                *(_DWORD *)(v8 + 44) = v50;
                if ( *(_QWORD *)(v8 + 48) )
                {
                  v52 = v51;
                  v53 = *(_DWORD *)(v8 + 48) - *(_DWORD *)(v8 + 32);
                  if ( v51 >= v53 )
                    v52 = *(_DWORD *)(v8 + 48) - *(_DWORD *)(v8 + 32);
                  if ( v46 >= v52 )
                  {
                    v46 = *(_DWORD *)(v8 + 48) - *(_DWORD *)(v8 + 32);
                    if ( v51 < v53 )
                      v46 = v51;
                  }
                }
                else
                {
                  if ( v46 < v51 )
                    v51 = v46;
                  v46 = v51;
                }
                *(_DWORD *)(*a2 + 4248) = v46;
                LOBYTE(v48) = *(_BYTE *)v8;
                BuildGetLogPageCommand(
                  (__int64)v45,
                  *a2 + 4096,
                  v48,
                  v46,
                  *(_QWORD *)(v8 + 24),
                  *(_DWORD *)(v8 + 8),
                  *(_QWORD *)(v8 + 32),
                  v18[8],
                  *a2,
                  a2[1]);
                v54 = *a2;
                if ( v88 )
                {
                  v55 = v91;
                  v56 = v46 >> 2;
                  *(_DWORD *)(v54 + 4136) = v91[2];
                  *(_WORD *)(*a2 + 4138) = v56 - 1;
                  *(_DWORD *)(*a2 + 4140) = v55[3];
                  *(_WORD *)(*a2 + 4140) = (v56 - 1) >> 16;
                  *(_QWORD *)(*a2 + 4144) = *(_QWORD *)(v8 + 32);
                  *(_DWORD *)(*a2 + 4152) = v55[9];
                  *(_DWORD *)(*a2 + 4156) = 0;
                }
                else
                {
                  *(_DWORD *)(v54 + 4136) ^= ((unsigned __int16)*(_DWORD *)(v54 + 4136) ^ (unsigned __int16)((unsigned __int16)v18[9] << 15)) & 0x8000;
                  *(_DWORD *)(*a2 + 4136) ^= ((unsigned __int16)*(_DWORD *)(*a2 + 4136) ^ (unsigned __int16)((unsigned __int16)v18[9] << 7)) & 0xF00;
                  if ( NvmeControllerSupportsUUIDList((__int64)v45) && (v18[9] & 0x7F00) != 0 && *(_BYTE *)v8 >= 0xC0u )
                    *(_DWORD *)(*a2 + 4152) ^= ((unsigned __int8)BYTE1(v18[9]) ^ (unsigned __int8)*(_DWORD *)(*a2 + 4152)) & 0x7F;
                }
                v57 = *(_DWORD *)(*a2 + 4136);
                if ( (v57 & 0x7F00) != 0 && ((unsigned __int8)v57 == 7 || (unsigned __int8)v57 == 13) )
                  *(_DWORD *)(*a2 + 4136) = v57 & 0xFFFF80FF;
                v10 = NvmeControllerProcessCommand((__int64)v45, a2);
                if ( v10 >= 0 )
                  return;
              }
            }
            else
            {
              v10 = -1073741435;
              v18[5] = 0;
            }
          }
          else
          {
            if ( v31 )
              v18[6] = *(_DWORD *)v21;
            v18[5] = *(_DWORD *)(*a2 + 4248);
            v36 = *(_DWORD *)(*a2 + 4248);
            if ( v36 )
            {
              v37 = *(const void **)(*a2 + 4160);
              if ( v37 )
              {
                memmove((char *)v18 + (unsigned int)v18[4], v37, v36);
LABEL_141:
                p_Information = &v7->IoStatus.Information;
                a3 = (__int64)&v7->IoStatus.Information;
                goto LABEL_171;
              }
            }
          }
LABEL_170:
          p_Information = &v7->IoStatus.Information;
          a3 = (__int64)&v7->IoStatus.Information;
          if ( v10 < 0 )
            goto LABEL_4;
LABEL_171:
          MasterIrp = v7->AssociatedIrp.MasterIrp;
          SystemBuffer_high = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
          if ( v88 )
          {
            *(_DWORD *)&MasterIrp->Type = 1;
            v60 = 72LL;
            *(_DWORD *)(&MasterIrp->Size + 1) = 72;
            if ( SystemBuffer_high )
              v60 = (unsigned int)(v91[5] + v91[4] + 8);
            a3 = (__int64)p_Information;
          }
          else
          {
            v60 = 48LL;
            *(_DWORD *)&MasterIrp->Type = 48;
            *(_DWORD *)(&MasterIrp->Size + 1) = 48;
            if ( SystemBuffer_high )
              v60 = (unsigned int)(v18[5] + v18[4] + 8);
          }
          v62 = Length;
          *(_QWORD *)a3 = v60;
          if ( v60 > v62 )
          {
            *p_Information = v62;
            v10 = -2147483643;
          }
          goto LABEL_5;
        }
        if ( (unsigned __int8)v26 <= 0x1Au )
        {
          switch ( (unsigned __int8)v26 )
          {
            case 0x1Au:
            case 0x12u:
            case 0x13u:
              goto LABEL_72;
            case 0x14u:
              v10 = -1073741800;
              goto LABEL_49;
            case 0x15u:
              goto LABEL_120;
            case 0x16u:
              goto LABEL_72;
          }
          v33 = (unsigned __int8)v26 - 24;
          v32 = (unsigned __int8)v26 == 24;
          goto LABEL_70;
        }
        if ( (unsigned __int8)v26 == 27 )
        {
          v10 = -1073741637;
          goto LABEL_49;
        }
        if ( (unsigned __int8)v26 == 28 )
          goto LABEL_48;
        if ( (unsigned __int8)v26 != 30 )
        {
          v28 = (unsigned __int8)v26 - 31;
          v27 = (unsigned __int8)v26 == 31;
          goto LABEL_45;
        }
LABEL_112:
        v10 = -1073741790;
        goto LABEL_49;
      }
      if ( (unsigned __int8)v26 == 129 )
        goto LABEL_48;
      v30 = (unsigned __int8)v26 - 130;
      if ( (unsigned __int8)v26 == 130 )
        goto LABEL_112;
LABEL_100:
      v35 = v30 == 1;
LABEL_119:
      if ( !v35 )
        goto LABEL_120;
      goto LABEL_48;
    }
    v34 = v23 >> 1;
    if ( (unsigned __int8)v34 > 0x80u )
    {
      if ( (unsigned __int8)v34 == 129 )
        goto LABEL_48;
      v30 = (unsigned __int8)v34 - 130;
      if ( (unsigned __int8)v34 == 130 )
      {
        v10 = -1073741661;
        goto LABEL_49;
      }
      goto LABEL_100;
    }
    if ( (unsigned __int8)v34 == 128 )
      goto LABEL_48;
    if ( (unsigned __int8)v34 > 0xEu )
    {
      if ( (unsigned __int8)v34 <= 0x16u )
      {
        if ( (unsigned __int8)v34 == 22
          || (unsigned __int8)v34 == 15
          || (unsigned __int8)v34 == 16
          || (unsigned __int8)v34 == 17
          || (unsigned __int8)v34 == 18
          || (unsigned __int8)v34 == 19 )
        {
          goto LABEL_48;
        }
        v25 = (unsigned __int8)v34 - 20;
        if ( (unsigned __int8)v34 != 20 )
        {
LABEL_111:
          if ( v25 == 1 )
            goto LABEL_112;
LABEL_120:
          v10 = -1073741435;
          goto LABEL_49;
        }
LABEL_72:
        v10 = -1073741436;
        goto LABEL_49;
      }
      if ( (unsigned __int8)v34 == 24 )
        goto LABEL_48;
      if ( (unsigned __int8)v34 == 25 || (unsigned __int8)v34 == 26 )
      {
        v10 = -1073741643;
        goto LABEL_49;
      }
      if ( (unsigned __int8)v34 != 27 )
      {
        if ( (unsigned __int8)v34 == 28 )
          goto LABEL_120;
        v35 = (unsigned __int8)v34 == 30;
        goto LABEL_119;
      }
    }
    else
    {
      if ( (unsigned __int8)v34 == 14 )
        goto LABEL_48;
      if ( (unsigned __int8)v34 > 7u )
      {
        if ( (unsigned __int8)v34 != 8 && (unsigned __int8)v34 != 9 && (unsigned __int8)v34 != 10 )
        {
          if ( (unsigned __int8)v34 == 11 )
            goto LABEL_48;
          v30 = (unsigned __int8)v34 - 12;
          if ( (unsigned __int8)v34 == 12 )
          {
            v10 = -1073740758;
            goto LABEL_49;
          }
          goto LABEL_100;
        }
      }
      else if ( (unsigned __int8)v34 != 7 )
      {
        if ( !(_BYTE)v34 )
        {
          v10 = 0;
          goto LABEL_49;
        }
        if ( (unsigned __int8)v34 == 1 || (unsigned __int8)v34 == 2 )
          goto LABEL_48;
        if ( (unsigned __int8)v34 == 3 || (unsigned __int8)v34 == 4 )
          goto LABEL_120;
        v33 = (unsigned __int8)v34 - 5;
        v32 = (unsigned __int8)v34 == 5;
LABEL_70:
        if ( !v32 && v33 != 1 )
          goto LABEL_120;
        goto LABEL_72;
      }
    }
    v10 = -1073741248;
    goto LABEL_49;
  }
  v10 = -1073741435;
LABEL_3:
  p_Information = &v7->IoStatus.Information;
LABEL_4:
  *p_Information = 0LL;
LABEL_5:
  v12 = (union _SLIST_HEADER *)SystemArgument2;
  NvmeFreeDmaBuffer(
    (__int64)SystemArgument2,
    *(_DWORD *)(*a2 + 4248),
    a3,
    *(_QWORD *)(*a2 + 4160),
    *(_QWORD *)(*a2 + 4168));
  v13 = *(void **)(*a2 + 4208);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x4C4E6152u);
    *(_QWORD *)(*a2 + 4208) = 0LL;
  }
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  NvmeControllerReclaimExtendedCommand(v12, (__int64)a2);
  if ( v96 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v96 + 152));
  if ( *(_QWORD *)&v97.Data1 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)&v97.Data1 + 120LL));
  v27 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&v7->Tail.CompletionKey + 21) = -84;
  v7->IoStatus.Status = v10;
  if ( v27 )
    goto LABEL_244;
  v97 = 0LL;
  IoGetActivityIdIrp(v7, &v97);
  v15 = (__int64)v7->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_244;
    v63 = &EventNonReadWriteRequestComplete;
    goto LABEL_243;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_244;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)v7->IoStatus.Information;
        if ( Information )
          v3 = *Information;
        LODWORD(v83) = v7->IoStatus.Status;
        LODWORD(v82) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v97, v7, v82, v83);
      }
      goto LABEL_244;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_244;
    v63 = &EventPnpRequestComplete;
LABEL_243:
    LODWORD(v82) = v7->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v14, v63, &v97, v7, v82);
    goto LABEL_244;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_244;
  v64 = *(_QWORD *)(v15 + 8);
  v65 = 0;
  v66 = 0LL;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  if ( *(_BYTE *)(v64 + 2) == 40 )
  {
    v72 = 0LL;
    v89 = 0;
    if ( *(_DWORD *)(v64 + 20) )
      goto LABEL_244;
    v73 = 0;
    Length = *(_DWORD *)(v64 + 56);
    if ( !Length )
      goto LABEL_244;
    while ( 1 )
    {
      v14 = *(unsigned int *)(v64 + 4LL * v73 + 120);
      if ( (unsigned int)v14 >= 0x80 )
      {
        v74 = *(unsigned int *)(v64 + 16);
        if ( (unsigned int)v14 < (unsigned int)v74 )
        {
          v75 = (unsigned int)v14;
          v76 = *(_DWORD *)(v14 + v64) - 64;
          if ( v76 )
          {
            v14 = (unsigned int)(v76 - 1);
            if ( (_DWORD)v14 )
            {
              if ( (_DWORD)v14 == 1 )
              {
                v14 = v75 + 40;
                if ( v75 + 40 <= v74 )
                {
                  if ( *(_DWORD *)(v75 + v64 + 12) )
                    v72 = (char *)(v75 + v64 + 32);
                  v66 = *(_BYTE **)(v75 + v64 + 24);
                  goto LABEL_214;
                }
              }
            }
            else
            {
              v14 = v75 + 56;
              if ( v75 + 56 <= v74 )
              {
                v89 = 1;
                if ( *(_BYTE *)(v75 + v64 + 10) )
                  v72 = (char *)(v75 + v64 + 24);
                v65 = *(_BYTE *)(v75 + v64 + 8);
                v66 = *(_BYTE **)(v75 + v64 + 16);
                v67 = *(_BYTE *)(v75 + v64 + 9);
              }
            }
          }
          else
          {
            v14 = v75 + 40;
            if ( v75 + 40 <= v74 )
            {
              if ( *(_BYTE *)(v75 + v64 + 10) )
                v72 = (char *)(v75 + v64 + 24);
              v66 = *(_BYTE **)(v75 + v64 + 16);
LABEL_214:
              v67 = *(_BYTE *)(v75 + v64 + 9);
              v65 = *(_BYTE *)(v75 + v64 + 8);
LABEL_215:
              if ( v72 )
              {
                v77 = *v72;
                v71 = 0;
                v7 = Irp;
                goto LABEL_218;
              }
              goto LABEL_244;
            }
          }
          if ( v89 )
            goto LABEL_215;
        }
      }
      if ( ++v73 >= Length )
        goto LABEL_215;
    }
  }
  v77 = *(_BYTE *)(v64 + 72);
  v66 = *(_BYTE **)(v64 + 32);
  v67 = *(_BYTE *)(v64 + 11);
  v65 = *(_BYTE *)(v64 + 4);
  if ( *(_BYTE *)(v64 + 2) )
    goto LABEL_244;
LABEL_218:
  LOBYTE(v14) = v77 - 8;
  if ( (v14 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v64 + 3) == 1 || !v66 || !v67 )
    {
LABEL_237:
      if ( byte_140173441 < 0 )
      {
        if ( !v71 )
        {
          v70 = 0;
          v69 = 0;
          v68 = 0;
        }
        LOBYTE(v87) = v70;
        LOBYTE(v86) = v69;
        LOBYTE(v85) = v68;
        LOBYTE(v84) = v65;
        LOBYTE(v83) = *(_BYTE *)(v64 + 3);
        LODWORD(v82) = v7->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v14, v64, &v97, v7, v82, v83, v84, v85, v86, v87, v7);
      }
      goto LABEL_244;
    }
    v78 = *v66 & 0x7F;
    if ( v78 == 114 || v78 == 115 )
    {
      v14 = (unsigned __int64)&v66[v67];
      v79 = 0;
      if ( (unsigned __int64)(v66 + 8) > v14 )
        goto LABEL_235;
      v69 = v66[2];
      v68 = v66[1] & 0xF;
      v70 = v66[3];
    }
    else
    {
      v14 = (unsigned __int64)&v66[v67];
      v79 = 0;
      if ( (unsigned __int64)(v66 + 8) > v14 )
        goto LABEL_235;
      v80 = v66 + 13;
      v68 = v66[2] & 0xF;
      v81 = v67;
      if ( (unsigned int)(unsigned __int8)v66[7] + 8 <= v67 )
        v81 = (unsigned __int8)v66[7] + 8;
      v14 = (unsigned __int64)&v66[v81];
      if ( (unsigned __int64)v80 <= v14 )
        v69 = v66[12];
      if ( (unsigned __int64)(v66 + 14) > v14 )
        v70 = 0;
      else
        v70 = *v80;
    }
    v79 = 1;
LABEL_235:
    if ( v79 )
      v71 = 1;
    goto LABEL_237;
  }
LABEL_244:
  IofCompleteRequest(Irp, 1);
}
