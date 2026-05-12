/*
 * XREFs of RaidUnitGetCryptoProperty @ 0x1400A754C
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401B2144 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidConvertCryptoCapabilitiesToExternal @ 0x140071458 (RaidConvertCryptoCapabilitiesToExternal.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitGetCryptoProperty(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  int v4; // ebx
  unsigned __int16 *v5; // r8
  unsigned int v6; // eax
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rdx
  char v13; // r13
  _BYTE *v14; // r9
  unsigned __int8 v15; // bp
  char v16; // si
  char v17; // r11
  char v18; // r10
  char v19; // r14
  char *v20; // r14
  unsigned int v21; // r12d
  unsigned __int64 v22; // r15
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  char v27; // al
  char *v28; // r10
  unsigned int v29; // eax
  char v31; // [rsp+60h] [rbp-68h]
  __int64 v32; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v33; // [rsp+70h] [rbp-58h]
  GUID v34; // [rsp+78h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a1 + 3608);
  v4 = 0;
  v32 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !v3 )
    return 3221225659LL;
  v5 = *(unsigned __int16 **)(v3 + 104);
  if ( !v5 )
    return 3221225659LL;
  v6 = RaidConvertCryptoCapabilitiesToExternal(a2, &v32, v5, 2);
  v7 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v32;
  v33 = v6;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v7 )
    goto LABEL_69;
  v34 = 0LL;
  IoGetActivityIdIrp(a2, &v34);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_69;
    v11 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v4 = *v10;
        McTemplateK0pqd_EtwWriteTransfer(v8, v9, &v34, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_69;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_69;
    v11 = &EventPnpRequestComplete;
LABEL_68:
    McTemplateK0pd_EtwWriteTransfer(v8, v11, &v34, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_69;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_69;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v12 + 2) == 40 )
  {
    v20 = 0LL;
    v31 = 0;
    if ( *(_DWORD *)(v12 + 20) )
      goto LABEL_69;
    v21 = 0;
    LODWORD(v32) = *(_DWORD *)(v12 + 56);
    if ( !(_DWORD)v32 )
      goto LABEL_69;
    while ( 1 )
    {
      v8 = *(unsigned int *)(v12 + 4LL * v21 + 120);
      if ( (unsigned int)v8 >= 0x80 )
      {
        v22 = *(unsigned int *)(v12 + 16);
        if ( (unsigned int)v8 < (unsigned int)v22 )
        {
          v23 = (unsigned int)v8;
          v24 = *(_DWORD *)(v8 + v12) - 64;
          if ( v24 )
          {
            v8 = (unsigned int)(v24 - 1);
            if ( (_DWORD)v8 )
            {
              if ( (_DWORD)v8 == 1 )
              {
                v8 = v23 + 40;
                if ( v23 + 40 <= v22 )
                {
                  if ( *(_DWORD *)(v23 + v12 + 12) )
                    v20 = (char *)(v23 + v12 + 32);
                  v14 = *(_BYTE **)(v23 + v12 + 24);
                  goto LABEL_39;
                }
              }
            }
            else
            {
              v8 = v23 + 56;
              if ( v23 + 56 <= v22 )
              {
                v31 = 1;
                if ( *(_BYTE *)(v23 + v12 + 10) )
                  v20 = (char *)(v23 + v12 + 24);
                v13 = *(_BYTE *)(v23 + v12 + 8);
                v14 = *(_BYTE **)(v23 + v12 + 16);
                v15 = *(_BYTE *)(v23 + v12 + 9);
              }
            }
          }
          else
          {
            v8 = v23 + 40;
            if ( v23 + 40 <= v22 )
            {
              if ( *(_BYTE *)(v23 + v12 + 10) )
                v20 = (char *)(v23 + v12 + 24);
              v14 = *(_BYTE **)(v23 + v12 + 16);
LABEL_39:
              v15 = *(_BYTE *)(v23 + v12 + 9);
              v13 = *(_BYTE *)(v23 + v12 + 8);
LABEL_40:
              if ( v20 )
              {
                v25 = *v20;
                v19 = 0;
                goto LABEL_43;
              }
              goto LABEL_69;
            }
          }
          if ( v31 )
            goto LABEL_40;
        }
      }
      if ( ++v21 >= (unsigned int)v32 )
        goto LABEL_40;
    }
  }
  v25 = *(_BYTE *)(v12 + 72);
  v14 = *(_BYTE **)(v12 + 32);
  v15 = *(_BYTE *)(v12 + 11);
  v13 = *(_BYTE *)(v12 + 4);
  if ( *(_BYTE *)(v12 + 2) )
    goto LABEL_69;
LABEL_43:
  LOBYTE(v8) = v25 - 8;
  if ( (v8 & 0x5D) == 0 )
  {
    v26 = *(_BYTE *)(v12 + 3);
    if ( v26 == 1 || !v14 || !v15 )
    {
LABEL_62:
      if ( byte_140173441 < 0 )
      {
        if ( !v19 )
        {
          v18 = 0;
          v17 = 0;
          v16 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v8, v12, &v34, a2, *(_DWORD *)(a2 + 48), v26, v13, v16, v17, v18, a2);
      }
      goto LABEL_69;
    }
    v27 = *v14 & 0x7F;
    if ( v27 == 114 || v27 == 115 )
    {
      v8 = (unsigned __int64)&v14[v15];
      LOBYTE(v12) = 0;
      if ( (unsigned __int64)(v14 + 8) > v8 )
        goto LABEL_60;
      v17 = v14[2];
      v16 = v14[1] & 0xF;
      v18 = v14[3];
    }
    else
    {
      v8 = (unsigned __int64)&v14[v15];
      LOBYTE(v12) = 0;
      if ( (unsigned __int64)(v14 + 8) > v8 )
        goto LABEL_60;
      v28 = v14 + 13;
      v16 = v14[2] & 0xF;
      v29 = v15;
      if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
        v29 = (unsigned __int8)v14[7] + 8;
      v8 = (unsigned __int64)&v14[v29];
      if ( (unsigned __int64)v28 <= v8 )
        v17 = v14[12];
      if ( (unsigned __int64)(v14 + 14) > v8 )
        v18 = 0;
      else
        v18 = *v28;
    }
    LOBYTE(v12) = 1;
LABEL_60:
    if ( (_BYTE)v12 )
      v19 = 1;
    goto LABEL_62;
  }
LABEL_69:
  IofCompleteRequest((PIRP)a2, 0);
  return v33;
}
