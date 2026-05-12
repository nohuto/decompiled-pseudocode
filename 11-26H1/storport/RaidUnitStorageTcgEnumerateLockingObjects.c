/*
 * XREFs of RaidUnitStorageTcgEnumerateLockingObjects @ 0x140088CB4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidFillTcgLockingObjects @ 0x140094204 (RaidFillTcgLockingObjects.c)
 *     RaidGetTcgLockingObjects @ 0x140094CAC (RaidGetTcgLockingObjects.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidUnitStorageTcgEnumerateLockingObjects(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // edi
  __int64 v4; // rax
  void *v7; // r12
  char v8; // cl
  char v9; // r13
  int TcgProperties; // r15d
  __int64 v11; // rcx
  _DWORD *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  int TcgLockingObjects; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  char v18; // r11
  __int64 v19; // r9
  const wchar_t *v20; // rax
  __int64 v21; // r8
  int v22; // r9d
  const wchar_t *v23; // rbx
  bool v24; // zf
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  int *v27; // rax
  const EVENT_DESCRIPTOR *v28; // rdx
  __int64 v29; // rdx
  _BYTE *v30; // r9
  unsigned __int8 v31; // r14
  char v32; // r11
  char v33; // bl
  char v34; // r10
  char v35; // r12
  char *v36; // r12
  int v37; // ecx
  __int64 v38; // rax
  unsigned __int64 v39; // r13
  __int64 v40; // r8
  int v41; // ecx
  char v42; // r13
  char v43; // cl
  char v44; // r8
  char v45; // al
  char *v46; // r10
  unsigned int v47; // eax
  void *v49; // [rsp+20h] [rbp-130h]
  __int64 v50; // [rsp+28h] [rbp-128h]
  __int64 v51; // [rsp+30h] [rbp-120h]
  __int64 v52; // [rsp+38h] [rbp-118h]
  __int64 v53; // [rsp+40h] [rbp-110h]
  __int64 v54; // [rsp+48h] [rbp-108h]
  char v55; // [rsp+D0h] [rbp-80h]
  char v56; // [rsp+D1h] [rbp-7Fh]
  int v57[2]; // [rsp+D8h] [rbp-78h] BYREF
  int v58[2]; // [rsp+E0h] [rbp-70h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-68h]
  __int64 v60; // [rsp+F0h] [rbp-60h]
  __int64 v61; // [rsp+F8h] [rbp-58h]
  __int128 v62; // [rsp+100h] [rbp-50h] BYREF
  GUID v63; // [rsp+110h] [rbp-40h] BYREF
  _OWORD v64[2]; // [rsp+120h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)v57 = v4;
  *(_QWORD *)v58 = 0LL;
  *(_QWORD *)&v63.Data1 = 0LL;
  v61 = 0LL;
  v7 = 0LL;
  v59 = 0LL;
  v8 = 0;
  v9 = 0;
  v62 = 0LL;
  memset(v64, 0, sizeof(v64));
  if ( !v2 || *(_DWORD *)(v4 + 16) < 0x20u || *(_WORD *)v2 != 1 || *(_DWORD *)(v2 + 4) != 32 )
  {
    TcgProperties = -1073741811;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v4 + 8) < 0x10u )
  {
    TcgProperties = -1073741789;
LABEL_23:
    *(_QWORD *)(a2 + 56) = 0LL;
    if ( v8 )
    {
      v17 = *(_QWORD *)(a1 + 24);
      v57[0] = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(v17 + 16), (__int64)&v62);
      v19 = *(_QWORD *)(a1 + 24);
      if ( (byte_140173447 & 2) != 0 )
      {
        v20 = *(const wchar_t **)(v19 + 5144);
        v21 = v19 + 5128;
        v22 = *(_DWORD *)(v19 + 56);
        v23 = (const wchar_t *)&unk_140153274;
        if ( v20 )
          v23 = v20;
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          a1 + 177,
          a1 + 168,
          v21,
          v22,
          v18,
          SBYTE1(v57[0]),
          SBYTE2(v57[0]),
          a1 + 2104,
          v21,
          *((const wchar_t **)&v62 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v23,
          "TcgEnumerateLockingObjects",
          (const char *)v64,
          TcgProperties,
          v63.Data1,
          v61,
          v9,
          v59,
          0);
      }
    }
    goto LABEL_28;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    TcgProperties = -2147483631;
    goto LABEL_23;
  }
  v11 = *(unsigned int *)(v2 + 12);
  v12 = *(_DWORD **)(a2 + 24);
  *(_QWORD *)&v63.Data1 = *(unsigned int *)(v2 + 8);
  v61 = v11;
  if ( (v63.Data1 & 1) != 0 )
  {
    v59 = *(_QWORD *)(v2 + 24);
    v13 = *(_QWORD *)(v2 + 16);
  }
  else
  {
    v13 = *(unsigned int *)(v2 + 16);
    v59 = 0LL;
  }
  v60 = v13;
  TcgProperties = RaidGetTcgProperties(a1, v64);
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3600) + 53LL) )
    {
      TcgLockingObjects = RaidGetTcgLockingObjects(a1, v58, v64);
      v7 = *(void **)v58;
      TcgProperties = TcgLockingObjects;
      if ( TcgLockingObjects < 0 )
        goto LABEL_18;
      v16 = *(_QWORD *)(a1 + 3600);
      v57[0] = *(_DWORD *)(*(_QWORD *)v57 + 8LL);
      RaidFillTcgLockingObjects(v16, v58[0], v2, (int)v57, v12);
      v14 = (unsigned int)v57[0];
    }
    else
    {
      memset_0(v12, 0, *(unsigned int *)(*(_QWORD *)v57 + 8LL));
      v14 = 16LL;
      *(_WORD *)v12 = 1;
      v12[1] = 16;
    }
    *(_QWORD *)(a2 + 56) = v14;
  }
LABEL_18:
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x43546152u);
  if ( TcgProperties < 0 )
  {
    v8 = 1;
    v9 = v60;
    goto LABEL_23;
  }
LABEL_28:
  v24 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = TcgProperties;
  if ( v24 )
    goto LABEL_94;
  v63 = 0LL;
  IoGetActivityIdIrp(a2, &v63);
  v26 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v26 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_94;
    v28 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v26 != 15 )
  {
    if ( *(_BYTE *)v26 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v26 + 1) == 7 && !*(_DWORD *)(v26 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v27 = *(int **)(a2 + 56);
        if ( v27 )
          v3 = *v27;
        LODWORD(v50) = *(_DWORD *)(a2 + 48);
        LODWORD(v49) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v25, v26, &v63, a2, v49, v50);
      }
      goto LABEL_94;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_94;
    v28 = &EventPnpRequestComplete;
LABEL_93:
    LODWORD(v49) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v25, v28, &v63, a2, v49);
    goto LABEL_94;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_94;
  v29 = *(_QWORD *)(v26 + 8);
  v30 = 0LL;
  v56 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( *(_BYTE *)(v29 + 2) != 40 )
  {
    v43 = *(_BYTE *)(v29 + 72);
    v30 = *(_BYTE **)(v29 + 32);
    v31 = *(_BYTE *)(v29 + 11);
    v42 = *(_BYTE *)(v29 + 4);
    if ( *(_BYTE *)(v29 + 2) )
      goto LABEL_94;
LABEL_68:
    LOBYTE(v25) = v43 - 8;
    if ( (v25 & 0x5D) != 0 )
      goto LABEL_94;
    v44 = *(_BYTE *)(v29 + 3);
    if ( v44 == 1 || !v30 || !v31 )
      goto LABEL_87;
    v45 = *v30 & 0x7F;
    if ( v45 == 114 || v45 == 115 )
    {
      v25 = (unsigned __int64)&v30[v31];
      LOBYTE(v29) = 0;
      if ( (unsigned __int64)(v30 + 8) > v25 )
        goto LABEL_85;
      v33 = v30[2];
      v32 = v30[1] & 0xF;
      v34 = v30[3];
    }
    else
    {
      v25 = (unsigned __int64)&v30[v31];
      LOBYTE(v29) = 0;
      if ( (unsigned __int64)(v30 + 8) > v25 )
        goto LABEL_85;
      v46 = v30 + 13;
      v32 = v30[2] & 0xF;
      v47 = v31;
      if ( (unsigned int)(unsigned __int8)v30[7] + 8 <= v31 )
        v47 = (unsigned __int8)v30[7] + 8;
      v25 = (unsigned __int64)&v30[v47];
      if ( (unsigned __int64)v46 <= v25 )
        v33 = v30[12];
      if ( (unsigned __int64)(v30 + 14) > v25 )
        v34 = 0;
      else
        v34 = *v46;
    }
    v29 = 1LL;
LABEL_85:
    if ( (_BYTE)v29 )
      v35 = 1;
LABEL_87:
    if ( byte_140173441 < 0 )
    {
      if ( !v35 )
      {
        v34 = 0;
        v33 = 0;
        v32 = 0;
      }
      LOBYTE(v54) = v34;
      LOBYTE(v53) = v33;
      LOBYTE(v52) = v32;
      LOBYTE(v51) = v42;
      LOBYTE(v50) = v44;
      LODWORD(v49) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v25, v29, &v63, a2, v49, v50, v51, v52, v53, v54, a2);
    }
    goto LABEL_94;
  }
  v36 = 0LL;
  v55 = 0;
  if ( !*(_DWORD *)(v29 + 20) )
  {
    v37 = *(_DWORD *)(v29 + 56);
    v38 = 0LL;
    v57[0] = 0;
    v58[0] = v37;
    if ( v37 )
    {
      do
      {
        v25 = *(unsigned int *)(v29 + 4 * v38 + 120);
        if ( (unsigned int)v25 >= 0x80 )
        {
          v39 = *(unsigned int *)(v29 + 16);
          if ( (unsigned int)v25 < (unsigned int)v39 )
          {
            v40 = (unsigned int)v25;
            v41 = *(_DWORD *)(v25 + v29) - 64;
            if ( v41 )
            {
              v25 = (unsigned int)(v41 - 1);
              if ( (_DWORD)v25 )
              {
                if ( (_DWORD)v25 == 1 )
                {
                  v25 = v40 + 40;
                  if ( v40 + 40 <= v39 )
                  {
                    if ( *(_DWORD *)(v40 + v29 + 12) )
                      v36 = (char *)(v40 + v29 + 32);
                    v30 = *(_BYTE **)(v40 + v29 + 24);
LABEL_53:
                    v42 = *(_BYTE *)(v40 + v29 + 8);
                    v31 = *(_BYTE *)(v40 + v29 + 9);
                    goto LABEL_62;
                  }
                }
              }
              else
              {
                v25 = v40 + 56;
                if ( v40 + 56 <= v39 )
                {
                  v55 = 1;
                  if ( *(_BYTE *)(v40 + v29 + 10) )
                    v36 = (char *)(v40 + v29 + 24);
                  v30 = *(_BYTE **)(v40 + v29 + 16);
                  v31 = *(_BYTE *)(v40 + v29 + 9);
                  v56 = *(_BYTE *)(v40 + v29 + 8);
                }
              }
            }
            else
            {
              v25 = v40 + 40;
              if ( v40 + 40 <= v39 )
              {
                if ( *(_BYTE *)(v40 + v29 + 10) )
                  v36 = (char *)(v40 + v29 + 24);
                v30 = *(_BYTE **)(v40 + v29 + 16);
                goto LABEL_53;
              }
            }
            if ( v55 )
              break;
          }
        }
        v38 = (unsigned int)(v57[0] + 1);
        v57[0] = v38;
      }
      while ( (unsigned int)v38 < v58[0] );
      v42 = v56;
LABEL_62:
      if ( v36 )
      {
        v43 = *v36;
        v35 = 0;
        goto LABEL_68;
      }
    }
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)TcgProperties;
}
