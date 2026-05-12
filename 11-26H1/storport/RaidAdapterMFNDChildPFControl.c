/*
 * XREFs of RaidAdapterMFNDChildPFControl @ 0x140062DF0
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorLogMFNDChildPFControl @ 0x14006E554 (StorLogMFNDChildPFControl.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     StorMFNDChildPFControl @ 0x140192010 (StorMFNDChildPFControl.c)
 */

__int64 __fastcall RaidAdapterMFNDChildPFControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v6; // rdx
  unsigned __int16 v7; // r9
  __int64 v8; // rdx
  unsigned __int16 v9; // cx
  int v10; // r15d
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  _BYTE *v20; // r9
  unsigned __int8 v21; // r14
  char v22; // si
  char v23; // r11
  char v24; // r10
  char v25; // r15
  char *v26; // r15
  unsigned int v27; // r13d
  unsigned __int64 v28; // r12
  __int64 v29; // r8
  int v30; // ecx
  char v31; // r12
  char v32; // cl
  char v33; // r8
  char v34; // al
  char *v35; // r10
  unsigned int v36; // eax
  __int64 v38; // [rsp+20h] [rbp-49h]
  __int64 v39; // [rsp+28h] [rbp-41h]
  char v40; // [rsp+60h] [rbp-9h]
  char v41; // [rsp+61h] [rbp-8h]
  int v42; // [rsp+64h] [rbp-5h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v44; // [rsp+6Ch] [rbp+3h]
  GUID v45; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v43 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( !StorIsMFNDSupported(a1) )
  {
    v42 = -1073741637;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 184) + 16LL) < 0x20u )
    goto LABEL_14;
  if ( !v2 )
    goto LABEL_14;
  if ( *(_WORD *)v2 != 1 )
    goto LABEL_14;
  if ( *(_DWORD *)(v2 + 4) < 0x20u )
    goto LABEL_14;
  v8 = *(unsigned int *)(v2 + 24);
  if ( !(_DWORD)v8 || (int)v8 >= 5 )
    goto LABEL_14;
  if ( (*(_DWORD *)(v2 + 16) & 1) != 0 )
  {
    v9 = -1;
    goto LABEL_12;
  }
  v9 = *(_WORD *)(v2 + 8);
  if ( !v9 )
  {
LABEL_14:
    v42 = -1073741811;
    goto LABEL_15;
  }
LABEL_12:
  v10 = StorMFNDChildPFControl(a1, v8, v9, &v43);
  v44 = v10;
  v7 = v43;
  v42 = v10;
  if ( v10 >= 0 )
    goto LABEL_16;
LABEL_15:
  StorMapMFNDErrorToNtStatus(v7, &v42);
  v10 = v42;
  v44 = v42;
  if ( v2 )
  {
LABEL_16:
    v11 = *(unsigned __int16 *)(v2 + 8);
    v12 = *(_DWORD *)(v2 + 16);
    v13 = *(_DWORD *)(v2 + 24);
    goto LABEL_18;
  }
  v11 = -1;
  v12 = -1;
  v13 = -1;
LABEL_18:
  StorLogMFNDChildPFControl(a1, v11, v12, v13, v7, v10);
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v10;
  if ( v14 )
    goto LABEL_84;
  v45 = 0LL;
  IoGetActivityIdIrp(a2, &v45);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_84;
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
    v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_83;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_84;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v3 = *v17;
        LODWORD(v39) = *(_DWORD *)(a2 + 48);
        LODWORD(v38) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v45, a2, v38, v39);
      }
      goto LABEL_84;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_84;
    v18 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
LABEL_83:
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v45, a2, v38);
    goto LABEL_84;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_84;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0LL;
  v40 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v19 + 72);
    v20 = *(_BYTE **)(v19 + 32);
    v21 = *(_BYTE *)(v19 + 11);
    v31 = *(_BYTE *)(v19 + 4);
    if ( *(_BYTE *)(v19 + 2) )
      goto LABEL_84;
