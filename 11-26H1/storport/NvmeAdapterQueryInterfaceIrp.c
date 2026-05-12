/*
 * XREFs of NvmeAdapterQueryInterfaceIrp @ 0x1400DB824
 * Callers:
 *     NvmeAdapterPnpIrp @ 0x1400DA0D8 (NvmeAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     PortQueryInterfaceFdoInfo @ 0x1401B1888 (PortQueryInterfaceFdoInfo.c)
 *     PortQueryInterfaceFdoQdr @ 0x1401B18C8 (PortQueryInterfaceFdoQdr.c)
 */

__int64 __fastcall NvmeAdapterQueryInterfaceIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ebx
  GUID *v6; // rcx
  GUID *v7; // rcx
  GUID *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r14d
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  int InterfaceFdoInfo; // eax
  __int64 v17; // rcx
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  _BYTE *v20; // r9
  unsigned __int8 v21; // r15
  char v22; // r11
  char v23; // bp
  char v24; // r10
  char v25; // r12
  char *v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // r8
  int v30; // ecx
  char v31; // r13
  char v32; // cl
  char v33; // al
  char v34; // r8
  char *v35; // r10
  unsigned int v36; // eax
  char v38; // [rsp+60h] [rbp-78h]
  char v39; // [rsp+61h] [rbp-77h]
  int v40; // [rsp+64h] [rbp-74h]
  unsigned int v41; // [rsp+68h] [rbp-70h]
  GUID v42; // [rsp+70h] [rbp-68h] BYREF
  GUID v43; // [rsp+80h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v43 = 0LL;
  v5 = 0;
  v6 = *(GUID **)(v2 + 8);
  if ( v6 == &GUID_STORAGE_QUERY_FDO_INFO || RtlCompareMemory(v6, &GUID_STORAGE_QUERY_FDO_INFO, 0x10uLL) == 16 )
  {
    InterfaceFdoInfo = PortQueryInterfaceFdoInfo(v6, a2, *(_QWORD *)(a1 + 32));
  }
  else
  {
    v7 = *(GUID **)(v2 + 8);
    if ( v7 != &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS
      && RtlCompareMemory(v7, &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS, 0x10uLL) != 16 )
    {
      v8 = *(GUID **)(v2 + 8);
      if ( v8 == &GUID_THERMAL_COOLING_INTERFACE || RtlCompareMemory(v8, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16 )
      {
        v9 = *(_QWORD *)(a2 + 184);
        if ( *(_WORD *)(v9 + 16) >= 0x38u )
        {
          if ( *(_WORD *)(v9 + 18) )
          {
            v10 = *(_QWORD *)(v9 + 24);
            v11 = 0;
            *(_QWORD *)(v10 + 16) = RaidNullReference;
            *(_QWORD *)(v10 + 24) = RaidNullReference;
            *(_QWORD *)(v10 + 48) = NvmeAdapterPassiveCoolingCallback;
            *(_DWORD *)v10 = 65592;
            *(_QWORD *)(v10 + 8) = a1;
            *(_QWORD *)(v10 + 40) = 0LL;
            goto LABEL_10;
          }
        }
      }
      goto LABEL_23;
    }
    InterfaceFdoInfo = PortQueryInterfaceFdoQdr(v7, a2, *(_QWORD *)(a1 + 1016));
  }
  v11 = InterfaceFdoInfo;
  *(_DWORD *)(a2 + 48) = InterfaceFdoInfo;
  if ( InterfaceFdoInfo < 0 )
  {
LABEL_10:
    v12 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v11;
    if ( v12 )
      goto LABEL_83;
    v42 = 0LL;
    IoGetActivityIdIrp(a2, &v42);
    v14 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v14 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
        goto LABEL_82;
      }
LABEL_83:
      IofCompleteRequest((PIRP)a2, 0);
      return v11;
    }
    if ( *(_BYTE *)v14 != 15 )
    {
      if ( *(_BYTE *)v14 == 27 )
      {
        if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v15 = *(int **)(a2 + 56);
            if ( v15 )
              v5 = *v15;
            McTemplateK0pqd_EtwWriteTransfer(v13, v14, &v42, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_83;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v18 = &EventPnpRequestComplete;
LABEL_82:
          McTemplateK0pd_EtwWriteTransfer(v13, v18, &v42, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_83;
        }
      }
      goto LABEL_83;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_83;
    v19 = *(_QWORD *)(v14 + 8);
    v20 = 0LL;
    v38 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    if ( *(_BYTE *)(v19 + 2) == 40 )
    {
      v26 = 0LL;
      v39 = 0;
      if ( *(_DWORD *)(v19 + 20) )
        goto LABEL_83;
      v27 = 0LL;
      v40 = 0;
      v41 = *(_DWORD *)(v19 + 56);
      if ( !v41 )
        goto LABEL_83;
      do
      {
        v13 = *(unsigned int *)(v19 + 4 * v27 + 120);
        if ( (unsigned int)v13 >= 0x80 )
        {
          v28 = *(unsigned int *)(v19 + 16);
          if ( (unsigned int)v13 < (unsigned int)v28 )
          {
            v29 = (unsigned int)v13;
            v30 = *(_DWORD *)(v13 + v19) - 64;
            if ( v30 )
            {
              v13 = (unsigned int)(v30 - 1);
              if ( (_DWORD)v13 )
              {
                if ( (_DWORD)v13 == 1 )
                {
                  v13 = v29 + 40;
                  if ( v29 + 40 <= v28 )
                  {
                    if ( *(_DWORD *)(v29 + v19 + 12) )
                      v26 = (char *)(v29 + v19 + 32);
                    v20 = *(_BYTE **)(v29 + v19 + 24);
LABEL_42:
                    v31 = *(_BYTE *)(v29 + v19 + 8);
                    v21 = *(_BYTE *)(v29 + v19 + 9);
                    goto LABEL_51;
                  }
                }
              }
              else
              {
                v13 = v29 + 56;
                if ( v29 + 56 <= v28 )
                {
                  v39 = 1;
                  if ( *(_BYTE *)(v29 + v19 + 10) )
                    v26 = (char *)(v29 + v19 + 24);
                  v20 = *(_BYTE **)(v29 + v19 + 16);
                  v21 = *(_BYTE *)(v29 + v19 + 9);
                  v38 = *(_BYTE *)(v29 + v19 + 8);
                }
              }
            }
            else
            {
              v13 = v29 + 40;
              if ( v29 + 40 <= v28 )
              {
                if ( *(_BYTE *)(v29 + v19 + 10) )
                  v26 = (char *)(v29 + v19 + 24);
                v20 = *(_BYTE **)(v29 + v19 + 16);
                goto LABEL_42;
              }
            }
            if ( v39 )
              break;
          }
        }
        v27 = (unsigned int)(v40 + 1);
        v40 = v27;
      }
      while ( (unsigned int)v27 < v41 );
      v31 = v38;
LABEL_51:
      if ( !v26 )
        goto LABEL_83;
      v32 = *v26;
      v25 = 0;
    }
    else
    {
      v32 = *(_BYTE *)(v19 + 72);
      v20 = *(_BYTE **)(v19 + 32);
      v21 = *(_BYTE *)(v19 + 11);
      v31 = *(_BYTE *)(v19 + 4);
      if ( *(_BYTE *)(v19 + 2) )
        goto LABEL_83;
    }
    LOBYTE(v13) = v32 - 8;
    if ( (v13 & 0x5D) != 0 )
      goto LABEL_83;
    if ( *(_BYTE *)(v19 + 3) == 1 || !v20 || !v21 )
    {
LABEL_76:
      if ( byte_140173441 < 0 )
      {
        if ( !v25 )
        {
          v24 = 0;
          v23 = 0;
          v22 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v13,
          v19,
          &v42,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v19 + 3),
          v31,
          v22,
          v23,
          v24,
          a2);
      }
      goto LABEL_83;
    }
    v33 = *v20 & 0x7F;
    if ( v33 == 114 || v33 == 115 )
    {
      v13 = (unsigned __int64)&v20[v21];
      v34 = 0;
      if ( (unsigned __int64)(v20 + 8) > v13 )
        goto LABEL_74;
      v23 = v20[2];
      v22 = v20[1] & 0xF;
      v24 = v20[3];
    }
    else
    {
      v13 = (unsigned __int64)&v20[v21];
      v34 = 0;
      if ( (unsigned __int64)(v20 + 8) > v13 )
        goto LABEL_74;
      v35 = v20 + 13;
      v22 = v20[2] & 0xF;
      v36 = v21;
      if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
        v36 = (unsigned __int8)v20[7] + 8;
      v13 = (unsigned __int64)&v20[v36];
      if ( (unsigned __int64)v35 <= v13 )
        v23 = v20[12];
      if ( (unsigned __int64)(v20 + 14) > v13 )
        v24 = 0;
      else
        v24 = *v35;
    }
    v34 = 1;
LABEL_74:
    if ( v34 )
      v25 = 1;
    goto LABEL_76;
  }
LABEL_23:
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v43);
    if ( (byte_140173442 & 0x20) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v17, &EventPnpRequestComplete, &v43, a2, *(_DWORD *)(a2 + 48));
  }
  return (unsigned int)RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
}
