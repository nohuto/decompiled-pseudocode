/*
 * XREFs of RaidAdapterStorageBreakReservationIoctl @ 0x140069ADC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorLogIoError @ 0x1400976C8 (StorLogIoError.c)
 *     RaidUnitHierarchicalReset @ 0x1400A8384 (RaidUnitHierarchicalReset.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageBreakReservationIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  bool v5; // zf
  unsigned __int64 v6; // rcx
  unsigned __int8 *v7; // rdx
  int v8; // eax
  int *v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 v11; // rdx
  _BYTE *v12; // r9
  unsigned __int8 v13; // r14
  char v14; // r11
  char v15; // si
  char v16; // r10
  char v17; // r15
  int v18; // eax
  char *v19; // r15
  unsigned int v20; // r13d
  unsigned __int64 v21; // r12
  __int64 v22; // r8
  int v23; // ecx
  char v24; // r12
  char v25; // cl
  char v26; // r8
  char v27; // al
  char *v28; // r10
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 *Unit; // rsi
  int v32; // eax
  unsigned int v33; // r13d
  unsigned __int64 v34; // r12
  __int64 v35; // r8
  int v36; // ecx
  char v38; // [rsp+60h] [rbp-9h]
  char v39; // [rsp+61h] [rbp-8h]
  char v40; // [rsp+61h] [rbp-8h]
  unsigned int v41; // [rsp+64h] [rbp-5h]
  unsigned int v42; // [rsp+64h] [rbp-5h]
  unsigned int v43; // [rsp+68h] [rbp-1h]
  unsigned int v44; // [rsp+68h] [rbp-1h]
  GUID v45; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0;
  HIBYTE(v41) = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 8u )
  {
    v30 = *(_QWORD *)(a2 + 24);
    LOWORD(v41) = *(_WORD *)(v30 + 5);
    BYTE2(v41) = *(_BYTE *)(v30 + 7);
    Unit = RaidAdapterFindUnit(a1, v41);
    if ( Unit )
    {
      StorLogIoError(a1, v41, 2147745910LL, 4LL);
      ++*(_DWORD *)(Unit[3] + 4768);
      v32 = RaidUnitHierarchicalReset(Unit);
    }
    else
    {
      v32 = -1073741810;
    }
    v5 = StorEtwLoggingEnabled == 0;
    v42 = v32;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v32;
    if ( v5 )
      goto LABEL_99;
    v45 = 0LL;
    IoGetActivityIdIrp(a2, &v45);
    v7 = *(unsigned __int8 **)(a2 + 184);
    if ( *v7 != 14 )
    {
      v8 = *v7 - 15;
      if ( *v7 != 15 )
        goto LABEL_5;
      if ( byte_140173441 >= 0 )
        goto LABEL_99;
      v11 = *((_QWORD *)v7 + 1);
      v12 = 0LL;
      v38 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = *(unsigned __int8 *)(v11 + 2);
      if ( (_BYTE)v18 == 40 )
      {
        v19 = 0LL;
        v40 = 0;
        if ( *(_DWORD *)(v11 + 20) )
          goto LABEL_99;
        v33 = 0;
        v44 = *(_DWORD *)(v11 + 56);
        if ( !v44 )
          goto LABEL_99;
        while ( 1 )
        {
          v6 = *(unsigned int *)(v11 + 4LL * v33 + 120);
          if ( (unsigned int)v6 >= 0x80 )
          {
            v34 = *(unsigned int *)(v11 + 16);
            if ( (unsigned int)v6 < (unsigned int)v34 )
            {
              v35 = (unsigned int)v6;
              v36 = *(_DWORD *)(v11 + v6) - 64;
              if ( v36 )
              {
                v6 = (unsigned int)(v36 - 1);
                if ( (_DWORD)v6 )
                {
                  if ( (_DWORD)v6 == 1 )
                  {
                    v6 = v35 + 40;
                    if ( v35 + 40 <= v34 )
                    {
                      if ( *(_DWORD *)(v11 + v35 + 12) )
                        v19 = (char *)(v35 + v11 + 32);
                      v12 = *(_BYTE **)(v11 + v35 + 24);
LABEL_75:
                      v24 = *(_BYTE *)(v11 + v35 + 8);
                      v13 = *(_BYTE *)(v11 + v35 + 9);
                      goto LABEL_36;
                    }
                  }
                }
                else
                {
                  v6 = v35 + 56;
                  if ( v35 + 56 <= v34 )
                  {
                    v40 = 1;
                    if ( *(_BYTE *)(v11 + v35 + 10) )
                      v19 = (char *)(v35 + v11 + 24);
                    v12 = *(_BYTE **)(v11 + v35 + 16);
                    v13 = *(_BYTE *)(v11 + v35 + 9);
                    v38 = *(_BYTE *)(v11 + v35 + 8);
                  }
                }
              }
              else
              {
                v6 = v35 + 40;
                if ( v35 + 40 <= v34 )
                {
                  if ( *(_BYTE *)(v11 + v35 + 10) )
                    v19 = (char *)(v35 + v11 + 24);
                  v12 = *(_BYTE **)(v11 + v35 + 16);
                  goto LABEL_75;
                }
              }
              if ( v40 )
                goto LABEL_35;
            }
          }
          if ( ++v33 >= v44 )
          {
LABEL_35:
            v24 = v38;
            goto LABEL_36;
          }
        }
      }
      goto LABEL_41;
    }
LABEL_96:
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_99;
    v10 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_98;
  }
  v5 = StorEtwLoggingEnabled == 0;
  v42 = -1073741811;
  *(_DWORD *)(a2 + 48) = -1073741811;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v5 )
    goto LABEL_99;
  v45 = 0LL;
  IoGetActivityIdIrp(a2, &v45);
  v7 = *(unsigned __int8 **)(a2 + 184);
  if ( *v7 == 14 )
    goto LABEL_96;
  v8 = *v7 - 15;
  if ( *v7 != 15 )
  {
LABEL_5:
    if ( v8 != 12 )
      goto LABEL_99;
    if ( v7[1] == 7 && !*((_DWORD *)v7 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v9 = *(int **)(a2 + 56);
        if ( v9 )
          v2 = *v9;
        McTemplateK0pqd_EtwWriteTransfer(v6, (__int64)v7, &v45, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_99;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_99;
    v10 = &EventPnpRequestComplete;
LABEL_98:
    McTemplateK0pd_EtwWriteTransfer(v6, v10, &v45, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_99;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_99;
  v11 = *((_QWORD *)v7 + 1);
  v12 = 0LL;
  v38 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = *(unsigned __int8 *)(v11 + 2);
  if ( (_BYTE)v18 != 40 )
  {
LABEL_41:
    v24 = *(_BYTE *)(v11 + 4);
    v13 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE **)(v11 + 32);
    v25 = *(_BYTE *)(v11 + 72);
    if ( v18 )
      goto LABEL_99;
LABEL_42:
    LOBYTE(v6) = v25 - 8;
    if ( (v6 & 0x5D) != 0 )
      goto LABEL_99;
    v26 = *(_BYTE *)(v11 + 3);
    if ( v26 == 1 || !v12 || !v13 )
      goto LABEL_92;
    v27 = *v12 & 0x7F;
    if ( v27 == 114 || v27 == 115 )
    {
      v6 = (unsigned __int64)&v12[v13];
      LOBYTE(v11) = 0;
      if ( (unsigned __int64)(v12 + 8) > v6 )
        goto LABEL_90;
      v16 = v12[3];
      v14 = v12[1] & 0xF;
      v15 = v12[2];
    }
    else
    {
      v6 = (unsigned __int64)&v12[v13];
      LOBYTE(v11) = 0;
      if ( (unsigned __int64)(v12 + 8) > v6 )
        goto LABEL_90;
      v28 = v12 + 13;
      v14 = v12[2] & 0xF;
      v29 = v13;
      if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
        v29 = (unsigned __int8)v12[7] + 8;
      v6 = (unsigned __int64)&v12[v29];
      if ( (unsigned __int64)v28 <= v6 )
        v15 = v12[12];
      if ( (unsigned __int64)(v12 + 14) > v6 )
        v16 = 0;
      else
        v16 = *v28;
    }
    LOBYTE(v11) = 1;
LABEL_90:
    if ( (_BYTE)v11 )
      v17 = 1;
LABEL_92:
    if ( byte_140173441 < 0 )
    {
      if ( !v17 )
      {
        v16 = 0;
        v14 = 0;
        v15 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v6, v11, &v45, a2, *(_DWORD *)(a2 + 48), v26, v24, v14, v15, v16, a2);
    }
    goto LABEL_99;
  }
  v19 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_99;
  v20 = 0;
  v43 = *(_DWORD *)(v11 + 56);
  if ( !v43 )
    goto LABEL_99;
  while ( 1 )
  {
    v6 = *(unsigned int *)(v11 + 4LL * v20 + 120);
    if ( (unsigned int)v6 >= 0x80 )
    {
      v21 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v6 < (unsigned int)v21 )
        break;
    }
LABEL_34:
    if ( ++v20 >= v43 )
      goto LABEL_35;
  }
  v22 = (unsigned int)v6;
  v23 = *(_DWORD *)(v6 + v11) - 64;
  if ( v23 )
  {
    v6 = (unsigned int)(v23 - 1);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 == 1 )
      {
        v6 = v22 + 40;
        if ( v22 + 40 <= v21 )
        {
          if ( *(_DWORD *)(v22 + v11 + 12) )
            v19 = (char *)(v22 + v11 + 32);
          v12 = *(_BYTE **)(v22 + v11 + 24);
          goto LABEL_27;
        }
      }
    }
    else
    {
      v6 = v22 + 56;
      if ( v22 + 56 <= v21 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v22 + v11 + 10) )
          v19 = (char *)(v22 + v11 + 24);
        v12 = *(_BYTE **)(v22 + v11 + 16);
        v13 = *(_BYTE *)(v22 + v11 + 9);
        v38 = *(_BYTE *)(v22 + v11 + 8);
      }
    }
    goto LABEL_33;
  }
  v6 = v22 + 40;
  if ( v22 + 40 > v21 )
  {
LABEL_33:
    if ( v39 )
      goto LABEL_35;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(v22 + v11 + 10) )
    v19 = (char *)(v22 + v11 + 24);
  v12 = *(_BYTE **)(v22 + v11 + 16);
LABEL_27:
  v24 = *(_BYTE *)(v22 + v11 + 8);
  v13 = *(_BYTE *)(v22 + v11 + 9);
LABEL_36:
  if ( v19 )
  {
    v25 = *v19;
    v17 = 0;
    goto LABEL_42;
  }
LABEL_99:
  IofCompleteRequest((PIRP)a2, 0);
  return v42;
}
