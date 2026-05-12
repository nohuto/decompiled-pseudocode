/*
 * XREFs of NvmeAdapterCreateAuthenticationKey @ 0x140198C38
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     AddNvmeAuthKey @ 0x14007491C (AddNvmeAuthKey.c)
 *     CreateNvmeAuthKeyFromSecret @ 0x140074AF8 (CreateNvmeAuthKeyFromSecret.c)
 *     GetNvmeHostNQN @ 0x140075274 (GetNvmeHostNQN.c)
 *     GenerateRandomBytes @ 0x14008DE9C (GenerateRandomBytes.c)
 *     PopulateNvmeAuthenticationKeyInfo @ 0x1400E2FCC (PopulateNvmeAuthenticationKeyInfo.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterCreateAuthenticationKey(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // edi
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int i; // ecx
  int RandomBytes; // esi
  void *v9; // rbx
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  __int64 v15; // rdx
  _BYTE *v16; // r9
  unsigned __int8 v17; // r15
  char v18; // r11
  char v19; // bl
  char v20; // r10
  char v21; // r12
  char *v22; // r12
  int v23; // ecx
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  __int64 v26; // r8
  int v27; // ecx
  char v28; // r13
  char v29; // cl
  char v30; // al
  char v31; // r8
  char *v32; // r10
  unsigned int v33; // eax
  void *Src; // [rsp+28h] [rbp-E0h]
  PUCHAR v36; // [rsp+30h] [rbp-D8h]
  char v37; // [rsp+68h] [rbp-A0h]
  char v38; // [rsp+69h] [rbp-9Fh]
  unsigned __int16 v39; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v40; // [rsp+70h] [rbp-98h]
  __int64 v41; // [rsp+78h] [rbp-90h] BYREF
  GUID v42; // [rsp+80h] [rbp-88h] BYREF
  UCHAR v43[256]; // [rsp+98h] [rbp-70h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v39 = 0;
  v41 = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 608) )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( !v5
      || *(_DWORD *)(v2 + 16) < 0x210u
      || *(_WORD *)v5 != 1
      || *(_WORD *)(v5 + 2) < 0x210u
      || (*(_DWORD *)(v5 + 4) & 1) != 0 && !*(_BYTE *)(v5 + 16)
      || *(_WORD *)(v5 + 8) > 3u
      || (v6 = *(unsigned __int16 *)(v5 + 10), (unsigned __int16)v6 > 0x100u) )
    {
LABEL_25:
      RandomBytes = -1073741811;
      goto LABEL_27;
    }
    if ( (_WORD)v6 )
    {
      for ( i = 0; i < v6; ++i )
      {
        if ( *(_BYTE *)(i + v5 + 272) != 48 )
          goto LABEL_17;
      }
      goto LABEL_25;
    }
    *(_WORD *)(v5 + 10) = 32;
    RandomBytes = GenerateRandomBytes(0x20u, 32LL, (void *)(v5 + 272));
    if ( RandomBytes >= 0 )
    {
LABEL_17:
      if ( *(_DWORD *)(v2 + 8) >= 0x210u )
      {
        if ( (*(_DWORD *)(v5 + 4) & 1) != 0 || (RandomBytes = GetNvmeHostNQN(0, (char *)(v5 + 16)), RandomBytes >= 0) )
        {
          RandomBytes = CreateNvmeAuthKeyFromSecret(
                          (PUCHAR)(v5 + 16),
                          *(_WORD *)(v5 + 10),
                          (void *)(v5 + 272),
                          *(_WORD *)(v5 + 8),
                          &v39,
                          v43);
          if ( RandomBytes >= 0 )
          {
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)&WPP_MAIN_CB.DeviceQueue.32, 1u);
            RandomBytes = AddNvmeAuthKey(
                            *(_BYTE *)(v5 + 4) & 1,
                            (_OWORD *)(v5 + 16),
                            *(_WORD *)(v5 + 8),
                            v39,
                            v43,
                            &v41);
            if ( RandomBytes >= 0 )
            {
              v9 = *(void **)(a2 + 24);
              memset_0(v9, 0, *(unsigned int *)(v2 + 8));
              PopulateNvmeAuthenticationKeyInfo(v41, (__int64)v9);
              *(_QWORD *)(a2 + 56) = 528LL;
            }
            ExReleaseResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceQueue.32);
            KeLeaveCriticalRegion();
          }
        }
      }
      else
      {
        RandomBytes = -1073741789;
      }
    }
  }
  else
  {
    RandomBytes = -1073741637;
  }
LABEL_27:
  v10 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = RandomBytes;
  if ( v10 )
    goto LABEL_94;
  v42 = 0LL;
  IoGetActivityIdIrp(a2, &v42);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_94;
    v14 = &EventNonReadWriteRequestComplete;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v3 = *v13;
        LODWORD(v36) = *(_DWORD *)(a2 + 48);
        LODWORD(Src) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v11, v12, &v42, a2, Src, v36);
      }
      goto LABEL_94;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_94;
    v14 = &EventPnpRequestComplete;
LABEL_93:
    LODWORD(Src) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v11, v14, &v42, a2, Src);
    goto LABEL_94;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_94;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0LL;
  v37 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v15 + 72);
    v16 = *(_BYTE **)(v15 + 32);
    v17 = *(_BYTE *)(v15 + 11);
    v28 = *(_BYTE *)(v15 + 4);
    if ( *(_BYTE *)(v15 + 2) )
      goto LABEL_94;
LABEL_68:
    LOBYTE(v11) = v29 - 8;
    if ( (v11 & 0x5D) != 0 )
      goto LABEL_94;
    if ( *(_BYTE *)(v15 + 3) == 1 || !v16 || !v17 )
      goto LABEL_87;
    v30 = *v16 & 0x7F;
    if ( v30 == 114 || v30 == 115 )
    {
      v11 = (unsigned __int64)&v16[v17];
      v31 = 0;
      if ( (unsigned __int64)(v16 + 8) > v11 )
        goto LABEL_85;
      v19 = v16[2];
      v18 = v16[1] & 0xF;
      v20 = v16[3];
    }
    else
    {
      v11 = (unsigned __int64)&v16[v17];
      v31 = 0;
      if ( (unsigned __int64)(v16 + 8) > v11 )
        goto LABEL_85;
      v32 = v16 + 13;
      v18 = v16[2] & 0xF;
      v33 = v17;
      if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
        v33 = (unsigned __int8)v16[7] + 8;
      v11 = (unsigned __int64)&v16[v33];
      if ( (unsigned __int64)v32 <= v11 )
        v19 = v16[12];
      if ( (unsigned __int64)(v16 + 14) > v11 )
        v20 = 0;
      else
        v20 = *v32;
    }
    v31 = 1;
LABEL_85:
    if ( v31 )
      v21 = 1;
LABEL_87:
    if ( byte_140173441 < 0 )
    {
      if ( !v21 )
      {
        v20 = 0;
        v19 = 0;
        v18 = 0;
      }
      LOBYTE(v36) = *(_BYTE *)(v15 + 3);
      LODWORD(Src) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v11, v15, &v42, a2, Src, v36, v28, v18, v19, v20, a2);
    }
    goto LABEL_94;
  }
  v22 = 0LL;
  v38 = 0;
  if ( !*(_DWORD *)(v15 + 20) )
  {
    v23 = *(_DWORD *)(v15 + 56);
    v24 = 0LL;
    v40 = 0;
    LODWORD(v41) = v23;
    if ( v23 )
    {
      do
      {
        v11 = *(unsigned int *)(v15 + 4 * v24 + 120);
        if ( (unsigned int)v11 >= 0x80 )
        {
          v25 = *(unsigned int *)(v15 + 16);
          if ( (unsigned int)v11 < (unsigned int)v25 )
          {
            v26 = (unsigned int)v11;
            v27 = *(_DWORD *)(v11 + v15) - 64;
            if ( v27 )
            {
              v11 = (unsigned int)(v27 - 1);
              if ( (_DWORD)v11 )
              {
                if ( (_DWORD)v11 == 1 )
                {
                  v11 = v26 + 40;
                  if ( v26 + 40 <= v25 )
                  {
                    if ( *(_DWORD *)(v26 + v15 + 12) )
                      v22 = (char *)(v26 + v15 + 32);
                    v16 = *(_BYTE **)(v26 + v15 + 24);
LABEL_52:
                    v28 = *(_BYTE *)(v26 + v15 + 8);
                    v17 = *(_BYTE *)(v26 + v15 + 9);
                    goto LABEL_60;
                  }
                }
              }
              else
              {
                v11 = v26 + 56;
                if ( v26 + 56 <= v25 )
                {
                  v38 = 1;
                  if ( *(_BYTE *)(v26 + v15 + 10) )
                    v22 = (char *)(v26 + v15 + 24);
                  v16 = *(_BYTE **)(v26 + v15 + 16);
                  v17 = *(_BYTE *)(v26 + v15 + 9);
                  v37 = *(_BYTE *)(v26 + v15 + 8);
                }
              }
            }
            else
            {
              v11 = v26 + 40;
              if ( v26 + 40 <= v25 )
              {
                if ( *(_BYTE *)(v26 + v15 + 10) )
                  v22 = (char *)(v26 + v15 + 24);
                v16 = *(_BYTE **)(v26 + v15 + 16);
                goto LABEL_52;
              }
            }
            if ( v38 )
              break;
          }
        }
        v24 = (unsigned int)(v40 + 1);
        v40 = v24;
      }
      while ( (unsigned int)v24 < (unsigned int)v41 );
      v28 = v37;
LABEL_60:
      if ( v22 )
      {
        v29 = *v22;
        v21 = 0;
        goto LABEL_68;
      }
    }
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)RandomBytes;
}
