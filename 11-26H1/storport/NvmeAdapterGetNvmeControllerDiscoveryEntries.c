/*
 * XREFs of NvmeAdapterGetNvmeControllerDiscoveryEntries @ 0x14019C654
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerAcquireRundown @ 0x1400C5B84 (NvmeControllerAcquireRundown.c)
 *     NvmeAdapterFindNvmeController @ 0x1400D55CC (NvmeAdapterFindNvmeController.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetNvmeControllerDiscoveryEntries(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rdx
  unsigned __int64 v5; // r12
  __int64 v6; // r15
  unsigned int v7; // ebp
  __int64 NvmeController; // rax
  __int64 v9; // r14
  int v10; // ebx
  unsigned __int64 v11; // r13
  _WORD *v12; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  int v15; // r9d
  __int64 *v16; // r8
  _WORD *v17; // rdx
  unsigned int v18; // edi
  __int128 *v19; // rcx
  __int64 v20; // r11
  _OWORD *v21; // rax
  __int128 v22; // xmm0
  _OWORD *v23; // rax
  __int64 v24; // r11
  __int128 *v25; // rcx
  __int128 v26; // xmm0
  bool v27; // zf
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  int *v30; // rax
  const EVENT_DESCRIPTOR *v31; // rdx
  __int64 v32; // rdx
  _BYTE *v33; // r9
  unsigned __int8 v34; // r14
  char v35; // r10
  char v36; // bl
  char v37; // r11
  char v38; // r15
  char *v39; // r15
  unsigned int v40; // r13d
  unsigned __int64 v41; // r12
  __int64 v42; // r8
  int v43; // ecx
  char v44; // r12
  char v45; // cl
  char v46; // al
  char v47; // r8
  char *v48; // r11
  unsigned int v49; // eax
  char v51; // [rsp+60h] [rbp-68h]
  char v52; // [rsp+61h] [rbp-67h]
  unsigned int v53; // [rsp+64h] [rbp-64h]
  int v54; // [rsp+68h] [rbp-60h]
  unsigned int v55; // [rsp+68h] [rbp-60h]
  __int64 v56; // [rsp+70h] [rbp-58h]
  GUID v57; // [rsp+78h] [rbp-50h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0LL;
  v56 = v4;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) == 0 || !*(_QWORD *)(a1 + 608) )
  {
    v7 = -1073741637;
    goto LABEL_47;
  }
  v6 = *(_QWORD *)(a2 + 24);
  if ( !v6 || *(_DWORD *)(v4 + 16) < 0x20u || *(_WORD *)v6 != 1 || *(_WORD *)(v6 + 2) < 0x20u )
  {
    v7 = -1073741811;
    goto LABEL_47;
  }
  v53 = 32;
  if ( *(_DWORD *)(v4 + 8) < 0x20u )
  {
    v7 = -1073741789;
    goto LABEL_47;
  }
  NvmeController = NvmeAdapterFindNvmeController(a1, *(_QWORD *)(v6 + 24) ^ a1, 0, 0LL);
  v9 = NvmeController;
  if ( !NvmeController )
  {
    v7 = -1073741275;
    goto LABEL_47;
  }
  v54 = NvmeControllerAcquireRundown(NvmeController);
  v7 = v54;
  if ( v54 >= 0 )
  {
    if ( (*(_BYTE *)(v9 + 136) & 8) != 0 )
    {
      v7 = -2147483631;
      goto LABEL_44;
    }
    if ( *(_DWORD *)(v9 + 572) != 2 )
    {
      v7 = -1073741637;
      goto LABEL_44;
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v9 + 1456), 1u);
    v10 = *(_DWORD *)(v6 + 4);
    *(_QWORD *)&v57.Data1 = *(_QWORD *)(v6 + 8);
    v11 = *(_QWORD *)(v6 + 16);
    v12 = *(_WORD **)(a2 + 24);
    memset_0(v12, 0, *(unsigned int *)(v56 + 8));
    if ( (v10 & 1) != 0 && *(_QWORD *)&v57.Data1 != *(_QWORD *)(v9 + 1560) )
    {
      v7 = -1073741536;
      goto LABEL_43;
    }
    *v12 = 1;
    *((_QWORD *)v12 + 2) = *(_QWORD *)(v9 + 1560);
    v13 = *(_QWORD *)(v9 + 1568);
    if ( v11 < v13 )
    {
      v14 = v13 - v11;
      *((_QWORD *)v12 + 3) = v14;
      if ( *(_DWORD *)(v56 + 8) >= 0x258u )
      {
        v16 = *(__int64 **)(v9 + 1576);
        v17 = v12 + 16;
        if ( v16 == (__int64 *)(v9 + 1576) )
          goto LABEL_42;
        v18 = 32;
        while ( 1 )
        {
          if ( v5 >= v11 )
          {
            if ( *(unsigned int *)(v56 + 8) < (unsigned __int64)v18 + 568 || v5 - v11 > 0x400 )
            {
LABEL_41:
              v7 = v54;
              v53 = v18;
              v2 = 0;
LABEL_42:
              v12[1] = v5 - v11;
              *((_DWORD *)v12 + 1) = v53;
              *(_QWORD *)(a2 + 56) = v53;
LABEL_43:
              ExReleaseResourceLite((PERESOURCE)(v9 + 1456));
              KeLeaveCriticalRegion();
LABEL_44:
              ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v9 + 552));
              goto LABEL_47;
            }
            *(_DWORD *)v17 = 37224449;
            if ( *((_WORD *)v16 + 11) == 0xFFFF )
              *((_DWORD *)v17 + 1) |= 1u;
            if ( *((_BYTE *)v16 + 18) == 2 )
              *((_DWORD *)v17 + 1) |= 2u;
            v19 = (__int128 *)(v16 + 34);
            *((_DWORD *)v17 + 2) = *((unsigned __int8 *)v16 + 16);
            v20 = 2LL;
            *((_DWORD *)v17 + 3) = *((unsigned __int8 *)v16 + 17);
            v17[8] = *((_WORD *)v16 + 10);
            v17[9] = *((_WORD *)v16 + 11);
            v17[10] = *((_WORD *)v16 + 12);
            *((_BYTE *)v17 + 22) = *((_BYTE *)v16 + 19);
            v21 = v17 + 12;
            do
            {
              v22 = *v19;
              v19 += 8;
              *v21 = v22;
              v21 += 8;
              *(v21 - 7) = *(v19 - 7);
              *(v21 - 6) = *(v19 - 6);
              *(v21 - 5) = *(v19 - 5);
              *(v21 - 4) = *(v19 - 4);
              *(v21 - 3) = *(v19 - 3);
              *(v21 - 2) = *(v19 - 2);
              *(v21 - 1) = *(v19 - 1);
              --v20;
            }
            while ( v20 );
            v23 = v17 + 140;
            v24 = 2LL;
            v25 = (__int128 *)(v16 + 66);
            do
            {
              v26 = *v25;
              v25 += 8;
              *v23 = v26;
              v23 += 8;
              *(v23 - 7) = *(v25 - 7);
              *(v23 - 6) = *(v25 - 6);
              *(v23 - 5) = *(v25 - 5);
              *(v23 - 4) = *(v25 - 4);
              *(v23 - 3) = *(v25 - 3);
              *(v23 - 2) = *(v25 - 2);
              *(v23 - 1) = *(v25 - 1);
              --v24;
            }
            while ( v24 );
            *(_OWORD *)(v17 + 268) = *((_OWORD *)v16 + 3);
            *(_OWORD *)(v17 + 276) = *((_OWORD *)v16 + 4);
            v17 += 284;
            v18 += 568;
          }
          v16 = (__int64 *)*v16;
          ++v5;
          if ( v16 == (__int64 *)(v9 + 1576) )
            goto LABEL_41;
        }
      }
      v15 = 1024;
      if ( v14 < 0x400 )
        v15 = v14;
      *((_DWORD *)v12 + 1) = 568 * v15;
    }
    else
    {
      *((_DWORD *)v12 + 1) = 32;
    }
    *(_QWORD *)(a2 + 56) = 32LL;
    v7 = 0;
    goto LABEL_43;
  }
LABEL_47:
  v27 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( !v27 )
  {
    v57 = 0LL;
    IoGetActivityIdIrp(a2, &v57);
    v29 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v29 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_113;
      v31 = &EventNonReadWriteRequestComplete;
      goto LABEL_112;
    }
    if ( *(_BYTE *)v29 != 15 )
    {
      if ( *(_BYTE *)v29 != 27 )
        goto LABEL_113;
      if ( *(_BYTE *)(v29 + 1) == 7 && !*(_DWORD *)(v29 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v30 = *(int **)(a2 + 56);
          if ( v30 )
            v2 = *v30;
          McTemplateK0pqd_EtwWriteTransfer(v28, v29, &v57, a2, v2, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_113;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_113;
      v31 = &EventPnpRequestComplete;
LABEL_112:
      McTemplateK0pd_EtwWriteTransfer(v28, v31, &v57, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_113;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_113;
    v32 = *(_QWORD *)(v29 + 8);
    v33 = 0LL;
    v51 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    if ( *(_BYTE *)(v32 + 2) != 40 )
    {
      v45 = *(_BYTE *)(v32 + 72);
      v33 = *(_BYTE **)(v32 + 32);
      v34 = *(_BYTE *)(v32 + 11);
      v44 = *(_BYTE *)(v32 + 4);
      if ( *(_BYTE *)(v32 + 2) )
        goto LABEL_113;
LABEL_87:
      LOBYTE(v28) = v45 - 8;
      if ( (v28 & 0x5D) != 0 )
        goto LABEL_113;
      if ( *(_BYTE *)(v32 + 3) == 1 || !v33 || !v34 )
        goto LABEL_106;
      v46 = *v33 & 0x7F;
      if ( v46 == 114 || v46 == 115 )
      {
        v28 = (unsigned __int64)&v33[v34];
        v47 = 0;
        if ( (unsigned __int64)(v33 + 8) > v28 )
          goto LABEL_104;
        v36 = v33[2];
        v35 = v33[1] & 0xF;
        v37 = v33[3];
      }
      else
      {
        v28 = (unsigned __int64)&v33[v34];
        v47 = 0;
        if ( (unsigned __int64)(v33 + 8) > v28 )
          goto LABEL_104;
        v48 = v33 + 13;
        v35 = v33[2] & 0xF;
        v49 = v34;
        if ( (unsigned int)(unsigned __int8)v33[7] + 8 <= v34 )
          v49 = (unsigned __int8)v33[7] + 8;
        v28 = (unsigned __int64)&v33[v49];
        if ( (unsigned __int64)v48 <= v28 )
          v36 = v33[12];
        if ( (unsigned __int64)(v33 + 14) > v28 )
          v37 = 0;
        else
          v37 = *v48;
      }
      v47 = 1;
LABEL_104:
      if ( v47 )
        v38 = 1;
LABEL_106:
      if ( byte_140173441 < 0 )
      {
        if ( !v38 )
        {
          v37 = 0;
          v36 = 0;
          v35 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v28,
          v32,
          &v57,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v32 + 3),
          v44,
          v35,
          v36,
          v37,
          a2);
      }
      goto LABEL_113;
    }
    v39 = 0LL;
    v52 = 0;
    if ( !*(_DWORD *)(v32 + 20) )
    {
      v40 = 0;
      v55 = *(_DWORD *)(v32 + 56);
      if ( v55 )
      {
        do
        {
          v28 = *(unsigned int *)(v32 + 4LL * v40 + 120);
          if ( (unsigned int)v28 >= 0x80 )
          {
            v41 = *(unsigned int *)(v32 + 16);
            if ( (unsigned int)v28 < (unsigned int)v41 )
            {
              v42 = (unsigned int)v28;
              v43 = *(_DWORD *)(v28 + v32) - 64;
              if ( v43 )
              {
                v28 = (unsigned int)(v43 - 1);
                if ( (_DWORD)v28 )
                {
                  if ( (_DWORD)v28 == 1 )
                  {
                    v28 = v42 + 40;
                    if ( v42 + 40 <= v41 )
                    {
                      if ( *(_DWORD *)(v42 + v32 + 12) )
                        v39 = (char *)(v42 + v32 + 32);
                      v33 = *(_BYTE **)(v42 + v32 + 24);
LABEL_72:
                      v44 = *(_BYTE *)(v42 + v32 + 8);
                      v34 = *(_BYTE *)(v42 + v32 + 9);
                      goto LABEL_81;
                    }
                  }
                }
                else
                {
                  v28 = v42 + 56;
                  if ( v42 + 56 <= v41 )
                  {
                    v52 = 1;
                    if ( *(_BYTE *)(v42 + v32 + 10) )
                      v39 = (char *)(v42 + v32 + 24);
                    v33 = *(_BYTE **)(v42 + v32 + 16);
                    v34 = *(_BYTE *)(v42 + v32 + 9);
                    v51 = *(_BYTE *)(v42 + v32 + 8);
                  }
                }
              }
              else
              {
                v28 = v42 + 40;
                if ( v42 + 40 <= v41 )
                {
                  if ( *(_BYTE *)(v42 + v32 + 10) )
                    v39 = (char *)(v42 + v32 + 24);
                  v33 = *(_BYTE **)(v42 + v32 + 16);
                  goto LABEL_72;
                }
              }
              if ( v52 )
                break;
            }
          }
          ++v40;
        }
        while ( v40 < v55 );
        v44 = v51;
LABEL_81:
        if ( v39 )
        {
          v45 = *v39;
          v38 = 0;
          goto LABEL_87;
        }
      }
    }
  }
LABEL_113:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
