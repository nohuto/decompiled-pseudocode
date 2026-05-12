/*
 * XREFs of StorExtCompleteServiceIrp @ 0x14007AC80
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorExtCompleteServiceIrp(__int64 a1, __int64 a2)
{
  bool v3; // zf
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int *v6; // rax
  __int64 v7; // rcx
  const EVENT_DESCRIPTOR *v8; // rdx
  __int64 v9; // rdx
  char v10; // r12
  _BYTE *v11; // r9
  unsigned __int8 v12; // si
  char v13; // r11
  char v14; // di
  char v15; // r10
  char v16; // bp
  char *v17; // r14
  char v18; // r13
  unsigned int v19; // eax
  __int64 v20; // r15
  unsigned __int64 v21; // rbp
  __int64 v22; // r8
  int v23; // ecx
  char v24; // cl
  char v25; // r8
  char v26; // al
  char *v27; // r10
  unsigned int v28; // eax
  int *v29; // [rsp+68h] [rbp-50h] BYREF
  PEX_RUNDOWN_REF_CACHE_AWARE *v30; // [rsp+70h] [rbp-48h] BYREF
  GUID v31; // [rsp+78h] [rbp-40h] BYREF

  v30 = 0LL;
  RaidpPortGetAdapter(a1, (int **)&v30, &v29);
  v3 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v3 )
    goto LABEL_68;
  v31 = 0LL;
  IoGetActivityIdIrp(a2, &v31);
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v5 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_68;
    v8 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_67;
  }
  if ( *(_BYTE *)v5 != 15 )
  {
    if ( *(_BYTE *)v5 != 27 )
      goto LABEL_68;
    if ( *(_BYTE *)(v5 + 1) == 7 && !*(_DWORD *)(v5 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v6 = *(unsigned int **)(a2 + 56);
        if ( v6 )
          v7 = *v6;
        else
          v7 = 0LL;
        McTemplateK0pqd_EtwWriteTransfer(v7, v5, &v31, a2, v7, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_68;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_68;
    v8 = &EventPnpRequestComplete;
LABEL_67:
    McTemplateK0pd_EtwWriteTransfer(v4, v8, &v31, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_68;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_68;
  v9 = *(_QWORD *)(v5 + 8);
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( *(_BYTE *)(v9 + 2) == 40 )
  {
    v17 = 0LL;
    v18 = 0;
    if ( *(_DWORD *)(v9 + 20) )
      goto LABEL_68;
    v19 = *(_DWORD *)(v9 + 56);
    v20 = 0LL;
    if ( !v19 )
      goto LABEL_68;
    while ( 1 )
    {
      v4 = *(unsigned int *)(v9 + 4 * v20 + 120);
      if ( (unsigned int)v4 >= 0x80 )
      {
        v21 = *(unsigned int *)(v9 + 16);
        if ( (unsigned int)v4 < (unsigned int)v21 )
        {
          v22 = (unsigned int)v4;
          v23 = *(_DWORD *)(v4 + v9) - 64;
          if ( v23 )
          {
            v4 = (unsigned int)(v23 - 1);
            if ( (_DWORD)v4 )
            {
              if ( (_DWORD)v4 == 1 )
              {
                v4 = v22 + 40;
                if ( v22 + 40 <= v21 )
                {
                  if ( *(_DWORD *)(v22 + v9 + 12) )
                    v17 = (char *)(v22 + v9 + 32);
                  v11 = *(_BYTE **)(v22 + v9 + 24);
                  goto LABEL_38;
                }
              }
            }
            else
            {
              v4 = v22 + 56;
              if ( v22 + 56 <= v21 )
              {
                v18 = 1;
                if ( *(_BYTE *)(v22 + v9 + 10) )
                  v17 = (char *)(v22 + v9 + 24);
                v10 = *(_BYTE *)(v22 + v9 + 8);
                v11 = *(_BYTE **)(v22 + v9 + 16);
                v12 = *(_BYTE *)(v22 + v9 + 9);
              }
            }
          }
          else
          {
            v4 = v22 + 40;
            if ( v22 + 40 <= v21 )
            {
              if ( *(_BYTE *)(v22 + v9 + 10) )
                v17 = (char *)(v22 + v9 + 24);
              v11 = *(_BYTE **)(v22 + v9 + 16);
LABEL_38:
              v12 = *(_BYTE *)(v22 + v9 + 9);
              v10 = *(_BYTE *)(v22 + v9 + 8);
LABEL_39:
              if ( v17 )
              {
                v24 = *v17;
                v16 = 0;
                goto LABEL_42;
              }
              goto LABEL_68;
            }
          }
          if ( v18 )
            goto LABEL_39;
        }
      }
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= v19 )
        goto LABEL_39;
    }
  }
  v24 = *(_BYTE *)(v9 + 72);
  v11 = *(_BYTE **)(v9 + 32);
  v12 = *(_BYTE *)(v9 + 11);
  v10 = *(_BYTE *)(v9 + 4);
  if ( *(_BYTE *)(v9 + 2) )
    goto LABEL_68;
LABEL_42:
  LOBYTE(v4) = v24 - 8;
  if ( (v4 & 0x5D) == 0 )
  {
    v25 = *(_BYTE *)(v9 + 3);
    if ( v25 == 1 || !v11 || !v12 )
    {
LABEL_61:
      if ( byte_140173441 < 0 )
      {
        if ( !v16 )
        {
          v15 = 0;
          v14 = 0;
          v13 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v4, v9, &v31, a2, *(_DWORD *)(a2 + 48), v25, v10, v13, v14, v15, a2);
      }
      goto LABEL_68;
    }
    v26 = *v11 & 0x7F;
    if ( v26 == 114 || v26 == 115 )
    {
      v4 = (unsigned __int64)&v11[v12];
      LOBYTE(v9) = 0;
      if ( (unsigned __int64)(v11 + 8) > v4 )
        goto LABEL_59;
      v14 = v11[2];
      v13 = v11[1] & 0xF;
      v15 = v11[3];
    }
    else
    {
      v4 = (unsigned __int64)&v11[v12];
      LOBYTE(v9) = 0;
      if ( (unsigned __int64)(v11 + 8) > v4 )
        goto LABEL_59;
      v27 = v11 + 13;
      v13 = v11[2] & 0xF;
      v28 = v12;
      if ( (unsigned int)(unsigned __int8)v11[7] + 8 <= v12 )
        v28 = (unsigned __int8)v11[7] + 8;
      v4 = (unsigned __int64)&v11[v28];
      if ( (unsigned __int64)v27 <= v4 )
        v14 = v11[12];
      if ( (unsigned __int64)(v11 + 14) > v4 )
        v15 = 0;
      else
        v15 = *v27;
    }
    LOBYTE(v9) = 1;
LABEL_59:
    if ( (_BYTE)v9 )
      v16 = 1;
    goto LABEL_61;
  }
LABEL_68:
  IofCompleteRequest((PIRP)a2, 0);
  if ( v30 )
    ExReleaseRundownProtectionCacheAware(v30[42]);
}
