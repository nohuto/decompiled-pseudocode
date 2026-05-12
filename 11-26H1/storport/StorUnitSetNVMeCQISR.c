/*
 * XREFs of StorUnitSetNVMeCQISR @ 0x14019184C
 * Callers:
 *     RaUnitStorageInternalSetPropertyIoctl @ 0x14018D4F8 (RaUnitStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorUnitSetNVMeCQISR(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  _BYTE *v14; // r9
  unsigned __int8 v15; // r14
  char v16; // r11
  char v17; // bp
  char v18; // r10
  char v19; // r15
  char *v20; // r15
  unsigned int v21; // r13d
  unsigned __int64 v22; // r12
  __int64 v23; // r8
  int v24; // ecx
  char v25; // r12
  char v26; // cl
  char v27; // r8
  char v28; // al
  char *v29; // r10
  unsigned int v30; // eax
  int v32; // [rsp+20h] [rbp-98h]
  char v33; // [rsp+60h] [rbp-58h]
  char v34; // [rsp+61h] [rbp-57h]
  unsigned int v35; // [rsp+64h] [rbp-54h]
  GUID v36; // [rsp+68h] [rbp-50h] BYREF

  v2 = 0;
  v5 = 0;
  if ( (*(_DWORD *)(a1 + 1952) & 0x20) == 0 )
    goto LABEL_2;
  v6 = *(_QWORD *)(a2 + 24);
  if ( !v6 )
  {
LABEL_9:
    v5 = -1073741811;
    goto LABEL_10;
  }
  if ( !*(_DWORD *)(v6 + 4) )
  {
    if ( *(_QWORD *)(v6 + 8) && *(_QWORD *)(v6 + 16) && *(_QWORD *)(v6 + 24) )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + 111LL) |= 0x80u;
      v7 = *(_QWORD *)(a1 + 24);
      *(_OWORD *)(v7 + 6144) = *(_OWORD *)(v6 + 8);
      *(_QWORD *)(v7 + 6160) = *(_QWORD *)(v6 + 24);
      goto LABEL_11;
    }
    goto LABEL_9;
  }
LABEL_2:
  v5 = -1073741637;
LABEL_10:
  *(_QWORD *)(a2 + 56) = 0LL;
LABEL_11:
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v8 )
    goto LABEL_77;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_77;
    v32 = *(_DWORD *)(a2 + 48);
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_76;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_77;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v2 = *v11;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v36, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_77;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_77;
    v12 = &EventPnpRequestComplete;
    v32 = *(_DWORD *)(a2 + 48);
LABEL_76:
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v36, a2, v32);
    goto LABEL_77;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_77;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0LL;
  v33 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v13 + 72);
    v14 = *(_BYTE **)(v13 + 32);
    v15 = *(_BYTE *)(v13 + 11);
    v25 = *(_BYTE *)(v13 + 4);
    if ( *(_BYTE *)(v13 + 2) )
      goto LABEL_77;
LABEL_51:
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) != 0 )
      goto LABEL_77;
    v27 = *(_BYTE *)(v13 + 3);
    if ( v27 == 1 || !v14 || !v15 )
      goto LABEL_70;
    v28 = *v14 & 0x7F;
    if ( v28 == 114 || v28 == 115 )
    {
      v9 = (unsigned __int64)&v14[v15];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v14 + 8) > v9 )
        goto LABEL_68;
      v17 = v14[2];
      v16 = v14[1] & 0xF;
      v18 = v14[3];
    }
    else
    {
      v9 = (unsigned __int64)&v14[v15];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v14 + 8) > v9 )
        goto LABEL_68;
      v29 = v14 + 13;
      v16 = v14[2] & 0xF;
      v30 = v15;
      if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
        v30 = (unsigned __int8)v14[7] + 8;
      v9 = (unsigned __int64)&v14[v30];
      if ( (unsigned __int64)v29 <= v9 )
        v17 = v14[12];
      if ( (unsigned __int64)(v14 + 14) > v9 )
        v18 = 0;
      else
        v18 = *v29;
    }
    LOBYTE(v13) = 1;
LABEL_68:
    if ( (_BYTE)v13 )
      v19 = 1;
LABEL_70:
    if ( byte_140173441 < 0 )
    {
      if ( !v19 )
      {
        v18 = 0;
        v17 = 0;
        v16 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v36, a2, *(_DWORD *)(a2 + 48), v27, v25, v16, v17, v18, a2);
    }
    goto LABEL_77;
  }
  v20 = 0LL;
  v34 = 0;
  if ( !*(_DWORD *)(v13 + 20) )
  {
    v21 = 0;
    v35 = *(_DWORD *)(v13 + 56);
    if ( v35 )
    {
      do
      {
        v9 = *(unsigned int *)(v13 + 4LL * v21 + 120);
        if ( (unsigned int)v9 >= 0x80 )
        {
          v22 = *(unsigned int *)(v13 + 16);
          if ( (unsigned int)v9 < (unsigned int)v22 )
          {
            v23 = (unsigned int)v9;
            v24 = *(_DWORD *)(v9 + v13) - 64;
            if ( v24 )
            {
              v9 = (unsigned int)(v24 - 1);
              if ( (_DWORD)v9 )
              {
                if ( (_DWORD)v9 == 1 )
                {
                  v9 = v23 + 40;
                  if ( v23 + 40 <= v22 )
                  {
                    if ( *(_DWORD *)(v23 + v13 + 12) )
                      v20 = (char *)(v23 + v13 + 32);
                    v14 = *(_BYTE **)(v23 + v13 + 24);
LABEL_36:
                    v25 = *(_BYTE *)(v23 + v13 + 8);
                    v15 = *(_BYTE *)(v23 + v13 + 9);
                    goto LABEL_45;
                  }
                }
              }
              else
              {
                v9 = v23 + 56;
                if ( v23 + 56 <= v22 )
                {
                  v34 = 1;
                  if ( *(_BYTE *)(v23 + v13 + 10) )
                    v20 = (char *)(v23 + v13 + 24);
                  v14 = *(_BYTE **)(v23 + v13 + 16);
                  v15 = *(_BYTE *)(v23 + v13 + 9);
                  v33 = *(_BYTE *)(v23 + v13 + 8);
                }
              }
            }
            else
            {
              v9 = v23 + 40;
              if ( v23 + 40 <= v22 )
              {
                if ( *(_BYTE *)(v23 + v13 + 10) )
                  v20 = (char *)(v23 + v13 + 24);
                v14 = *(_BYTE **)(v23 + v13 + 16);
                goto LABEL_36;
              }
            }
            if ( v34 )
              break;
          }
        }
        ++v21;
      }
      while ( v21 < v35 );
      v25 = v33;
LABEL_45:
      if ( v20 )
      {
        v26 = *v20;
        v19 = 0;
        goto LABEL_51;
      }
    }
  }
LABEL_77:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