LABEL_58:
    LOBYTE(v15) = v32 - 8;
    if ( (v15 & 0x5D) != 0 )
      goto LABEL_84;
    v33 = *(_BYTE *)(v19 + 3);
    if ( v33 == 1 || !v20 || !v21 )
      goto LABEL_77;
    v34 = *v20 & 0x7F;
    if ( v34 == 114 || v34 == 115 )
    {
      v15 = (unsigned __int64)&v20[v21];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_75;
      v23 = v20[2];
      v22 = v20[1] & 0xF;
      v24 = v20[3];
    }
    else
    {
      v15 = (unsigned __int64)&v20[v21];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_75;
      v35 = v20 + 13;
      v22 = v20[2] & 0xF;
      v36 = v21;
      if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
        v36 = (unsigned __int8)v20[7] + 8;
      v15 = (unsigned __int64)&v20[v36];
      if ( (unsigned __int64)v35 <= v15 )
        v23 = v20[12];
      if ( (unsigned __int64)(v20 + 14) > v15 )
        v24 = 0;
      else
        v24 = *v35;
    }
    LOBYTE(v19) = 1;
LABEL_75:
    if ( (_BYTE)v19 )
      v25 = 1;
LABEL_77:
    if ( byte_140173441 < 0 )
    {
      if ( !v25 )
      {
        v24 = 0;
        v23 = 0;
        v22 = 0;
      }
      LOBYTE(v39) = v33;
      LODWORD(v38) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v15, v19, &v45, a2, v38, v39, v31, v22, v23, v24, a2);
    }
    goto LABEL_84;
  }
  v26 = 0LL;
  v41 = 0;
  if ( !*(_DWORD *)(v19 + 20) )
  {
    v27 = 0;
    v43 = *(_DWORD *)(v19 + 56);
    if ( v43 )
    {
      do
      {
        v15 = *(unsigned int *)(v19 + 4LL * v27 + 120);
        if ( (unsigned int)v15 >= 0x80 )
        {
          v28 = *(unsigned int *)(v19 + 16);
          if ( (unsigned int)v15 < (unsigned int)v28 )
          {
            v29 = (unsigned int)v15;
            v30 = *(_DWORD *)(v15 + v19) - 64;
            if ( v30 )
            {
              v15 = (unsigned int)(v30 - 1);
              if ( (_DWORD)v15 )
              {
                if ( (_DWORD)v15 == 1 )
                {
                  v15 = v29 + 40;
                  if ( v29 + 40 <= v28 )
                  {
                    if ( *(_DWORD *)(v29 + v19 + 12) )
                      v26 = (char *)(v29 + v19 + 32);
                    v20 = *(_BYTE **)(v29 + v19 + 24);
LABEL_43:
                    v31 = *(_BYTE *)(v29 + v19 + 8);
                    v21 = *(_BYTE *)(v29 + v19 + 9);
                    goto LABEL_52;
                  }
                }
              }
              else
              {
                v15 = v29 + 56;
                if ( v29 + 56 <= v28 )
                {
                  v41 = 1;
                  if ( *(_BYTE *)(v29 + v19 + 10) )
                    v26 = (char *)(v29 + v19 + 24);
                  v20 = *(_BYTE **)(v29 + v19 + 16);
                  v21 = *(_BYTE *)(v29 + v19 + 9);
                  v40 = *(_BYTE *)(v29 + v19 + 8);
                }
              }
            }
            else
            {
              v15 = v29 + 40;
              if ( v29 + 40 <= v28 )
              {
                if ( *(_BYTE *)(v29 + v19 + 10) )
                  v26 = (char *)(v29 + v19 + 24);
                v20 = *(_BYTE **)(v29 + v19 + 16);
                goto LABEL_43;
              }
            }
            if ( v41 )
              break;
          }
        }
        ++v27;
      }
      while ( v27 < v43 );
      v31 = v40;
LABEL_52:
      if ( v26 )
      {
        v32 = *v26;
        v25 = 0;
        goto LABEL_58;
      }
    }
  }
LABEL_84:
  IofCompleteRequest((PIRP)a2, 0);
  return v44;
}
