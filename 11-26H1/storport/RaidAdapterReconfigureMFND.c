/*
 * XREFs of RaidAdapterReconfigureMFND @ 0x140065184
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorLogMFNDReconfigure @ 0x14006EF40 (StorLogMFNDReconfigure.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     StorResetMFND @ 0x140194654 (StorResetMFND.c)
 */

__int64 __fastcall RaidAdapterReconfigureMFND(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v5; // r12d
  _BYTE **v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // r9d
  unsigned int v9; // esi
  _BYTE **v10; // r14
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rdx
  int v15; // eax
  int v16; // r8d
  bool v17; // zf
  unsigned __int64 v18; // rcx
  _BYTE *v19; // rdx
  int *v20; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  __int64 v22; // rdx
  _BYTE *v23; // r9
  unsigned __int8 v24; // r15
  char v25; // r14
  char v26; // r11
  char v27; // r10
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
  char *v39; // r10
  unsigned int v40; // eax
  __int64 v42; // [rsp+20h] [rbp-49h]
  char v43; // [rsp+60h] [rbp-9h]
  char v44; // [rsp+61h] [rbp-8h]
  unsigned int v45; // [rsp+64h] [rbp-5h] BYREF
  unsigned int v46; // [rsp+68h] [rbp-1h] BYREF
  GUID v47; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v45 = 0;
  v5 = 0;
  if ( StorIsMFNDSupported(a1) )
  {
    v10 = v6;
    v11 = *((_DWORD *)*v6 + 4);
    if ( v11 >= 0x14
      && v7
      && *(_WORD *)v7 == 1
      && (v12 = *(_DWORD *)(v7 + 4), v12 >= 0x14)
      && (v5 = *(_DWORD *)(v7 + 12), v5 == 1) )
    {
      if ( v11 < 0x20 || v12 < 0x20 )
      {
        v9 = -1073741789;
      }
      else
      {
        v13 = v7 + 16;
        if ( *(_WORD *)(v7 + 16) == 1
          && *(_DWORD *)(v7 + 20) >= 0x10u
          && (v14 = *(unsigned int *)(v7 + 24), (_DWORD)v14)
          && (unsigned int)v14 <= *(unsigned __int16 *)(*(_QWORD *)(a1 + 6216) + 8LL) )
        {
          v15 = StorResetMFND(a1, v14, &v45);
          v8 = v45;
          v9 = v15;
          v46 = v15;
          if ( v15 < 0 )
          {
            StorMapMFNDErrorToNtStatus((unsigned __int16)v45, &v46);
            v9 = v46;
          }
        }
        else
        {
          v9 = -1073741811;
        }
        v6 = v10;
        if ( v13 )
        {
          v16 = *(_DWORD *)(v13 + 8);
          goto LABEL_22;
        }
      }
    }
    else
    {
      v9 = -1073741811;
    }
  }
  else
  {
    v9 = -1073741637;
  }
  v16 = -1;
  v10 = v6;
LABEL_22:
  StorLogMFNDReconfigure(a1, v5, v16, v8, v9);
  v17 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v17 )
    goto LABEL_88;
  v47 = 0LL;
  IoGetActivityIdIrp(a2, &v47);
  v19 = *v10;
  if ( **v10 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_88;
    LODWORD(v42) = *(_DWORD *)(a2 + 48);
    v21 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_87;
  }
  if ( **v10 != 15 )
  {
    if ( **v10 != 27 )
      goto LABEL_88;
    if ( v19[1] == 7 && !*((_DWORD *)v19 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v20 = *(int **)(a2 + 56);
        if ( v20 )
          v2 = *v20;
        LODWORD(v42) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v18, (__int64)v19, &v47, a2, v42, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_88;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_88;
    v21 = &EventPnpRequestComplete;
    LODWORD(v42) = *(_DWORD *)(a2 + 48);
LABEL_87:
    McTemplateK0pd_EtwWriteTransfer(v18, v21, &v47, a2, v42);
    goto LABEL_88;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_88;
  v22 = *((_QWORD *)v19 + 1);
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
      goto LABEL_88;
LABEL_62:
    LOBYTE(v18) = v36 - 8;
    if ( (v18 & 0x5D) != 0 )
      goto LABEL_88;
    v37 = *(_BYTE *)(v22 + 3);
    if ( v37 == 1 || !v23 || !v24 )
      goto LABEL_81;
    v38 = *v23 & 0x7F;
    if ( v38 == 114 || v38 == 115 )
    {
      v18 = (unsigned __int64)&v23[v24];
      LOBYTE(v22) = 0;
      if ( (unsigned __int64)(v23 + 8) > v18 )
        goto LABEL_79;
      v26 = v23[2];
      v25 = v23[1] & 0xF;
      v27 = v23[3];
    }
    else
    {
      v18 = (unsigned __int64)&v23[v24];
      LOBYTE(v22) = 0;
      if ( (unsigned __int64)(v23 + 8) > v18 )
        goto LABEL_79;
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
LABEL_79:
    if ( (_BYTE)v22 )
      v28 = 1;
LABEL_81:
    if ( byte_140173441 < 0 )
    {
      if ( !v28 )
      {
        v27 = 0;
        v26 = 0;
        v25 = 0;
      }
      LODWORD(v42) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v18, v22, &v47, a2, v42, v37, v35, v25, v26, v27, a2);
    }
    goto LABEL_88;
  }
  v29 = 0LL;
  v44 = 0;
  if ( !*(_DWORD *)(v22 + 20) )
  {
    v30 = *(_DWORD *)(v22 + 56);
    v31 = 0LL;
    v46 = 0;
    v45 = v30;
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
LABEL_47:
                    v35 = *(_BYTE *)(v33 + v22 + 8);
                    v24 = *(_BYTE *)(v33 + v22 + 9);
                    goto LABEL_56;
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
                goto LABEL_47;
              }
            }
            if ( v44 )
              break;
          }
        }
        v31 = v46 + 1;
        v46 = v31;
      }
      while ( (unsigned int)v31 < v45 );
      v35 = v43;
LABEL_56:
      if ( v29 )
      {
        v36 = *v29;
        v28 = 0;
        goto LABEL_62;
      }
    }
  }
LABEL_88:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
