/*
 * XREFs of RaidUnitStorageTcgGetLockingObjectMetadata @ 0x140089860
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
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

__int64 __fastcall RaidUnitStorageTcgGetLockingObjectMetadata(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // edi
  __int64 v4; // r8
  char v7; // r12
  int v8; // r13d
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int TcgProperties; // r14d
  char v13; // r11
  __int64 v14; // r9
  const wchar_t *v15; // rax
  __int64 v16; // r8
  int v17; // r9d
  const wchar_t *v18; // rbx
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
  _BYTE *v25; // r9
  unsigned __int8 v26; // r15
  char v27; // r11
  char v28; // bl
  char v29; // r10
  char v30; // r12
  char *v31; // r12
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  __int64 v34; // r8
  int v35; // ecx
  char v36; // r13
  char v37; // cl
  char v38; // r8
  char v39; // al
  char *v40; // r10
  unsigned int v41; // eax
  __int64 v43; // [rsp+20h] [rbp-130h]
  __int64 v44; // [rsp+28h] [rbp-128h]
  __int64 v45; // [rsp+30h] [rbp-120h]
  __int64 v46; // [rsp+38h] [rbp-118h]
  __int64 v47; // [rsp+40h] [rbp-110h]
  __int64 v48; // [rsp+48h] [rbp-108h]
  char v49; // [rsp+D0h] [rbp-80h]
  char v50; // [rsp+D1h] [rbp-7Fh]
  int v51; // [rsp+D4h] [rbp-7Ch]
  int v52; // [rsp+D4h] [rbp-7Ch]
  int v53; // [rsp+D8h] [rbp-78h]
  unsigned int v54; // [rsp+D8h] [rbp-78h]
  int v55; // [rsp+E0h] [rbp-70h]
  __int128 v56; // [rsp+E8h] [rbp-68h] BYREF
  GUID v57; // [rsp+F8h] [rbp-58h] BYREF
  _OWORD v58[2]; // [rsp+108h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)&v57.Data1 = 0LL;
  LOBYTE(v55) = 0;
  LOBYTE(v53) = 0;
  v7 = 0;
  LOBYTE(v8) = 0;
  v56 = 0LL;
  memset(v58, 0, sizeof(v58));
  if ( !v2 )
    goto LABEL_22;
  v9 = *(_DWORD *)(v4 + 16);
  if ( v9 < 0x1C )
    goto LABEL_22;
  if ( *(_WORD *)v2 != 1 )
    goto LABEL_22;
  v10 = *(_DWORD *)(v2 + 20);
  if ( v10 > 0x20 )
    goto LABEL_22;
  v11 = *(_DWORD *)(v2 + 16) + v10 + 24;
  if ( v11 < 0x1C )
    v11 = 28;
  if ( *(_DWORD *)(v2 + 4) != v11 || v9 < v11 )
  {
LABEL_22:
    TcgProperties = -1073741811;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v4 + 8) < v11 )
  {
    TcgProperties = -1073741789;
LABEL_23:
    *(_QWORD *)(a2 + 56) = 0LL;
    if ( v7 )
    {
      v51 = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v56);
      v14 = *(_QWORD *)(a1 + 24);
      if ( (byte_140173447 & 2) != 0 )
      {
        v15 = *(const wchar_t **)(v14 + 5144);
        v16 = v14 + 5128;
        v17 = *(_DWORD *)(v14 + 56);
        v18 = (const wchar_t *)&unk_140153274;
        if ( v15 )
          v18 = v15;
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          a1 + 177,
          a1 + 168,
          v16,
          v17,
          v13,
          SBYTE1(v51),
          SBYTE2(v51),
          a1 + 2104,
          v16,
          *((const wchar_t **)&v56 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v18,
          "TcgGetLockingObjectMetadata",
          (const char *)v58,
          TcgProperties,
          v8,
          v57.Data1,
          v55,
          v53,
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
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    TcgProperties = -2147483631;
    goto LABEL_23;
  }
  v8 = *(_DWORD *)(v2 + 8);
  *(_QWORD *)&v57.Data1 = *(unsigned int *)(v2 + 16);
  v7 = 1;
  v55 = *(_DWORD *)(v2 + 20);
  v53 = *(_DWORD *)(v2 + 12);
  TcgProperties = RaidGetTcgProperties(a1, v58);
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3600) + 53LL) )
    {
      TcgProperties = RaidGetTcgLockingObjectMetadata(
                        a1,
                        *(unsigned int *)(v2 + 12),
                        *(unsigned int *)(v2 + 16),
                        *(unsigned int *)(v2 + 20) + v2 + 24,
                        *(_DWORD *)(v2 + 20),
                        v2 + 24,
                        v58);
      if ( TcgProperties >= 0 )
        *(_QWORD *)(a2 + 56) = *(unsigned int *)(v2 + 4);
    }
    else
    {
      TcgProperties = -1073741637;
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
  if ( TcgProperties < 0 )
    goto LABEL_23;
LABEL_28:
  v19 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = TcgProperties;
  if ( v19 )
    goto LABEL_94;
  v57 = 0LL;
  IoGetActivityIdIrp(a2, &v57);
  v21 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v21 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_94;
    v23 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v21 != 15 )
  {
    if ( *(_BYTE *)v21 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v22 = *(int **)(a2 + 56);
        if ( v22 )
          v3 = *v22;
        LODWORD(v44) = *(_DWORD *)(a2 + 48);
        LODWORD(v43) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v20, v21, &v57, a2, v43, v44);
      }
      goto LABEL_94;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_94;
    v23 = &EventPnpRequestComplete;
LABEL_93:
    LODWORD(v43) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v20, v23, &v57, a2, v43);
    goto LABEL_94;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_94;
  v24 = *(_QWORD *)(v21 + 8);
  v25 = 0LL;
  v49 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  if ( *(_BYTE *)(v24 + 2) != 40 )
  {
    v37 = *(_BYTE *)(v24 + 72);
    v25 = *(_BYTE **)(v24 + 32);
    v26 = *(_BYTE *)(v24 + 11);
    v36 = *(_BYTE *)(v24 + 4);
    if ( *(_BYTE *)(v24 + 2) )
      goto LABEL_94;
LABEL_68:
    LOBYTE(v20) = v37 - 8;
    if ( (v20 & 0x5D) != 0 )
      goto LABEL_94;
    v38 = *(_BYTE *)(v24 + 3);
    if ( v38 == 1 || !v25 || !v26 )
      goto LABEL_87;
    v39 = *v25 & 0x7F;
    if ( v39 == 114 || v39 == 115 )
    {
      v20 = (unsigned __int64)&v25[v26];
      LOBYTE(v24) = 0;
      if ( (unsigned __int64)(v25 + 8) > v20 )
        goto LABEL_85;
      v28 = v25[2];
      v27 = v25[1] & 0xF;
      v29 = v25[3];
    }
    else
    {
      v20 = (unsigned __int64)&v25[v26];
      LOBYTE(v24) = 0;
      if ( (unsigned __int64)(v25 + 8) > v20 )
        goto LABEL_85;
      v40 = v25 + 13;
      v27 = v25[2] & 0xF;
      v41 = v26;
      if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
        v41 = (unsigned __int8)v25[7] + 8;
      v20 = (unsigned __int64)&v25[v41];
      if ( (unsigned __int64)v40 <= v20 )
        v28 = v25[12];
      if ( (unsigned __int64)(v25 + 14) > v20 )
        v29 = 0;
      else
        v29 = *v40;
    }
    LOBYTE(v24) = 1;
LABEL_85:
    if ( (_BYTE)v24 )
      v30 = 1;
LABEL_87:
    if ( byte_140173441 < 0 )
    {
      if ( !v30 )
      {
        v29 = 0;
        v28 = 0;
        v27 = 0;
      }
      LOBYTE(v48) = v29;
      LOBYTE(v47) = v28;
      LOBYTE(v46) = v27;
      LOBYTE(v45) = v36;
      LOBYTE(v44) = v38;
      LODWORD(v43) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v20, v24, &v57, a2, v43, v44, v45, v46, v47, v48, a2);
    }
    goto LABEL_94;
  }
  v31 = 0LL;
  v50 = 0;
  if ( !*(_DWORD *)(v24 + 20) )
  {
    v32 = 0LL;
    v52 = 0;
    v54 = *(_DWORD *)(v24 + 56);
    if ( v54 )
    {
      do
      {
        v20 = *(unsigned int *)(v24 + 4 * v32 + 120);
        if ( (unsigned int)v20 >= 0x80 )
        {
          v33 = *(unsigned int *)(v24 + 16);
          if ( (unsigned int)v20 < (unsigned int)v33 )
          {
            v34 = (unsigned int)v20;
            v35 = *(_DWORD *)(v20 + v24) - 64;
            if ( v35 )
            {
              v20 = (unsigned int)(v35 - 1);
              if ( (_DWORD)v20 )
              {
                if ( (_DWORD)v20 == 1 )
                {
                  v20 = v34 + 40;
                  if ( v34 + 40 <= v33 )
                  {
                    if ( *(_DWORD *)(v34 + v24 + 12) )
                      v31 = (char *)(v34 + v24 + 32);
                    v25 = *(_BYTE **)(v34 + v24 + 24);
LABEL_53:
                    v36 = *(_BYTE *)(v34 + v24 + 8);
                    v26 = *(_BYTE *)(v34 + v24 + 9);
                    goto LABEL_62;
                  }
                }
              }
              else
              {
                v20 = v34 + 56;
                if ( v34 + 56 <= v33 )
                {
                  v50 = 1;
                  if ( *(_BYTE *)(v34 + v24 + 10) )
                    v31 = (char *)(v34 + v24 + 24);
                  v25 = *(_BYTE **)(v34 + v24 + 16);
                  v26 = *(_BYTE *)(v34 + v24 + 9);
                  v49 = *(_BYTE *)(v34 + v24 + 8);
                }
              }
            }
            else
            {
              v20 = v34 + 40;
              if ( v34 + 40 <= v33 )
              {
                if ( *(_BYTE *)(v34 + v24 + 10) )
                  v31 = (char *)(v34 + v24 + 24);
                v25 = *(_BYTE **)(v34 + v24 + 16);
                goto LABEL_53;
              }
            }
            if ( v50 )
              break;
          }
        }
        v32 = (unsigned int)(v52 + 1);
        v52 = v32;
      }
      while ( (unsigned int)v32 < v54 );
      v36 = v49;
LABEL_62:
      if ( v31 )
      {
        v37 = *v31;
        v30 = 0;
        goto LABEL_68;
      }
    }
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)TcgProperties;
}
