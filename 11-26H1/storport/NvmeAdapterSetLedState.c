/*
 * XREFs of NvmeAdapterSetLedState @ 0x1400DCBC8
 * Callers:
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x14004A5A0 (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterSetLedStateByAcpiDsm @ 0x14008F3D4 (NvmeAdapterSetLedStateByAcpiDsm.c)
 *     NvmeAdapterSetLedStateByNpem @ 0x14008F4EC (NvmeAdapterSetLedStateByNpem.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterSetLedState(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rsi
  unsigned int v7; // eax
  int v8; // ebp
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  _BYTE *v18; // r9
  unsigned __int8 v19; // r14
  char v20; // si
  char v21; // r11
  char v22; // r10
  char v23; // r15
  char *v24; // r15
  unsigned int v25; // r13d
  unsigned __int64 v26; // r12
  __int64 v27; // r8
  int v28; // ecx
  char v29; // r12
  char v30; // cl
  char v31; // r8
  char v32; // al
  char *v33; // r10
  unsigned int v34; // eax
  char v36; // [rsp+60h] [rbp-58h]
  char v37; // [rsp+61h] [rbp-57h]
  unsigned int v38; // [rsp+64h] [rbp-54h]
  GUID v39; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_DWORD *)(v2 + 16) >= 0x10u
    && v4
    && *(_DWORD *)v4 == 16
    && *(_DWORD *)(v4 + 4) >= 0x10u
    && (v7 = *(_DWORD *)(v4 + 8), (v7 & 0x3FF) != 0)
    && RtlNumberOfSetBitsUlongPtr(v7) == 1 )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      v8 = NvmeAdapterSetLedStateByAcpiDsm(a1[1], v4);
      if ( v8 == -1073741637 )
        v8 = NvmeAdapterSetLedStateByNpem(a1[1], v4);
      if ( v8 >= 0 )
      {
        v9 = a1[74];
        v10 = *(_DWORD *)(v4 + 8);
        if ( *(_BYTE *)(v4 + 12) )
          *(_DWORD *)(v9 + 160) |= v10;
        else
          *(_DWORD *)(v9 + 160) &= ~v10;
        v11 = a1[18];
        if ( (v11 & 0x40000) == 0 )
          a1[18] = v11 | 0x40000;
      }
    }
    else
    {
      v8 = -1073741496;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  v12 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( !v12 )
  {
    v39 = 0LL;
    IoGetActivityIdIrp(a2, &v39);
    v14 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v14 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_84;
      v16 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_83;
    }
    if ( *(_BYTE *)v14 != 15 )
    {
      if ( *(_BYTE *)v14 != 27 )
        goto LABEL_84;
      if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v15 = *(int **)(a2 + 56);
          if ( v15 )
            v3 = *v15;
          McTemplateK0pqd_EtwWriteTransfer(v13, v14, &v39, a2, v3, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_84;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_84;
      v16 = &EventPnpRequestComplete;
LABEL_83:
      McTemplateK0pd_EtwWriteTransfer(v13, v16, &v39, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_84;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_84;
    v17 = *(_QWORD *)(v14 + 8);
    v18 = 0LL;
    v36 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    if ( *(_BYTE *)(v17 + 2) != 40 )
    {
      v30 = *(_BYTE *)(v17 + 72);
      v18 = *(_BYTE **)(v17 + 32);
      v19 = *(_BYTE *)(v17 + 11);
      v29 = *(_BYTE *)(v17 + 4);
      if ( *(_BYTE *)(v17 + 2) )
        goto LABEL_84;
LABEL_58:
      LOBYTE(v13) = v30 - 8;
      if ( (v13 & 0x5D) != 0 )
        goto LABEL_84;
      v31 = *(_BYTE *)(v17 + 3);
      if ( v31 == 1 || !v18 || !v19 )
        goto LABEL_77;
      v32 = *v18 & 0x7F;
      if ( v32 == 114 || v32 == 115 )
      {
        v13 = (unsigned __int64)&v18[v19];
        LOBYTE(v17) = 0;
        if ( (unsigned __int64)(v18 + 8) > v13 )
          goto LABEL_75;
        v21 = v18[2];
        v20 = v18[1] & 0xF;
        v22 = v18[3];
      }
      else
      {
        v13 = (unsigned __int64)&v18[v19];
        LOBYTE(v17) = 0;
        if ( (unsigned __int64)(v18 + 8) > v13 )
          goto LABEL_75;
        v33 = v18 + 13;
        v20 = v18[2] & 0xF;
        v34 = v19;
        if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
          v34 = (unsigned __int8)v18[7] + 8;
        v13 = (unsigned __int64)&v18[v34];
        if ( (unsigned __int64)v33 <= v13 )
          v21 = v18[12];
        if ( (unsigned __int64)(v18 + 14) > v13 )
          v22 = 0;
        else
          v22 = *v33;
      }
      LOBYTE(v17) = 1;
LABEL_75:
      if ( (_BYTE)v17 )
        v23 = 1;
LABEL_77:
      if ( byte_140173441 < 0 )
      {
        if ( !v23 )
        {
          v22 = 0;
          v21 = 0;
          v20 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v13, v17, &v39, a2, *(_DWORD *)(a2 + 48), v31, v29, v20, v21, v22, a2);
      }
      goto LABEL_84;
    }
    v24 = 0LL;
    v37 = 0;
    if ( !*(_DWORD *)(v17 + 20) )
    {
      v25 = 0;
      v38 = *(_DWORD *)(v17 + 56);
      if ( v38 )
      {
        do
        {
          v13 = *(unsigned int *)(v17 + 4LL * v25 + 120);
          if ( (unsigned int)v13 >= 0x80 )
          {
            v26 = *(unsigned int *)(v17 + 16);
            if ( (unsigned int)v13 < (unsigned int)v26 )
            {
              v27 = (unsigned int)v13;
              v28 = *(_DWORD *)(v13 + v17) - 64;
              if ( v28 )
              {
                v13 = (unsigned int)(v28 - 1);
                if ( (_DWORD)v13 )
                {
                  if ( (_DWORD)v13 == 1 )
                  {
                    v13 = v27 + 40;
                    if ( v27 + 40 <= v26 )
                    {
                      if ( *(_DWORD *)(v27 + v17 + 12) )
                        v24 = (char *)(v27 + v17 + 32);
                      v18 = *(_BYTE **)(v27 + v17 + 24);
LABEL_43:
                      v29 = *(_BYTE *)(v27 + v17 + 8);
                      v19 = *(_BYTE *)(v27 + v17 + 9);
                      goto LABEL_52;
                    }
                  }
                }
                else
                {
                  v13 = v27 + 56;
                  if ( v27 + 56 <= v26 )
                  {
                    v37 = 1;
                    if ( *(_BYTE *)(v27 + v17 + 10) )
                      v24 = (char *)(v27 + v17 + 24);
                    v18 = *(_BYTE **)(v27 + v17 + 16);
                    v19 = *(_BYTE *)(v27 + v17 + 9);
                    v36 = *(_BYTE *)(v27 + v17 + 8);
                  }
                }
              }
              else
              {
                v13 = v27 + 40;
                if ( v27 + 40 <= v26 )
                {
                  if ( *(_BYTE *)(v27 + v17 + 10) )
                    v24 = (char *)(v27 + v17 + 24);
                  v18 = *(_BYTE **)(v27 + v17 + 16);
                  goto LABEL_43;
                }
              }
              if ( v37 )
                break;
            }
          }
          ++v25;
        }
        while ( v25 < v38 );
        v29 = v36;
LABEL_52:
        if ( v24 )
        {
          v30 = *v24;
          v23 = 0;
          goto LABEL_58;
        }
      }
    }
  }
LABEL_84:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
