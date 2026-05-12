/*
 * XREFs of StorUnitQueryBypassIOProperty @ 0x1400AAE2C
 * Callers:
 *     RaUnitStorageInternalQueryPropertyIoctl @ 0x14018D09C (RaUnitStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorUnitQueryBypassIOProperty(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // ebx
  _DWORD *v4; // rsi
  size_t v8; // rbp
  unsigned int v9; // r14d
  __int64 v10; // rax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v16; // rdx
  _BYTE *v17; // r9
  unsigned __int8 v18; // bp
  char v19; // r11
  char v20; // si
  char v21; // r10
  char v22; // r15
  char *v23; // r15
  unsigned int v24; // r13d
  unsigned __int64 v25; // r12
  __int64 v26; // r8
  int v27; // ecx
  char v28; // r12
  char v29; // cl
  char v30; // r8
  char v31; // al
  char *v32; // r10
  unsigned int v33; // eax
  int v35; // [rsp+20h] [rbp-98h]
  char v36; // [rsp+60h] [rbp-58h]
  char v37; // [rsp+61h] [rbp-57h]
  unsigned int v38; // [rsp+64h] [rbp-54h]
  GUID v39; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v8 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !a3 )
  {
    v9 = -1073741811;
LABEL_3:
    v10 = 0LL;
    goto LABEL_14;
  }
  *a3 = 0;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v9 = -1073741790;
    goto LABEL_3;
  }
  if ( (unsigned int)v8 < 8 )
  {
    v9 = -1073741789;
    goto LABEL_3;
  }
  memset_0(v4, 0, v8);
  *v4 = 40;
  v4[1] = 40;
  if ( (unsigned int)v8 >= 0x28 )
  {
    if ( (*(_DWORD *)(a1 + 1952) & 0x40) == 0 )
    {
      v9 = -1073741637;
      goto LABEL_3;
    }
    *((_QWORD *)v4 + 1) = *(_QWORD *)(a1 + 8);
    *((_QWORD *)v4 + 2) = StorUnitDereferenceDeviceObject;
    *((_QWORD *)v4 + 3) = &StorUnitStartBypassIo;
    v10 = 40LL;
    *a3 = 1;
  }
  else
  {
    v10 = 8LL;
  }
  v9 = 0;
LABEL_14:
  v11 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v10;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v11 )
    goto LABEL_80;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_80;
    v35 = *(_DWORD *)(a2 + 48);
    v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_79;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_80;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v3 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v39, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_80;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_80;
    v15 = &EventPnpRequestComplete;
    v35 = *(_DWORD *)(a2 + 48);
LABEL_79:
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v39, a2, v35);
    goto LABEL_80;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_80;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0LL;
  v36 = 0;
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
      goto LABEL_80;
LABEL_54:
    LOBYTE(v12) = v29 - 8;
    if ( (v12 & 0x5D) != 0 )
      goto LABEL_80;
    v30 = *(_BYTE *)(v16 + 3);
    if ( v30 == 1 || !v17 || !v18 )
      goto LABEL_73;
    v31 = *v17 & 0x7F;
    if ( v31 == 114 || v31 == 115 )
    {
      v12 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v12 )
        goto LABEL_71;
      v20 = v17[2];
      v19 = v17[1] & 0xF;
      v21 = v17[3];
    }
    else
    {
      v12 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v12 )
        goto LABEL_71;
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
    LOBYTE(v16) = 1;
LABEL_71:
    if ( (_BYTE)v16 )
      v22 = 1;
LABEL_73:
    if ( byte_140173441 < 0 )
    {
      if ( !v22 )
      {
        v21 = 0;
        v20 = 0;
        v19 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v16, &v39, a2, *(_DWORD *)(a2 + 48), v30, v28, v19, v20, v21, a2);
    }
    goto LABEL_80;
  }
  v23 = 0LL;
  v37 = 0;
  if ( !*(_DWORD *)(v16 + 20) )
  {
    v24 = 0;
    v38 = *(_DWORD *)(v16 + 56);
    if ( v38 )
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
LABEL_39:
                    v28 = *(_BYTE *)(v26 + v16 + 8);
                    v18 = *(_BYTE *)(v26 + v16 + 9);
                    goto LABEL_48;
                  }
                }
              }
              else
              {
                v12 = v26 + 56;
                if ( v26 + 56 <= v25 )
                {
                  v37 = 1;
                  if ( *(_BYTE *)(v26 + v16 + 10) )
                    v23 = (char *)(v26 + v16 + 24);
                  v17 = *(_BYTE **)(v26 + v16 + 16);
                  v18 = *(_BYTE *)(v26 + v16 + 9);
                  v36 = *(_BYTE *)(v26 + v16 + 8);
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
                goto LABEL_39;
              }
            }
            if ( v37 )
              break;
          }
        }
        ++v24;
      }
      while ( v24 < v38 );
      v28 = v36;
LABEL_48:
      if ( v23 )
      {
        v29 = *v23;
        v22 = 0;
        goto LABEL_54;
      }
    }
  }
LABEL_80:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
