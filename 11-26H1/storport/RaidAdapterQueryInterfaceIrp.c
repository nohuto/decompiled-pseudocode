/*
 * XREFs of RaidAdapterQueryInterfaceIrp @ 0x140064C48
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1400355D8 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterQueryCoolingInterface @ 0x14007F56C (RaidAdapterQueryCoolingInterface.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     PortQueryInterfaceFdoInfo @ 0x1401B1888 (PortQueryInterfaceFdoInfo.c)
 *     PortQueryInterfaceFdoQdr @ 0x1401B18C8 (PortQueryInterfaceFdoQdr.c)
 */

__int64 __fastcall RaidAdapterQueryInterfaceIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ebx
  GUID *v6; // rcx
  GUID *v7; // rcx
  GUID *v8; // rcx
  int CoolingInterface; // esi
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  int InterfaceFdoInfo; // eax
  __int64 v15; // rcx
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  _BYTE *v18; // r9
  unsigned __int8 v19; // r14
  char v20; // r11
  char v21; // bp
  char v22; // r10
  char v23; // r15
  char *v24; // r15
  unsigned int v25; // r13d
  unsigned __int64 v26; // r12
  __int64 v27; // r8
  int v28; // ecx
  char v29; // r12
  char v30; // cl
  char v31; // al
  char v32; // r8
  char *v33; // r10
  unsigned int v34; // eax
  char v36; // [rsp+60h] [rbp-58h]
  char v37; // [rsp+61h] [rbp-57h]
  unsigned int v38; // [rsp+64h] [rbp-54h]
  GUID v39; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  v6 = *(GUID **)(v2 + 8);
  if ( v6 == &GUID_STORAGE_QUERY_FDO_INFO || RtlCompareMemory(v6, &GUID_STORAGE_QUERY_FDO_INFO, 0x10uLL) == 16 )
  {
    InterfaceFdoInfo = PortQueryInterfaceFdoInfo(v6, a2, *(_QWORD *)(a1 + 32));
LABEL_20:
    CoolingInterface = InterfaceFdoInfo;
    *(_DWORD *)(a2 + 48) = InterfaceFdoInfo;
    if ( InterfaceFdoInfo < 0 )
      goto LABEL_8;
    goto LABEL_21;
  }
  v7 = *(GUID **)(v2 + 8);
  if ( v7 == &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS
    || RtlCompareMemory(v7, &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS, 0x10uLL) == 16 )
  {
    InterfaceFdoInfo = PortQueryInterfaceFdoQdr(v7, a2, *(_QWORD *)(a1 + 4440));
    goto LABEL_20;
  }
  v8 = *(GUID **)(v2 + 8);
  if ( v8 == &GUID_THERMAL_COOLING_INTERFACE || RtlCompareMemory(v8, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16 )
  {
    CoolingInterface = RaidAdapterQueryCoolingInterface(a1, a2);
    if ( CoolingInterface >= 0 )
    {
LABEL_8:
      v10 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = CoolingInterface;
      if ( v10 )
        goto LABEL_81;
      v39 = 0LL;
      IoGetActivityIdIrp(a2, &v39);
      v12 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v12 == 14 )
      {
        if ( (byte_140173442 & 8) != 0 )
        {
          v16 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
          goto LABEL_80;
        }
LABEL_81:
        IofCompleteRequest((PIRP)a2, 0);
        return (unsigned int)CoolingInterface;
      }
      if ( *(_BYTE *)v12 != 15 )
      {
        if ( *(_BYTE *)v12 == 27 )
        {
          if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
          {
            if ( (byte_140173442 & 0x40) != 0 )
            {
              v13 = *(int **)(a2 + 56);
              if ( v13 )
                v5 = *v13;
              McTemplateK0pqd_EtwWriteTransfer(v11, v12, &v39, a2, v5, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_81;
          }
          if ( (byte_140173442 & 0x20) != 0 )
          {
            v16 = &EventPnpRequestComplete;
LABEL_80:
            McTemplateK0pd_EtwWriteTransfer(v11, v16, &v39, a2, *(_DWORD *)(a2 + 48));
            goto LABEL_81;
          }
        }
        goto LABEL_81;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_81;
      v17 = *(_QWORD *)(v12 + 8);
      v18 = 0LL;
      v36 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      if ( *(_BYTE *)(v17 + 2) == 40 )
      {
        v24 = 0LL;
        v37 = 0;
        if ( *(_DWORD *)(v17 + 20) )
          goto LABEL_81;
        v25 = 0;
        v38 = *(_DWORD *)(v17 + 56);
        if ( !v38 )
          goto LABEL_81;
        do
        {
          v11 = *(unsigned int *)(v17 + 4LL * v25 + 120);
          if ( (unsigned int)v11 >= 0x80 )
          {
            v26 = *(unsigned int *)(v17 + 16);
            if ( (unsigned int)v11 < (unsigned int)v26 )
            {
              v27 = (unsigned int)v11;
              v28 = *(_DWORD *)(v11 + v17) - 64;
              if ( v28 )
              {
                v11 = (unsigned int)(v28 - 1);
                if ( (_DWORD)v11 )
                {
                  if ( (_DWORD)v11 == 1 )
                  {
                    v11 = v27 + 40;
                    if ( v27 + 40 <= v26 )
                    {
                      if ( *(_DWORD *)(v27 + v17 + 12) )
                        v24 = (char *)(v27 + v17 + 32);
                      v18 = *(_BYTE **)(v27 + v17 + 24);
LABEL_40:
                      v29 = *(_BYTE *)(v27 + v17 + 8);
                      v19 = *(_BYTE *)(v27 + v17 + 9);
                      goto LABEL_49;
                    }
                  }
                }
                else
                {
                  v11 = v27 + 56;
                  if ( v27 + 56 <= v26 )
                  {
                    v37 = 1;
                    if ( *(_BYTE *)(v27 + v17 + 10) )
                      v24 = (char *)(v27 + v17 + 24);
                    v18 = *(_BYTE **)(v27 + v17 + 16);
                    v19 = *(_BYTE *)(v27 + v17 + 9);
                    v36 = *(_BYTE *)(v27 + v17 + 8);
                  }
                }
              }
              else
              {
                v11 = v27 + 40;
                if ( v27 + 40 <= v26 )
                {
                  if ( *(_BYTE *)(v27 + v17 + 10) )
                    v24 = (char *)(v27 + v17 + 24);
                  v18 = *(_BYTE **)(v27 + v17 + 16);
                  goto LABEL_40;
                }
              }
              if ( v37 )
                break;
            }
          }
          ++v25;
        }
        while ( v25 < v38 );
        v29 = v36;
LABEL_49:
        if ( !v24 )
          goto LABEL_81;
        v30 = *v24;
        v23 = 0;
      }
      else
      {
        v30 = *(_BYTE *)(v17 + 72);
        v18 = *(_BYTE **)(v17 + 32);
        v19 = *(_BYTE *)(v17 + 11);
        v29 = *(_BYTE *)(v17 + 4);
        if ( *(_BYTE *)(v17 + 2) )
          goto LABEL_81;
      }
      LOBYTE(v11) = v30 - 8;
      if ( (v11 & 0x5D) != 0 )
        goto LABEL_81;
      if ( *(_BYTE *)(v17 + 3) == 1 || !v18 || !v19 )
      {
LABEL_74:
        if ( byte_140173441 < 0 )
        {
          if ( !v23 )
          {
            v22 = 0;
            v21 = 0;
            v20 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v11,
            v17,
            &v39,
            a2,
            *(_DWORD *)(a2 + 48),
            *(_BYTE *)(v17 + 3),
            v29,
            v20,
            v21,
            v22,
            a2);
        }
        goto LABEL_81;
      }
      v31 = *v18 & 0x7F;
      if ( v31 == 114 || v31 == 115 )
      {
        v11 = (unsigned __int64)&v18[v19];
        v32 = 0;
        if ( (unsigned __int64)(v18 + 8) > v11 )
          goto LABEL_72;
        v21 = v18[2];
        v20 = v18[1] & 0xF;
        v22 = v18[3];
      }
      else
      {
        v11 = (unsigned __int64)&v18[v19];
        v32 = 0;
        if ( (unsigned __int64)(v18 + 8) > v11 )
          goto LABEL_72;
        v33 = v18 + 13;
        v20 = v18[2] & 0xF;
        v34 = v19;
        if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
          v34 = (unsigned __int8)v18[7] + 8;
        v11 = (unsigned __int64)&v18[v34];
        if ( (unsigned __int64)v33 <= v11 )
          v21 = v18[12];
        if ( (unsigned __int64)(v18 + 14) > v11 )
          v22 = 0;
        else
          v22 = *v33;
      }
      v32 = 1;
LABEL_72:
      if ( v32 )
        v23 = 1;
      goto LABEL_74;
    }
  }
LABEL_21:
  if ( StorEtwLoggingEnabled )
  {
    v39 = 0LL;
    IoGetActivityIdIrp(a2, &v39);
    if ( (byte_140173442 & 0x20) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v15, &EventPnpRequestComplete, &v39, a2, *(_DWORD *)(a2 + 48));
  }
  return (unsigned int)RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
}
