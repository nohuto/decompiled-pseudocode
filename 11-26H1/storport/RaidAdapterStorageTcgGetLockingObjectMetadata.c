/*
 * XREFs of RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x140084FAC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x140094A9C (RaidGetTcgLockingObjectMetadata.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageTcgGetLockingObjectMetadata(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // edi
  __int64 v4; // r8
  char v7; // r12
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int TcgProperties; // r14d
  __int64 v12; // r8
  const wchar_t *v13; // rcx
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  _BYTE *v20; // r9
  unsigned __int8 v21; // r15
  char v22; // r11
  char v23; // bl
  char v24; // r10
  char v25; // r12
  char *v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // r8
  int v30; // ecx
  char v31; // r13
  char v32; // cl
  char v33; // r8
  char v34; // al
  char *v35; // r10
  unsigned int v36; // eax
  __int64 v38; // [rsp+20h] [rbp-130h]
  __int64 v39; // [rsp+28h] [rbp-128h]
  __int64 v40; // [rsp+30h] [rbp-120h]
  __int64 v41; // [rsp+38h] [rbp-118h]
  __int64 v42; // [rsp+40h] [rbp-110h]
  __int64 v43; // [rsp+48h] [rbp-108h]
  char v44; // [rsp+D0h] [rbp-80h]
  char v45; // [rsp+D1h] [rbp-7Fh]
  int v46; // [rsp+D4h] [rbp-7Ch]
  int v47; // [rsp+D8h] [rbp-78h]
  unsigned int v48; // [rsp+D8h] [rbp-78h]
  int v49; // [rsp+E0h] [rbp-70h]
  int v50; // [rsp+E8h] [rbp-68h]
  __int128 v51; // [rsp+F0h] [rbp-60h] BYREF
  GUID v52; // [rsp+100h] [rbp-50h] BYREF
  __int128 v53; // [rsp+110h] [rbp-40h] BYREF
  _OWORD v54[2]; // [rsp+120h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)&v52.Data1 = 0LL;
  LOBYTE(v50) = 0;
  v7 = 0;
  LOBYTE(v49) = 0;
  LOBYTE(v47) = 0;
  v53 = 0LL;
  v51 = 0LL;
  memset(v54, 0, sizeof(v54));
  if ( !v2 )
    goto LABEL_22;
  v8 = *(_DWORD *)(v4 + 16);
  if ( v8 < 0x1C )
    goto LABEL_22;
  if ( *(_WORD *)v2 != 1 )
    goto LABEL_22;
  v9 = *(_DWORD *)(v2 + 20);
  if ( v9 > 0x20 )
    goto LABEL_22;
  v10 = *(_DWORD *)(v2 + 16) + v9 + 24;
  if ( v10 < 0x1C )
    v10 = 28;
  if ( *(_DWORD *)(v2 + 4) != v10 || v8 < v10 )
  {
LABEL_22:
    TcgProperties = -1073741811;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v4 + 8) < v10 )
  {
    TcgProperties = -1073741789;
LABEL_23:
    *(_QWORD *)(a2 + 56) = 0LL;
    if ( v7 )
    {
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v51);
      if ( (byte_140173447 & 2) != 0 )
      {
        v13 = (const wchar_t *)&unk_140153274;
        if ( *(_QWORD *)(a1 + 5144) )
          v13 = *(const wchar_t **)(a1 + 5144);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          (__int64)v13,
          a1 + 5128,
          v12,
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v53,
          a1 + 5128,
          *((const wchar_t **)&v51 + 1),
          byte_14015304C,
          byte_14015304C,
          byte_14015304C,
          v13,
          "TcgGetLockingObjectMetadata",
          (const char *)v54,
          TcgProperties,
          v52.Data1,
          v50,
          v49,
          v47,
          0);
      }
    }
    goto LABEL_28;
  }
  if ( !*(_DWORD *)(v2 + 12) )
  {
    TcgProperties = -1073741637;
    goto LABEL_23;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
  {
    TcgProperties = -2147483631;
    goto LABEL_23;
  }
  *(_QWORD *)&v52.Data1 = *(unsigned int *)(v2 + 8);
  v7 = 1;
  v50 = *(_DWORD *)(v2 + 16);
  v49 = *(_DWORD *)(v2 + 20);
  v47 = *(_DWORD *)(v2 + 12);
  TcgProperties = RaidGetTcgProperties(a1, v54);
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 6128) + 53LL) )
    {
      TcgProperties = RaidGetTcgLockingObjectMetadata(
                        a1,
                        *(unsigned int *)(v2 + 12),
                        *(unsigned int *)(v2 + 16),
                        *(unsigned int *)(v2 + 20) + v2 + 24,
                        *(_DWORD *)(v2 + 20),
                        v2 + 24,
                        v54);
      if ( TcgProperties >= 0 )
        *(_QWORD *)(a2 + 56) = *(unsigned int *)(v2 + 4);
    }
    else
    {
      TcgProperties = -1073741637;
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
  if ( TcgProperties < 0 )
    goto LABEL_23;
LABEL_28:
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = TcgProperties;
  if ( v14 )
    goto LABEL_94;
  v52 = 0LL;
  IoGetActivityIdIrp(a2, &v52);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_94;
    v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v3 = *v17;
        LODWORD(v39) = *(_DWORD *)(a2 + 48);
        LODWORD(v38) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v52, a2, v38, v39);
      }
      goto LABEL_94;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_94;
    v18 = &EventPnpRequestComplete;
LABEL_93:
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v52, a2, v38);
    goto LABEL_94;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_94;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0LL;
  v44 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v19 + 72);
    v20 = *(_BYTE **)(v19 + 32);
    v21 = *(_BYTE *)(v19 + 11);
    v31 = *(_BYTE *)(v19 + 4);
    if ( *(_BYTE *)(v19 + 2) )
      goto LABEL_94;
LABEL_68:
    LOBYTE(v15) = v32 - 8;
    if ( (v15 & 0x5D) != 0 )
      goto LABEL_94;
    v33 = *(_BYTE *)(v19 + 3);
    if ( v33 == 1 || !v20 || !v21 )
      goto LABEL_87;
    v34 = *v20 & 0x7F;
    if ( v34 == 114 || v34 == 115 )
    {
      v15 = (unsigned __int64)&v20[v21];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_85;
      v23 = v20[2];
      v22 = v20[1] & 0xF;
      v24 = v20[3];
    }
    else
    {
      v15 = (unsigned __int64)&v20[v21];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_85;
      v35 = v20 + 13;
      v22 = v20[2] & 0xF;
      v36 = v21;
      if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
        v36 = (unsigned __int8)v20[7] + 8;
      v15 = (unsigned __int64)&v20[v36];
      if ( (unsigned __int64)v35 <= v15 )
        v23 = v20[12];
      if ( (unsigned __int64)(v20 + 14) > v15 )
        v24 = 0;
      else
        v24 = *v35;
    }
    LOBYTE(v19) = 1;
LABEL_85:
    if ( (_BYTE)v19 )
      v25 = 1;
LABEL_87:
    if ( byte_140173441 < 0 )
    {
      if ( !v25 )
      {
        v24 = 0;
        v23 = 0;
        v22 = 0;
      }
      LOBYTE(v43) = v24;
      LOBYTE(v42) = v23;
      LOBYTE(v41) = v22;
      LOBYTE(v40) = v31;
      LOBYTE(v39) = v33;
      LODWORD(v38) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v15, v19, &v52, a2, v38, v39, v40, v41, v42, v43, a2);
    }
    goto LABEL_94;
  }
  v26 = 0LL;
  v45 = 0;
  if ( !*(_DWORD *)(v19 + 20) )
  {
    v27 = 0LL;
    v46 = 0;
    v48 = *(_DWORD *)(v19 + 56);
    if ( v48 )
    {
      do
      {
        v15 = *(unsigned int *)(v19 + 4 * v27 + 120);
        if ( (unsigned int)v15 >= 0x80 )
        {
          v28 = *(unsigned int *)(v19 + 16);
          if ( (unsigned int)v15 < (unsigned int)v28 )
          {
            v29 = (unsigned int)v15;
            v30 = *(_DWORD *)(v15 + v19) - 64;
            if ( v30 )
            {
              v15 = (unsigned int)(v30 - 1);
              if ( (_DWORD)v15 )
              {
                if ( (_DWORD)v15 == 1 )
                {
                  v15 = v29 + 40;
                  if ( v29 + 40 <= v28 )
                  {
                    if ( *(_DWORD *)(v29 + v19 + 12) )
                      v26 = (char *)(v29 + v19 + 32);
                    v20 = *(_BYTE **)(v29 + v19 + 24);
LABEL_53:
                    v31 = *(_BYTE *)(v29 + v19 + 8);
                    v21 = *(_BYTE *)(v29 + v19 + 9);
                    goto LABEL_62;
                  }
                }
              }
              else
              {
                v15 = v29 + 56;
                if ( v29 + 56 <= v28 )
                {
                  v45 = 1;
                  if ( *(_BYTE *)(v29 + v19 + 10) )
                    v26 = (char *)(v29 + v19 + 24);
                  v20 = *(_BYTE **)(v29 + v19 + 16);
                  v21 = *(_BYTE *)(v29 + v19 + 9);
                  v44 = *(_BYTE *)(v29 + v19 + 8);
                }
              }
            }
            else
            {
              v15 = v29 + 40;
              if ( v29 + 40 <= v28 )
              {
                if ( *(_BYTE *)(v29 + v19 + 10) )
                  v26 = (char *)(v29 + v19 + 24);
                v20 = *(_BYTE **)(v29 + v19 + 16);
                goto LABEL_53;
              }
            }
            if ( v45 )
              break;
          }
        }
        v27 = (unsigned int)(v46 + 1);
        v46 = v27;
      }
      while ( (unsigned int)v27 < v48 );
      v31 = v44;
LABEL_62:
      if ( v26 )
      {
        v32 = *v26;
        v25 = 0;
        goto LABEL_68;
      }
    }
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)TcgProperties;
}
