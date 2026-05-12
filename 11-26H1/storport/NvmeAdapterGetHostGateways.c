/*
 * XREFs of NvmeAdapterGetHostGateways @ 0x14019B70C
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D8F28 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetHostGateways(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  int v3; // edi
  IRP *v4; // rsi
  int v6; // eax
  _IRP *MasterIrp; // r15
  __int64 v8; // rbx
  unsigned __int16 Size; // cx
  __int64 v10; // rax
  _MDL **p_MdlAddress; // rbx
  _QWORD *v12; // r12
  unsigned __int64 v13; // r14
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int64 v18; // rax
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
  char v25; // r13
  _BYTE *v26; // r9
  unsigned __int8 v27; // bp
  char v28; // r10
  char v29; // bl
  char v30; // r11
  char v31; // r14
  char *v32; // r14
  unsigned int v33; // r12d
  unsigned __int64 v34; // r15
  __int64 v35; // r8
  int v36; // ecx
  char v37; // cl
  char v38; // al
  char v39; // r8
  char *v40; // r11
  unsigned int v41; // eax
  int Status; // [rsp+20h] [rbp-A8h]
  char v44; // [rsp+60h] [rbp-68h]
  unsigned int v45; // [rsp+64h] [rbp-64h]
  unsigned int v47; // [rsp+68h] [rbp-60h]
  GUID v48; // [rsp+70h] [rbp-58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  a2->IoStatus.Information = 0LL;
  v4 = a2;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 608) )
  {
    if ( CurrentStackLocation->Parameters.Read.Length >= 8 )
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      memset_0(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
      MasterIrp->Type = 1;
      v8 = *(_QWORD *)(a1 + 608);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v8 + 24), 1u);
      Size = 320 * *(_WORD *)(*(_QWORD *)(a1 + 608) + 16LL) + 8;
      MasterIrp->Size = Size;
      if ( CurrentStackLocation->Parameters.Read.Length < Size )
      {
        v18 = 8LL;
      }
      else
      {
        v10 = *(_QWORD *)(a1 + 608);
        p_MdlAddress = &MasterIrp->MdlAddress;
        v12 = *(_QWORD **)v10;
        if ( *(_QWORD *)v10 != v10 )
        {
          do
          {
            v13 = (unsigned __int64)(v12 - 3);
            if ( (int)NvmeAdapterHostGatewayAcquireRundown((__int64)(v12 - 3)) >= 0 )
            {
              *(_DWORD *)p_MdlAddress = 20971521;
              v14 = (_OWORD *)(v13 + 72);
              v15 = 2LL;
              p_MdlAddress[1] = (_MDL *)(v13 ^ a1);
              *((_DWORD *)p_MdlAddress + 5) = *(_DWORD *)(v13 + 4);
              *((_DWORD *)p_MdlAddress + 6) = *(_DWORD *)(v13 + 8);
              v16 = (_OWORD *)((char *)p_MdlAddress + 28);
              do
              {
                *v16 = *v14;
                v16[1] = v14[1];
                v16[2] = v14[2];
                v16[3] = v14[3];
                v16[4] = v14[4];
                v16[5] = v14[5];
                v16[6] = v14[6];
                v16 += 8;
                v17 = v14[7];
                v14 += 8;
                *(v16 - 1) = v17;
                --v15;
              }
              while ( v15 );
              *(_OWORD *)((char *)p_MdlAddress + 284) = *(_OWORD *)(v13 + 328);
              *(_OWORD *)((char *)p_MdlAddress + 300) = *(_OWORD *)(v13 + 344);
              ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v13 + 56));
              ++*(_DWORD *)(&MasterIrp->Size + 1);
              p_MdlAddress += 40;
            }
            v12 = (_QWORD *)*v12;
            v10 = *(_QWORD *)(a1 + 608);
          }
          while ( v12 != (_QWORD *)v10 );
          Size = MasterIrp->Size;
          v4 = a2;
        }
        if ( *(_DWORD *)(&MasterIrp->Size + 1) < *(_DWORD *)(v10 + 16) )
        {
          Size = 320 * *(&MasterIrp->Size + 1) + 8;
          MasterIrp->Size = Size;
        }
        v18 = Size;
      }
      v4->IoStatus.Information = v18;
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 608) + 24LL));
      KeLeaveCriticalRegion();
      v6 = 0;
    }
    else
    {
      v6 = -1073741789;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  v45 = v6;
  v19 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&v4->Tail.CompletionKey + 21) = -84;
  v4->IoStatus.Status = v6;
  if ( v19 )
    goto LABEL_85;
  v48 = 0LL;
  IoGetActivityIdIrp(v4, &v48);
  v21 = (__int64)v4->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)v21 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_85;
    Status = v4->IoStatus.Status;
    v23 = &EventNonReadWriteRequestComplete;
    goto LABEL_84;
  }
  if ( *(_BYTE *)v21 != 15 )
  {
    if ( *(_BYTE *)v21 != 27 )
      goto LABEL_85;
    if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)v4->IoStatus.Information;
        if ( Information )
          v3 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(v20, v21, &v48, v4, v3, v4->IoStatus.Status);
      }
      goto LABEL_85;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_85;
    v23 = &EventPnpRequestComplete;
    Status = v4->IoStatus.Status;
LABEL_84:
    McTemplateK0pd_EtwWriteTransfer(v20, v23, &v48, v4, Status);
    goto LABEL_85;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_85;
  v24 = *(_QWORD *)(v21 + 8);
  v25 = 0;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( *(_BYTE *)(v24 + 2) != 40 )
  {
    v37 = *(_BYTE *)(v24 + 72);
    v26 = *(_BYTE **)(v24 + 32);
    v27 = *(_BYTE *)(v24 + 11);
    v25 = *(_BYTE *)(v24 + 4);
    if ( *(_BYTE *)(v24 + 2) )
      goto LABEL_85;
LABEL_59:
    LOBYTE(v20) = v37 - 8;
    if ( (v20 & 0x5D) != 0 )
      goto LABEL_85;
    if ( *(_BYTE *)(v24 + 3) == 1 || !v26 || !v27 )
      goto LABEL_78;
    v38 = *v26 & 0x7F;
    if ( v38 == 114 || v38 == 115 )
    {
      v20 = (unsigned __int64)&v26[v27];
      v39 = 0;
      if ( (unsigned __int64)(v26 + 8) > v20 )
        goto LABEL_76;
      v29 = v26[2];
      v28 = v26[1] & 0xF;
      v30 = v26[3];
    }
    else
    {
      v20 = (unsigned __int64)&v26[v27];
      v39 = 0;
      if ( (unsigned __int64)(v26 + 8) > v20 )
        goto LABEL_76;
      v40 = v26 + 13;
      v28 = v26[2] & 0xF;
      v41 = v27;
      if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
        v41 = (unsigned __int8)v26[7] + 8;
      v20 = (unsigned __int64)&v26[v41];
      if ( (unsigned __int64)v40 <= v20 )
        v29 = v26[12];
      if ( (unsigned __int64)(v26 + 14) > v20 )
        v30 = 0;
      else
        v30 = *v40;
    }
    v39 = 1;
LABEL_76:
    if ( v39 )
      v31 = 1;
LABEL_78:
    if ( byte_140173441 < 0 )
    {
      if ( !v31 )
      {
        v30 = 0;
        v29 = 0;
        v28 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v20,
        v24,
        &v48,
        v4,
        v4->IoStatus.Status,
        *(_BYTE *)(v24 + 3),
        v25,
        v28,
        v29,
        v30,
        v4);
    }
    goto LABEL_85;
  }
  v32 = 0LL;
  v44 = 0;
  if ( *(_DWORD *)(v24 + 20) )
    goto LABEL_85;
  v33 = 0;
  v47 = *(_DWORD *)(v24 + 56);
  if ( !v47 )
    goto LABEL_85;
  while ( 1 )
  {
    v20 = *(unsigned int *)(v24 + 4LL * v33 + 120);
    if ( (unsigned int)v20 >= 0x80 )
    {
      v34 = *(unsigned int *)(v24 + 16);
      if ( (unsigned int)v20 < (unsigned int)v34 )
        break;
    }
LABEL_50:
    if ( ++v33 >= v47 )
      goto LABEL_56;
  }
  v35 = (unsigned int)v20;
  v36 = *(_DWORD *)(v20 + v24) - 64;
  if ( v36 )
  {
    v20 = (unsigned int)(v36 - 1);
    if ( (_DWORD)v20 )
    {
      if ( (_DWORD)v20 == 1 )
      {
        v20 = v35 + 40;
        if ( v35 + 40 <= v34 )
        {
          if ( *(_DWORD *)(v35 + v24 + 12) )
            v32 = (char *)(v35 + v24 + 32);
          v26 = *(_BYTE **)(v35 + v24 + 24);
          goto LABEL_55;
        }
      }
    }
    else
    {
      v20 = v35 + 56;
      if ( v35 + 56 <= v34 )
      {
        v44 = 1;
        if ( *(_BYTE *)(v35 + v24 + 10) )
          v32 = (char *)(v35 + v24 + 24);
        v25 = *(_BYTE *)(v35 + v24 + 8);
        v26 = *(_BYTE **)(v35 + v24 + 16);
        v27 = *(_BYTE *)(v35 + v24 + 9);
      }
    }
    goto LABEL_49;
  }
  v20 = v35 + 40;
  if ( v35 + 40 > v34 )
  {
LABEL_49:
    if ( v44 )
      goto LABEL_56;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(v35 + v24 + 10) )
    v32 = (char *)(v35 + v24 + 24);
  v26 = *(_BYTE **)(v35 + v24 + 16);
LABEL_55:
  v27 = *(_BYTE *)(v35 + v24 + 9);
  v25 = *(_BYTE *)(v35 + v24 + 8);
LABEL_56:
  if ( v32 )
  {
    v37 = *v32;
    v31 = 0;
    goto LABEL_59;
  }
LABEL_85:
  IofCompleteRequest(v4, 0);
  return v45;
}
