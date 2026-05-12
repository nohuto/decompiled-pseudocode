/*
 * XREFs of RaidUnitStorageTcgSetLockingObjectMetadata @ 0x14008B974
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1400964C0 (RaidSetTcgLockingObjectMetadata.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitStorageTcgSetLockingObjectMetadata(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v3; // r12d
  char v6; // si
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int v10; // ebx
  char v11; // r11
  __int64 v12; // r9
  const wchar_t *v13; // rax
  __int64 v14; // rsi
  int v15; // r9d
  const wchar_t *v16; // r15
  bool v17; // zf
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  int *v20; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  __int64 v22; // rdx
  _BYTE *v23; // r9
  unsigned __int8 v24; // si
  char v25; // r10
  char v26; // di
  char v27; // r11
  char v28; // r14
  char *v29; // r14
  __int64 v30; // rax
  unsigned __int64 v31; // r15
  __int64 v32; // r8
  int v33; // ecx
  char v34; // r15
  char v35; // cl
  char v36; // al
  char v37; // r8
  char *v38; // r11
  unsigned int v39; // eax
  __int64 v41; // [rsp+20h] [rbp-130h]
  __int64 v42; // [rsp+28h] [rbp-128h]
  __int64 v43; // [rsp+30h] [rbp-120h]
  __int64 v44; // [rsp+38h] [rbp-118h]
  __int64 v45; // [rsp+40h] [rbp-110h]
  __int64 v46; // [rsp+48h] [rbp-108h]
  char v47; // [rsp+D0h] [rbp-80h]
  char v48; // [rsp+D1h] [rbp-7Fh]
  int TcgProperties; // [rsp+D4h] [rbp-7Ch]
  unsigned int v50; // [rsp+D4h] [rbp-7Ch]
  int v51; // [rsp+DCh] [rbp-74h]
  int v52; // [rsp+DCh] [rbp-74h]
  __int128 v53; // [rsp+E8h] [rbp-68h] BYREF
  GUID v54; // [rsp+F8h] [rbp-58h] BYREF
  _OWORD v55[2]; // [rsp+108h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  *(_QWORD *)&v54.Data1 = 0LL;
  v6 = 0;
  v53 = 0LL;
  memset(v55, 0, sizeof(v55));
  if ( !v2 )
    goto LABEL_18;
  v7 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( v7 < 0x1C )
    goto LABEL_18;
  *(_QWORD *)&v54.Data1 = v2;
  if ( *(_WORD *)v2 != 1 )
    goto LABEL_18;
  v8 = *(_DWORD *)(v2 + 20);
  if ( v8 > 0x20 )
    goto LABEL_18;
  v9 = *(_DWORD *)(v2 + 16) + v8 + 24;
  if ( v9 < 0x1C )
    v9 = 28;
  if ( *(_DWORD *)(v2 + 4) != v9 || v7 < v9 )
  {
LABEL_18:
    v10 = -1073741811;
    goto LABEL_19;
  }
  if ( !*(_DWORD *)(v2 + 12) )
  {
    v10 = -1073741637;
LABEL_19:
    TcgProperties = v10;
    goto LABEL_20;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    v10 = -2147483631;
    goto LABEL_19;
  }
  v6 = 1;
  TcgProperties = RaidGetTcgProperties(a1, v55);
  v10 = TcgProperties;
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3600) + 53LL) )
    {
      v10 = RaidSetTcgLockingObjectMetadata(
              a1,
              *(unsigned int *)(v2 + 12),
              *(unsigned int *)(v2 + 16),
              *(unsigned int *)(v2 + 20) + v2 + 24,
              *(_DWORD *)(v2 + 20),
              v2 + 24,
              v55);
      TcgProperties = v10;
    }
    else
    {
      v10 = -1073741637;
      TcgProperties = -1073741637;
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
LABEL_20:
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v10 < 0 )
  {
    if ( v6 )
    {
      v51 = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v53);
      v12 = *(_QWORD *)(a1 + 24);
      if ( (byte_140173447 & 2) != 0 )
      {
        v13 = *(const wchar_t **)(v12 + 5144);
        v14 = v12 + 5128;
        v15 = *(_DWORD *)(v12 + 56);
        v16 = (const wchar_t *)&unk_140153274;
        if ( v13 )
          v16 = v13;
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          *(unsigned int *)(*(_QWORD *)&v54.Data1 + 20LL),
          *(unsigned int *)(*(_QWORD *)&v54.Data1 + 16LL),
          *(unsigned int *)(*(_QWORD *)&v54.Data1 + 8LL),
          v15,
          v11,
          SBYTE1(v51),
          SBYTE2(v51),
          a1 + 2104,
          v14,
          *((const wchar_t **)&v53 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v16,
          "TcgSetLockingObjectMetadata",
          (const char *)v55,
          TcgProperties,
          *(_DWORD *)(*(_QWORD *)&v54.Data1 + 8LL),
          *(_DWORD *)(*(_QWORD *)&v54.Data1 + 16LL),
          *(_DWORD *)(*(_QWORD *)&v54.Data1 + 20LL),
          *(_DWORD *)(*(_QWORD *)&v54.Data1 + 12LL),
          0);
        v10 = TcgProperties;
      }
    }
  }
  v17 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v10;
  if ( !v17 )
  {
    v54 = 0LL;
    IoGetActivityIdIrp(a2, &v54);
    v19 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v19 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_92;
      v21 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_91;
    }
    if ( *(_BYTE *)v19 != 15 )
    {
      if ( *(_BYTE *)v19 != 27 )
        goto LABEL_92;
      if ( *(_BYTE *)(v19 + 1) == 7 && !*(_DWORD *)(v19 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v20 = *(int **)(a2 + 56);
          if ( v20 )
            v3 = *v20;
          LODWORD(v42) = *(_DWORD *)(a2 + 48);
          LODWORD(v41) = v3;
          McTemplateK0pqd_EtwWriteTransfer(v18, v19, &v54, a2, v41, v42);
        }
        goto LABEL_92;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_92;
      v21 = &EventPnpRequestComplete;
LABEL_91:
      LODWORD(v41) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v18, v21, &v54, a2, v41);
      goto LABEL_92;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_92;
    v22 = *(_QWORD *)(v19 + 8);
    v23 = 0LL;
    v47 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    if ( *(_BYTE *)(v22 + 2) != 40 )
    {
      v35 = *(_BYTE *)(v22 + 72);
      v23 = *(_BYTE **)(v22 + 32);
      v24 = *(_BYTE *)(v22 + 11);
      v34 = *(_BYTE *)(v22 + 4);
      if ( *(_BYTE *)(v22 + 2) )
        goto LABEL_92;
LABEL_66:
      LOBYTE(v18) = v35 - 8;
      if ( (v18 & 0x5D) != 0 )
        goto LABEL_92;
      if ( *(_BYTE *)(v22 + 3) == 1 || !v23 || !v24 )
        goto LABEL_85;
      v36 = *v23 & 0x7F;
      if ( v36 == 114 || v36 == 115 )
      {
        v18 = (unsigned __int64)&v23[v24];
        v37 = 0;
        if ( (unsigned __int64)(v23 + 8) > v18 )
          goto LABEL_83;
        v26 = v23[2];
        v25 = v23[1] & 0xF;
        v27 = v23[3];
      }
      else
      {
        v18 = (unsigned __int64)&v23[v24];
        v37 = 0;
        if ( (unsigned __int64)(v23 + 8) > v18 )
          goto LABEL_83;
        v38 = v23 + 13;
        v25 = v23[2] & 0xF;
        v39 = v24;
        if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
          v39 = (unsigned __int8)v23[7] + 8;
        v18 = (unsigned __int64)&v23[v39];
        if ( (unsigned __int64)v38 <= v18 )
          v26 = v23[12];
        if ( (unsigned __int64)(v23 + 14) > v18 )
          v27 = 0;
        else
          v27 = *v38;
      }
      v37 = 1;
LABEL_83:
      if ( v37 )
        v28 = 1;
LABEL_85:
      if ( byte_140173441 < 0 )
      {
        if ( !v28 )
        {
          v27 = 0;
          v26 = 0;
          v25 = 0;
        }
        LOBYTE(v46) = v27;
        LOBYTE(v45) = v26;
        LOBYTE(v44) = v25;
        LOBYTE(v43) = v34;
        LOBYTE(v42) = *(_BYTE *)(v22 + 3);
        LODWORD(v41) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v18, v22, &v54, a2, v41, v42, v43, v44, v45, v46, a2);
      }
      goto LABEL_92;
    }
    v29 = 0LL;
    v48 = 0;
    if ( !*(_DWORD *)(v22 + 20) )
    {
      v30 = 0LL;
      v52 = 0;
      v50 = *(_DWORD *)(v22 + 56);
      if ( v50 )
      {
        do
        {
          v18 = *(unsigned int *)(v22 + 4 * v30 + 120);
          if ( (unsigned int)v18 >= 0x80 )
          {
            v31 = *(unsigned int *)(v22 + 16);
            if ( (unsigned int)v18 < (unsigned int)v31 )
            {
              v32 = (unsigned int)v18;
              v33 = *(_DWORD *)(v18 + v22) - 64;
              if ( v33 )
              {
                v18 = (unsigned int)(v33 - 1);
                if ( (_DWORD)v18 )
                {
                  if ( (_DWORD)v18 == 1 )
                  {
                    v18 = v32 + 40;
                    if ( v32 + 40 <= v31 )
                    {
                      if ( *(_DWORD *)(v32 + v22 + 12) )
                        v29 = (char *)(v32 + v22 + 32);
                      v23 = *(_BYTE **)(v32 + v22 + 24);
LABEL_51:
                      v34 = *(_BYTE *)(v32 + v22 + 8);
                      v24 = *(_BYTE *)(v32 + v22 + 9);
                      goto LABEL_60;
                    }
                  }
                }
                else
                {
                  v18 = v32 + 56;
                  if ( v32 + 56 <= v31 )
                  {
                    v48 = 1;
                    if ( *(_BYTE *)(v32 + v22 + 10) )
                      v29 = (char *)(v32 + v22 + 24);
                    v23 = *(_BYTE **)(v32 + v22 + 16);
                    v24 = *(_BYTE *)(v32 + v22 + 9);
                    v47 = *(_BYTE *)(v32 + v22 + 8);
                  }
                }
              }
              else
              {
                v18 = v32 + 40;
                if ( v32 + 40 <= v31 )
                {
                  if ( *(_BYTE *)(v32 + v22 + 10) )
                    v29 = (char *)(v32 + v22 + 24);
                  v23 = *(_BYTE **)(v32 + v22 + 16);
                  goto LABEL_51;
                }
              }
              if ( v48 )
                break;
            }
          }
          v30 = (unsigned int)(v52 + 1);
          v52 = v30;
        }
        while ( (unsigned int)v30 < v50 );
        v34 = v47;
LABEL_60:
        if ( v29 )
        {
          v35 = *v29;
          v28 = 0;
          goto LABEL_66;
        }
      }
    }
  }
LABEL_92:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v10;
}
