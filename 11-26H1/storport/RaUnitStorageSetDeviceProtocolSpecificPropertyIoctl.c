/*
 * XREFs of RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1400A5538
 * Callers:
 *     RaUnitStorageSetPropertyIoctl @ 0x14018E3C0 (RaUnitStorageSetPropertyIoctl.c)
 * Callees:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1400082A8 (RaidUnitSendSrbIoControlSynchronously.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1400917FC (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

NTSTATUS __fastcall RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edi
  int *v4; // r15
  unsigned int *v7; // r13
  unsigned __int64 v8; // r11
  int v9; // ecx
  unsigned __int64 v10; // r10
  int v11; // esi
  char v12; // bl
  unsigned int v13; // eax
  _DWORD *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ebx
  int v21; // eax
  bool v22; // zf
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  int *v25; // rax
  const EVENT_DESCRIPTOR *v26; // rdx
  __int64 v27; // rdx
  _BYTE *v28; // r9
  unsigned __int8 v29; // r15
  char v30; // r11
  char v31; // bl
  char v32; // r10
  char v33; // r12
  char *v34; // r12
  int v35; // ecx
  __int64 v36; // rax
  unsigned __int64 v37; // r13
  __int64 v38; // r8
  int v39; // ecx
  char v40; // r13
  char v41; // cl
  char v42; // r8
  char v43; // al
  char *v44; // r10
  unsigned int v45; // eax
  __int64 v46; // [rsp+20h] [rbp-49h]
  __int64 v47; // [rsp+28h] [rbp-41h]
  __int64 v48; // [rsp+30h] [rbp-39h]
  char v49; // [rsp+60h] [rbp-9h] BYREF
  char v50[3]; // [rsp+61h] [rbp-8h] BYREF
  int v51; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  __int64 v53; // [rsp+70h] [rbp+7h]
  void *Src[2]; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(int **)(a2 + 24);
  v53 = a1;
  v7 = 0LL;
  P = 0LL;
  v8 = *(unsigned int *)(v2 + 16);
  v9 = v4[1];
  v10 = *(unsigned int *)(v2 + 8);
  v51 = 0;
  v50[0] = 0;
  v49 = 0;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v11 = 0;
      goto LABEL_45;
    }
    v11 = -1073741637;
    goto LABEL_44;
  }
  if ( *v4 == 50 )
  {
    v12 = 0;
    v13 = 72;
  }
  else
  {
    if ( *v4 != 68 )
      goto LABEL_7;
    v12 = 1;
    v13 = 80;
  }
  if ( (unsigned int)v8 < v13 )
    goto LABEL_7;
  if ( v12 )
  {
    if ( v4[2] != 1 || v4[3] != 72 )
      goto LABEL_7;
    v14 = v4 + 4;
  }
  else
  {
    v14 = v4 + 2;
  }
  v15 = (unsigned int)v14[5];
  v16 = (unsigned int)v14[4];
  Src[0] = v14;
  if ( v8 < (unsigned __int64)v14 + v16 + v15 - (_QWORD)v4 )
  {
LABEL_7:
    v11 = -1073741585;
LABEL_44:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_45;
  }
  if ( *v14 && v14[1] && (!(_DWORD)v16 || (unsigned int)v16 >= 0x40 && (_DWORD)v15) )
  {
    if ( (unsigned int)v10 >= 0x48 )
    {
      if ( v10 < v15 + v16 + 8 )
        goto LABEL_7;
      v11 = RaBuildSetProtocolSpecificPropertyBufferForMiniport(
              *(_QWORD *)(a1 + 8),
              a2,
              (__int64 *)&P,
              (unsigned int *)&v51,
              v50,
              &v49);
      if ( v11 < 0 )
      {
        v7 = (unsigned int *)P;
      }
      else
      {
        if ( v49 )
        {
          ExFreePoolWithTag(P, 0x72536152u);
          ++*(_BYTE *)(a2 + 67);
          *(_QWORD *)(a2 + 184) += 72LL;
          return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(v53 + 24) + 8LL), (PIRP)a2);
        }
        v7 = (unsigned int *)P;
        v11 = RaidUnitSendSrbIoControlSynchronously(v53, a2, (__int64)P, v51, 0LL, v50[0], 64);
        if ( v11 >= 0 )
        {
          if ( v12 )
          {
            memmove(v4 + 2, Src[0], 0x40uLL);
            v18 = 1;
          }
          else
          {
            v18 = 72;
          }
          *v4 = v18;
          v19 = v4[7];
          v4[1] = 72;
          v4[8] = v7[15];
          if ( v19 )
          {
            if ( v19 >= v7[14] )
              v19 = v7[14];
            v20 = v19;
            memmove((char *)v4 + (unsigned int)v4[6] + 8, (char *)v7 + v7[13] + 36, v19);
            v21 = v4[6] + 8;
            v4[7] = v20;
            *(_QWORD *)(a2 + 56) = v20 + v21;
          }
          else
          {
            *(_QWORD *)(a2 + 56) = 72LL;
          }
        }
      }
    }
    else
    {
      if ( (unsigned int)v10 < 8 )
      {
        v11 = -1073741789;
        goto LABEL_44;
      }
      v11 = 0;
      *v4 = v12 != 0 ? 1 : 72;
      v4[1] = 72;
      *(_QWORD *)(a2 + 56) = 8LL;
    }
  }
  else
  {
    v11 = -1073741585;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  if ( v11 < 0 )
    goto LABEL_44;
LABEL_45:
  v22 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v22 )
    goto LABEL_111;
  *(_OWORD *)Src = 0LL;
  IoGetActivityIdIrp(a2, Src);
  v24 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v24 != 14 )
  {
    if ( *(_BYTE *)v24 != 15 )
    {
      if ( *(_BYTE *)v24 == 27 )
      {
        if ( *(_BYTE *)(v24 + 1) == 7 && !*(_DWORD *)(v24 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v25 = *(int **)(a2 + 56);
            if ( v25 )
              v3 = *v25;
            LODWORD(v47) = *(_DWORD *)(a2 + 48);
            LODWORD(v46) = v3;
            McTemplateK0pqd_EtwWriteTransfer(v23, v24, (const GUID *)Src, a2, v46, v47);
          }
          goto LABEL_111;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v26 = &EventPnpRequestComplete;
LABEL_110:
          LODWORD(v46) = *(_DWORD *)(a2 + 48);
          McTemplateK0pd_EtwWriteTransfer(v23, v26, (const GUID *)Src, a2, v46);
          goto LABEL_111;
        }
      }
      goto LABEL_111;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_111;
    v27 = *(_QWORD *)(v24 + 8);
    v28 = 0LL;
    v49 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    if ( *(_BYTE *)(v27 + 2) == 40 )
    {
      v34 = 0LL;
      v50[0] = 0;
      if ( *(_DWORD *)(v27 + 20) )
        goto LABEL_111;
      v35 = *(_DWORD *)(v27 + 56);
      v36 = 0LL;
      v51 = 0;
      LODWORD(P) = v35;
      if ( !v35 )
        goto LABEL_111;
      do
      {
        v23 = *(unsigned int *)(v27 + 4 * v36 + 120);
        if ( (unsigned int)v23 >= 0x80 )
        {
          v37 = *(unsigned int *)(v27 + 16);
          if ( (unsigned int)v23 < (unsigned int)v37 )
          {
            v38 = (unsigned int)v23;
            v39 = *(_DWORD *)(v23 + v27) - 64;
            if ( v39 )
            {
              v23 = (unsigned int)(v39 - 1);
              if ( (_DWORD)v23 )
              {
                if ( (_DWORD)v23 == 1 )
                {
                  v23 = v38 + 40;
                  if ( v38 + 40 <= v37 )
                  {
                    if ( *(_DWORD *)(v38 + v27 + 12) )
                      v34 = (char *)(v38 + v27 + 32);
                    v28 = *(_BYTE **)(v38 + v27 + 24);
LABEL_70:
                    v40 = *(_BYTE *)(v38 + v27 + 8);
                    v29 = *(_BYTE *)(v38 + v27 + 9);
                    goto LABEL_79;
                  }
                }
              }
              else
              {
                v23 = v38 + 56;
                if ( v38 + 56 <= v37 )
                {
                  v50[0] = 1;
                  if ( *(_BYTE *)(v38 + v27 + 10) )
                    v34 = (char *)(v38 + v27 + 24);
                  v28 = *(_BYTE **)(v38 + v27 + 16);
                  v29 = *(_BYTE *)(v38 + v27 + 9);
                  v49 = *(_BYTE *)(v38 + v27 + 8);
                }
              }
            }
            else
            {
              v23 = v38 + 40;
              if ( v38 + 40 <= v37 )
              {
                if ( *(_BYTE *)(v38 + v27 + 10) )
                  v34 = (char *)(v38 + v27 + 24);
                v28 = *(_BYTE **)(v38 + v27 + 16);
                goto LABEL_70;
              }
            }
            if ( v50[0] )
              break;
          }
        }
        v36 = (unsigned int)(v51 + 1);
        v51 = v36;
      }
      while ( (unsigned int)v36 < (unsigned int)P );
      v40 = v49;
LABEL_79:
      if ( !v34 )
        goto LABEL_111;
      v41 = *v34;
      v33 = 0;
    }
    else
    {
      v41 = *(_BYTE *)(v27 + 72);
      v28 = *(_BYTE **)(v27 + 32);
      v29 = *(_BYTE *)(v27 + 11);
      v40 = *(_BYTE *)(v27 + 4);
      if ( *(_BYTE *)(v27 + 2) )
        goto LABEL_111;
    }
    LOBYTE(v23) = v41 - 8;
    if ( (v23 & 0x5D) != 0 )
      goto LABEL_111;
    v42 = *(_BYTE *)(v27 + 3);
    if ( v42 == 1 || !v28 || !v29 )
    {
LABEL_104:
      if ( byte_140173441 < 0 )
      {
        if ( !v33 )
        {
          v32 = 0;
          v31 = 0;
          v30 = 0;
        }
        LOBYTE(v48) = v40;
        LOBYTE(v47) = v42;
        LODWORD(v46) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v23, v27, (const GUID *)Src, a2, v46, v47, v48, v30, v31, v32, a2);
      }
      goto LABEL_111;
    }
    v43 = *v28 & 0x7F;
    if ( v43 == 114 || v43 == 115 )
    {
      v23 = (unsigned __int64)&v28[v29];
      LOBYTE(v27) = 0;
      if ( (unsigned __int64)(v28 + 8) > v23 )
        goto LABEL_102;
      v31 = v28[2];
      v30 = v28[1] & 0xF;
      v32 = v28[3];
    }
    else
    {
      v23 = (unsigned __int64)&v28[v29];
      LOBYTE(v27) = 0;
      if ( (unsigned __int64)(v28 + 8) > v23 )
        goto LABEL_102;
      v44 = v28 + 13;
      v30 = v28[2] & 0xF;
      v45 = v29;
      if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
        v45 = (unsigned __int8)v28[7] + 8;
      v23 = (unsigned __int64)&v28[v45];
      if ( (unsigned __int64)v44 <= v23 )
        v31 = v28[12];
      if ( (unsigned __int64)(v28 + 14) > v23 )
        v32 = 0;
      else
        v32 = *v44;
    }
    LOBYTE(v27) = 1;
LABEL_102:
    if ( (_BYTE)v27 )
      v33 = 1;
    goto LABEL_104;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v26 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_110;
  }
LABEL_111:
  IofCompleteRequest((PIRP)a2, 0);
  return v11;
}
