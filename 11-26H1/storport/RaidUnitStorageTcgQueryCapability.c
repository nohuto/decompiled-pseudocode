/*
 * XREFs of RaidUnitStorageTcgQueryCapability @ 0x140089E3C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgConfigInformation @ 0x1400946E8 (RaidGetTcgConfigInformation.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidUnitStorageTcgQueryCapability(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v5; // rcx
  int TcgConfigInformation; // r12d
  void *v7; // rbx
  char v8; // r11
  __int64 v9; // r9
  const wchar_t *v10; // rax
  __int64 v11; // r10
  int v12; // r9d
  const wchar_t *v13; // rdi
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  _BYTE *v20; // r9
  unsigned __int8 v21; // di
  char v22; // r11
  char v23; // bl
  char v24; // r10
  char v25; // r15
  char *v26; // r15
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // r8
  int v30; // ecx
  char v31; // r13
  char v32; // cl
  char v33; // al
  char v34; // r8
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
  int v47; // [rsp+D4h] [rbp-7Ch]
  unsigned int v48; // [rsp+D8h] [rbp-78h]
  GUID v49; // [rsp+E0h] [rbp-70h] BYREF
  _OWORD v50[2]; // [rsp+F0h] [rbp-60h] BYREF

  v2 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  v49 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  memset(v50, 0, sizeof(v50));
  if ( *(_QWORD *)(a2 + 24) )
  {
    if ( *(_DWORD *)(v5 + 8) >= 0x34u )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
      {
        TcgConfigInformation = -2147483631;
      }
      else
      {
        v7 = *(void **)(a2 + 24);
        memset_0(v7, 0, *(unsigned int *)(v5 + 8));
        TcgConfigInformation = RaidGetTcgConfigInformation(a1, v7, v50);
        if ( TcgConfigInformation >= 0 )
          *(_QWORD *)(a2 + 56) = 52LL;
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
        if ( TcgConfigInformation < 0 )
        {
          v46 = *(_DWORD *)(a1 + 104);
          RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v49);
          v9 = *(_QWORD *)(a1 + 24);
          if ( (byte_140173447 & 2) != 0 )
          {
            v10 = *(const wchar_t **)(v9 + 5144);
            v11 = v9 + 5128;
            v12 = *(_DWORD *)(v9 + 56);
            v13 = (const wchar_t *)&unk_140153274;
            if ( v10 )
              v13 = v10;
            McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
              a1 + 242,
              a1 + 177,
              a1 + 168,
              v12,
              v8,
              SBYTE1(v46),
              SBYTE2(v46),
              a1 + 2104,
              v11,
              *(const wchar_t **)v49.Data4,
              (const char *)(a1 + 168),
              (const char *)(a1 + 177),
              (const char *)(a1 + 242),
              v13,
              "TcgQueryCapabilityConfiguration",
              (const char *)v50,
              TcgConfigInformation,
              (*(_BYTE *)(a1 + 507) & 0x40) != 0,
              0,
              0,
              0,
              0);
          }
        }
      }
    }
    else
    {
      TcgConfigInformation = -1073741789;
    }
  }
  else
  {
    TcgConfigInformation = -1073741811;
  }
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = TcgConfigInformation;
  if ( !v14 )
  {
    v49 = 0LL;
    IoGetActivityIdIrp(a2, &v49);
    v16 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v16 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_80;
      v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_79;
    }
    if ( *(_BYTE *)v16 != 15 )
    {
      if ( *(_BYTE *)v16 != 27 )
        goto LABEL_80;
      if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v17 = *(int **)(a2 + 56);
          if ( v17 )
            v2 = *v17;
          LODWORD(v39) = *(_DWORD *)(a2 + 48);
          LODWORD(v38) = v2;
          McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v49, a2, v38, v39);
        }
        goto LABEL_80;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_80;
      v18 = &EventPnpRequestComplete;
LABEL_79:
      LODWORD(v38) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v15, v18, &v49, a2, v38);
      goto LABEL_80;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_80;
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
        goto LABEL_80;
LABEL_54:
      LOBYTE(v15) = v32 - 8;
      if ( (v15 & 0x5D) != 0 )
        goto LABEL_80;
      if ( *(_BYTE *)(v19 + 3) == 1 || !v20 || !v21 )
        goto LABEL_73;
      v33 = *v20 & 0x7F;
      if ( v33 == 114 || v33 == 115 )
      {
        v15 = (unsigned __int64)&v20[v21];
        v34 = 0;
        if ( (unsigned __int64)(v20 + 8) > v15 )
          goto LABEL_71;
        v23 = v20[2];
        v22 = v20[1] & 0xF;
        v24 = v20[3];
      }
      else
      {
        v15 = (unsigned __int64)&v20[v21];
        v34 = 0;
        if ( (unsigned __int64)(v20 + 8) > v15 )
          goto LABEL_71;
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
      v34 = 1;
LABEL_71:
      if ( v34 )
        v25 = 1;
LABEL_73:
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
        LOBYTE(v39) = *(_BYTE *)(v19 + 3);
        LODWORD(v38) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v15, v19, &v49, a2, v38, v39, v40, v41, v42, v43, a2);
      }
      goto LABEL_80;
    }
    v26 = 0LL;
    v45 = 0;
    if ( !*(_DWORD *)(v19 + 20) )
    {
      v27 = 0LL;
      v47 = 0;
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
LABEL_39:
                      v31 = *(_BYTE *)(v29 + v19 + 8);
                      v21 = *(_BYTE *)(v29 + v19 + 9);
                      goto LABEL_48;
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
                  goto LABEL_39;
                }
              }
              if ( v45 )
                break;
            }
          }
          v27 = (unsigned int)(v47 + 1);
          v47 = v27;
        }
        while ( (unsigned int)v27 < v48 );
        v31 = v44;
LABEL_48:
        if ( v26 )
        {
          v32 = *v26;
          v25 = 0;
          goto LABEL_54;
        }
      }
    }
  }
LABEL_80:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)TcgConfigInformation;
}
