/*
 * XREFs of RaidPnPAsyncStartComplete @ 0x14006CF80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorLogStartAdapterFailure @ 0x140097CA8 (StorLogStartAdapterFailure.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidPnPAsyncStartComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 *v4; // rsi
  int v5; // ebx
  int v7; // ebp
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  char v14; // r13
  _BYTE *v15; // r9
  unsigned __int8 v16; // bp
  char v17; // r11
  char v18; // si
  char v19; // r10
  char v20; // r14
  char *v21; // r14
  unsigned int v22; // r12d
  unsigned __int64 v23; // r15
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // al
  char v28; // r8
  char *v29; // r10
  unsigned int v30; // eax
  char v32; // [rsp+60h] [rbp-58h]
  unsigned int v33; // [rsp+64h] [rbp-54h]
  GUID v34; // [rsp+68h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a3 + 16);
  v4 = (__int64 *)(a2 + 184);
  v5 = 0;
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*v4 + 3) |= 1u;
  v7 = *(_DWORD *)(a2 + 48);
  if ( v7 < 0 )
  {
    if ( v3 )
    {
      *(_DWORD *)(v3 + 6252) = 1;
      StorLogStartAdapterFailure(v3, (unsigned int)v7);
    }
    v8 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v7;
    if ( v8 )
      goto LABEL_73;
    v34 = 0LL;
    IoGetActivityIdIrp(a2, &v34);
    v10 = *v4;
    if ( *(_BYTE *)*v4 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_73;
      v12 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_72;
    }
    if ( *(_BYTE *)*v4 != 15 )
    {
      if ( *(_BYTE *)*v4 != 27 )
        goto LABEL_73;
      if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v11 = *(int **)(a2 + 56);
          if ( v11 )
            v5 = *v11;
          McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v34, a2, v5, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_73;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_73;
      v12 = &EventPnpRequestComplete;
LABEL_72:
      McTemplateK0pd_EtwWriteTransfer(v9, v12, &v34, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_73;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_73;
    v13 = *(_QWORD *)(v10 + 8);
    v14 = 0;
    v15 = 0LL;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( *(_BYTE *)(v13 + 2) == 40 )
    {
      v21 = 0LL;
      v32 = 0;
      if ( *(_DWORD *)(v13 + 20) )
        goto LABEL_73;
      v22 = 0;
      v33 = *(_DWORD *)(v13 + 56);
      if ( !v33 )
        goto LABEL_73;
      while ( 1 )
      {
        v9 = *(unsigned int *)(v13 + 4LL * v22 + 120);
        if ( (unsigned int)v9 >= 0x80 )
        {
          v23 = *(unsigned int *)(v13 + 16);
          if ( (unsigned int)v9 < (unsigned int)v23 )
          {
            v24 = (unsigned int)v9;
            v25 = *(_DWORD *)(v9 + v13) - 64;
            if ( v25 )
            {
              v9 = (unsigned int)(v25 - 1);
              if ( (_DWORD)v9 )
              {
                if ( (_DWORD)v9 == 1 )
                {
                  v9 = v24 + 40;
                  if ( v24 + 40 <= v23 )
                  {
                    if ( *(_DWORD *)(v24 + v13 + 12) )
                      v21 = (char *)(v24 + v13 + 32);
                    v15 = *(_BYTE **)(v24 + v13 + 24);
                    goto LABEL_43;
                  }
                }
              }
              else
              {
                v9 = v24 + 56;
                if ( v24 + 56 <= v23 )
                {
                  v32 = 1;
                  if ( *(_BYTE *)(v24 + v13 + 10) )
                    v21 = (char *)(v24 + v13 + 24);
                  v14 = *(_BYTE *)(v24 + v13 + 8);
                  v15 = *(_BYTE **)(v24 + v13 + 16);
                  v16 = *(_BYTE *)(v24 + v13 + 9);
                }
              }
            }
            else
            {
              v9 = v24 + 40;
              if ( v24 + 40 <= v23 )
              {
                if ( *(_BYTE *)(v24 + v13 + 10) )
                  v21 = (char *)(v24 + v13 + 24);
                v15 = *(_BYTE **)(v24 + v13 + 16);
LABEL_43:
                v16 = *(_BYTE *)(v24 + v13 + 9);
                v14 = *(_BYTE *)(v24 + v13 + 8);
LABEL_44:
                if ( v21 )
                {
                  v26 = *v21;
                  v20 = 0;
                  goto LABEL_47;
                }
                goto LABEL_73;
              }
            }
            if ( v32 )
              goto LABEL_44;
          }
        }
        if ( ++v22 >= v33 )
          goto LABEL_44;
      }
    }
    v26 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( *(_BYTE *)(v13 + 2) )
      goto LABEL_73;
LABEL_47:
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) != 0 )
    {
LABEL_73:
      IofCompleteRequest((PIRP)a2, 0);
      return 3221225494LL;
    }
    if ( *(_BYTE *)(v13 + 3) == 1 || !v15 || !v16 )
    {
LABEL_66:
      if ( byte_140173441 < 0 )
      {
        if ( !v20 )
        {
          v19 = 0;
          v18 = 0;
          v17 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v9,
          v13,
          &v34,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v13 + 3),
          v14,
          v17,
          v18,
          v19,
          a2);
      }
      goto LABEL_73;
    }
    v27 = *v15 & 0x7F;
    if ( v27 == 114 || v27 == 115 )
    {
      v9 = (unsigned __int64)&v15[v16];
      v28 = 0;
      if ( (unsigned __int64)(v15 + 8) > v9 )
        goto LABEL_64;
      v18 = v15[2];
      v17 = v15[1] & 0xF;
      v19 = v15[3];
    }
    else
    {
      v9 = (unsigned __int64)&v15[v16];
      v28 = 0;
      if ( (unsigned __int64)(v15 + 8) > v9 )
        goto LABEL_64;
      v29 = v15 + 13;
      v17 = v15[2] & 0xF;
      v30 = v16;
      if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
        v30 = (unsigned __int8)v15[7] + 8;
      v9 = (unsigned __int64)&v15[v30];
      if ( (unsigned __int64)v29 <= v9 )
        v18 = v15[12];
      if ( (unsigned __int64)(v15 + 14) > v9 )
        v19 = 0;
      else
        v19 = *v29;
    }
    v28 = 1;
LABEL_64:
    if ( v28 )
      v20 = 1;
    goto LABEL_66;
  }
  IoQueueWorkItem(*(PIO_WORKITEM *)a3, RaidPnPAsyncStartCompleteWorker, HyperCriticalWorkQueue, (PVOID)a3);
  return 3221225494LL;
}
