/*
 * XREFs of RaidAdapterStorageTcgEnumerateLockingObjects @ 0x140084420
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
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

__int64 __fastcall RaidAdapterStorageTcgEnumerateLockingObjects(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // edi
  __int64 v4; // rax
  void *v7; // r13
  char v8; // cl
  int TcgProperties; // r12d
  __int64 v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // r14
  __int64 v13; // rax
  int TcgLockingObjects; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  const wchar_t *v17; // rcx
  bool v18; // zf
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int *v21; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 v23; // rdx
  _BYTE *v24; // r9
  unsigned __int8 v25; // r14
  char v26; // r11
  char v27; // bl
  char v28; // r10
  char v29; // r15
  char *v30; // r15
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  __int64 v33; // r8
  int v34; // ecx
  char v35; // r13
  char v36; // cl
  char v37; // r8
  char v38; // al
  char *v39; // r10
  unsigned int v40; // eax
  void *v42; // [rsp+20h] [rbp-130h]
  __int64 v43; // [rsp+28h] [rbp-128h]
  __int64 v44; // [rsp+30h] [rbp-120h]
  __int64 v45; // [rsp+38h] [rbp-118h]
  __int64 v46; // [rsp+40h] [rbp-110h]
  __int64 v47; // [rsp+48h] [rbp-108h]
  char v48; // [rsp+D0h] [rbp-80h]
  char v49; // [rsp+D1h] [rbp-7Fh]
  int v50; // [rsp+D4h] [rbp-7Ch]
  int v51[2]; // [rsp+D8h] [rbp-78h] BYREF
  int v52[2]; // [rsp+E0h] [rbp-70h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-68h]
  __int64 v54; // [rsp+F0h] [rbp-60h]
  void *v55; // [rsp+F8h] [rbp-58h]
  __int64 v56; // [rsp+100h] [rbp-50h]
  __int128 v57; // [rsp+108h] [rbp-48h] BYREF
  GUID v58; // [rsp+118h] [rbp-38h] BYREF
  __int128 v59; // [rsp+128h] [rbp-28h] BYREF
  _OWORD v60[2]; // [rsp+138h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)v51 = v4;
  *(_QWORD *)v52 = 0LL;
  v7 = 0LL;
  *(_QWORD *)&v58.Data1 = 0LL;
  v8 = 0;
  v56 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  v59 = 0LL;
  v57 = 0LL;
  memset(v60, 0, sizeof(v60));
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
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v57);
      if ( (byte_140173447 & 2) != 0 )
      {
        v17 = (const wchar_t *)&unk_140153274;
        if ( *(_QWORD *)(a1 + 5144) )
          v17 = *(const wchar_t **)(a1 + 5144);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          (__int64)v17,
          a1 + 5128,
          v16,
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v59,
          a1 + 5128,
          *((const wchar_t **)&v57 + 1),
          byte_14015304C,
          byte_14015304C,
          byte_14015304C,
          v17,
          "TcgEnumerateLockingObjects",
          (const char *)v60,
          TcgProperties,
          v58.Data1,
          v56,
          v54,
          v53,
          0);
      }
    }
    goto LABEL_28;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
  {
    TcgProperties = -2147483631;
    goto LABEL_23;
  }
  v10 = *(unsigned int *)(v2 + 12);
  v55 = *(void **)(a2 + 24);
  *(_QWORD *)&v58.Data1 = *(unsigned int *)(v2 + 8);
  v56 = v10;
  if ( (v58.Data1 & 1) != 0 )
  {
    v53 = *(_QWORD *)(v2 + 24);
    v11 = *(_QWORD *)(v2 + 16);
  }
  else
  {
    v11 = *(unsigned int *)(v2 + 16);
    v53 = 0LL;
  }
  v54 = v11;
  TcgProperties = RaidGetTcgProperties(a1, v60);
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 6128) + 53LL) )
    {
      TcgLockingObjects = RaidGetTcgLockingObjects(a1, v52, v60);
      v7 = *(void **)v52;
      TcgProperties = TcgLockingObjects;
      if ( TcgLockingObjects < 0 )
        goto LABEL_18;
      v15 = *(_QWORD *)(a1 + 6128);
      v51[0] = *(_DWORD *)(*(_QWORD *)v51 + 8LL);
      RaidFillTcgLockingObjects(v15, v52[0], v2, (int)v51, v55);
      v13 = (unsigned int)v51[0];
    }
    else
    {
      v12 = v55;
      memset_0(v55, 0, *(unsigned int *)(*(_QWORD *)v51 + 8LL));
      v13 = 16LL;
      *(_WORD *)v55 = 1;
      v12[1] = 16;
    }
    *(_QWORD *)(a2 + 56) = v13;
  }
LABEL_18:
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x43546152u);
  if ( TcgProperties < 0 )
  {
    v8 = 1;
    goto LABEL_23;
  }
LABEL_28:
  v18 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = TcgProperties;
  if ( v18 )
    goto LABEL_94;
  v58 = 0LL;
  IoGetActivityIdIrp(a2, &v58);
  v20 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v20 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_94;
    v22 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v20 != 15 )
  {
    if ( *(_BYTE *)v20 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v21 = *(int **)(a2 + 56);
        if ( v21 )
          v3 = *v21;
        LODWORD(v43) = *(_DWORD *)(a2 + 48);
        LODWORD(v42) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v19, v20, &v58, a2, v42, v43);
      }
      goto LABEL_94;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_94;
    v22 = &EventPnpRequestComplete;
LABEL_93:
    LODWORD(v42) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v19, v22, &v58, a2, v42);
    goto LABEL_94;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_94;
  v23 = *(_QWORD *)(v20 + 8);
  v24 = 0LL;
  v49 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( *(_BYTE *)(v23 + 2) != 40 )
  {
    v36 = *(_BYTE *)(v23 + 72);
    v24 = *(_BYTE **)(v23 + 32);
    v25 = *(_BYTE *)(v23 + 11);
    v35 = *(_BYTE *)(v23 + 4);
    if ( *(_BYTE *)(v23 + 2) )
      goto LABEL_94;
LABEL_68:
    LOBYTE(v19) = v36 - 8;
    if ( (v19 & 0x5D) != 0 )
      goto LABEL_94;
    v37 = *(_BYTE *)(v23 + 3);
    if ( v37 == 1 || !v24 || !v25 )
      goto LABEL_87;
    v38 = *v24 & 0x7F;
    if ( v38 == 114 || v38 == 115 )
    {
      v19 = (unsigned __int64)&v24[v25];
      LOBYTE(v23) = 0;
      if ( (unsigned __int64)(v24 + 8) > v19 )
        goto LABEL_85;
      v27 = v24[2];
      v26 = v24[1] & 0xF;
      v28 = v24[3];
    }
    else
    {
      v19 = (unsigned __int64)&v24[v25];
      LOBYTE(v23) = 0;
      if ( (unsigned __int64)(v24 + 8) > v19 )
        goto LABEL_85;
      v39 = v24 + 13;
      v26 = v24[2] & 0xF;
      v40 = v25;
      if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
        v40 = (unsigned __int8)v24[7] + 8;
      v19 = (unsigned __int64)&v24[v40];
      if ( (unsigned __int64)v39 <= v19 )
        v27 = v24[12];
      if ( (unsigned __int64)(v24 + 14) > v19 )
        v28 = 0;
      else
        v28 = *v39;
    }
    v23 = 1LL;
LABEL_85:
    if ( (_BYTE)v23 )
      v29 = 1;
LABEL_87:
    if ( byte_140173441 < 0 )
    {
      if ( !v29 )
      {
        v28 = 0;
        v27 = 0;
        v26 = 0;
      }
      LOBYTE(v47) = v28;
      LOBYTE(v46) = v27;
      LOBYTE(v45) = v26;
      LOBYTE(v44) = v35;
      LOBYTE(v43) = v37;
      LODWORD(v42) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v19, v23, &v58, a2, v42, v43, v44, v45, v46, v47, a2);
    }
    goto LABEL_94;
  }
  v30 = 0LL;
  v48 = 0;
  if ( !*(_DWORD *)(v23 + 20) )
  {
    v31 = 0LL;
    v50 = 0;
    v51[0] = *(_DWORD *)(v23 + 56);
    if ( v51[0] )
    {
      do
      {
        v19 = *(unsigned int *)(v23 + 4 * v31 + 120);
        if ( (unsigned int)v19 >= 0x80 )
        {
          v32 = *(unsigned int *)(v23 + 16);
          if ( (unsigned int)v19 < (unsigned int)v32 )
          {
            v33 = (unsigned int)v19;
            v34 = *(_DWORD *)(v19 + v23) - 64;
            if ( v34 )
            {
              v19 = (unsigned int)(v34 - 1);
              if ( (_DWORD)v19 )
              {
                if ( (_DWORD)v19 == 1 )
                {
                  v19 = v33 + 40;
                  if ( v33 + 40 <= v32 )
                  {
                    if ( *(_DWORD *)(v33 + v23 + 12) )
                      v30 = (char *)(v33 + v23 + 32);
                    v24 = *(_BYTE **)(v33 + v23 + 24);
LABEL_53:
                    v35 = *(_BYTE *)(v33 + v23 + 8);
                    v25 = *(_BYTE *)(v33 + v23 + 9);
                    goto LABEL_62;
                  }
                }
              }
              else
              {
                v19 = v33 + 56;
                if ( v33 + 56 <= v32 )
                {
                  v48 = 1;
                  if ( *(_BYTE *)(v33 + v23 + 10) )
                    v30 = (char *)(v33 + v23 + 24);
                  v24 = *(_BYTE **)(v33 + v23 + 16);
                  v25 = *(_BYTE *)(v33 + v23 + 9);
                  v49 = *(_BYTE *)(v33 + v23 + 8);
                }
              }
            }
            else
            {
              v19 = v33 + 40;
              if ( v33 + 40 <= v32 )
              {
                if ( *(_BYTE *)(v33 + v23 + 10) )
                  v30 = (char *)(v33 + v23 + 24);
                v24 = *(_BYTE **)(v33 + v23 + 16);
                goto LABEL_53;
              }
            }
            if ( v48 )
              break;
          }
        }
        v31 = (unsigned int)(v50 + 1);
        v50 = v31;
      }
      while ( (unsigned int)v31 < v51[0] );
      v35 = v49;
LABEL_62:
      if ( v30 )
      {
        v36 = *v30;
        v29 = 0;
        goto LABEL_68;
      }
    }
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)TcgProperties;
}
