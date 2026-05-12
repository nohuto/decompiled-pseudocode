/*
 * XREFs of RaidAdapterStorageTcgResetState @ 0x140085A88
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RtlStringCbCopyA @ 0x140076CE0 (RtlStringCbCopyA.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     TcglibTPerReset @ 0x1401320B8 (TcglibTPerReset.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageTcgResetState(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // r15d
  __int64 v6; // r8
  const wchar_t *v7; // rcx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  _BYTE *v14; // r9
  unsigned __int8 v15; // r14
  char v16; // bl
  char v17; // r11
  char v18; // r10
  char v19; // r15
  char *v20; // r15
  unsigned int v21; // r13d
  unsigned __int64 v22; // r12
  __int64 v23; // r8
  int v24; // ecx
  char v25; // r12
  char v26; // cl
  char v27; // r8
  char v28; // al
  char *v29; // r10
  unsigned int v30; // eax
  __int64 v32; // [rsp+20h] [rbp-130h]
  __int64 v33; // [rsp+28h] [rbp-128h]
  __int64 v34; // [rsp+30h] [rbp-120h]
  __int64 v35; // [rsp+38h] [rbp-118h]
  __int64 v36; // [rsp+40h] [rbp-110h]
  __int64 v37; // [rsp+48h] [rbp-108h]
  char v38; // [rsp+D0h] [rbp-80h]
  char v39; // [rsp+D1h] [rbp-7Fh]
  unsigned int v40; // [rsp+D4h] [rbp-7Ch]
  int v41; // [rsp+D8h] [rbp-78h]
  GUID v42; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v43; // [rsp+F0h] [rbp-60h] BYREF
  char pszDest[16]; // [rsp+100h] [rbp-50h] BYREF
  __int128 v45; // [rsp+110h] [rbp-40h]

  v43 = 0LL;
  v42 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v45 = 0LL;
  v4 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
  {
    v5 = -2147483631;
    v41 = -2147483631;
  }
  else
  {
    v41 = TcglibTPerReset(*(_QWORD *)(a1 + 6120));
    v5 = v41;
    if ( v41 < 0 )
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibTPerReset");
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v5 < 0 )
  {
    RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v42);
    if ( (byte_140173447 & 2) != 0 )
    {
      v7 = (const wchar_t *)&unk_140153274;
      if ( *(_QWORD *)(a1 + 5144) )
        v7 = *(const wchar_t **)(a1 + 5144);
      McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
        (__int64)v7,
        a1 + 5128,
        v6,
        *(_DWORD *)(a1 + 56),
        RaidNullAddress,
        SBYTE1(RaidNullAddress),
        SBYTE2(RaidNullAddress),
        (__int64)&v43,
        a1 + 5128,
        *(const wchar_t **)v42.Data4,
        byte_14015304C,
        byte_14015304C,
        byte_14015304C,
        v7,
        "TcgResetState",
        pszDest,
        v5,
        0,
        0,
        0,
        0,
        0);
    }
  }
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( !v8 )
  {
    v42 = 0LL;
    IoGetActivityIdIrp(a2, &v42);
    v10 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v10 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_77;
      v12 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_76;
    }
    if ( *(_BYTE *)v10 != 15 )
    {
      if ( *(_BYTE *)v10 != 27 )
        goto LABEL_77;
      if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v11 = *(int **)(a2 + 56);
          if ( v11 )
            v4 = *v11;
          LODWORD(v33) = *(_DWORD *)(a2 + 48);
          LODWORD(v32) = v4;
          McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v42, a2, v32, v33);
        }
        goto LABEL_77;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_77;
      v12 = &EventPnpRequestComplete;
LABEL_76:
      LODWORD(v32) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v9, v12, &v42, a2, v32);
      goto LABEL_77;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_77;
    v13 = *(_QWORD *)(v10 + 8);
    v14 = 0LL;
    v38 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( *(_BYTE *)(v13 + 2) != 40 )
    {
      v26 = *(_BYTE *)(v13 + 72);
      v14 = *(_BYTE **)(v13 + 32);
      v15 = *(_BYTE *)(v13 + 11);
      v25 = *(_BYTE *)(v13 + 4);
      if ( *(_BYTE *)(v13 + 2) )
        goto LABEL_77;
LABEL_51:
      LOBYTE(v9) = v26 - 8;
      if ( (v9 & 0x5D) != 0 )
        goto LABEL_77;
      v27 = *(_BYTE *)(v13 + 3);
      if ( v27 == 1 || !v14 || !v15 )
        goto LABEL_70;
      v28 = *v14 & 0x7F;
      if ( v28 == 114 || v28 == 115 )
      {
        v9 = (unsigned __int64)&v14[v15];
        LOBYTE(v13) = 0;
        if ( (unsigned __int64)(v14 + 8) > v9 )
          goto LABEL_68;
        v17 = v14[2];
        v16 = v14[1] & 0xF;
        v18 = v14[3];
      }
      else
      {
        v9 = (unsigned __int64)&v14[v15];
        LOBYTE(v13) = 0;
        if ( (unsigned __int64)(v14 + 8) > v9 )
          goto LABEL_68;
        v29 = v14 + 13;
        v16 = v14[2] & 0xF;
        v30 = v15;
        if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
          v30 = (unsigned __int8)v14[7] + 8;
        v9 = (unsigned __int64)&v14[v30];
        if ( (unsigned __int64)v29 <= v9 )
          v17 = v14[12];
        if ( (unsigned __int64)(v14 + 14) > v9 )
          v18 = 0;
        else
          v18 = *v29;
      }
      LOBYTE(v13) = 1;
LABEL_68:
      if ( (_BYTE)v13 )
        v19 = 1;
LABEL_70:
      if ( byte_140173441 < 0 )
      {
        if ( !v19 )
        {
          v18 = 0;
          v17 = 0;
          v16 = 0;
        }
        LOBYTE(v37) = v18;
        LOBYTE(v36) = v17;
        LOBYTE(v35) = v16;
        LOBYTE(v34) = v25;
        LOBYTE(v33) = v27;
        LODWORD(v32) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v42, a2, v32, v33, v34, v35, v36, v37, a2);
      }
      goto LABEL_77;
    }
    v20 = 0LL;
    v39 = 0;
    if ( !*(_DWORD *)(v13 + 20) )
    {
      v21 = 0;
      v40 = *(_DWORD *)(v13 + 56);
      if ( v40 )
      {
        do
        {
          v9 = *(unsigned int *)(v13 + 4LL * v21 + 120);
          if ( (unsigned int)v9 >= 0x80 )
          {
            v22 = *(unsigned int *)(v13 + 16);
            if ( (unsigned int)v9 < (unsigned int)v22 )
            {
              v23 = (unsigned int)v9;
              v24 = *(_DWORD *)(v9 + v13) - 64;
              if ( v24 )
              {
                v9 = (unsigned int)(v24 - 1);
                if ( (_DWORD)v9 )
                {
                  if ( (_DWORD)v9 == 1 )
                  {
                    v9 = v23 + 40;
                    if ( v23 + 40 <= v22 )
                    {
                      if ( *(_DWORD *)(v23 + v13 + 12) )
                        v20 = (char *)(v23 + v13 + 32);
                      v14 = *(_BYTE **)(v23 + v13 + 24);
LABEL_36:
                      v25 = *(_BYTE *)(v23 + v13 + 8);
                      v15 = *(_BYTE *)(v23 + v13 + 9);
                      goto LABEL_45;
                    }
                  }
                }
                else
                {
                  v9 = v23 + 56;
                  if ( v23 + 56 <= v22 )
                  {
                    v39 = 1;
                    if ( *(_BYTE *)(v23 + v13 + 10) )
                      v20 = (char *)(v23 + v13 + 24);
                    v14 = *(_BYTE **)(v23 + v13 + 16);
                    v15 = *(_BYTE *)(v23 + v13 + 9);
                    v38 = *(_BYTE *)(v23 + v13 + 8);
                  }
                }
              }
              else
              {
                v9 = v23 + 40;
                if ( v23 + 40 <= v22 )
                {
                  if ( *(_BYTE *)(v23 + v13 + 10) )
                    v20 = (char *)(v23 + v13 + 24);
                  v14 = *(_BYTE **)(v23 + v13 + 16);
                  goto LABEL_36;
                }
              }
              if ( v39 )
                break;
            }
          }
          ++v21;
        }
        while ( v21 < v40 );
        v25 = v38;
LABEL_45:
        if ( v20 )
        {
          v26 = *v20;
          v19 = 0;
          goto LABEL_51;
        }
      }
    }
  }
LABEL_77:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v41;
}
