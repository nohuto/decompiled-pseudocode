/*
 * XREFs of RaUnitStorageDataCollectionIoctl @ 0x14018B6FC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1400C2778 (StorpTelemetrySendUnitIoSizeDistributionData.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     StorpInitializePerUnitIoSizeDistribution @ 0x14018FEF4 (StorpInitializePerUnitIoSizeDistribution.c)
 */

__int64 __fastcall RaUnitStorageDataCollectionIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  unsigned int v5; // esi
  _DWORD *v6; // rcx
  __int64 *v7; // rdi
  unsigned int v8; // r8d
  int v9; // r9d
  unsigned int v10; // eax
  int v11; // ecx
  char v12; // al
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 v18; // rdx
  _BYTE *v19; // r9
  unsigned __int8 v20; // r14
  char v21; // r11
  char v22; // di
  char v23; // r10
  char v24; // r15
  char *v25; // r15
  unsigned int v26; // r13d
  unsigned __int64 v27; // r12
  __int64 v28; // r8
  int v29; // ecx
  char v30; // r12
  char v31; // cl
  char v32; // al
  char v33; // r8
  char *v34; // r10
  unsigned int v35; // eax
  char v37; // [rsp+60h] [rbp-58h]
  char v38; // [rsp+61h] [rbp-57h]
  unsigned int v39; // [rsp+64h] [rbp-54h]
  GUID v40; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0;
  v5 = 0;
  v6 = *(_DWORD **)(a2 + 24);
  v7 = (__int64 *)(a2 + 184);
  if ( !v6 )
    goto LABEL_21;
  v8 = *(_DWORD *)(*v7 + 16);
  if ( v8 < 0x14 || *v6 != 20 )
    goto LABEL_21;
  v9 = v6[3];
  v10 = v9 + 16;
  if ( (unsigned int)(v9 + 16) < 0x14 )
    v10 = 20;
  if ( v6[1] == v10 && v8 >= v10 && ((v11 = v6[2], v11 == 1) || (unsigned int)(v11 - 2) <= 1) && !v9 )
  {
    if ( g_StorpTraceLoggingIoSizeDistributionEnabled )
    {
      v5 = -1073741637;
    }
    else
    {
      switch ( v11 )
      {
        case 1:
          if ( (*(_BYTE *)(a1 + 507) & 0x10) == 0 )
            v5 = StorpInitializePerUnitIoSizeDistribution(a1);
          break;
        case 2:
          v12 = *(_BYTE *)(a1 + 507);
          if ( (v12 & 0x10) != 0 )
            *(_BYTE *)(a1 + 507) = v12 & 0xEF;
          break;
        case 3:
          StorpTelemetrySendUnitIoSizeDistributionData(a1);
          break;
      }
    }
  }
  else
  {
LABEL_21:
    v5 = -1073741811;
  }
  v13 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( !v13 )
  {
    v40 = 0LL;
    IoGetActivityIdIrp(a2, &v40);
    v15 = *v7;
    if ( *(_BYTE *)*v7 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_88;
      v17 = &EventNonReadWriteRequestComplete;
      goto LABEL_87;
    }
    if ( *(_BYTE *)*v7 != 15 )
    {
      if ( *(_BYTE *)*v7 != 27 )
        goto LABEL_88;
      if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v16 = *(int **)(a2 + 56);
          if ( v16 )
            v3 = *v16;
          McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v40, a2, v3, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_88;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_88;
      v17 = &EventPnpRequestComplete;
LABEL_87:
      McTemplateK0pd_EtwWriteTransfer(v14, v17, &v40, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_88;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_88;
    v18 = *(_QWORD *)(v15 + 8);
    v19 = 0LL;
    v37 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    if ( *(_BYTE *)(v18 + 2) != 40 )
    {
      v31 = *(_BYTE *)(v18 + 72);
      v19 = *(_BYTE **)(v18 + 32);
      v20 = *(_BYTE *)(v18 + 11);
      v30 = *(_BYTE *)(v18 + 4);
      if ( *(_BYTE *)(v18 + 2) )
        goto LABEL_88;
LABEL_62:
      LOBYTE(v14) = v31 - 8;
      if ( (v14 & 0x5D) != 0 )
        goto LABEL_88;
      if ( *(_BYTE *)(v18 + 3) == 1 || !v19 || !v20 )
        goto LABEL_81;
      v32 = *v19 & 0x7F;
      if ( v32 == 114 || v32 == 115 )
      {
        v14 = (unsigned __int64)&v19[v20];
        v33 = 0;
        if ( (unsigned __int64)(v19 + 8) > v14 )
          goto LABEL_79;
        v22 = v19[2];
        v21 = v19[1] & 0xF;
        v23 = v19[3];
      }
      else
      {
        v14 = (unsigned __int64)&v19[v20];
        v33 = 0;
        if ( (unsigned __int64)(v19 + 8) > v14 )
          goto LABEL_79;
        v34 = v19 + 13;
        v21 = v19[2] & 0xF;
        v35 = v20;
        if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
          v35 = (unsigned __int8)v19[7] + 8;
        v14 = (unsigned __int64)&v19[v35];
        if ( (unsigned __int64)v34 <= v14 )
          v22 = v19[12];
        if ( (unsigned __int64)(v19 + 14) > v14 )
          v23 = 0;
        else
          v23 = *v34;
      }
      v33 = 1;
LABEL_79:
      if ( v33 )
        v24 = 1;
LABEL_81:
      if ( byte_140173441 < 0 )
      {
        if ( !v24 )
        {
          v23 = 0;
          v22 = 0;
          v21 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v14,
          v18,
          &v40,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v18 + 3),
          v30,
          v21,
          v22,
          v23,
          a2);
      }
      goto LABEL_88;
    }
    v25 = 0LL;
    v38 = 0;
    if ( !*(_DWORD *)(v18 + 20) )
    {
      v26 = 0;
      v39 = *(_DWORD *)(v18 + 56);
      if ( v39 )
      {
        do
        {
          v14 = *(unsigned int *)(v18 + 4LL * v26 + 120);
          if ( (unsigned int)v14 >= 0x80 )
          {
            v27 = *(unsigned int *)(v18 + 16);
            if ( (unsigned int)v14 < (unsigned int)v27 )
            {
              v28 = (unsigned int)v14;
              v29 = *(_DWORD *)(v14 + v18) - 64;
              if ( v29 )
              {
                v14 = (unsigned int)(v29 - 1);
                if ( (_DWORD)v14 )
                {
                  if ( (_DWORD)v14 == 1 )
                  {
                    v14 = v28 + 40;
                    if ( v28 + 40 <= v27 )
                    {
                      if ( *(_DWORD *)(v28 + v18 + 12) )
                        v25 = (char *)(v28 + v18 + 32);
                      v19 = *(_BYTE **)(v28 + v18 + 24);
LABEL_47:
                      v30 = *(_BYTE *)(v28 + v18 + 8);
                      v20 = *(_BYTE *)(v28 + v18 + 9);
                      goto LABEL_56;
                    }
                  }
                }
                else
                {
                  v14 = v28 + 56;
                  if ( v28 + 56 <= v27 )
                  {
                    v38 = 1;
                    if ( *(_BYTE *)(v28 + v18 + 10) )
                      v25 = (char *)(v28 + v18 + 24);
                    v19 = *(_BYTE **)(v28 + v18 + 16);
                    v20 = *(_BYTE *)(v28 + v18 + 9);
                    v37 = *(_BYTE *)(v28 + v18 + 8);
                  }
                }
              }
              else
              {
                v14 = v28 + 40;
                if ( v28 + 40 <= v27 )
                {
                  if ( *(_BYTE *)(v28 + v18 + 10) )
                    v25 = (char *)(v28 + v18 + 24);
                  v19 = *(_BYTE **)(v28 + v18 + 16);
                  goto LABEL_47;
                }
              }
              if ( v38 )
                break;
            }
          }
          ++v26;
        }
        while ( v26 < v39 );
        v30 = v37;
LABEL_56:
        if ( v25 )
        {
          v31 = *v25;
          v24 = 0;
          goto LABEL_62;
        }
      }
    }
  }
LABEL_88:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
