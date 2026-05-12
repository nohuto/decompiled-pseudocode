/*
 * XREFs of RaidUnitStorageTcgResetState @ 0x14008A358
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
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

__int64 __fastcall RaidUnitStorageTcgResetState(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // r15d
  char v6; // r11
  __int64 v7; // r9
  const wchar_t *v8; // rax
  __int64 v9; // r8
  int v10; // r9d
  const wchar_t *v11; // rbx
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  _BYTE *v18; // r9
  unsigned __int8 v19; // r14
  char v20; // bl
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
  __int64 v36; // [rsp+20h] [rbp-130h]
  __int64 v37; // [rsp+28h] [rbp-128h]
  __int64 v38; // [rsp+30h] [rbp-120h]
  __int64 v39; // [rsp+38h] [rbp-118h]
  __int64 v40; // [rsp+40h] [rbp-110h]
  __int64 v41; // [rsp+48h] [rbp-108h]
  char v42; // [rsp+D0h] [rbp-80h]
  char v43; // [rsp+D1h] [rbp-7Fh]
  int v44; // [rsp+D4h] [rbp-7Ch]
  unsigned int v45; // [rsp+D4h] [rbp-7Ch]
  int v46; // [rsp+D8h] [rbp-78h]
  GUID v47; // [rsp+E0h] [rbp-70h] BYREF
  char pszDest[16]; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v49; // [rsp+100h] [rbp-50h]

  v47 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v49 = 0LL;
  v4 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    v5 = -2147483631;
    v46 = -2147483631;
  }
  else
  {
    v46 = TcglibTPerReset(*(_QWORD *)(a1 + 3592));
    v5 = v46;
    if ( v46 < 0 )
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibTPerReset");
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v5 < 0 )
  {
    v44 = *(_DWORD *)(a1 + 104);
    RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v47);
    v7 = *(_QWORD *)(a1 + 24);
    if ( (byte_140173447 & 2) != 0 )
    {
      v8 = *(const wchar_t **)(v7 + 5144);
      v9 = v7 + 5128;
      v10 = *(_DWORD *)(v7 + 56);
      v11 = (const wchar_t *)&unk_140153274;
      if ( v8 )
        v11 = v8;
      McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
        a1 + 177,
        a1 + 168,
        v9,
        v10,
        v6,
        SBYTE1(v44),
        SBYTE2(v44),
        a1 + 2104,
        v9,
        *(const wchar_t **)v47.Data4,
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        v11,
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
  v12 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( !v12 )
  {
    v47 = 0LL;
    IoGetActivityIdIrp(a2, &v47);
    v14 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v14 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_77;
      v16 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_76;
    }
    if ( *(_BYTE *)v14 != 15 )
    {
      if ( *(_BYTE *)v14 != 27 )
        goto LABEL_77;
      if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v15 = *(int **)(a2 + 56);
          if ( v15 )
            v4 = *v15;
          LODWORD(v37) = *(_DWORD *)(a2 + 48);
          LODWORD(v36) = v4;
          McTemplateK0pqd_EtwWriteTransfer(v13, v14, &v47, a2, v36, v37);
        }
        goto LABEL_77;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_77;
      v16 = &EventPnpRequestComplete;
LABEL_76:
      LODWORD(v36) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v13, v16, &v47, a2, v36);
      goto LABEL_77;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_77;
    v17 = *(_QWORD *)(v14 + 8);
    v18 = 0LL;
    v42 = 0;
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
        goto LABEL_77;
LABEL_51:
      LOBYTE(v13) = v30 - 8;
      if ( (v13 & 0x5D) != 0 )
        goto LABEL_77;
      v31 = *(_BYTE *)(v17 + 3);
      if ( v31 == 1 || !v18 || !v19 )
        goto LABEL_70;
      v32 = *v18 & 0x7F;
      if ( v32 == 114 || v32 == 115 )
      {
        v13 = (unsigned __int64)&v18[v19];
        LOBYTE(v17) = 0;
        if ( (unsigned __int64)(v18 + 8) > v13 )
          goto LABEL_68;
        v21 = v18[2];
        v20 = v18[1] & 0xF;
        v22 = v18[3];
      }
      else
      {
        v13 = (unsigned __int64)&v18[v19];
        LOBYTE(v17) = 0;
        if ( (unsigned __int64)(v18 + 8) > v13 )
          goto LABEL_68;
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
LABEL_68:
      if ( (_BYTE)v17 )
        v23 = 1;
LABEL_70:
      if ( byte_140173441 < 0 )
      {
        if ( !v23 )
        {
          v22 = 0;
          v21 = 0;
          v20 = 0;
        }
        LOBYTE(v41) = v22;
        LOBYTE(v40) = v21;
        LOBYTE(v39) = v20;
        LOBYTE(v38) = v29;
        LOBYTE(v37) = v31;
        LODWORD(v36) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v13, v17, &v47, a2, v36, v37, v38, v39, v40, v41, a2);
      }
      goto LABEL_77;
    }
    v24 = 0LL;
    v43 = 0;
    if ( !*(_DWORD *)(v17 + 20) )
    {
      v25 = 0;
      v45 = *(_DWORD *)(v17 + 56);
      if ( v45 )
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
LABEL_36:
                      v29 = *(_BYTE *)(v27 + v17 + 8);
                      v19 = *(_BYTE *)(v27 + v17 + 9);
                      goto LABEL_45;
                    }
                  }
                }
                else
                {
                  v13 = v27 + 56;
                  if ( v27 + 56 <= v26 )
                  {
                    v43 = 1;
                    if ( *(_BYTE *)(v27 + v17 + 10) )
                      v24 = (char *)(v27 + v17 + 24);
                    v18 = *(_BYTE **)(v27 + v17 + 16);
                    v19 = *(_BYTE *)(v27 + v17 + 9);
                    v42 = *(_BYTE *)(v27 + v17 + 8);
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
                  goto LABEL_36;
                }
              }
              if ( v43 )
                break;
            }
          }
          ++v25;
        }
        while ( v25 < v45 );
        v29 = v42;
LABEL_45:
        if ( v24 )
        {
          v30 = *v24;
          v23 = 0;
          goto LABEL_51;
        }
      }
    }
  }
LABEL_77:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v46;
}
