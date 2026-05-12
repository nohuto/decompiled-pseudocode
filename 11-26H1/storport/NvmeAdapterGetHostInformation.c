/*
 * XREFs of NvmeAdapterGetHostInformation @ 0x14019BCB0
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     GetNvmeHostId @ 0x140075074 (GetNvmeHostId.c)
 *     GetNvmeHostNQN @ 0x140075274 (GetNvmeHostNQN.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetHostInformation(__int64 a1, __int64 a2)
{
  int v2; // ebx
  char *v4; // rsi
  int NvmeHostNQN; // r14d
  __int64 v6; // rax
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rdx
  _BYTE *v13; // r9
  unsigned __int8 v14; // bp
  char v15; // si
  char v16; // r11
  char v17; // r10
  char v18; // r15
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
  char v31; // [rsp+60h] [rbp-48h]
  char v32; // [rsp+61h] [rbp-47h]
  unsigned int v33; // [rsp+64h] [rbp-44h]
  GUID v34; // [rsp+68h] [rbp-40h] BYREF

  v2 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 608) )
  {
    v4 = *(char **)(a2 + 24);
    if ( v4 )
    {
      v6 = *(_QWORD *)(a2 + 184);
      if ( *(_DWORD *)(v6 + 8) >= 0x118u )
      {
        memset_0(v4, 0, *(unsigned int *)(v6 + 8));
        *(_DWORD *)v4 = 18350081;
        NvmeHostNQN = GetNvmeHostNQN(0, v4 + 8);
        if ( NvmeHostNQN >= 0 )
        {
          NvmeHostNQN = GetNvmeHostId(v4 + 264);
          if ( NvmeHostNQN >= 0 )
            *(_QWORD *)(a2 + 56) = *((unsigned __int16 *)v4 + 1);
        }
      }
      else
      {
        NvmeHostNQN = -1073741789;
      }
    }
    else
    {
      NvmeHostNQN = -1073741811;
    }
  }
  else
  {
    NvmeHostNQN = -1073741637;
  }
  v7 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = NvmeHostNQN;
  if ( !v7 )
  {
    v34 = 0LL;
    IoGetActivityIdIrp(a2, &v34);
    v9 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v9 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_77;
      v11 = &EventNonReadWriteRequestComplete;
      goto LABEL_76;
    }
    if ( *(_BYTE *)v9 != 15 )
    {
      if ( *(_BYTE *)v9 != 27 )
        goto LABEL_77;
      if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v10 = *(int **)(a2 + 56);
          if ( v10 )
            v2 = *v10;
          McTemplateK0pqd_EtwWriteTransfer(v8, v9, &v34, a2, v2, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_77;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_77;
      v11 = &EventPnpRequestComplete;
LABEL_76:
      McTemplateK0pd_EtwWriteTransfer(v8, v11, &v34, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_77;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_77;
    v12 = *(_QWORD *)(v9 + 8);
    v13 = 0LL;
    v31 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    if ( *(_BYTE *)(v12 + 2) != 40 )
    {
      v25 = *(_BYTE *)(v12 + 72);
      v13 = *(_BYTE **)(v12 + 32);
      v14 = *(_BYTE *)(v12 + 11);
      v24 = *(_BYTE *)(v12 + 4);
      if ( *(_BYTE *)(v12 + 2) )
        goto LABEL_77;
LABEL_51:
      LOBYTE(v8) = v25 - 8;
      if ( (v8 & 0x5D) != 0 )
        goto LABEL_77;
      v26 = *(_BYTE *)(v12 + 3);
      if ( v26 == 1 || !v13 || !v14 )
        goto LABEL_70;
      v27 = *v13 & 0x7F;
      if ( v27 == 114 || v27 == 115 )
      {
        v8 = (unsigned __int64)&v13[v14];
        LOBYTE(v12) = 0;
        if ( (unsigned __int64)(v13 + 8) > v8 )
          goto LABEL_68;
        v16 = v13[2];
        v15 = v13[1] & 0xF;
        v17 = v13[3];
      }
      else
      {
        v8 = (unsigned __int64)&v13[v14];
        LOBYTE(v12) = 0;
        if ( (unsigned __int64)(v13 + 8) > v8 )
          goto LABEL_68;
        v28 = v13 + 13;
        v15 = v13[2] & 0xF;
        v29 = v14;
        if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
          v29 = (unsigned __int8)v13[7] + 8;
        v8 = (unsigned __int64)&v13[v29];
        if ( (unsigned __int64)v28 <= v8 )
          v16 = v13[12];
        if ( (unsigned __int64)(v13 + 14) > v8 )
          v17 = 0;
        else
          v17 = *v28;
      }
      LOBYTE(v12) = 1;
LABEL_68:
      if ( (_BYTE)v12 )
        v18 = 1;
LABEL_70:
      if ( byte_140173441 < 0 )
      {
        if ( !v18 )
        {
          v17 = 0;
          v16 = 0;
          v15 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v8, v12, &v34, a2, *(_DWORD *)(a2 + 48), v26, v24, v15, v16, v17, a2);
      }
      goto LABEL_77;
    }
    v19 = 0LL;
    v32 = 0;
    if ( !*(_DWORD *)(v12 + 20) )
    {
      v20 = 0;
      v33 = *(_DWORD *)(v12 + 56);
      if ( v33 )
      {
        do
        {
          v8 = *(unsigned int *)(v12 + 4LL * v20 + 120);
          if ( (unsigned int)v8 >= 0x80 )
          {
            v21 = *(unsigned int *)(v12 + 16);
            if ( (unsigned int)v8 < (unsigned int)v21 )
            {
              v22 = (unsigned int)v8;
              v23 = *(_DWORD *)(v8 + v12) - 64;
              if ( v23 )
              {
                v8 = (unsigned int)(v23 - 1);
                if ( (_DWORD)v8 )
                {
                  if ( (_DWORD)v8 == 1 )
                  {
                    v8 = v22 + 40;
                    if ( v22 + 40 <= v21 )
                    {
                      if ( *(_DWORD *)(v22 + v12 + 12) )
                        v19 = (char *)(v22 + v12 + 32);
                      v13 = *(_BYTE **)(v22 + v12 + 24);
LABEL_36:
                      v24 = *(_BYTE *)(v22 + v12 + 8);
                      v14 = *(_BYTE *)(v22 + v12 + 9);
                      goto LABEL_45;
                    }
                  }
                }
                else
                {
                  v8 = v22 + 56;
                  if ( v22 + 56 <= v21 )
                  {
                    v32 = 1;
                    if ( *(_BYTE *)(v22 + v12 + 10) )
                      v19 = (char *)(v22 + v12 + 24);
                    v13 = *(_BYTE **)(v22 + v12 + 16);
                    v14 = *(_BYTE *)(v22 + v12 + 9);
                    v31 = *(_BYTE *)(v22 + v12 + 8);
                  }
                }
              }
              else
              {
                v8 = v22 + 40;
                if ( v22 + 40 <= v21 )
                {
                  if ( *(_BYTE *)(v22 + v12 + 10) )
                    v19 = (char *)(v22 + v12 + 24);
                  v13 = *(_BYTE **)(v22 + v12 + 16);
                  goto LABEL_36;
                }
              }
              if ( v32 )
                break;
            }
          }
          ++v20;
        }
        while ( v20 < v33 );
        v24 = v31;
LABEL_45:
        if ( v19 )
        {
          v25 = *v19;
          v18 = 0;
          goto LABEL_51;
        }
      }
    }
  }
LABEL_77:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)NvmeHostNQN;
}
