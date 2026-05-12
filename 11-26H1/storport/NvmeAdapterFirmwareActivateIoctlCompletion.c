/*
 * XREFs of NvmeAdapterFirmwareActivateIoctlCompletion @ 0x1400D62D0
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     IsNvmeFirmwareActivateWithoutResetEnabled @ 0x1400D1B20 (IsNvmeFirmwareActivateWithoutResetEnabled.c)
 *     NvmeAdapterFirmwareActivateIoctl @ 0x1400D5D1C (NvmeAdapterFirmwareActivateIoctl.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall NvmeAdapterFirmwareActivateIoctlCompletion(char *Context, _DWORD *a2, __int64 a3)
{
  int v3; // edi
  unsigned int v6; // ebx
  __int64 v7; // r13
  int v8; // r10d
  __int64 v9; // rbp
  unsigned int v10; // r15d
  unsigned int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  bool v22; // zf
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  bool v37; // zf
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  bool v52; // zf
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned __int16 v64; // dx
  WORK_QUEUE_TYPE v65; // r10d
  __int64 v66; // r11
  const wchar_t *v67; // r9
  struct _IO_WORKITEM *v68; // rcx
  int v69; // eax
  const wchar_t *v70; // r9
  struct _IO_WORKITEM *v71; // rcx
  unsigned __int64 v72; // rcx
  __int64 v73; // rdx
  int *v74; // rax
  const EVENT_DESCRIPTOR *v75; // rdx
  __int64 v76; // rdx
  char v77; // r12
  _BYTE *v78; // r9
  unsigned __int8 v79; // si
  char v80; // r10
  char v81; // bl
  char v82; // r11
  char v83; // r14
  char *v84; // r14
  unsigned int v85; // r13d
  unsigned __int64 v86; // r15
  __int64 v87; // r8
  int v88; // ecx
  char v89; // cl
  char v90; // r8
  char v91; // al
  char *v92; // r11
  unsigned int v93; // eax
  __int64 v94; // [rsp+20h] [rbp-E8h]
  __int64 v95; // [rsp+28h] [rbp-E0h]
  __int64 v96; // [rsp+30h] [rbp-D8h]
  __int64 v97; // [rsp+38h] [rbp-D0h]
  __int64 v98; // [rsp+40h] [rbp-C8h]
  __int64 v99; // [rsp+48h] [rbp-C0h]
  char v100; // [rsp+A0h] [rbp-68h]
  unsigned int v101; // [rsp+A8h] [rbp-60h]
  GUID v102; // [rsp+B0h] [rbp-58h] BYREF

  v3 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)a2 + 4224LL);
  v8 = 1;
  v9 = *(_QWORD *)(*(_QWORD *)a2 + 4184LL);
  LOBYTE(v10) = 1;
  if ( !a3 )
  {
    StorEtwNvmeControllerEvent(
      (__int64)Context,
      1,
      3LL,
      (__int64)L"Firmware activation caused null CQE.",
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
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    *(_WORD *)(*(_QWORD *)a2 + 4260LL) = 0;
    *(_WORD *)(*(_QWORD *)a2 + 4260LL) &= 0xF1FFu;
    *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(*(_QWORD *)a2 + 4260LL) & 0xFE01 | 0xC;
    v11 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
    if ( ((v11 >> 9) & 7) != 0 )
    {
      if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 1 )
      {
        if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 2 )
          goto LABEL_93;
        v12 = (unsigned __int8)(v11 >> 1) - 128;
        if ( !v12 )
          goto LABEL_93;
        v13 = v12 - 1;
        if ( !v13 )
          goto LABEL_93;
        v14 = v13 - 1;
        if ( !v14 )
          goto LABEL_93;
        v15 = v14 - 1;
        if ( !v15 )
          goto LABEL_93;
        v16 = v15 - 1;
        if ( !v16 )
          goto LABEL_93;
        v17 = v16 - 1;
        if ( !v17 )
          goto LABEL_93;
        goto LABEL_84;
      }
      v18 = (unsigned __int8)(v11 >> 1);
      if ( v18 <= 0x80 )
      {
        if ( v18 == 128 )
          goto LABEL_26;
        if ( v18 <= 0x11 )
        {
          if ( v18 == 17 )
            goto LABEL_35;
          if ( v18 <= 9 )
          {
            if ( v18 == 9 )
              goto LABEL_26;
            if ( !v18 )
              goto LABEL_26;
            v19 = v18 - 1;
            if ( !v19 )
              goto LABEL_26;
            v20 = v19 - 1;
            if ( !v20 )
              goto LABEL_26;
            v21 = v20 - 1;
            if ( !v21 )
              goto LABEL_26;
            v23 = v21 - 2;
            v22 = v23 == 0;
LABEL_23:
            if ( v22 )
              goto LABEL_26;
            v24 = v23 - 1;
            if ( !v24 )
              goto LABEL_26;
            v25 = v24 - 1;
            if ( !v25 )
              goto LABEL_26;
            goto LABEL_73;
          }
          v26 = v18 - 10;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( !v28 )
                goto LABEL_26;
              v29 = v28 - 1;
              if ( !v29 )
                goto LABEL_26;
              v30 = v29 - 1;
              if ( !v30 )
                goto LABEL_26;
              v31 = v30 - 1;
              if ( !v31 )
                goto LABEL_26;
              if ( v31 != 1 )
                goto LABEL_93;
            }
LABEL_35:
            v6 = -2147483210;
            goto LABEL_27;
          }
LABEL_26:
          v6 = -1073741808;
LABEL_27:
          *(_DWORD *)(v9 + 48) = v6;
          *(_QWORD *)(v9 + 56) = 0LL;
          goto LABEL_121;
        }
        if ( v18 <= 0x1A )
        {
          if ( v18 == 26 )
            goto LABEL_46;
          v32 = v18 - 18;
          if ( !v32 )
            goto LABEL_46;
          v33 = v32 - 1;
          if ( !v33 )
            goto LABEL_46;
          v34 = v33 - 1;
          if ( !v34 )
          {
            v6 = -1073741800;
            goto LABEL_27;
          }
          v35 = v34 - 1;
          if ( !v35 )
            goto LABEL_93;
          v36 = v35 - 1;
          if ( !v36 )
            goto LABEL_46;
          v38 = v36 - 2;
          v37 = v38 == 0;
          goto LABEL_44;
        }
        v39 = v18 - 27;
        if ( !v39 )
        {
          v6 = -1073741637;
          goto LABEL_27;
        }
        v40 = v39 - 1;
        if ( !v40 )
          goto LABEL_26;
        v41 = v40 - 2;
        if ( v41 )
        {
          v23 = v41 - 1;
          v22 = v23 == 0;
          goto LABEL_23;
        }
LABEL_85:
        v6 = -1073741790;
        goto LABEL_27;
      }
      v42 = v18 - 129;
      if ( !v42 )
        goto LABEL_26;
      v25 = v42 - 1;
      if ( !v25 )
        goto LABEL_85;
LABEL_73:
      v52 = v25 == 1;
LABEL_92:
      if ( !v52 )
        goto LABEL_93;
      goto LABEL_26;
    }
    v43 = (unsigned __int8)(v11 >> 1);
    if ( v43 > 0x80 )
    {
      v63 = v43 - 129;
      if ( !v63 )
        goto LABEL_26;
      v25 = v63 - 1;
      if ( !v25 )
      {
        v6 = -1073741661;
        goto LABEL_27;
      }
      goto LABEL_73;
    }
    if ( v43 == 128 )
      goto LABEL_26;
    if ( v43 > 0xE )
    {
      if ( v43 <= 0x16 )
      {
        if ( v43 == 22 )
          goto LABEL_26;
        v53 = v43 - 15;
        if ( !v53 )
          goto LABEL_26;
        v54 = v53 - 1;
        if ( !v54 )
          goto LABEL_26;
        v55 = v54 - 1;
        if ( !v55 )
          goto LABEL_26;
        v56 = v55 - 1;
        if ( !v56 )
          goto LABEL_26;
        v57 = v56 - 1;
        if ( !v57 )
          goto LABEL_26;
        v17 = v57 - 1;
        if ( v17 )
        {
LABEL_84:
          if ( v17 == 1 )
            goto LABEL_85;
LABEL_93:
          v6 = -1073741435;
          goto LABEL_27;
        }
LABEL_46:
        v6 = -1073741436;
        goto LABEL_27;
      }
      v58 = v43 - 24;
      if ( !v58 )
        goto LABEL_26;
      v59 = v58 - 1;
      if ( !v59 || (v60 = v59 - 1) == 0 )
      {
        v6 = -1073741643;
        goto LABEL_27;
      }
      v61 = v60 - 1;
      if ( v61 )
      {
        v62 = v61 - 1;
        if ( !v62 )
          goto LABEL_93;
        v52 = v62 == 2;
        goto LABEL_92;
      }
    }
    else
    {
      if ( v43 == 14 )
        goto LABEL_26;
      if ( v43 > 7 )
      {
        v48 = v43 - 8;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            v50 = v49 - 1;
            if ( v50 )
            {
              v51 = v50 - 1;
              if ( !v51 )
                goto LABEL_26;
              v25 = v51 - 1;
              if ( !v25 )
              {
                v6 = -1073740758;
                goto LABEL_27;
              }
              goto LABEL_73;
            }
          }
        }
      }
      else if ( v43 != 7 )
      {
        if ( !v43 )
          goto LABEL_27;
        v44 = v43 - 1;
        if ( !v44 )
          goto LABEL_26;
        v45 = v44 - 1;
        if ( !v45 )
          goto LABEL_26;
        v46 = v45 - 1;
        if ( !v46 )
          goto LABEL_93;
        v47 = v46 - 1;
        if ( !v47 )
          goto LABEL_93;
        v38 = v47 - 1;
        v37 = v38 == 0;
LABEL_44:
        if ( !v37 && v38 != 1 )
          goto LABEL_93;
        goto LABEL_46;
      }
    }
    v6 = -1073741248;
    goto LABEL_27;
  }
  v64 = *(_WORD *)(a3 + 14);
  if ( (v64 & 0xE00) == 0 )
  {
    if ( (v64 & 0x1FE) == 0 )
    {
      if ( (*((_QWORD *)Context + 121) & 0x10000LL) != 0 )
        goto LABEL_121;
      if ( IsNvmeFirmwareActivateWithoutResetEnabled((__int64)Context) && (*((_QWORD *)Context + 121) & 0x400LL) == 0 )
      {
        IoQueueWorkItemEx(*((PIO_WORKITEM *)Context + 166), NvmeAdapterFirmwareUpdateIdentifyWorker, v65, Context);
        v67 = L"Queued identify update worker after firmware activation.";
LABEL_106:
        StorEtwNvmeControllerEvent(
          (__int64)Context,
          1,
          4LL,
          (__int64)v67,
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
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0);
        goto LABEL_121;
      }
      *((_QWORD *)Context + 121) |= v66;
      *((_QWORD *)Context + 121) &= ~0x400uLL;
      v68 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 166);
      *((_QWORD *)Context + 121) |= 0x800000uLL;
      *((_QWORD *)Context + 163) = NvmeAdapterFirmwareActivateAfterResetCallback;
      *((_QWORD *)Context + 162) = a2;
      *((_QWORD *)Context + 164) = a2;
      Context[1320] = 0;
      IoQueueWorkItemEx(v68, NvmeAdapterFirmwareActivateResetWorker, v65, Context + 1296);
      v67 = L"Queued identify update worker after firmware activation (1).";
LABEL_105:
      LOBYTE(v10) = 0;
      goto LABEL_106;
    }
    goto LABEL_120;
  }
  if ( (v64 & 0xE00) != 0x200 )
  {
LABEL_120:
    StorEtwNvmeControllerEvent(
      (__int64)Context,
      1,
      2LL,
      (__int64)L"Firmware activation failed (2).",
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
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    v6 = -1073741435;
    goto LABEL_121;
  }
  v69 = v64 >> 1;
  if ( (unsigned __int8)v69 == 7 )
  {
    v70 = L"Controller reported invalid image on firmware activate.";
  }
  else
  {
    if ( (unsigned __int8)v69 == 11 )
    {
      StorEtwNvmeControllerEvent(
        (__int64)Context,
        1,
        3LL,
        (__int64)L"Controller requires conventional reset after firmware activation.  Device should be power cycled to complete update.",
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
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0);
      v6 = -2147483210;
      goto LABEL_121;
    }
    if ( (unsigned int)(unsigned __int8)v69 - 16 < 2 )
    {
      *((_QWORD *)Context + 121) |= 0x20uLL;
      v71 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 166);
      *((_QWORD *)Context + 121) |= 0x800000uLL;
      *((_QWORD *)Context + 163) = NvmeAdapterFirmwareActivateAfterResetCallback;
      *((_QWORD *)Context + 162) = a2;
      *((_QWORD *)Context + 164) = a2;
      Context[1320] = (v64 & 0x1FE) == 32;
      IoQueueWorkItemEx(v71, NvmeAdapterFirmwareActivateResetWorker, DelayedWorkQueue, Context + 1296);
      v67 = L"Queued controller reset after firmware activation (2).";
      goto LABEL_105;
    }
    if ( IsNvmeFirmwareActivateWithoutResetEnabled((__int64)Context)
      && (*((_QWORD *)Context + 121) & 0x400LL) == 0
      && (*((_QWORD *)Context + 121) & 0x10000LL) == 0 )
    {
      StorEtwNvmeControllerEvent(
        (__int64)Context,
        v8,
        2LL,
        (__int64)L"Firmware activation without reset failed, attempting to re-active with reset.",
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
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0);
      *((_QWORD *)Context + 121) |= 0x400uLL;
      v6 = NvmeAdapterFirmwareActivateIoctl(v7, (union _SLIST_HEADER *)Context, v9, a2, 0LL);
      v10 = v6 >> 31;
      goto LABEL_121;
    }
    v70 = L"Firmware activation failed (1).";
  }
  StorEtwNvmeControllerEvent(
    (__int64)Context,
    v8,
    2LL,
    (__int64)v70,
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
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0);
  v6 = -1073741808;
LABEL_121:
  *((_QWORD *)Context + 121) &= ~0x10000uLL;
  if ( (_BYTE)v10 )
  {
    *(_DWORD *)(v9 + 48) = v6;
    *((_QWORD *)Context + 121) &= ~0x800uLL;
    *((_QWORD *)Context + 121) &= ~0x400uLL;
    *((_QWORD *)Context + 121) &= ~0x800000uLL;
    _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
    NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)Context, (__int64)a2);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 152));
    v22 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v9 + 141) = -84;
    if ( v22 )
      goto LABEL_188;
    v102 = 0LL;
    IoGetActivityIdIrp(v9, &v102);
    v73 = *(_QWORD *)(v9 + 184);
    if ( *(_BYTE *)v73 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_188;
      v75 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_187;
    }
    if ( *(_BYTE *)v73 != 15 )
    {
      v72 = 12LL;
      if ( *(_BYTE *)v73 != 27 )
        goto LABEL_188;
      if ( *(_BYTE *)(v73 + 1) == 7 && !*(_DWORD *)(v73 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v74 = *(int **)(v9 + 56);
          if ( v74 )
            v3 = *v74;
          LODWORD(v95) = *(_DWORD *)(v9 + 48);
          LODWORD(v94) = v3;
          McTemplateK0pqd_EtwWriteTransfer(12LL, v73, &v102, v9, v94, v95);
        }
        goto LABEL_188;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_188;
      v75 = &EventPnpRequestComplete;
LABEL_187:
      LODWORD(v94) = *(_DWORD *)(v9 + 48);
      McTemplateK0pd_EtwWriteTransfer(v72, v75, &v102, v9, v94);
      goto LABEL_188;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_188;
    v76 = *(_QWORD *)(v73 + 8);
    v77 = 0;
    v78 = 0LL;
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v82 = 0;
    v83 = 0;
    if ( *(_BYTE *)(v76 + 2) == 40 )
    {
      v84 = 0LL;
      v100 = 0;
      if ( *(_DWORD *)(v76 + 20) )
        goto LABEL_188;
      v85 = 0;
      v101 = *(_DWORD *)(v76 + 56);
      if ( !v101 )
        goto LABEL_188;
      while ( 1 )
      {
        v72 = *(unsigned int *)(v76 + 4LL * v85 + 120);
        if ( (unsigned int)v72 >= 0x80 )
        {
          v86 = *(unsigned int *)(v76 + 16);
          if ( (unsigned int)v72 < (unsigned int)v86 )
          {
            v87 = (unsigned int)v72;
            v88 = *(_DWORD *)(v72 + v76) - 64;
            if ( v88 )
            {
              v72 = (unsigned int)(v88 - 1);
              if ( (_DWORD)v72 )
              {
                if ( (_DWORD)v72 == 1 )
                {
                  v72 = v87 + 40;
                  if ( v87 + 40 <= v86 )
                  {
                    if ( *(_DWORD *)(v87 + v76 + 12) )
                      v84 = (char *)(v87 + v76 + 32);
                    v78 = *(_BYTE **)(v87 + v76 + 24);
                    goto LABEL_158;
                  }
                }
              }
              else
              {
                v72 = v87 + 56;
                if ( v87 + 56 <= v86 )
                {
                  v100 = 1;
                  if ( *(_BYTE *)(v87 + v76 + 10) )
                    v84 = (char *)(v87 + v76 + 24);
                  v77 = *(_BYTE *)(v87 + v76 + 8);
                  v78 = *(_BYTE **)(v87 + v76 + 16);
                  v79 = *(_BYTE *)(v87 + v76 + 9);
                }
              }
            }
            else
            {
              v72 = v87 + 40;
              if ( v87 + 40 <= v86 )
              {
                if ( *(_BYTE *)(v87 + v76 + 10) )
                  v84 = (char *)(v87 + v76 + 24);
                v78 = *(_BYTE **)(v87 + v76 + 16);
LABEL_158:
                v79 = *(_BYTE *)(v87 + v76 + 9);
                v77 = *(_BYTE *)(v87 + v76 + 8);
LABEL_159:
                if ( v84 )
                {
                  v89 = *v84;
                  v83 = 0;
                  goto LABEL_162;
                }
                goto LABEL_188;
              }
            }
            if ( v100 )
              goto LABEL_159;
          }
        }
        if ( ++v85 >= v101 )
          goto LABEL_159;
      }
    }
    v89 = *(_BYTE *)(v76 + 72);
    v78 = *(_BYTE **)(v76 + 32);
    v79 = *(_BYTE *)(v76 + 11);
    v77 = *(_BYTE *)(v76 + 4);
    if ( *(_BYTE *)(v76 + 2) )
      goto LABEL_188;
LABEL_162:
    LOBYTE(v72) = v89 - 8;
    if ( (v72 & 0x5D) == 0 )
    {
      v90 = *(_BYTE *)(v76 + 3);
      if ( v90 == 1 || !v78 || !v79 )
      {
LABEL_181:
        if ( byte_140173441 < 0 )
        {
          if ( !v83 )
          {
            v82 = 0;
            v81 = 0;
            v80 = 0;
          }
          LOBYTE(v99) = v82;
          LOBYTE(v98) = v81;
          LOBYTE(v97) = v80;
          LOBYTE(v96) = v77;
          LOBYTE(v95) = v90;
          LODWORD(v94) = *(_DWORD *)(v9 + 48);
          McTemplateK0pduuuuup_EtwWriteTransfer(v72, v76, &v102, v9, v94, v95, v96, v97, v98, v99, v9);
        }
        goto LABEL_188;
      }
      v91 = *v78 & 0x7F;
      if ( v91 == 114 || v91 == 115 )
      {
        v72 = (unsigned __int64)&v78[v79];
        LOBYTE(v76) = 0;
        if ( (unsigned __int64)(v78 + 8) > v72 )
          goto LABEL_179;
        v81 = v78[2];
        v80 = v78[1] & 0xF;
        v82 = v78[3];
      }
      else
      {
        v72 = (unsigned __int64)&v78[v79];
        LOBYTE(v76) = 0;
        if ( (unsigned __int64)(v78 + 8) > v72 )
          goto LABEL_179;
        v92 = v78 + 13;
        v80 = v78[2] & 0xF;
        v93 = v79;
        if ( (unsigned int)(unsigned __int8)v78[7] + 8 <= v79 )
          v93 = (unsigned __int8)v78[7] + 8;
        v72 = (unsigned __int64)&v78[v93];
        if ( (unsigned __int64)v92 <= v72 )
          v81 = v78[12];
        if ( (unsigned __int64)(v78 + 14) > v72 )
          v82 = 0;
        else
          v82 = *v92;
      }
      LOBYTE(v76) = 1;
LABEL_179:
      if ( (_BYTE)v76 )
        v83 = 1;
      goto LABEL_181;
    }
LABEL_188:
    IofCompleteRequest((PIRP)v9, 1);
  }
}
