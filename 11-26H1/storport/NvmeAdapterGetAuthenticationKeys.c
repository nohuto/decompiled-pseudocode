/*
 * XREFs of NvmeAdapterGetAuthenticationKeys @ 0x14019A1EC
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     GetNvmeHostNQN @ 0x140075274 (GetNvmeHostNQN.c)
 *     PopulateNvmeAuthenticationKeyInfo @ 0x1400E2FCC (PopulateNvmeAuthenticationKeyInfo.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetAuthenticationKeys(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  int v3; // ebx
  _QWORD *v4; // rdi
  int v5; // r12d
  char v6; // r13
  unsigned int v7; // esi
  __int64 v8; // r14
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rax
  _OWORD *v12; // rax
  char *v13; // rcx
  __int128 v14; // xmm1
  unsigned int v15; // eax
  _DWORD *v16; // r14
  const char *v17; // r15
  int v18; // esi
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
  _BYTE *v25; // r9
  unsigned __int8 v26; // r15
  char v27; // r10
  char v28; // r14
  char v29; // r11
  char v30; // r12
  char *v31; // r12
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  __int64 v34; // r8
  int v35; // ecx
  char v36; // r13
  char v37; // cl
  char v38; // al
  char v39; // r8
  char *v40; // r11
  unsigned int v41; // eax
  char v43; // [rsp+68h] [rbp-A0h]
  char v44; // [rsp+69h] [rbp-9Fh]
  int NvmeHostNQN; // [rsp+6Ch] [rbp-9Ch]
  int v46; // [rsp+6Ch] [rbp-9Ch]
  int v47; // [rsp+70h] [rbp-98h]
  unsigned int v48; // [rsp+70h] [rbp-98h]
  unsigned int v49; // [rsp+74h] [rbp-94h]
  PVOID RestartKey; // [rsp+78h] [rbp-90h] BYREF
  GUID RestartKey_8; // [rsp+80h] [rbp-88h] BYREF
  char Str2[256]; // [rsp+98h] [rbp-70h] BYREF

  v2 = a2[23];
  v3 = 0;
  a2[7] = 0LL;
  v4 = a2;
  *(_QWORD *)&RestartKey_8.Data1 = a2;
  v5 = 0;
  v6 = 0;
  RestartKey = 0LL;
  NvmeHostNQN = 0;
  v7 = 0;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 608) )
  {
    v8 = a2[3];
    if ( v8
      && *(_DWORD *)(v2 + 16) >= 0x110u
      && *(_WORD *)v8 == 1
      && *(_WORD *)(v8 + 2) >= 0x110u
      && ((v9 = *(_DWORD *)(v8 + 4), v10 = 2LL, (v9 & 2) == 0) || *(_BYTE *)(v8 + 16))
      && (v11 = *(unsigned int *)(v8 + 8), (_DWORD)v11) )
    {
      if ( *(unsigned int *)(v2 + 8) < (unsigned __int64)(528 * v11 + 8) )
      {
        v7 = -1073741789;
        goto LABEL_29;
      }
      if ( (v9 & 1) != 0 )
      {
        v6 = 1;
        NvmeHostNQN = GetNvmeHostNQN(0, Str2);
        v7 = NvmeHostNQN;
        if ( NvmeHostNQN < 0 )
          goto LABEL_29;
      }
      else if ( (*(_DWORD *)(v8 + 4) & 2) != 0 )
      {
        v6 = 1;
        v12 = (_OWORD *)(v8 + 16);
        v13 = Str2;
        do
        {
          *(_OWORD *)v13 = *v12;
          *((_OWORD *)v13 + 1) = v12[1];
          *((_OWORD *)v13 + 2) = v12[2];
          *((_OWORD *)v13 + 3) = v12[3];
          *((_OWORD *)v13 + 4) = v12[4];
          *((_OWORD *)v13 + 5) = v12[5];
          *((_OWORD *)v13 + 6) = v12[6];
          v13 += 128;
          v14 = v12[7];
          v12 += 8;
          *((_OWORD *)v13 - 1) = v14;
          --v10;
        }
        while ( v10 );
      }
      v47 = *(_DWORD *)(v8 + 8);
      v15 = *(_DWORD *)(v8 + 12);
      v16 = (_DWORD *)v4[3];
      v49 = v15;
      memset_0(v16, 0, *(unsigned int *)(v2 + 8));
      *v16 = 524289;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)&WPP_MAIN_CB.DeviceQueue.32, 1u);
      v17 = (const char *)RtlEnumerateGenericTableWithoutSplaying(&NvmeAuthKeyTable, &RestartKey);
      if ( v17 )
      {
        v18 = v47;
        do
        {
          if ( (!v6 || !_strnicmp(v17 + 20, Str2, 0x100uLL)) && ++v5 > v49 )
          {
            PopulateNvmeAuthenticationKeyInfo((__int64)v17, (__int64)&v16[132 * (v5 - v49) - 130]);
            ++v16[1];
            *((_WORD *)v16 + 1) += 528;
            if ( !--v18 )
              break;
          }
          v17 = (const char *)RtlEnumerateGenericTableWithoutSplaying(&NvmeAuthKeyTable, &RestartKey);
        }
        while ( v17 );
        v4 = *(_QWORD **)&RestartKey_8.Data1;
        v7 = NvmeHostNQN;
      }
      ExReleaseResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceQueue.32);
      KeLeaveCriticalRegion();
      v4[7] = *((unsigned __int16 *)v16 + 1);
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else
  {
    v7 = -1073741637;
  }
LABEL_29:
  v19 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)v4 + 141) = -84;
  *((_DWORD *)v4 + 12) = v7;
  if ( v19 )
    goto LABEL_95;
  RestartKey_8 = 0LL;
  IoGetActivityIdIrp(v4, &RestartKey_8);
  v21 = v4[23];
  if ( *(_BYTE *)v21 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_95;
    v23 = &EventNonReadWriteRequestComplete;
    goto LABEL_94;
  }
  if ( *(_BYTE *)v21 != 15 )
  {
    if ( *(_BYTE *)v21 != 27 )
      goto LABEL_95;
    if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v22 = (int *)v4[7];
        if ( v22 )
          v3 = *v22;
        McTemplateK0pqd_EtwWriteTransfer(v20, v21, &RestartKey_8, v4, v3, *((_DWORD *)v4 + 12));
      }
      goto LABEL_95;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_95;
    v23 = &EventPnpRequestComplete;
LABEL_94:
    McTemplateK0pd_EtwWriteTransfer(v20, v23, &RestartKey_8, v4, *((_DWORD *)v4 + 12));
    goto LABEL_95;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_95;
  v24 = *(_QWORD *)(v21 + 8);
  v25 = 0LL;
  v43 = 0;
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
      goto LABEL_95;
LABEL_69:
    LOBYTE(v20) = v37 - 8;
    if ( (v20 & 0x5D) != 0 )
      goto LABEL_95;
    if ( *(_BYTE *)(v24 + 3) == 1 || !v25 || !v26 )
      goto LABEL_88;
    v38 = *v25 & 0x7F;
    if ( v38 == 114 || v38 == 115 )
    {
      v20 = (unsigned __int64)&v25[v26];
      v39 = 0;
      if ( (unsigned __int64)(v25 + 8) > v20 )
        goto LABEL_86;
      v28 = v25[2];
      v27 = v25[1] & 0xF;
      v29 = v25[3];
    }
    else
    {
      v20 = (unsigned __int64)&v25[v26];
      v39 = 0;
      if ( (unsigned __int64)(v25 + 8) > v20 )
        goto LABEL_86;
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
    v39 = 1;
LABEL_86:
    if ( v39 )
      v30 = 1;
LABEL_88:
    if ( byte_140173441 < 0 )
    {
      if ( !v30 )
      {
        v29 = 0;
        v28 = 0;
        v27 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v20,
        v24,
        &RestartKey_8,
        v4,
        *((_DWORD *)v4 + 12),
        *(_BYTE *)(v24 + 3),
        v36,
        v27,
        v28,
        v29,
        v4);
    }
    goto LABEL_95;
  }
  v31 = 0LL;
  v44 = 0;
  if ( !*(_DWORD *)(v24 + 20) )
  {
    v32 = 0LL;
    v46 = 0;
    v48 = *(_DWORD *)(v24 + 56);
    if ( v48 )
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
LABEL_54:
                    v36 = *(_BYTE *)(v34 + v24 + 8);
                    v26 = *(_BYTE *)(v34 + v24 + 9);
                    goto LABEL_63;
                  }
                }
              }
              else
              {
                v20 = v34 + 56;
                if ( v34 + 56 <= v33 )
                {
                  v44 = 1;
                  if ( *(_BYTE *)(v34 + v24 + 10) )
                    v31 = (char *)(v34 + v24 + 24);
                  v25 = *(_BYTE **)(v34 + v24 + 16);
                  v26 = *(_BYTE *)(v34 + v24 + 9);
                  v43 = *(_BYTE *)(v34 + v24 + 8);
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
                goto LABEL_54;
              }
            }
            if ( v44 )
              break;
          }
        }
        v32 = (unsigned int)(v46 + 1);
        v46 = v32;
      }
      while ( (unsigned int)v32 < v48 );
      v36 = v43;
LABEL_63:
      if ( v31 )
      {
        v37 = *v31;
        v30 = 0;
        goto LABEL_69;
      }
    }
  }
LABEL_95:
  IofCompleteRequest((PIRP)v4, 0);
  return v7;
}
