/*
 * XREFs of RaidAdapterMFNDNameSpacePageMapControl @ 0x14006324C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorLogMFNDNSPageMapControl @ 0x14006E734 (StorLogMFNDNSPageMapControl.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     StorMFNDNSPageMapControl @ 0x14019214C (StorMFNDNSPageMapControl.c)
 */

__int64 __fastcall RaidAdapterMFNDNameSpacePageMapControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v6; // rdx
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r13d
  int v11; // edx
  int v12; // r8d
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 v18; // rdx
  _BYTE *v19; // r9
  unsigned __int8 v20; // r14
  char v21; // si
  char v22; // r11
  char v23; // r10
  char v24; // r15
  char *v25; // r15
  unsigned int v26; // ecx
  __int64 v27; // rax
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
  char v39; // [rsp+60h] [rbp-9h]
  char v40; // [rsp+61h] [rbp-8h]
  unsigned int v41; // [rsp+64h] [rbp-5h] BYREF
  int v42; // [rsp+6Ch] [rbp+3h] BYREF
  GUID v43; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v42 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v6 + 184) + 16LL) >= 0x18u
      && v2
      && *(_WORD *)v2 == 1
      && *(_DWORD *)(v2 + 4) >= 0x18u
      && (v8 = *(unsigned __int16 *)(v2 + 8), (_WORD)v8)
      && (v9 = *(unsigned int *)(v2 + 16), (_DWORD)v9)
      && (int)v9 < 4 )
    {
      v10 = StorMFNDNSPageMapControl(a1, v8, v9, &v42);
      v7 = v42;
      v41 = v10;
      if ( v10 >= 0 )
        goto LABEL_14;
    }
    else
    {
      v41 = -1073741811;
    }
  }
  else
  {
    v41 = -1073741637;
  }
  StorMapMFNDErrorToNtStatus((unsigned __int16)v7, &v41);
  v10 = v41;
  if ( v2 )
  {
LABEL_14:
    v11 = *(unsigned __int16 *)(v2 + 8);
    v12 = *(_DWORD *)(v2 + 16);
    goto LABEL_16;
  }
  v11 = -1;
  v12 = -1;
LABEL_16:
  StorLogMFNDNSPageMapControl(a1, v11, v12, v7, v10);
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v10;
  if ( v13 )
    goto LABEL_82;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_82;
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
    v17 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_81;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_82;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v3 = *v16;
        LODWORD(v38) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v43, a2, v38, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_82;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_82;
    v17 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
LABEL_81:
    McTemplateK0pd_EtwWriteTransfer(v14, v17, &v43, a2, v38);
    goto LABEL_82;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_82;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0LL;
  v39 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v18 + 72);
    v19 = *(_BYTE **)(v18 + 32);
    v20 = *(_BYTE *)(v18 + 11);
    v31 = *(_BYTE *)(v18 + 4);
    if ( *(_BYTE *)(v18 + 2) )
      goto LABEL_82;
LABEL_56:
    LOBYTE(v14) = v32 - 8;
    if ( (v14 & 0x5D) != 0 )
      goto LABEL_82;
    v33 = *(_BYTE *)(v18 + 3);
    if ( v33 == 1 || !v19 || !v20 )
      goto LABEL_75;
    v34 = *v19 & 0x7F;
    if ( v34 == 114 || v34 == 115 )
    {
      v14 = (unsigned __int64)&v19[v20];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v19 + 8) > v14 )
        goto LABEL_73;
      v22 = v19[2];
      v21 = v19[1] & 0xF;
      v23 = v19[3];
    }
    else
    {
      v14 = (unsigned __int64)&v19[v20];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v19 + 8) > v14 )
        goto LABEL_73;
      v35 = v19 + 13;
      v21 = v19[2] & 0xF;
      v36 = v20;
      if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
        v36 = (unsigned __int8)v19[7] + 8;
      v14 = (unsigned __int64)&v19[v36];
      if ( (unsigned __int64)v35 <= v14 )
        v22 = v19[12];
      if ( (unsigned __int64)(v19 + 14) > v14 )
        v23 = 0;
      else
        v23 = *v35;
    }
    LOBYTE(v18) = 1;
LABEL_73:
    if ( (_BYTE)v18 )
      v24 = 1;
LABEL_75:
    if ( byte_140173441 < 0 )
    {
      if ( !v24 )
      {
        v23 = 0;
        v22 = 0;
        v21 = 0;
      }
      LODWORD(v38) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v14, v18, &v43, a2, v38, v33, v31, v21, v22, v23, a2);
    }
    goto LABEL_82;
  }
  v25 = 0LL;
  v40 = 0;
  if ( !*(_DWORD *)(v18 + 20) )
  {
    v26 = *(_DWORD *)(v18 + 56);
    v27 = 0LL;
    v42 = 0;
    v41 = v26;
    if ( v26 )
    {
      do
      {
        v14 = *(unsigned int *)(v18 + 4 * v27 + 120);
        if ( (unsigned int)v14 >= 0x80 )
        {
          v28 = *(unsigned int *)(v18 + 16);
          if ( (unsigned int)v14 < (unsigned int)v28 )
          {
            v29 = (unsigned int)v14;
            v30 = *(_DWORD *)(v14 + v18) - 64;
            if ( v30 )
            {
              v14 = (unsigned int)(v30 - 1);
              if ( (_DWORD)v14 )
              {
                if ( (_DWORD)v14 == 1 )
                {
                  v14 = v29 + 40;
                  if ( v29 + 40 <= v28 )
                  {
                    if ( *(_DWORD *)(v29 + v18 + 12) )
                      v25 = (char *)(v29 + v18 + 32);
                    v19 = *(_BYTE **)(v29 + v18 + 24);
LABEL_41:
                    v31 = *(_BYTE *)(v29 + v18 + 8);
                    v20 = *(_BYTE *)(v29 + v18 + 9);
                    goto LABEL_50;
                  }
                }
              }
              else
              {
                v14 = v29 + 56;
                if ( v29 + 56 <= v28 )
                {
                  v40 = 1;
                  if ( *(_BYTE *)(v29 + v18 + 10) )
                    v25 = (char *)(v29 + v18 + 24);
                  v19 = *(_BYTE **)(v29 + v18 + 16);
                  v20 = *(_BYTE *)(v29 + v18 + 9);
                  v39 = *(_BYTE *)(v29 + v18 + 8);
                }
              }
            }
            else
            {
              v14 = v29 + 40;
              if ( v29 + 40 <= v28 )
              {
                if ( *(_BYTE *)(v29 + v18 + 10) )
                  v25 = (char *)(v29 + v18 + 24);
                v19 = *(_BYTE **)(v29 + v18 + 16);
                goto LABEL_41;
              }
            }
            if ( v40 )
              break;
          }
        }
        v27 = (unsigned int)(v42 + 1);
        v42 = v27;
      }
      while ( (unsigned int)v27 < v41 );
      v31 = v39;
LABEL_50:
      if ( v25 )
      {
        v32 = *v25;
        v24 = 0;
        goto LABEL_56;
      }
    }
  }
LABEL_82:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v10;
}
