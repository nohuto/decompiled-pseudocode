/*
 * XREFs of NvmeAdapterAddAuthenticationKey @ 0x140196CE4
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     AddNvmeAuthKey @ 0x14007491C (AddNvmeAuthKey.c)
 *     GetNvmeHostNQN @ 0x140075274 (GetNvmeHostNQN.c)
 *     PopulateNvmeAuthenticationKeyInfo @ 0x1400E2FCC (PopulateNvmeAuthenticationKeyInfo.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterAddAuthenticationKey(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // edi
  __int64 v5; // rbx
  unsigned __int16 v6; // cx
  int NvmeHostNQN; // esi
  void *v8; // rbx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rdx
  _BYTE *v15; // r9
  unsigned __int8 v16; // r14
  char v17; // r11
  char v18; // bl
  char v19; // r10
  char v20; // r15
  char *v21; // r15
  unsigned int v22; // r13d
  unsigned __int64 v23; // r12
  __int64 v24; // r8
  int v25; // ecx
  char v26; // r12
  char v27; // cl
  char v28; // al
  char v29; // r8
  char *v30; // r10
  unsigned int v31; // eax
  void *Src; // [rsp+20h] [rbp-98h]
  __int64 v34; // [rsp+28h] [rbp-90h]
  char v35; // [rsp+60h] [rbp-58h]
  char v36; // [rsp+61h] [rbp-57h]
  __int64 v37; // [rsp+68h] [rbp-50h] BYREF
  GUID v38; // [rsp+70h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v37 = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 608) )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5
      && *(_DWORD *)(v2 + 16) >= 0x210u
      && *(_WORD *)v5 == 1
      && *(_WORD *)(v5 + 2) >= 0x210u
      && ((*(_DWORD *)(v5 + 4) & 1) == 0 || *(_BYTE *)(v5 + 16))
      && (v6 = *(_WORD *)(v5 + 10)) != 0
      && v6 <= 0x100u
      && *(_WORD *)(v5 + 8) <= 3u )
    {
      if ( *(_DWORD *)(v2 + 8) >= 0x210u )
      {
        if ( (*(_DWORD *)(v5 + 4) & 1) != 0 || (NvmeHostNQN = GetNvmeHostNQN(0, (char *)(v5 + 16)), NvmeHostNQN >= 0) )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)&WPP_MAIN_CB.DeviceQueue.32, 1u);
          NvmeHostNQN = AddNvmeAuthKey(
                          *(_BYTE *)(v5 + 4) & 1,
                          (_OWORD *)(v5 + 16),
                          *(_WORD *)(v5 + 8),
                          *(_WORD *)(v5 + 10),
                          (void *)(v5 + 272),
                          &v37);
          if ( NvmeHostNQN >= 0 )
          {
            v8 = *(void **)(a2 + 24);
            memset_0(v8, 0, *(unsigned int *)(v2 + 8));
            PopulateNvmeAuthenticationKeyInfo(v37, (__int64)v8);
            *(_QWORD *)(a2 + 56) = 528LL;
          }
          ExReleaseResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceQueue.32);
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        NvmeHostNQN = -1073741789;
      }
    }
    else
    {
      NvmeHostNQN = -1073741811;
    }
  }
  else
  {
    NvmeHostNQN = -1073741637;
  }
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = NvmeHostNQN;
  if ( !v9 )
  {
    v38 = 0LL;
    IoGetActivityIdIrp(a2, &v38);
    v11 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v11 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_87;
      v13 = &EventNonReadWriteRequestComplete;
      goto LABEL_86;
    }
    if ( *(_BYTE *)v11 != 15 )
    {
      if ( *(_BYTE *)v11 != 27 )
        goto LABEL_87;
      if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v12 = *(int **)(a2 + 56);
          if ( v12 )
            v3 = *v12;
          LODWORD(v34) = *(_DWORD *)(a2 + 48);
          LODWORD(Src) = v3;
          McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v38, a2, Src, v34);
        }
        goto LABEL_87;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_87;
      v13 = &EventPnpRequestComplete;
LABEL_86:
      LODWORD(Src) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v10, v13, &v38, a2, Src);
      goto LABEL_87;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_87;
    v14 = *(_QWORD *)(v11 + 8);
    v15 = 0LL;
    v35 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( *(_BYTE *)(v14 + 2) != 40 )
    {
      v27 = *(_BYTE *)(v14 + 72);
      v15 = *(_BYTE **)(v14 + 32);
      v16 = *(_BYTE *)(v14 + 11);
      v26 = *(_BYTE *)(v14 + 4);
      if ( *(_BYTE *)(v14 + 2) )
        goto LABEL_87;
LABEL_61:
      LOBYTE(v10) = v27 - 8;
      if ( (v10 & 0x5D) != 0 )
        goto LABEL_87;
      if ( *(_BYTE *)(v14 + 3) == 1 || !v15 || !v16 )
        goto LABEL_80;
      v28 = *v15 & 0x7F;
      if ( v28 == 114 || v28 == 115 )
      {
        v10 = (unsigned __int64)&v15[v16];
        v29 = 0;
        if ( (unsigned __int64)(v15 + 8) > v10 )
          goto LABEL_78;
        v18 = v15[2];
        v17 = v15[1] & 0xF;
        v19 = v15[3];
      }
      else
      {
        v10 = (unsigned __int64)&v15[v16];
        v29 = 0;
        if ( (unsigned __int64)(v15 + 8) > v10 )
          goto LABEL_78;
        v30 = v15 + 13;
        v17 = v15[2] & 0xF;
        v31 = v16;
        if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
          v31 = (unsigned __int8)v15[7] + 8;
        v10 = (unsigned __int64)&v15[v31];
        if ( (unsigned __int64)v30 <= v10 )
          v18 = v15[12];
        if ( (unsigned __int64)(v15 + 14) > v10 )
          v19 = 0;
        else
          v19 = *v30;
      }
      v29 = 1;
LABEL_78:
      if ( v29 )
        v20 = 1;
LABEL_80:
      if ( byte_140173441 < 0 )
      {
        if ( !v20 )
        {
          v19 = 0;
          v18 = 0;
          v17 = 0;
        }
        LOBYTE(v34) = *(_BYTE *)(v14 + 3);
        LODWORD(Src) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v38, a2, Src, v34, v26, v17, v18, v19, a2);
      }
      goto LABEL_87;
    }
    v21 = 0LL;
    v36 = 0;
    if ( !*(_DWORD *)(v14 + 20) )
    {
      v22 = 0;
      LODWORD(v37) = *(_DWORD *)(v14 + 56);
      if ( (_DWORD)v37 )
      {
        do
        {
          v10 = *(unsigned int *)(v14 + 4LL * v22 + 120);
          if ( (unsigned int)v10 >= 0x80 )
          {
            v23 = *(unsigned int *)(v14 + 16);
            if ( (unsigned int)v10 < (unsigned int)v23 )
            {
              v24 = (unsigned int)v10;
              v25 = *(_DWORD *)(v10 + v14) - 64;
              if ( v25 )
              {
                v10 = (unsigned int)(v25 - 1);
                if ( (_DWORD)v10 )
                {
                  if ( (_DWORD)v10 == 1 )
                  {
                    v10 = v24 + 40;
                    if ( v24 + 40 <= v23 )
                    {
                      if ( *(_DWORD *)(v24 + v14 + 12) )
                        v21 = (char *)(v24 + v14 + 32);
                      v15 = *(_BYTE **)(v24 + v14 + 24);
LABEL_46:
                      v26 = *(_BYTE *)(v24 + v14 + 8);
                      v16 = *(_BYTE *)(v24 + v14 + 9);
                      goto LABEL_55;
                    }
                  }
                }
                else
                {
                  v10 = v24 + 56;
                  if ( v24 + 56 <= v23 )
                  {
                    v36 = 1;
                    if ( *(_BYTE *)(v24 + v14 + 10) )
                      v21 = (char *)(v24 + v14 + 24);
                    v15 = *(_BYTE **)(v24 + v14 + 16);
                    v16 = *(_BYTE *)(v24 + v14 + 9);
                    v35 = *(_BYTE *)(v24 + v14 + 8);
                  }
                }
              }
              else
              {
                v10 = v24 + 40;
                if ( v24 + 40 <= v23 )
                {
                  if ( *(_BYTE *)(v24 + v14 + 10) )
                    v21 = (char *)(v24 + v14 + 24);
                  v15 = *(_BYTE **)(v24 + v14 + 16);
                  goto LABEL_46;
                }
              }
              if ( v36 )
                break;
            }
          }
          ++v22;
        }
        while ( v22 < (unsigned int)v37 );
        v26 = v35;
LABEL_55:
        if ( v21 )
        {
          v27 = *v21;
          v20 = 0;
          goto LABEL_61;
        }
      }
    }
  }
LABEL_87:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)NvmeHostNQN;
}
