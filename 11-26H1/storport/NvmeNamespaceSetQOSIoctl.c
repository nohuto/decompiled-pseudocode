/*
 * XREFs of NvmeNamespaceSetQOSIoctl @ 0x140112EC4
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorEtwNvmeNamespaceEvent @ 0x1400B2058 (StorEtwNvmeNamespaceEvent.c)
 *     StorpTelemetryMarkNamespaceResponsive @ 0x1400BCF44 (StorpTelemetryMarkNamespaceResponsive.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceSetQOSIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // ebx
  __int64 v4; // r14
  unsigned int v7; // edi
  const wchar_t *v8; // r15
  int v9; // eax
  unsigned int v10; // r10d
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // rax
  int v20; // eax
  wchar_t *Buffer; // rax
  bool v22; // zf
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  int *v25; // rax
  const EVENT_DESCRIPTOR *v26; // rdx
  __int64 v27; // rdx
  _BYTE *v28; // r9
  unsigned __int8 v29; // r14
  char v30; // r11
  char v31; // si
  char v32; // r10
  char v33; // r15
  char *v34; // r15
  unsigned int v35; // r13d
  unsigned __int64 v36; // r12
  __int64 v37; // r8
  int v38; // ecx
  char v39; // r12
  char v40; // cl
  char v41; // al
  char v42; // r8
  char *v43; // r10
  unsigned int v44; // eax
  __int64 v46; // [rsp+20h] [rbp-E8h]
  __int64 v47; // [rsp+28h] [rbp-E0h]
  __int64 v48; // [rsp+30h] [rbp-D8h]
  __int64 v49; // [rsp+38h] [rbp-D0h]
  char v50; // [rsp+A0h] [rbp-68h]
  char v51; // [rsp+A1h] [rbp-67h]
  unsigned int v52; // [rsp+A4h] [rbp-64h]
  struct _UNICODE_STRING GuidString; // [rsp+A8h] [rbp-60h] BYREF
  GUID v54; // [rsp+B8h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  GuidString = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( (*(_BYTE *)(v2 + 136) & 2) != 0 )
  {
    v7 = -1073741637;
    goto LABEL_36;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x24u )
  {
    v7 = -1073741820;
    goto LABEL_36;
  }
  if ( *(_DWORD *)v4 != 36 || *(_DWORD *)(v4 + 4) != 36 )
    goto LABEL_35;
  RtlStringFromGUID((const GUID *const)(a1 + 160), &GuidString);
  if ( *(_BYTE *)(v4 + 8) )
  {
    v10 = *(_DWORD *)(v4 + 20);
    if ( v10 >= 0x3E8 && v10 == 1000 * (v10 / 0x3E8) )
    {
      v11 = *(_DWORD *)(v4 + 24);
      if ( v11 >= 0x3E8 && v11 == 1000 * (v11 / 0x3E8) )
      {
        v12 = *(_DWORD *)(v4 + 16);
        v13 = -1;
        if ( v12 == -1 || v12 == 500 * (v12 / 0x1F4) )
        {
          v14 = *(_DWORD *)(v4 + 28);
          if ( (v14 == -1 || v14 == 500 * (v14 / 0x1F4))
            && *(_DWORD *)(v4 + 12) <= 0xFFu
            && v10 < 0x3E80000
            && v11 < 0x3E80000 )
          {
            *(_BYTE *)(a1 + 668) = *(_BYTE *)(v4 + 12);
            v15 = *(_DWORD *)(v4 + 20) / 0x3E8u;
            *(_WORD *)(a1 + 652) = v15;
            v16 = *(_DWORD *)(v4 + 16);
            if ( v16 == -1 )
              v17 = -1;
            else
              v17 = v16 / 0x1F4;
            *(_DWORD *)(a1 + 664) = v17;
            *(_WORD *)(a1 + 654) = *(_DWORD *)(v4 + 24) / 0x3E8u;
            *(_DWORD *)(a1 + 660) = *(_DWORD *)(v4 + 32);
            v18 = *(_DWORD *)(v4 + 28);
            if ( v18 != -1 )
              v13 = v18 / 0x1F4;
            *(_DWORD *)(a1 + 656) = v13;
            v19 = 10000000 * ((unsigned __int16)v15 + 1 + ((v17 + v13) >> 1));
            if ( (unsigned int)v19 > 0x11E1A300 )
              v19 = 300000000LL;
            *(_QWORD *)(a1 + 672) = v19;
            v20 = *(_DWORD *)(a1 + 648);
            if ( (v20 & 1) != 0 )
            {
              v8 = L"NVMe updating QoS settings";
            }
            else
            {
              v8 = L"NVMe enabling QoS";
              v20 |= 1u;
            }
            *(_DWORD *)(a1 + 648) = v20 | 2;
            goto LABEL_32;
          }
        }
      }
    }
LABEL_35:
    v7 = -1073741811;
    goto LABEL_36;
  }
  v9 = *(_DWORD *)(a1 + 648);
  if ( (v9 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 660) = 0LL;
    v8 = L"NVMe disabling QoS";
    *(_QWORD *)(a1 + 652) = 0LL;
    *(_DWORD *)(a1 + 648) = v9 & 0xFFFFFFFE;
    *(_QWORD *)(a1 + 672) = -1LL;
    *(_QWORD *)(v2 + 1444) = 0LL;
    *(_DWORD *)(v2 + 1440) = 0;
    StorpTelemetryMarkNamespaceResponsive(a1);
    *(_QWORD *)(a1 + 112) &= ~0x200uLL;
    *(_DWORD *)(a1 + 648) |= 2u;
  }
LABEL_32:
  Buffer = (wchar_t *)&word_140152E7C;
  if ( GuidString.Buffer )
    Buffer = GuidString.Buffer;
  StorEtwNvmeNamespaceEvent(a1, 1, 4, (__int64)v8, Buffer, 0, (void *)&word_140152E7C, 0);
LABEL_36:
  v22 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v22 )
    goto LABEL_102;
  v54 = 0LL;
  IoGetActivityIdIrp(a2, &v54);
  v24 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v24 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_102;
    LODWORD(v46) = *(_DWORD *)(a2 + 48);
    v26 = &EventNonReadWriteRequestComplete;
    goto LABEL_101;
  }
  if ( *(_BYTE *)v24 != 15 )
  {
    if ( *(_BYTE *)v24 != 27 )
      goto LABEL_102;
    if ( *(_BYTE *)(v24 + 1) == 7 && !*(_DWORD *)(v24 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v25 = *(int **)(a2 + 56);
        if ( v25 )
          v3 = *v25;
        LODWORD(v47) = *(_DWORD *)(a2 + 48);
        LODWORD(v46) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v23, v24, &v54, a2, v46, v47);
      }
      goto LABEL_102;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_102;
    v26 = &EventPnpRequestComplete;
    LODWORD(v46) = *(_DWORD *)(a2 + 48);
LABEL_101:
    McTemplateK0pd_EtwWriteTransfer(v23, v26, &v54, a2, v46);
    goto LABEL_102;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_102;
  v27 = *(_QWORD *)(v24 + 8);
  v28 = 0LL;
  v50 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  if ( *(_BYTE *)(v27 + 2) != 40 )
  {
    v40 = *(_BYTE *)(v27 + 72);
    v28 = *(_BYTE **)(v27 + 32);
    v29 = *(_BYTE *)(v27 + 11);
    v39 = *(_BYTE *)(v27 + 4);
    if ( *(_BYTE *)(v27 + 2) )
      goto LABEL_102;
LABEL_76:
    LOBYTE(v23) = v40 - 8;
    if ( (v23 & 0x5D) != 0 )
      goto LABEL_102;
    if ( *(_BYTE *)(v27 + 3) == 1 || !v28 || !v29 )
      goto LABEL_95;
    v41 = *v28 & 0x7F;
    if ( v41 == 114 || v41 == 115 )
    {
      v23 = (unsigned __int64)&v28[v29];
      v42 = 0;
      if ( (unsigned __int64)(v28 + 8) > v23 )
        goto LABEL_93;
      v31 = v28[2];
      v30 = v28[1] & 0xF;
      v32 = v28[3];
    }
    else
    {
      v23 = (unsigned __int64)&v28[v29];
      v42 = 0;
      if ( (unsigned __int64)(v28 + 8) > v23 )
        goto LABEL_93;
      v43 = v28 + 13;
      v30 = v28[2] & 0xF;
      v44 = v29;
      if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
        v44 = (unsigned __int8)v28[7] + 8;
      v23 = (unsigned __int64)&v28[v44];
      if ( (unsigned __int64)v43 <= v23 )
        v31 = v28[12];
      if ( (unsigned __int64)(v28 + 14) > v23 )
        v32 = 0;
      else
        v32 = *v43;
    }
    v42 = 1;
LABEL_93:
    if ( v42 )
      v33 = 1;
LABEL_95:
    if ( byte_140173441 < 0 )
    {
      if ( !v33 )
      {
        v32 = 0;
        v31 = 0;
        v30 = 0;
      }
      LOBYTE(v49) = v30;
      LOBYTE(v48) = v39;
      LOBYTE(v47) = *(_BYTE *)(v27 + 3);
      LODWORD(v46) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v23, v27, &v54, a2, v46, v47, v48, v49, v31, v32, a2);
    }
    goto LABEL_102;
  }
  v34 = 0LL;
  v51 = 0;
  if ( !*(_DWORD *)(v27 + 20) )
  {
    v35 = 0;
    v52 = *(_DWORD *)(v27 + 56);
    if ( v52 )
    {
      do
      {
        v23 = *(unsigned int *)(v27 + 4LL * v35 + 120);
        if ( (unsigned int)v23 >= 0x80 )
        {
          v36 = *(unsigned int *)(v27 + 16);
          if ( (unsigned int)v23 < (unsigned int)v36 )
          {
            v37 = (unsigned int)v23;
            v38 = *(_DWORD *)(v23 + v27) - 64;
            if ( v38 )
            {
              v23 = (unsigned int)(v38 - 1);
              if ( (_DWORD)v23 )
              {
                if ( (_DWORD)v23 == 1 )
                {
                  v23 = v37 + 40;
                  if ( v37 + 40 <= v36 )
                  {
                    if ( *(_DWORD *)(v37 + v27 + 12) )
                      v34 = (char *)(v37 + v27 + 32);
                    v28 = *(_BYTE **)(v37 + v27 + 24);
LABEL_61:
                    v39 = *(_BYTE *)(v37 + v27 + 8);
                    v29 = *(_BYTE *)(v37 + v27 + 9);
                    goto LABEL_70;
                  }
                }
              }
              else
              {
                v23 = v37 + 56;
                if ( v37 + 56 <= v36 )
                {
                  v51 = 1;
                  if ( *(_BYTE *)(v37 + v27 + 10) )
                    v34 = (char *)(v37 + v27 + 24);
                  v28 = *(_BYTE **)(v37 + v27 + 16);
                  v29 = *(_BYTE *)(v37 + v27 + 9);
                  v50 = *(_BYTE *)(v37 + v27 + 8);
                }
              }
            }
            else
            {
              v23 = v37 + 40;
              if ( v37 + 40 <= v36 )
              {
                if ( *(_BYTE *)(v37 + v27 + 10) )
                  v34 = (char *)(v37 + v27 + 24);
                v28 = *(_BYTE **)(v37 + v27 + 16);
                goto LABEL_61;
              }
            }
            if ( v51 )
              break;
          }
        }
        ++v35;
      }
      while ( v35 < v52 );
      v39 = v50;
LABEL_70:
      if ( v34 )
      {
        v40 = *v34;
        v33 = 0;
        goto LABEL_76;
      }
    }
  }
LABEL_102:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
