/*
 * XREFs of NvmeNamespaceStartDeviceIrp @ 0x1401A9E6C
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140040B50 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidGetD3ColdCapability @ 0x14005C47C (RaidGetD3ColdCapability.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidGetD3ColdInterface @ 0x14007FA64 (RaidGetD3ColdInterface.c)
 *     StorpInitializeNvmeNamespaceTelemetry @ 0x1400B7678 (StorpInitializeNvmeNamespaceTelemetry.c)
 *     NvmeNamespaceCreateSystemThread @ 0x140102D70 (NvmeNamespaceCreateSystemThread.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceStartDeviceIrp(__int64 a1, __int64 a2)
{
  int v2; // r14d
  int v3; // ebx
  __int64 v4; // r15
  char D3ColdCapability; // al
  int v8; // edx
  unsigned int v9; // r13d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  int *v18; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  __int64 v20; // rdx
  _BYTE *v21; // r9
  unsigned __int8 v22; // r14
  char v23; // r10
  char v24; // di
  char v25; // r11
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
  char *v36; // r11
  unsigned int v37; // eax
  __int64 v39; // [rsp+20h] [rbp-E0h]
  __int64 v40; // [rsp+28h] [rbp-D8h]
  char v41; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v42; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v43; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v44; // [rsp+6Ch] [rbp-94h] BYREF
  int v45; // [rsp+70h] [rbp-90h] BYREF
  int v46; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int SystemThread; // [rsp+78h] [rbp-88h]
  GUID v48; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+90h] [rbp-70h] BYREF
  GUID *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  __int64 v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  __int64 v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  int *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  int *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  unsigned int *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  _BYTE v62[16]; // [rsp+110h] [rbp+10h] BYREF
  __int16 *v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  __int16 *v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  char *v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]

  v2 = *(_DWORD *)(a1 + 96);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v2 == 1 )
    goto LABEL_9;
  _InterlockedExchange((volatile __int32 *)(a1 + 96), 1);
  if ( (int)RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL)) < 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 136LL) &= ~4u;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 200) & 2) != 0
      || (D3ColdCapability = RaidGetD3ColdCapability(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL)),
          v8 = 4,
          !D3ColdCapability) )
    {
      v8 = 0;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 136LL) = v8 | *(_DWORD *)(*(_QWORD *)(a1 + 128) + 136LL) & 0xFFFFFFFB;
  }
  if ( v2 != 2 )
  {
LABEL_9:
    NvmeNamespaceCreateSystemThread(a1);
    StorpInitializeNvmeNamespaceTelemetry(a1);
  }
  SystemThread = NvmeNamespaceCreateSystemThread(a1);
  v9 = SystemThread;
  StorpInitializeNvmeNamespaceTelemetry(a1);
  if ( (unsigned int)dword_140172178 > 5 && tlgKeywordOn(v10, 0x400000000000LL) )
  {
    v11 = *(_QWORD *)(v4 + 128);
    v50 = &v48;
    *(_QWORD *)&v48.Data1 = 0x1000000LL;
    v51 = 8LL;
    v53 = 16LL;
    v52 = v11 + 1048;
    v54 = a1 + 160;
    v45 = *(_DWORD *)(a1 + 56);
    v56 = &v45;
    v55 = 16LL;
    v57 = 4LL;
    v46 = *(_DWORD *)(v11 + 56);
    v58 = &v46;
    v44 = *(unsigned __int16 *)(v4 + 4);
    v60 = &v44;
    v59 = 4LL;
    v61 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v62, *(const wchar_t **)(v11 + 1032));
    v12 = *(unsigned __int16 *)(v4 + 940);
    v63 = &v43;
    v42 = *(_WORD *)(v4 + 942);
    v65 = &v42;
    v41 = *(_BYTE *)(v4 + 944);
    v67 = &v41;
    v43 = v12;
    v64 = 2LL;
    v66 = 2LL;
    v68 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(v12, (unsigned __int8 *)dword_140165262, v13, v14, 0xCu, &v49);
  }
  v15 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( !v15 )
  {
    v48 = 0LL;
    IoGetActivityIdIrp(a2, &v48);
    v17 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v17 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_79;
      v19 = &EventNonReadWriteRequestComplete;
      goto LABEL_78;
    }
    if ( *(_BYTE *)v17 != 15 )
    {
      if ( *(_BYTE *)v17 != 27 )
        goto LABEL_79;
      if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v18 = *(int **)(a2 + 56);
          if ( v18 )
            v3 = *v18;
          LODWORD(v40) = *(_DWORD *)(a2 + 48);
          LODWORD(v39) = v3;
          McTemplateK0pqd_EtwWriteTransfer(v16, v17, &v48, a2, v39, v40);
        }
        goto LABEL_79;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_79;
      v19 = &EventPnpRequestComplete;
LABEL_78:
      LODWORD(v39) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v16, v19, &v48, a2, v39);
      goto LABEL_79;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_79;
    v20 = *(_QWORD *)(v17 + 8);
    v21 = 0LL;
    LOBYTE(v42) = 0;
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
        goto LABEL_79;
LABEL_53:
      LOBYTE(v16) = v33 - 8;
      if ( (v16 & 0x5D) != 0 )
        goto LABEL_79;
      v34 = *(_BYTE *)(v20 + 3);
      if ( v34 == 1 || !v21 || !v22 )
        goto LABEL_72;
      v35 = *v21 & 0x7F;
      if ( v35 == 114 || v35 == 115 )
      {
        v16 = (unsigned __int64)&v21[v22];
        LOBYTE(v20) = 0;
        if ( (unsigned __int64)(v21 + 8) > v16 )
          goto LABEL_70;
        v24 = v21[2];
        v23 = v21[1] & 0xF;
        v25 = v21[3];
      }
      else
      {
        v16 = (unsigned __int64)&v21[v22];
        LOBYTE(v20) = 0;
        if ( (unsigned __int64)(v21 + 8) > v16 )
          goto LABEL_70;
        v36 = v21 + 13;
        v23 = v21[2] & 0xF;
        v37 = v22;
        if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
          v37 = (unsigned __int8)v21[7] + 8;
        v16 = (unsigned __int64)&v21[v37];
        if ( (unsigned __int64)v36 <= v16 )
          v24 = v21[12];
        if ( (unsigned __int64)(v21 + 14) > v16 )
          v25 = 0;
        else
          v25 = *v36;
      }
      LOBYTE(v20) = 1;
LABEL_70:
      if ( (_BYTE)v20 )
        v26 = 1;
LABEL_72:
      if ( byte_140173441 < 0 )
      {
        if ( !v26 )
        {
          v25 = 0;
          v24 = 0;
          v23 = 0;
        }
        LOBYTE(v40) = v34;
        LODWORD(v39) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v16, v20, &v48, a2, v39, v40, v32, v23, v24, v25, a2);
      }
      goto LABEL_79;
    }
    v27 = 0LL;
    v41 = 0;
    if ( !*(_DWORD *)(v20 + 20) )
    {
      v28 = 0;
      v44 = *(_DWORD *)(v20 + 56);
      if ( v44 )
      {
        do
        {
          v16 = *(unsigned int *)(v20 + 4LL * v28 + 120);
          if ( (unsigned int)v16 >= 0x80 )
          {
            v29 = *(unsigned int *)(v20 + 16);
            if ( (unsigned int)v16 < (unsigned int)v29 )
            {
              v30 = (unsigned int)v16;
              v31 = *(_DWORD *)(v16 + v20) - 64;
              if ( v31 )
              {
                v16 = (unsigned int)(v31 - 1);
                if ( (_DWORD)v16 )
                {
                  if ( (_DWORD)v16 == 1 )
                  {
                    v16 = v30 + 40;
                    if ( v30 + 40 <= v29 )
                    {
                      if ( *(_DWORD *)(v30 + v20 + 12) )
                        v27 = (char *)(v30 + v20 + 32);
                      v21 = *(_BYTE **)(v30 + v20 + 24);
LABEL_38:
                      v32 = *(_BYTE *)(v30 + v20 + 8);
                      v22 = *(_BYTE *)(v30 + v20 + 9);
                      goto LABEL_47;
                    }
                  }
                }
                else
                {
                  v16 = v30 + 56;
                  if ( v30 + 56 <= v29 )
                  {
                    v41 = 1;
                    if ( *(_BYTE *)(v30 + v20 + 10) )
                      v27 = (char *)(v30 + v20 + 24);
                    v21 = *(_BYTE **)(v30 + v20 + 16);
                    v22 = *(_BYTE *)(v30 + v20 + 9);
                    LOBYTE(v42) = *(_BYTE *)(v30 + v20 + 8);
                  }
                }
              }
              else
              {
                v16 = v30 + 40;
                if ( v30 + 40 <= v29 )
                {
                  if ( *(_BYTE *)(v30 + v20 + 10) )
                    v27 = (char *)(v30 + v20 + 24);
                  v21 = *(_BYTE **)(v30 + v20 + 16);
                  goto LABEL_38;
                }
              }
              if ( v41 )
                break;
            }
          }
          ++v28;
        }
        while ( v28 < v44 );
        v32 = v42;
LABEL_47:
        if ( v27 )
        {
          v33 = *v27;
          v26 = 0;
          goto LABEL_53;
        }
      }
    }
  }
LABEL_79:
  IofCompleteRequest((PIRP)a2, 0);
  return SystemThread;
}
