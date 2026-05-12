/*
 * XREFs of NvmeNamespaceShutdownIrp @ 0x1401135E4
 * Callers:
 *     RaDriverShutdownIrp @ 0x140072A70 (RaDriverShutdownIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceShutdownIrp(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ebx
  bool v5; // zf
  unsigned __int64 v6; // rcx
  unsigned __int8 *v7; // rdx
  int v8; // eax
  int *v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 v11; // rdx
  _BYTE *v12; // r9
  unsigned __int8 v13; // r14
  char v14; // r11
  char v15; // si
  char v16; // r10
  char v17; // r15
  int v18; // eax
  char *v19; // r15
  unsigned int v20; // r13d
  unsigned __int64 v21; // r12
  __int64 v22; // r8
  int v23; // ecx
  char v24; // r12
  char v25; // cl
  char v26; // r8
  char v27; // al
  char *v28; // r10
  unsigned int v29; // eax
  unsigned int v30; // r13d
  unsigned __int64 v31; // r12
  int v32; // ecx
  int v34; // [rsp+28h] [rbp-39h]
  char v35; // [rsp+68h] [rbp+7h]
  char v36; // [rsp+69h] [rbp+8h]
  char v37; // [rsp+69h] [rbp+8h]
  unsigned int v38; // [rsp+6Ch] [rbp+Bh]
  unsigned int v39; // [rsp+70h] [rbp+Fh]
  unsigned int v40; // [rsp+70h] [rbp+Fh]
  GUID v41; // [rsp+78h] [rbp+17h] BYREF

  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 136LL);
  *(_BYTE *)(a2 + 141) = -84;
  if ( (v3 & 2) != 0 )
  {
    v4 = 0;
    v5 = StorEtwLoggingEnabled == 0;
    v38 = -1073741637;
    *(_DWORD *)(a2 + 48) = -1073741637;
    if ( v5 )
      goto LABEL_93;
    v41 = 0LL;
    IoGetActivityIdIrp(a2, &v41);
    v7 = *(unsigned __int8 **)(a2 + 184);
    if ( *v7 != 14 )
    {
      v8 = *v7 - 15;
      if ( *v7 != 15 )
      {
LABEL_5:
        if ( v8 != 12 )
          goto LABEL_93;
        if ( v7[1] == 7 && !*((_DWORD *)v7 + 2) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v9 = *(int **)(a2 + 56);
            if ( v9 )
              v4 = *v9;
            McTemplateK0pqd_EtwWriteTransfer(v6, (__int64)v7, &v41, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_93;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_93;
        v10 = &EventPnpRequestComplete;
        v34 = *(_DWORD *)(a2 + 48);
LABEL_92:
        McTemplateK0pd_EtwWriteTransfer(v6, v10, &v41, a2, v34);
        goto LABEL_93;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_93;
      v11 = *((_QWORD *)v7 + 1);
      v12 = 0LL;
      v35 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = *(unsigned __int8 *)(v11 + 2);
      if ( (_BYTE)v18 == 40 )
      {
        v19 = 0LL;
        v36 = 0;
        if ( !*(_DWORD *)(v11 + 20) )
        {
          v20 = 0;
          v39 = *(_DWORD *)(v11 + 56);
          if ( v39 )
          {
            while ( 1 )
            {
              v6 = *(unsigned int *)(v11 + 4LL * v20 + 120);
              if ( (unsigned int)v6 >= 0x80 )
              {
                v21 = *(unsigned int *)(v11 + 16);
                if ( (unsigned int)v6 < (unsigned int)v21 )
                {
                  v22 = (unsigned int)v6;
                  v23 = *(_DWORD *)(v6 + v11) - 64;
                  if ( v23 )
                  {
                    v6 = (unsigned int)(v23 - 1);
                    if ( (_DWORD)v6 )
                    {
                      if ( (_DWORD)v6 == 1 )
                      {
                        v6 = v22 + 40;
                        if ( v22 + 40 <= v21 )
                          goto LABEL_24;
                      }
                    }
                    else
                    {
                      v6 = v22 + 56;
                      if ( v22 + 56 <= v21 )
                      {
                        v36 = 1;
                        if ( *(_BYTE *)(v22 + v11 + 10) )
                          v19 = (char *)(v22 + v11 + 24);
                        v12 = *(_BYTE **)(v22 + v11 + 16);
                        v13 = *(_BYTE *)(v22 + v11 + 9);
                        v35 = *(_BYTE *)(v22 + v11 + 8);
                      }
                    }
                  }
                  else
                  {
                    v6 = v22 + 40;
                    if ( v22 + 40 <= v21 )
                      goto LABEL_38;
                  }
                  if ( v36 )
                    goto LABEL_35;
                }
              }
              if ( ++v20 >= v39 )
                goto LABEL_35;
            }
          }
        }
        goto LABEL_93;
      }
      goto LABEL_41;
    }
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_93;
    v34 = *(_DWORD *)(a2 + 48);
LABEL_91:
    v10 = &EventNonReadWriteRequestComplete;
    goto LABEL_92;
  }
  v4 = 0;
  v5 = StorEtwLoggingEnabled == 0;
  v38 = -1073741823;
  *(_DWORD *)(a2 + 48) = -1073741823;
  if ( v5 )
    goto LABEL_93;
  v41 = 0LL;
  IoGetActivityIdIrp(a2, &v41);
  v7 = *(unsigned __int8 **)(a2 + 184);
  if ( *v7 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_93;
    v34 = *(_DWORD *)(a2 + 48);
    goto LABEL_91;
  }
  v8 = *v7 - 15;
  if ( *v7 != 15 )
    goto LABEL_5;
  if ( byte_140173441 >= 0 )
    goto LABEL_93;
  v11 = *((_QWORD *)v7 + 1);
  v12 = 0LL;
  v35 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = *(unsigned __int8 *)(v11 + 2);
  if ( (_BYTE)v18 != 40 )
  {
LABEL_41:
    v24 = *(_BYTE *)(v11 + 4);
    v13 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE **)(v11 + 32);
    v25 = *(_BYTE *)(v11 + 72);
    if ( v18 )
      goto LABEL_93;
LABEL_42:
    LOBYTE(v6) = v25 - 8;
    if ( (v6 & 0x5D) != 0 )
      goto LABEL_93;
    v26 = *(_BYTE *)(v11 + 3);
    if ( v26 == 1 || !v12 || !v13 )
      goto LABEL_61;
    v27 = *v12 & 0x7F;
    if ( v27 == 114 || v27 == 115 )
    {
      v6 = (unsigned __int64)&v12[v13];
      LOBYTE(v11) = 0;
      if ( (unsigned __int64)(v12 + 8) > v6 )
        goto LABEL_59;
      v16 = v12[3];
      v14 = v12[1] & 0xF;
      v15 = v12[2];
    }
    else
    {
      v6 = (unsigned __int64)&v12[v13];
      LOBYTE(v11) = 0;
      if ( (unsigned __int64)(v12 + 8) > v6 )
        goto LABEL_59;
      v28 = v12 + 13;
      v14 = v12[2] & 0xF;
      v29 = v13;
      if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
        v29 = (unsigned __int8)v12[7] + 8;
      v6 = (unsigned __int64)&v12[v29];
      if ( (unsigned __int64)v28 <= v6 )
        v15 = v12[12];
      if ( (unsigned __int64)(v12 + 14) > v6 )
        v16 = 0;
      else
        v16 = *v28;
    }
    LOBYTE(v11) = 1;
LABEL_59:
    if ( (_BYTE)v11 )
      v17 = 1;
LABEL_61:
    if ( byte_140173441 < 0 )
    {
      if ( !v17 )
      {
        v16 = 0;
        v15 = 0;
        v14 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v6, v11, &v41, a2, *(_DWORD *)(a2 + 48), v26, v24, v14, v15, v16, a2);
    }
    goto LABEL_93;
  }
  v19 = 0LL;
  v37 = 0;
  if ( !*(_DWORD *)(v11 + 20) )
  {
    v30 = 0;
    v40 = *(_DWORD *)(v11 + 56);
    if ( v40 )
    {
      do
      {
        v6 = *(unsigned int *)(v11 + 4LL * v30 + 120);
        if ( (unsigned int)v6 >= 0x80 )
        {
          v31 = *(unsigned int *)(v11 + 16);
          if ( (unsigned int)v6 < (unsigned int)v31 )
          {
            v22 = (unsigned int)v6;
            v32 = *(_DWORD *)(v6 + v11) - 64;
            if ( v32 )
            {
              v6 = (unsigned int)(v32 - 1);
              if ( (_DWORD)v6 )
              {
                if ( (_DWORD)v6 == 1 )
                {
                  v6 = v22 + 40;
                  if ( v22 + 40 <= v31 )
                  {
LABEL_24:
                    if ( *(_DWORD *)(v22 + v11 + 12) )
                      v19 = (char *)(v22 + v11 + 32);
                    v12 = *(_BYTE **)(v22 + v11 + 24);
LABEL_27:
                    v24 = *(_BYTE *)(v22 + v11 + 8);
                    v13 = *(_BYTE *)(v22 + v11 + 9);
                    goto LABEL_36;
                  }
                }
              }
              else
              {
                v6 = v22 + 56;
                if ( v22 + 56 <= v31 )
                {
                  v37 = 1;
                  if ( *(_BYTE *)(v22 + v11 + 10) )
                    v19 = (char *)(v22 + v11 + 24);
                  v12 = *(_BYTE **)(v22 + v11 + 16);
                  v13 = *(_BYTE *)(v22 + v11 + 9);
                  v35 = *(_BYTE *)(v22 + v11 + 8);
                }
              }
            }
            else
            {
              v6 = v22 + 40;
              if ( v22 + 40 <= v31 )
              {
LABEL_38:
                if ( *(_BYTE *)(v22 + v11 + 10) )
                  v19 = (char *)(v22 + v11 + 24);
                v12 = *(_BYTE **)(v22 + v11 + 16);
                goto LABEL_27;
              }
            }
            if ( v37 )
              break;
          }
        }
        ++v30;
      }
      while ( v30 < v40 );
LABEL_35:
      v24 = v35;
LABEL_36:
      if ( v19 )
      {
        v25 = *v19;
        v17 = 0;
        goto LABEL_42;
      }
    }
  }
LABEL_93:
  IofCompleteRequest((PIRP)a2, 0);
  return v38;
}
