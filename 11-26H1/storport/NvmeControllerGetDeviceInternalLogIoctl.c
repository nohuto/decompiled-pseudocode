/*
 * XREFs of NvmeControllerGetDeviceInternalLogIoctl @ 0x1401A14B0
 * Callers:
 *     NvmeNamespaceGetDeviceInternalLogIoctl @ 0x1401A618C (NvmeNamespaceGetDeviceInternalLogIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerGetTelemetryLog @ 0x1400F4BE8 (NvmeControllerGetTelemetryLog.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeControllerGetDeviceInternalLogIoctl(union _SLIST_HEADER *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  _DWORD *v4; // rsi
  unsigned int v7; // r12d
  bool v8; // cf
  char *v9; // r15
  unsigned int v10; // ecx
  int TelemetryLog; // r14d
  int v12; // ecx
  int v13; // eax
  char v14; // dl
  char v15; // r13
  unsigned int v16; // r13d
  bool v17; // zf
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  int *v20; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  __int64 v22; // rdx
  _BYTE *v23; // r9
  unsigned __int8 v24; // r15
  char v25; // r10
  char v26; // si
  char v27; // r11
  char v28; // r12
  char *v29; // r12
  unsigned int v30; // ecx
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  __int64 v33; // r8
  int v34; // ecx
  char v35; // r13
  char v36; // cl
  char v37; // r8
  char v38; // al
  char *v39; // r11
  unsigned int v40; // eax
  __int64 v42; // [rsp+20h] [rbp-49h]
  char v43; // [rsp+60h] [rbp-9h]
  char v44; // [rsp+61h] [rbp-8h]
  unsigned int Size; // [rsp+64h] [rbp-5h] BYREF
  unsigned int Size_4; // [rsp+68h] [rbp-1h]
  PVOID P[2]; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  P[0] = 0LL;
  v7 = 0;
  Size = 0;
  v8 = *(_DWORD *)(v2 + 16) < 0x10u;
  v9 = 0LL;
  v10 = *(_DWORD *)(v2 + 8);
  Size_4 = v10;
  if ( v8 || !v4 || *v4 != 16 || v4[1] != 16 )
  {
    TelemetryLog = -1073741811;
    goto LABEL_26;
  }
  if ( v10 < 0x2A8 )
  {
    TelemetryLog = -1073741789;
    goto LABEL_28;
  }
  v12 = v4[2];
  if ( v12 != 2 )
  {
    if ( v12 == 1 )
      goto LABEL_16;
    if ( v12 != 4 )
    {
      if ( v12 != 3 )
      {
LABEL_11:
        TelemetryLog = -1073741811;
        goto LABEL_28;
      }
LABEL_15:
      v14 = 0;
      goto LABEL_17;
    }
  }
  v13 = v4[3];
  if ( !v13 || v13 >= 5 )
    goto LABEL_11;
  if ( (unsigned int)(v12 - 1) > 1 )
    goto LABEL_15;
LABEL_16:
  v14 = 1;
  if ( v12 != 1 )
  {
LABEL_17:
    v15 = 0;
    if ( v12 != 3 )
      goto LABEL_19;
  }
  v15 = 1;
LABEL_19:
  TelemetryLog = NvmeControllerGetTelemetryLog(a1, v14, v15, &Size, P);
  if ( TelemetryLog < 0 )
  {
    v9 = (char *)P[0];
  }
  else
  {
    memset_0(v4, 0, Size_4);
    v9 = (char *)P[0];
    *v4 = 176;
    v4[1] = 176;
    *((_BYTE *)v4 + 32) = 0;
    *((_WORD *)v4 + 4) = *(_WORD *)(v9 + 5);
    *((_BYTE *)v4 + 10) = v9[7];
    v4[4] = *((unsigned __int16 *)v9 + 4);
    v4[5] = *((unsigned __int16 *)v9 + 5);
    v4[6] = *((unsigned __int16 *)v9 + 6);
    v4[7] = *((_DWORD *)v9 + 4);
    *(_OWORD *)(v4 + 9) = *((_OWORD *)v9 + 24);
    *(_OWORD *)(v4 + 13) = *((_OWORD *)v9 + 25);
    *(_OWORD *)(v4 + 17) = *((_OWORD *)v9 + 26);
    *(_OWORD *)(v4 + 21) = *((_OWORD *)v9 + 27);
    *(_OWORD *)(v4 + 25) = *((_OWORD *)v9 + 28);
    *(_OWORD *)(v4 + 29) = *((_OWORD *)v9 + 29);
    *(_OWORD *)(v4 + 33) = *((_OWORD *)v9 + 30);
    *(_OWORD *)(v4 + 37) = *((_OWORD *)v9 + 31);
    if ( v15 )
    {
      v16 = 0;
      v7 = 168;
    }
    else
    {
      v16 = Size;
      memmove(v4 + 42, v9 + 0x40000, Size);
      v7 = v16 + 168;
    }
    v4[1] = v7;
    v4[41] = v16;
  }
LABEL_26:
  if ( v9 )
    ExFreePoolWithTag(v9, 0x4C4E6152u);
LABEL_28:
  v17 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v7;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = TelemetryLog;
  if ( v17 )
    goto LABEL_94;
  *(_OWORD *)P = 0LL;
  IoGetActivityIdIrp(a2, P);
  v19 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v19 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_94;
    v21 = &EventNonReadWriteRequestComplete;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v19 != 15 )
  {
    if ( *(_BYTE *)v19 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v19 + 1) == 7 && !*(_DWORD *)(v19 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v20 = *(int **)(a2 + 56);
        if ( v20 )
          v3 = *v20;
        LODWORD(v42) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v18, v19, (const GUID *)P, a2, v42, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_94;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_94;
    v21 = &EventPnpRequestComplete;
LABEL_93:
    LODWORD(v42) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v18, v21, (const GUID *)P, a2, v42);
    goto LABEL_94;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_94;
  v22 = *(_QWORD *)(v19 + 8);
  v23 = 0LL;
  v43 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( *(_BYTE *)(v22 + 2) != 40 )
  {
    v36 = *(_BYTE *)(v22 + 72);
    v23 = *(_BYTE **)(v22 + 32);
    v24 = *(_BYTE *)(v22 + 11);
    v35 = *(_BYTE *)(v22 + 4);
    if ( *(_BYTE *)(v22 + 2) )
      goto LABEL_94;
LABEL_68:
    LOBYTE(v18) = v36 - 8;
    if ( (v18 & 0x5D) != 0 )
      goto LABEL_94;
    v37 = *(_BYTE *)(v22 + 3);
    if ( v37 == 1 || !v23 || !v24 )
      goto LABEL_87;
    v38 = *v23 & 0x7F;
    if ( v38 == 114 || v38 == 115 )
    {
      v18 = (unsigned __int64)&v23[v24];
      LOBYTE(v22) = 0;
      if ( (unsigned __int64)(v23 + 8) > v18 )
        goto LABEL_85;
      v26 = v23[2];
      v25 = v23[1] & 0xF;
      v27 = v23[3];
    }
    else
    {
      v18 = (unsigned __int64)&v23[v24];
      LOBYTE(v22) = 0;
      if ( (unsigned __int64)(v23 + 8) > v18 )
        goto LABEL_85;
      v39 = v23 + 13;
      v25 = v23[2] & 0xF;
      v40 = v24;
      if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
        v40 = (unsigned __int8)v23[7] + 8;
      v18 = (unsigned __int64)&v23[v40];
      if ( (unsigned __int64)v39 <= v18 )
        v26 = v23[12];
      if ( (unsigned __int64)(v23 + 14) > v18 )
        v27 = 0;
      else
        v27 = *v39;
    }
    LOBYTE(v22) = 1;
LABEL_85:
    if ( (_BYTE)v22 )
      v28 = 1;
LABEL_87:
    if ( byte_140173441 < 0 )
    {
      if ( !v28 )
      {
        v27 = 0;
        v26 = 0;
        v25 = 0;
      }
      LODWORD(v42) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v18, v22, (const GUID *)P, a2, v42, v37, v35, v25, v26, v27, a2);
    }
    goto LABEL_94;
  }
  v29 = 0LL;
  v44 = 0;
  if ( !*(_DWORD *)(v22 + 20) )
  {
    v30 = *(_DWORD *)(v22 + 56);
    v31 = 0LL;
    Size = 0;
    Size_4 = v30;
    if ( v30 )
    {
      do
      {
        v18 = *(unsigned int *)(v22 + 4 * v31 + 120);
        if ( (unsigned int)v18 >= 0x80 )
        {
          v32 = *(unsigned int *)(v22 + 16);
          if ( (unsigned int)v18 < (unsigned int)v32 )
          {
            v33 = (unsigned int)v18;
            v34 = *(_DWORD *)(v18 + v22) - 64;
            if ( v34 )
            {
              v18 = (unsigned int)(v34 - 1);
              if ( (_DWORD)v18 )
              {
                if ( (_DWORD)v18 == 1 )
                {
                  v18 = v33 + 40;
                  if ( v33 + 40 <= v32 )
                  {
                    if ( *(_DWORD *)(v33 + v22 + 12) )
                      v29 = (char *)(v33 + v22 + 32);
                    v23 = *(_BYTE **)(v33 + v22 + 24);
LABEL_53:
                    v35 = *(_BYTE *)(v33 + v22 + 8);
                    v24 = *(_BYTE *)(v33 + v22 + 9);
                    goto LABEL_62;
                  }
                }
              }
              else
              {
                v18 = v33 + 56;
                if ( v33 + 56 <= v32 )
                {
                  v44 = 1;
                  if ( *(_BYTE *)(v33 + v22 + 10) )
                    v29 = (char *)(v33 + v22 + 24);
                  v23 = *(_BYTE **)(v33 + v22 + 16);
                  v24 = *(_BYTE *)(v33 + v22 + 9);
                  v43 = *(_BYTE *)(v33 + v22 + 8);
                }
              }
            }
            else
            {
              v18 = v33 + 40;
              if ( v33 + 40 <= v32 )
              {
                if ( *(_BYTE *)(v33 + v22 + 10) )
                  v29 = (char *)(v33 + v22 + 24);
                v23 = *(_BYTE **)(v33 + v22 + 16);
                goto LABEL_53;
              }
            }
            if ( v44 )
              break;
          }
        }
        v31 = Size + 1;
        Size = v31;
      }
      while ( (unsigned int)v31 < Size_4 );
      v35 = v43;
LABEL_62:
      if ( v29 )
      {
        v36 = *v29;
        v28 = 0;
        goto LABEL_68;
      }
    }
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)TelemetryLog;
}
