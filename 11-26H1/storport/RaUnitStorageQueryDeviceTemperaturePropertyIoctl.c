/*
 * XREFs of RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1400A5024
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401B2144 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1400082A8 (RaidUnitSendSrbIoControlSynchronously.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x140091624 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1400A8994 (RaidUnitLogSenseTemperatureSrb.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceTemperaturePropertyIoctl(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r12
  int v3; // esi
  __int64 v4; // rax
  unsigned int *v7; // r13
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // r15d
  _DWORD *v11; // rax
  __int64 v12; // rax
  int TemperaturePropertyBufferForMiniport; // eax
  int v14; // ecx
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  int *v18; // rax
  __int64 v19; // rbx
  const EVENT_DESCRIPTOR *v20; // rdx
  __int64 v21; // rdx
  _BYTE *v22; // r9
  unsigned __int8 v23; // di
  char v24; // r11
  char v25; // bl
  char v26; // r10
  char v27; // r12
  char *v28; // r12
  int v29; // ecx
  __int64 v30; // rax
  unsigned __int64 v31; // r13
  __int64 v32; // r8
  int v33; // ecx
  char v34; // r13
  char v35; // cl
  char v36; // r8
  char v37; // al
  char *v38; // r10
  unsigned int v39; // eax
  __int64 v41; // [rsp+20h] [rbp-49h]
  __int64 v42; // [rsp+28h] [rbp-41h]
  __int64 v43; // [rsp+30h] [rbp-39h]
  char v44; // [rsp+60h] [rbp-9h]
  char v45; // [rsp+61h] [rbp-8h]
  int v46; // [rsp+64h] [rbp-5h] BYREF
  size_t Size; // [rsp+68h] [rbp-1h]
  PVOID P[2]; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  P[0] = 0LL;
  v7 = 0LL;
  v46 = 0;
  v8 = v2[1];
  v9 = *(_DWORD *)(v4 + 8);
  LODWORD(Size) = v9;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      v10 = -1073741637;
LABEL_26:
      *(_QWORD *)(a2 + 56) = 0LL;
      goto LABEL_27;
    }
    goto LABEL_7;
  }
  if ( v9 < 0x28 )
  {
    if ( v9 < 8 )
    {
      v10 = -1073741789;
      goto LABEL_26;
    }
    *v2 = 40;
    v2[1] = 40;
    *(_QWORD *)(a2 + 56) = 8LL;
LABEL_7:
    v10 = 0;
    goto LABEL_27;
  }
  v11 = *(_DWORD **)(a1 + 24);
  if ( *v11 == 1094997074 )
  {
    v12 = (__int64)(v11 + 151);
  }
  else if ( *v11 == 1314275652 )
  {
    v12 = (__int64)(v11 + 99);
  }
  else
  {
    v12 = 228LL;
  }
  if ( (*(_DWORD *)v12 & 0x20) == 0 )
    goto LABEL_21;
  TemperaturePropertyBufferForMiniport = RaBuildQueryTemperaturePropertyBufferForMiniport(
                                           *(_QWORD *)(a1 + 8),
                                           a2,
                                           P,
                                           (unsigned int *)&v46);
  v7 = (unsigned int *)P[0];
  v10 = TemperaturePropertyBufferForMiniport;
  if ( TemperaturePropertyBufferForMiniport < 0 )
    goto LABEL_22;
  v10 = RaidUnitSendSrbIoControlSynchronously(a1, a2, (__int64)P[0], v46, 0LL, 0, 64);
  if ( ((v10 + 0x80000000) & 0x80000000) != 0 || v10 == -2147483643 )
  {
    v19 = v7[8];
    if ( (unsigned int)Size < (unsigned int)v19 )
      v19 = (unsigned int)Size;
    memset_0(v2, 0, (unsigned int)Size);
    memmove(v2, v7 + 7, (unsigned int)v19);
    *v2 = 40;
    *(_QWORD *)(a2 + 56) = v19;
  }
  else if ( v10 + 1073741822 <= 0xE && (v14 = 18433, _bittest(&v14, v10 + 1073741822)) || v10 == -1073741637 )
  {
LABEL_21:
    v10 = RaidUnitLogSenseTemperatureSrb(a1, a2);
  }
LABEL_22:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -2147483643 )
    goto LABEL_26;
LABEL_27:
  v15 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v10;
  if ( v15 )
    goto LABEL_96;
  *(_OWORD *)P = 0LL;
  IoGetActivityIdIrp(a2, P);
  v17 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v17 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_96;
    v20 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_95;
  }
  if ( *(_BYTE *)v17 != 15 )
  {
    if ( *(_BYTE *)v17 != 27 )
      goto LABEL_96;
    if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v18 = *(int **)(a2 + 56);
        if ( v18 )
          v3 = *v18;
        LODWORD(v42) = *(_DWORD *)(a2 + 48);
        LODWORD(v41) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v16, v17, (const GUID *)P, a2, v41, v42);
      }
      goto LABEL_96;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_96;
    v20 = &EventPnpRequestComplete;
LABEL_95:
    LODWORD(v41) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v16, v20, (const GUID *)P, a2, v41);
    goto LABEL_96;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_96;
  v21 = *(_QWORD *)(v17 + 8);
  v22 = 0LL;
  v44 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( *(_BYTE *)(v21 + 2) != 40 )
  {
    v35 = *(_BYTE *)(v21 + 72);
    v22 = *(_BYTE **)(v21 + 32);
    v23 = *(_BYTE *)(v21 + 11);
    v34 = *(_BYTE *)(v21 + 4);
    if ( *(_BYTE *)(v21 + 2) )
      goto LABEL_96;
LABEL_70:
    LOBYTE(v16) = v35 - 8;
    if ( (v16 & 0x5D) != 0 )
      goto LABEL_96;
    v36 = *(_BYTE *)(v21 + 3);
    if ( v36 == 1 || !v22 || !v23 )
      goto LABEL_89;
    v37 = *v22 & 0x7F;
    if ( v37 == 114 || v37 == 115 )
    {
      v16 = (unsigned __int64)&v22[v23];
      LOBYTE(v21) = 0;
      if ( (unsigned __int64)(v22 + 8) > v16 )
        goto LABEL_87;
      v25 = v22[2];
      v24 = v22[1] & 0xF;
      v26 = v22[3];
    }
    else
    {
      v16 = (unsigned __int64)&v22[v23];
      LOBYTE(v21) = 0;
      if ( (unsigned __int64)(v22 + 8) > v16 )
        goto LABEL_87;
      v38 = v22 + 13;
      v24 = v22[2] & 0xF;
      v39 = v23;
      if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
        v39 = (unsigned __int8)v22[7] + 8;
      v16 = (unsigned __int64)&v22[v39];
      if ( (unsigned __int64)v38 <= v16 )
        v25 = v22[12];
      if ( (unsigned __int64)(v22 + 14) > v16 )
        v26 = 0;
      else
        v26 = *v38;
    }
    LOBYTE(v21) = 1;
LABEL_87:
    if ( (_BYTE)v21 )
      v27 = 1;
LABEL_89:
    if ( byte_140173441 < 0 )
    {
      if ( !v27 )
      {
        v26 = 0;
        v25 = 0;
        v24 = 0;
      }
      LOBYTE(v43) = v34;
      LOBYTE(v42) = v36;
      LODWORD(v41) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v16, v21, (const GUID *)P, a2, v41, v42, v43, v24, v25, v26, a2);
    }
    goto LABEL_96;
  }
  v28 = 0LL;
  v45 = 0;
  if ( !*(_DWORD *)(v21 + 20) )
  {
    v29 = *(_DWORD *)(v21 + 56);
    v30 = 0LL;
    v46 = 0;
    LODWORD(Size) = v29;
    if ( v29 )
    {
      do
      {
        v16 = *(unsigned int *)(v21 + 4 * v30 + 120);
        if ( (unsigned int)v16 >= 0x80 )
        {
          v31 = *(unsigned int *)(v21 + 16);
          if ( (unsigned int)v16 < (unsigned int)v31 )
          {
            v32 = (unsigned int)v16;
            v33 = *(_DWORD *)(v16 + v21) - 64;
            if ( v33 )
            {
              v16 = (unsigned int)(v33 - 1);
              if ( (_DWORD)v16 )
              {
                if ( (_DWORD)v16 == 1 )
                {
                  v16 = v32 + 40;
                  if ( v32 + 40 <= v31 )
                  {
                    if ( *(_DWORD *)(v32 + v21 + 12) )
                      v28 = (char *)(v32 + v21 + 32);
                    v22 = *(_BYTE **)(v32 + v21 + 24);
LABEL_55:
                    v34 = *(_BYTE *)(v32 + v21 + 8);
                    v23 = *(_BYTE *)(v32 + v21 + 9);
                    goto LABEL_64;
                  }
                }
              }
              else
              {
                v16 = v32 + 56;
                if ( v32 + 56 <= v31 )
                {
                  v45 = 1;
                  if ( *(_BYTE *)(v32 + v21 + 10) )
                    v28 = (char *)(v32 + v21 + 24);
                  v22 = *(_BYTE **)(v32 + v21 + 16);
                  v23 = *(_BYTE *)(v32 + v21 + 9);
                  v44 = *(_BYTE *)(v32 + v21 + 8);
                }
              }
            }
            else
            {
              v16 = v32 + 40;
              if ( v32 + 40 <= v31 )
              {
                if ( *(_BYTE *)(v32 + v21 + 10) )
                  v28 = (char *)(v32 + v21 + 24);
                v22 = *(_BYTE **)(v32 + v21 + 16);
                goto LABEL_55;
              }
            }
            if ( v45 )
              break;
          }
        }
        v30 = (unsigned int)(v46 + 1);
        v46 = v30;
      }
      while ( (unsigned int)v30 < (unsigned int)Size );
      v34 = v44;
LABEL_64:
      if ( v28 )
      {
        v35 = *v28;
        v27 = 0;
        goto LABEL_70;
      }
    }
  }
LABEL_96:
  IofCompleteRequest((PIRP)a2, 0);
  return v10;
}
