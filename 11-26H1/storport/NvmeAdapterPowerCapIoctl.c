/*
 * XREFs of NvmeAdapterPowerCapIoctl @ 0x1400DA940
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterSetMaxOperationalPower @ 0x1401264A8 (NvmeAdapterSetMaxOperationalPower.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterPowerCapIoctl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  int v7; // esi
  unsigned int v8; // ecx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  _BYTE *v18; // r9
  unsigned __int8 v19; // r14
  char v20; // bp
  char v21; // r11
  char v22; // r10
  char v23; // r15
  char *v24; // r15
  unsigned int v25; // r13d
  unsigned __int64 v26; // r12
  __int64 v27; // r8
  int v28; // ecx
  char v29; // r12
  char v30; // cl
  char v31; // r8
  char v32; // al
  char *v33; // r10
  unsigned int v34; // eax
  char v36; // [rsp+60h] [rbp-68h]
  char v37; // [rsp+61h] [rbp-67h]
  __int64 v38; // [rsp+68h] [rbp-60h] BYREF
  GUID v39; // [rsp+70h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 16) < 0x18u || *(_DWORD *)(v3 + 8) < 0x18u )
  {
    v7 = -1073741820;
LABEL_14:
    v9 = 0;
    goto LABEL_15;
  }
  if ( *(_DWORD *)v4 != 1 || *(_DWORD *)(v4 + 4) < 0x18u )
  {
    v7 = -1073741811;
    goto LABEL_14;
  }
  v8 = *(_DWORD *)(v4 + 8);
  v9 = 0;
  if ( v8 >= 2 )
  {
    v7 = -1073741811;
LABEL_15:
    v11 = 0LL;
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(a1 + 160);
  if ( *(_BYTE *)v10 != 1 || !*(_QWORD *)(*(_QWORD *)(v10 + 8) + 24LL) )
  {
    v7 = -1073741637;
    goto LABEL_15;
  }
  v38 = *(_QWORD *)(v4 + 16);
  LOBYTE(a3) = v8 == 0;
  v7 = NvmeAdapterSetMaxOperationalPower(a1, &v38, a3, 0LL);
  v11 = 0LL;
  if ( v7 >= 0 )
  {
    v11 = 24LL;
    *(_QWORD *)(v4 + 16) = v38;
  }
LABEL_16:
  v12 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v11;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v12 )
    goto LABEL_82;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_82;
    v16 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_81;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_82;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v9 = *v15;
        McTemplateK0pqd_EtwWriteTransfer(v13, v14, &v39, a2, v9, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_82;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_82;
    v16 = &EventPnpRequestComplete;
LABEL_81:
    McTemplateK0pd_EtwWriteTransfer(v13, v16, &v39, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_82;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_82;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = 0LL;
  v36 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v17 + 72);
    v18 = *(_BYTE **)(v17 + 32);
    v19 = *(_BYTE *)(v17 + 11);
    v29 = *(_BYTE *)(v17 + 4);
    if ( *(_BYTE *)(v17 + 2) )
      goto LABEL_82;
LABEL_56:
    LOBYTE(v13) = v30 - 8;
    if ( (v13 & 0x5D) != 0 )
      goto LABEL_82;
    v31 = *(_BYTE *)(v17 + 3);
    if ( v31 == 1 || !v18 || !v19 )
      goto LABEL_75;
    v32 = *v18 & 0x7F;
    if ( v32 == 114 || v32 == 115 )
    {
      v13 = (unsigned __int64)&v18[v19];
      LOBYTE(v17) = 0;
      if ( (unsigned __int64)(v18 + 8) > v13 )
        goto LABEL_73;
      v21 = v18[2];
      v20 = v18[1] & 0xF;
      v22 = v18[3];
    }
    else
    {
      v13 = (unsigned __int64)&v18[v19];
      LOBYTE(v17) = 0;
      if ( (unsigned __int64)(v18 + 8) > v13 )
        goto LABEL_73;
      v33 = v18 + 13;
      v20 = v18[2] & 0xF;
      v34 = v19;
      if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
        v34 = (unsigned __int8)v18[7] + 8;
      v13 = (unsigned __int64)&v18[v34];
      if ( (unsigned __int64)v33 <= v13 )
        v21 = v18[12];
      if ( (unsigned __int64)(v18 + 14) > v13 )
        v22 = 0;
      else
        v22 = *v33;
    }
    LOBYTE(v17) = 1;
LABEL_73:
    if ( (_BYTE)v17 )
      v23 = 1;
LABEL_75:
    if ( byte_140173441 < 0 )
    {
      if ( !v23 )
      {
        v22 = 0;
        v21 = 0;
        v20 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v13, v17, &v39, a2, *(_DWORD *)(a2 + 48), v31, v29, v20, v21, v22, a2);
    }
    goto LABEL_82;
  }
  v24 = 0LL;
  v37 = 0;
  if ( !*(_DWORD *)(v17 + 20) )
  {
    v25 = 0;
    LODWORD(v38) = *(_DWORD *)(v17 + 56);
    if ( (_DWORD)v38 )
    {
      do
      {
        v13 = *(unsigned int *)(v17 + 4LL * v25 + 120);
        if ( (unsigned int)v13 >= 0x80 )
        {
          v26 = *(unsigned int *)(v17 + 16);
          if ( (unsigned int)v13 < (unsigned int)v26 )
          {
            v27 = (unsigned int)v13;
            v28 = *(_DWORD *)(v13 + v17) - 64;
            if ( v28 )
            {
              v13 = (unsigned int)(v28 - 1);
              if ( (_DWORD)v13 )
              {
                if ( (_DWORD)v13 == 1 )
                {
                  v13 = v27 + 40;
                  if ( v27 + 40 <= v26 )
                  {
                    if ( *(_DWORD *)(v27 + v17 + 12) )
                      v24 = (char *)(v27 + v17 + 32);
                    v18 = *(_BYTE **)(v27 + v17 + 24);
LABEL_41:
                    v29 = *(_BYTE *)(v27 + v17 + 8);
                    v19 = *(_BYTE *)(v27 + v17 + 9);
                    goto LABEL_50;
                  }
                }
              }
              else
              {
                v13 = v27 + 56;
                if ( v27 + 56 <= v26 )
                {
                  v37 = 1;
                  if ( *(_BYTE *)(v27 + v17 + 10) )
                    v24 = (char *)(v27 + v17 + 24);
                  v18 = *(_BYTE **)(v27 + v17 + 16);
                  v19 = *(_BYTE *)(v27 + v17 + 9);
                  v36 = *(_BYTE *)(v27 + v17 + 8);
                }
              }
            }
            else
            {
              v13 = v27 + 40;
              if ( v27 + 40 <= v26 )
              {
                if ( *(_BYTE *)(v27 + v17 + 10) )
                  v24 = (char *)(v27 + v17 + 24);
                v18 = *(_BYTE **)(v27 + v17 + 16);
                goto LABEL_41;
              }
            }
            if ( v37 )
              break;
          }
        }
        ++v25;
      }
      while ( v25 < (unsigned int)v38 );
      v29 = v36;
LABEL_50:
      if ( v24 )
      {
        v30 = *v24;
        v23 = 0;
        goto LABEL_56;
      }
    }
  }
LABEL_82:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v7;
}
