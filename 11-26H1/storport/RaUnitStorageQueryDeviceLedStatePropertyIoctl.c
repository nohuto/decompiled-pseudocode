/*
 * XREFs of RaUnitStorageQueryDeviceLedStatePropertyIoctl @ 0x1400A4754
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401B2144 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidQueryLedState @ 0x140095808 (RaidQueryLedState.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceLedStatePropertyIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _DWORD *v4; // r14
  unsigned int v6; // esi
  size_t v7; // rbp
  int v8; // ecx
  __int64 v9; // rcx
  int LedState; // eax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v16; // rdx
  _BYTE *v17; // r9
  unsigned __int8 v18; // r14
  char v19; // r11
  char v20; // bp
  char v21; // r10
  char v22; // r15
  char *v23; // r15
  unsigned int v24; // r13d
  unsigned __int64 v25; // r12
  __int64 v26; // r8
  int v27; // ecx
  char v28; // r12
  char v29; // cl
  char v30; // al
  char v31; // r8
  char *v32; // r10
  unsigned int v33; // eax
  char v35; // [rsp+60h] [rbp-58h]
  char v36; // [rsp+61h] [rbp-57h]
  unsigned int v37; // [rsp+64h] [rbp-54h]
  GUID v38; // [rsp+68h] [rbp-50h] BYREF

  v2 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = 0;
  v7 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_DWORD *)(a1 + 3432) != 17 )
  {
LABEL_2:
    v6 = -1073741637;
LABEL_13:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_15;
  }
  v8 = v4[1];
  if ( v8 )
  {
    if ( v8 == 1 )
      goto LABEL_15;
    goto LABEL_2;
  }
  if ( (unsigned int)v7 < 0x10 )
  {
    if ( (unsigned int)v7 >= 8 )
    {
      *v4 = 16;
      v4[1] = 16;
      *(_QWORD *)(a2 + 56) = 8LL;
      goto LABEL_15;
    }
    v6 = -1073741789;
    goto LABEL_13;
  }
  v9 = *(_QWORD *)(a1 + 24);
  if ( *(char *)(v9 + 109) >= 0 )
  {
    LedState = RaidQueryLedState(*(_QWORD *)(v9 + 8), (unsigned int *)(v9 + 5840));
    v6 = LedState;
    if ( LedState < 0 )
    {
      if ( LedState == -2147483643 )
        goto LABEL_15;
      goto LABEL_13;
    }
  }
  memset_0(v4, 0, v7);
  *v4 = 16;
  v4[1] = 16;
  *((_QWORD *)v4 + 1) = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 5840LL);
  *(_QWORD *)(a2 + 56) = 16LL;
LABEL_15:
  v11 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v11 )
    goto LABEL_81;
  v38 = 0LL;
  IoGetActivityIdIrp(a2, &v38);
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_81;
    v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_80;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_81;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v2 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v38, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_81;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_81;
    v15 = &EventPnpRequestComplete;
LABEL_80:
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v38, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_81;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_81;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0LL;
  v35 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v16 + 72);
    v17 = *(_BYTE **)(v16 + 32);
    v18 = *(_BYTE *)(v16 + 11);
    v28 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_81;
LABEL_55:
    LOBYTE(v12) = v29 - 8;
    if ( (v12 & 0x5D) != 0 )
      goto LABEL_81;
    if ( *(_BYTE *)(v16 + 3) == 1 || !v17 || !v18 )
      goto LABEL_74;
    v30 = *v17 & 0x7F;
    if ( v30 == 114 || v30 == 115 )
    {
      v12 = (unsigned __int64)&v17[v18];
      v31 = 0;
      if ( (unsigned __int64)(v17 + 8) > v12 )
        goto LABEL_72;
      v20 = v17[2];
      v19 = v17[1] & 0xF;
      v21 = v17[3];
    }
    else
    {
      v12 = (unsigned __int64)&v17[v18];
      v31 = 0;
      if ( (unsigned __int64)(v17 + 8) > v12 )
        goto LABEL_72;
      v32 = v17 + 13;
      v19 = v17[2] & 0xF;
      v33 = v18;
      if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
        v33 = (unsigned __int8)v17[7] + 8;
      v12 = (unsigned __int64)&v17[v33];
      if ( (unsigned __int64)v32 <= v12 )
        v20 = v17[12];
      if ( (unsigned __int64)(v17 + 14) > v12 )
        v21 = 0;
      else
        v21 = *v32;
    }
    v31 = 1;
LABEL_72:
    if ( v31 )
      v22 = 1;
LABEL_74:
    if ( byte_140173441 < 0 )
    {
      if ( !v22 )
      {
        v21 = 0;
        v20 = 0;
        v19 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v12,
        v16,
        &v38,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v16 + 3),
        v28,
        v19,
        v20,
        v21,
        a2);
    }
    goto LABEL_81;
  }
  v23 = 0LL;
  v36 = 0;
  if ( !*(_DWORD *)(v16 + 20) )
  {
    v24 = 0;
    v37 = *(_DWORD *)(v16 + 56);
    if ( v37 )
    {
      do
      {
        v12 = *(unsigned int *)(v16 + 4LL * v24 + 120);
        if ( (unsigned int)v12 >= 0x80 )
        {
          v25 = *(unsigned int *)(v16 + 16);
          if ( (unsigned int)v12 < (unsigned int)v25 )
          {
            v26 = (unsigned int)v12;
            v27 = *(_DWORD *)(v12 + v16) - 64;
            if ( v27 )
            {
              v12 = (unsigned int)(v27 - 1);
              if ( (_DWORD)v12 )
              {
                if ( (_DWORD)v12 == 1 )
                {
                  v12 = v26 + 40;
                  if ( v26 + 40 <= v25 )
                  {
                    if ( *(_DWORD *)(v26 + v16 + 12) )
                      v23 = (char *)(v26 + v16 + 32);
                    v17 = *(_BYTE **)(v26 + v16 + 24);
LABEL_40:
                    v28 = *(_BYTE *)(v26 + v16 + 8);
                    v18 = *(_BYTE *)(v26 + v16 + 9);
                    goto LABEL_49;
                  }
                }
              }
              else
              {
                v12 = v26 + 56;
                if ( v26 + 56 <= v25 )
                {
                  v36 = 1;
                  if ( *(_BYTE *)(v26 + v16 + 10) )
                    v23 = (char *)(v26 + v16 + 24);
                  v17 = *(_BYTE **)(v26 + v16 + 16);
                  v18 = *(_BYTE *)(v26 + v16 + 9);
                  v35 = *(_BYTE *)(v26 + v16 + 8);
                }
              }
            }
            else
            {
              v12 = v26 + 40;
              if ( v26 + 40 <= v25 )
              {
                if ( *(_BYTE *)(v26 + v16 + 10) )
                  v23 = (char *)(v26 + v16 + 24);
                v17 = *(_BYTE **)(v26 + v16 + 16);
                goto LABEL_40;
              }
            }
            if ( v36 )
              break;
          }
        }
        ++v24;
      }
      while ( v24 < v37 );
      v28 = v35;
LABEL_49:
      if ( v23 )
      {
        v29 = *v23;
        v22 = 0;
        goto LABEL_55;
      }
    }
  }
LABEL_81:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
