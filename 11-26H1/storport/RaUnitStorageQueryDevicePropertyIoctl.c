/*
 * XREFs of RaUnitStorageQueryDevicePropertyIoctl @ 0x1401B2580
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401B2144 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1401B2700 (RaGetUnitStorageDeviceProperty.c)
 */

__int64 __fastcall RaUnitStorageQueryDevicePropertyIoctl(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _BYTE *v5; // rsi
  int v6; // ecx
  int UnitStorageDeviceProperty; // edi
  bool v8; // zf
  __int64 v9; // rdx
  int v10; // r11d
  __int64 v11; // rcx
  char v12; // al
  _DWORD *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int8 v16; // r8
  char v17; // r10
  char v18; // r12
  int v19; // eax
  char v20; // r13
  char v21; // bp
  unsigned __int8 *v22; // r9
  unsigned int v23; // r14d
  __int64 v24; // rcx
  unsigned __int64 v25; // r11
  __int64 v26; // r15
  int v27; // ecx
  int v28; // ecx
  unsigned __int64 v29; // rcx
  char v30; // r9
  char v31; // al
  unsigned int v32; // eax
  unsigned int v33; // [rsp+60h] [rbp-58h] BYREF
  int v34; // [rsp+64h] [rbp-54h]
  GUID v35; // [rsp+68h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0LL;
  v33 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v6 = *(_DWORD *)(v4 + 4);
  if ( v6 )
  {
    if ( v6 == 1 )
      UnitStorageDeviceProperty = 0;
    else
      UnitStorageDeviceProperty = -1073741637;
  }
  else
  {
    UnitStorageDeviceProperty = RaGetUnitStorageDeviceProperty(a1, v4, &v33);
    if ( UnitStorageDeviceProperty < 0 )
      *(_QWORD *)(a2 + 56) = 0LL;
    else
      *(_QWORD *)(a2 + 56) = v33;
  }
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = UnitStorageDeviceProperty;
  if ( v8 )
    goto LABEL_7;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v11 = *(_QWORD *)(a2 + 184);
  v12 = *(_BYTE *)v11;
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( v12 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v11, &EventNonReadWriteRequestComplete, &v35, a2, *(_DWORD *)(a2 + 48));
    }
    else if ( v12 == 27 )
    {
      if ( *(_BYTE *)(v11 + 1) != 7 || *(_DWORD *)(v11 + 8) )
      {
        if ( (byte_140173442 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v11, &EventPnpRequestComplete, &v35, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_140173442 & 0x40) != 0 )
      {
        v14 = *(_DWORD **)(a2 + 56);
        if ( v14 )
          LODWORD(v5) = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v11, v9, &v35, a2, (_DWORD)v5, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_7;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_7;
  v15 = *(_QWORD *)(v11 + 8);
  LOBYTE(v10) = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = *(unsigned __int8 *)(v15 + 2);
  v20 = 0;
  v21 = 0;
  v34 = v10;
  if ( (_BYTE)v19 != 40 )
  {
    v29 = *(unsigned __int8 *)(v15 + 72);
    v5 = *(_BYTE **)(v15 + 32);
    v16 = *(_BYTE *)(v15 + 11);
    v20 = *(_BYTE *)(v15 + 4);
    if ( v19 )
      goto LABEL_7;
LABEL_49:
    LOBYTE(v29) = v29 - 8;
    if ( (v29 & 0x5D) != 0 )
      goto LABEL_7;
    v30 = *(_BYTE *)(v15 + 3);
    if ( v30 == 1 || !v5 || !v16 )
      goto LABEL_67;
    v31 = *v5 & 0x7F;
    if ( v31 == 114 || v31 == 115 )
    {
      v29 = (unsigned __int64)&v5[v16];
      LOBYTE(v15) = 0;
      if ( (unsigned __int64)(v5 + 8) > v29 )
        goto LABEL_65;
      v18 = v5[2];
      v17 = v5[1] & 0xF;
      v21 = v5[3];
    }
    else
    {
      v29 = (unsigned __int64)&v5[v16];
      LOBYTE(v15) = 0;
      if ( (unsigned __int64)(v5 + 8) > v29 )
        goto LABEL_65;
      v17 = v5[2] & 0xF;
      v32 = v16;
      if ( (unsigned int)(unsigned __int8)v5[7] + 8 <= v16 )
        v32 = (unsigned __int8)v5[7] + 8;
      v29 = (unsigned __int64)(v5 + 13);
      v15 = (unsigned __int64)&v5[v32];
      if ( (unsigned __int64)(v5 + 13) <= v15 )
        v18 = v5[12];
      if ( (unsigned __int64)(v5 + 14) <= v15 )
        v21 = *(_BYTE *)v29;
    }
    LOBYTE(v15) = 1;
LABEL_65:
    if ( (_BYTE)v15 )
      LOBYTE(v10) = 1;
LABEL_67:
    if ( byte_140173441 < 0 )
    {
      if ( !(_BYTE)v10 )
      {
        v21 = 0;
        v18 = 0;
        v17 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v29, v15, &v35, a2, *(_DWORD *)(a2 + 48), v30, v20, v17, v18, v21, a2);
    }
    goto LABEL_7;
  }
  v22 = 0LL;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_7;
  v23 = 0;
  v33 = *(_DWORD *)(v15 + 56);
  if ( !v33 )
    goto LABEL_7;
  while ( 1 )
  {
    v24 = *(unsigned int *)(v15 + 4LL * v23 + 120);
    if ( (unsigned int)v24 < 0x80 )
      goto LABEL_46;
    v25 = *(unsigned int *)(v15 + 16);
    if ( (unsigned int)v24 >= (unsigned int)v25 )
      goto LABEL_46;
    v26 = (unsigned int)v24;
    v27 = *(_DWORD *)(v24 + v15);
    if ( v27 != 64 )
      break;
    if ( v26 + 40 <= v25 )
    {
      if ( !*(_BYTE *)(v26 + v15 + 10) )
        goto LABEL_39;
LABEL_38:
      v22 = (unsigned __int8 *)(v26 + v15 + 24);
LABEL_39:
      v5 = *(_BYTE **)(v26 + v15 + 16);
      goto LABEL_40;
    }
LABEL_46:
    if ( ++v23 >= v33 )
      goto LABEL_41;
  }
  v28 = v27 - 65;
  if ( !v28 )
  {
    if ( v26 + 56 <= v25 )
    {
      if ( *(_BYTE *)(v26 + v15 + 10) )
        goto LABEL_38;
      goto LABEL_39;
    }
    goto LABEL_46;
  }
  if ( v28 != 1 || v26 + 40 > v25 )
    goto LABEL_46;
  if ( *(_DWORD *)(v26 + v15 + 12) )
    v22 = (unsigned __int8 *)(v26 + v15 + 32);
  v5 = *(_BYTE **)(v26 + v15 + 24);
LABEL_40:
  v20 = *(_BYTE *)(v26 + v15 + 8);
  v16 = *(_BYTE *)(v26 + v15 + 9);
LABEL_41:
  if ( v22 )
  {
    v29 = *v22;
    LOBYTE(v10) = v34;
    goto LABEL_49;
  }
LABEL_7:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)UnitStorageDeviceProperty;
}
