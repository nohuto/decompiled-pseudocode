/*
 * XREFs of RaidAdapterStorageTcgQueryCapability @ 0x140085584
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
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

__int64 __fastcall RaidAdapterStorageTcgQueryCapability(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v4; // rcx
  int TcgConfigInformation; // r12d
  void *v7; // rdi
  __int64 v8; // r8
  const wchar_t *v9; // rcx
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  __int64 v15; // rdx
  _BYTE *v16; // r9
  unsigned __int8 v17; // di
  char v18; // r11
  char v19; // bl
  char v20; // r10
  char v21; // r15
  char *v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // r13
  __int64 v25; // r8
  int v26; // ecx
  char v27; // r13
  char v28; // cl
  char v29; // al
  char v30; // r8
  char *v31; // r10
  unsigned int v32; // eax
  __int64 v34; // [rsp+20h] [rbp-130h]
  __int64 v35; // [rsp+28h] [rbp-128h]
  __int64 v36; // [rsp+30h] [rbp-120h]
  __int64 v37; // [rsp+38h] [rbp-118h]
  __int64 v38; // [rsp+40h] [rbp-110h]
  __int64 v39; // [rsp+48h] [rbp-108h]
  char v40; // [rsp+D0h] [rbp-80h]
  char v41; // [rsp+D1h] [rbp-7Fh]
  int v42; // [rsp+D4h] [rbp-7Ch]
  unsigned int v43; // [rsp+D8h] [rbp-78h]
  GUID v44; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v45; // [rsp+F0h] [rbp-60h] BYREF
  _OWORD v46[2]; // [rsp+100h] [rbp-50h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v45 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  v44 = 0LL;
  memset(v46, 0, sizeof(v46));
  if ( *(_QWORD *)(a2 + 24) )
  {
    if ( *(_DWORD *)(v4 + 8) >= 0x34u )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
      {
        TcgConfigInformation = -2147483631;
      }
      else
      {
        v7 = *(void **)(a2 + 24);
        memset_0(v7, 0, *(unsigned int *)(v4 + 8));
        TcgConfigInformation = RaidGetTcgConfigInformation(a1, v7, v46);
        if ( TcgConfigInformation >= 0 )
          *(_QWORD *)(a2 + 56) = 52LL;
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
        if ( TcgConfigInformation < 0 )
        {
          RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v44);
          if ( (byte_140173447 & 2) != 0 )
          {
            v9 = (const wchar_t *)&unk_140153274;
            if ( *(_QWORD *)(a1 + 5144) )
              v9 = *(const wchar_t **)(a1 + 5144);
            McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
              (__int64)v9,
              a1 + 5128,
              v8,
              *(_DWORD *)(a1 + 56),
              RaidNullAddress,
              SBYTE1(RaidNullAddress),
              SBYTE2(RaidNullAddress),
              (__int64)&v45,
              a1 + 5128,
              *(const wchar_t **)v44.Data4,
              byte_14015304C,
              byte_14015304C,
              byte_14015304C,
              v9,
              "TcgQueryCapabilityConfiguration",
              (const char *)v46,
              TcgConfigInformation,
              (*(_BYTE *)(a1 + 111) & 0x10) != 0LL,
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
  v10 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = TcgConfigInformation;
  if ( !v10 )
  {
    v44 = 0LL;
    IoGetActivityIdIrp(a2, &v44);
    v12 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v12 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_80;
      v14 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_79;
    }
    if ( *(_BYTE *)v12 != 15 )
    {
      if ( *(_BYTE *)v12 != 27 )
        goto LABEL_80;
      if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v13 = *(int **)(a2 + 56);
          if ( v13 )
            v2 = *v13;
          LODWORD(v35) = *(_DWORD *)(a2 + 48);
          LODWORD(v34) = v2;
          McTemplateK0pqd_EtwWriteTransfer(v11, v12, &v44, a2, v34, v35);
        }
        goto LABEL_80;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_80;
      v14 = &EventPnpRequestComplete;
LABEL_79:
      LODWORD(v34) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v11, v14, &v44, a2, v34);
      goto LABEL_80;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_80;
    v15 = *(_QWORD *)(v12 + 8);
    v16 = 0LL;
    v40 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    if ( *(_BYTE *)(v15 + 2) != 40 )
    {
      v28 = *(_BYTE *)(v15 + 72);
      v16 = *(_BYTE **)(v15 + 32);
      v17 = *(_BYTE *)(v15 + 11);
      v27 = *(_BYTE *)(v15 + 4);
      if ( *(_BYTE *)(v15 + 2) )
        goto LABEL_80;
LABEL_54:
      LOBYTE(v11) = v28 - 8;
      if ( (v11 & 0x5D) != 0 )
        goto LABEL_80;
      if ( *(_BYTE *)(v15 + 3) == 1 || !v16 || !v17 )
        goto LABEL_73;
      v29 = *v16 & 0x7F;
      if ( v29 == 114 || v29 == 115 )
      {
        v11 = (unsigned __int64)&v16[v17];
        v30 = 0;
        if ( (unsigned __int64)(v16 + 8) > v11 )
          goto LABEL_71;
        v19 = v16[2];
        v18 = v16[1] & 0xF;
        v20 = v16[3];
      }
      else
      {
        v11 = (unsigned __int64)&v16[v17];
        v30 = 0;
        if ( (unsigned __int64)(v16 + 8) > v11 )
          goto LABEL_71;
        v31 = v16 + 13;
        v18 = v16[2] & 0xF;
        v32 = v17;
        if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
          v32 = (unsigned __int8)v16[7] + 8;
        v11 = (unsigned __int64)&v16[v32];
        if ( (unsigned __int64)v31 <= v11 )
          v19 = v16[12];
        if ( (unsigned __int64)(v16 + 14) > v11 )
          v20 = 0;
        else
          v20 = *v31;
      }
      v30 = 1;
LABEL_71:
      if ( v30 )
        v21 = 1;
LABEL_73:
      if ( byte_140173441 < 0 )
      {
        if ( !v21 )
        {
          v20 = 0;
          v19 = 0;
          v18 = 0;
        }
        LOBYTE(v39) = v20;
        LOBYTE(v38) = v19;
        LOBYTE(v37) = v18;
        LOBYTE(v36) = v27;
        LOBYTE(v35) = *(_BYTE *)(v15 + 3);
        LODWORD(v34) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v11, v15, &v44, a2, v34, v35, v36, v37, v38, v39, a2);
      }
      goto LABEL_80;
    }
    v22 = 0LL;
    v41 = 0;
    if ( !*(_DWORD *)(v15 + 20) )
    {
      v23 = 0LL;
      v42 = 0;
      v43 = *(_DWORD *)(v15 + 56);
      if ( v43 )
      {
        do
        {
          v11 = *(unsigned int *)(v15 + 4 * v23 + 120);
          if ( (unsigned int)v11 >= 0x80 )
          {
            v24 = *(unsigned int *)(v15 + 16);
            if ( (unsigned int)v11 < (unsigned int)v24 )
            {
              v25 = (unsigned int)v11;
              v26 = *(_DWORD *)(v11 + v15) - 64;
              if ( v26 )
              {
                v11 = (unsigned int)(v26 - 1);
                if ( (_DWORD)v11 )
                {
                  if ( (_DWORD)v11 == 1 )
                  {
                    v11 = v25 + 40;
                    if ( v25 + 40 <= v24 )
                    {
                      if ( *(_DWORD *)(v25 + v15 + 12) )
                        v22 = (char *)(v25 + v15 + 32);
                      v16 = *(_BYTE **)(v25 + v15 + 24);
LABEL_39:
                      v27 = *(_BYTE *)(v25 + v15 + 8);
                      v17 = *(_BYTE *)(v25 + v15 + 9);
                      goto LABEL_48;
                    }
                  }
                }
                else
                {
                  v11 = v25 + 56;
                  if ( v25 + 56 <= v24 )
                  {
                    v41 = 1;
                    if ( *(_BYTE *)(v25 + v15 + 10) )
                      v22 = (char *)(v25 + v15 + 24);
                    v16 = *(_BYTE **)(v25 + v15 + 16);
                    v17 = *(_BYTE *)(v25 + v15 + 9);
                    v40 = *(_BYTE *)(v25 + v15 + 8);
                  }
                }
              }
              else
              {
                v11 = v25 + 40;
                if ( v25 + 40 <= v24 )
                {
                  if ( *(_BYTE *)(v25 + v15 + 10) )
                    v22 = (char *)(v25 + v15 + 24);
                  v16 = *(_BYTE **)(v25 + v15 + 16);
                  goto LABEL_39;
                }
              }
              if ( v41 )
                break;
            }
          }
          v23 = (unsigned int)(v42 + 1);
          v42 = v23;
        }
        while ( (unsigned int)v23 < v43 );
        v27 = v40;
LABEL_48:
        if ( v22 )
        {
          v28 = *v22;
          v21 = 0;
          goto LABEL_54;
        }
      }
    }
  }
LABEL_80:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)TcgConfigInformation;
}
