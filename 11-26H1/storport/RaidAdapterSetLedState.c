/*
 * XREFs of RaidAdapterSetLedState @ 0x140068A0C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidSetLedStateByAcpiDsm @ 0x140095E84 (RaidSetLedStateByAcpiDsm.c)
 *     RaidSetLedStateByNpem @ 0x140095F84 (RaidSetLedStateByNpem.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterSetLedState(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rsi
  unsigned int v7; // eax
  int v8; // r14d
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  char v12; // al
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 v18; // rdx
  _BYTE *v19; // r9
  unsigned __int8 v20; // bp
  char v21; // r11
  char v22; // si
  char v23; // r10
  char v24; // r15
  char *v25; // r15
  unsigned int v26; // r13d
  unsigned __int64 v27; // r12
  __int64 v28; // r8
  int v29; // ecx
  char v30; // r12
  char v31; // cl
  char v32; // r8
  char v33; // al
  char *v34; // r10
  unsigned int v35; // eax
  char v37; // [rsp+60h] [rbp-58h]
  char v38; // [rsp+61h] [rbp-57h]
  unsigned int v39; // [rsp+64h] [rbp-54h]
  GUID v40; // [rsp+68h] [rbp-50h] BYREF

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
      v8 = RaidSetLedStateByAcpiDsm(*(_QWORD *)(a1 + 8), v4);
      if ( v8 == -1073741637 )
        v8 = RaidSetLedStateByNpem(*(_QWORD *)(a1 + 8), v4);
      if ( v8 >= 0 )
      {
        v9 = *(_DWORD *)(v4 + 8);
        v10 = *(_DWORD *)(a1 + 5840);
        v11 = *(_BYTE *)(v4 + 12) ? v9 | v10 : ~v9 & v10;
        *(_DWORD *)(a1 + 5840) = v11;
        v12 = *(_BYTE *)(a1 + 109);
        if ( v12 >= 0 )
          *(_BYTE *)(a1 + 109) = v12 | 0x80;
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
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( !v13 )
  {
    v40 = 0LL;
    IoGetActivityIdIrp(a2, &v40);
    v15 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v15 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_84;
      v17 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_83;
    }
    if ( *(_BYTE *)v15 != 15 )
    {
      if ( *(_BYTE *)v15 != 27 )
        goto LABEL_84;
      if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v16 = *(int **)(a2 + 56);
          if ( v16 )
            v3 = *v16;
          McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v40, a2, v3, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_84;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_84;
      v17 = &EventPnpRequestComplete;
LABEL_83:
      McTemplateK0pd_EtwWriteTransfer(v14, v17, &v40, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_84;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_84;
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
        goto LABEL_84;
LABEL_58:
      LOBYTE(v14) = v31 - 8;
      if ( (v14 & 0x5D) != 0 )
        goto LABEL_84;
      v32 = *(_BYTE *)(v18 + 3);
      if ( v32 == 1 || !v19 || !v20 )
        goto LABEL_77;
      v33 = *v19 & 0x7F;
      if ( v33 == 114 || v33 == 115 )
      {
        v14 = (unsigned __int64)&v19[v20];
        LOBYTE(v18) = 0;
        if ( (unsigned __int64)(v19 + 8) > v14 )
          goto LABEL_75;
        v22 = v19[2];
        v21 = v19[1] & 0xF;
        v23 = v19[3];
      }
      else
      {
        v14 = (unsigned __int64)&v19[v20];
        LOBYTE(v18) = 0;
        if ( (unsigned __int64)(v19 + 8) > v14 )
          goto LABEL_75;
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
      LOBYTE(v18) = 1;
LABEL_75:
      if ( (_BYTE)v18 )
        v24 = 1;
LABEL_77:
      if ( byte_140173441 < 0 )
      {
        if ( !v24 )
        {
          v23 = 0;
          v22 = 0;
          v21 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v14, v18, &v40, a2, *(_DWORD *)(a2 + 48), v32, v30, v21, v22, v23, a2);
      }
      goto LABEL_84;
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
LABEL_43:
                      v30 = *(_BYTE *)(v28 + v18 + 8);
                      v20 = *(_BYTE *)(v28 + v18 + 9);
                      goto LABEL_52;
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
                  goto LABEL_43;
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
LABEL_52:
        if ( v25 )
        {
          v31 = *v25;
          v24 = 0;
          goto LABEL_58;
        }
      }
    }
  }
LABEL_84:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
