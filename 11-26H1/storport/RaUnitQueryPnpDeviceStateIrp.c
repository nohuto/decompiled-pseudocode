/*
 * XREFs of RaUnitQueryPnpDeviceStateIrp @ 0x1401B847C
 * Callers:
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 * Callees:
 *     RaUnitIsSMRDisabled @ 0x1400480C8 (RaUnitIsSMRDisabled.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitQueryPnpDeviceStateIrp(_DWORD *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  const EVENT_DESCRIPTOR *v10; // rdx
  int *v11; // rax
  char v12; // al
  char v13; // r8
  char *v14; // r10
  char v15; // r11
  unsigned int v16; // eax
  char v17; // si
  char v18; // r10
  char v19; // r14
  __int64 v20; // rdx
  char v21; // r13
  _BYTE *v22; // r9
  unsigned __int8 v23; // bp
  char *v24; // r14
  unsigned int v25; // r12d
  unsigned __int64 v26; // r15
  __int64 v27; // r8
  int v28; // ecx
  char v29; // cl
  char v30; // [rsp+60h] [rbp-58h]
  unsigned int v31; // [rsp+64h] [rbp-54h]
  GUID v32; // [rsp+68h] [rbp-50h] BYREF

  v2 = 0;
  if ( a1[259] || a1[260] || a1[261] )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (unsigned int)RaUnitIsSMRDisabled((__int64)a1) )
    *(_DWORD *)(v4 + 56) |= 2u;
  if ( (*(_BYTE *)(v5 + 506) & 0x20) != 0 )
    *(_DWORD *)(v4 + 56) |= 4u;
  v6 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v4 + 141) = -84;
  *(_DWORD *)(v4 + 48) = 0;
  if ( v6 )
    goto LABEL_11;
  v32 = 0LL;
  IoGetActivityIdIrp(a2, &v32);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_11;
    v10 = &EventNonReadWriteRequestComplete;
    goto LABEL_14;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_11;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v2 = *v11;
        McTemplateK0pqd_EtwWriteTransfer(v7, v8, &v32, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_11;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_11;
    v10 = &EventPnpRequestComplete;
LABEL_14:
    McTemplateK0pd_EtwWriteTransfer(v7, v10, &v32, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_11;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_11;
  v20 = *(_QWORD *)(v8 + 8);
  v21 = 0;
  v22 = 0LL;
  v23 = 0;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v20 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v20 + 72);
    v22 = *(_BYTE **)(v20 + 32);
    v23 = *(_BYTE *)(v20 + 11);
    v21 = *(_BYTE *)(v20 + 4);
    if ( *(_BYTE *)(v20 + 2) )
      goto LABEL_11;
LABEL_75:
    LOBYTE(v7) = v29 - 8;
    if ( (v7 & 0x5D) != 0 )
      goto LABEL_11;
    if ( *(_BYTE *)(v20 + 3) == 1 || !v22 || !v23 )
      goto LABEL_37;
    v12 = *v22 & 0x7F;
    if ( v12 == 114 || v12 == 115 )
    {
      v7 = (unsigned __int64)&v22[v23];
      v13 = 0;
      if ( (unsigned __int64)(v22 + 8) > v7 )
      {
LABEL_35:
        if ( v13 )
          v19 = 1;
LABEL_37:
        if ( byte_140173441 < 0 )
        {
          if ( !v19 )
          {
            v18 = 0;
            v17 = 0;
            v15 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v7,
            v20,
            &v32,
            a2,
            *(_DWORD *)(a2 + 48),
            *(_BYTE *)(v20 + 3),
            v21,
            v15,
            v17,
            v18,
            a2);
        }
        goto LABEL_11;
      }
      v17 = v22[2];
      v15 = v22[1] & 0xF;
      v18 = v22[3];
    }
    else
    {
      v7 = (unsigned __int64)&v22[v23];
      v13 = 0;
      if ( (unsigned __int64)(v22 + 8) > v7 )
        goto LABEL_35;
      v14 = v22 + 13;
      v15 = v22[2] & 0xF;
      v16 = v23;
      if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
        v16 = (unsigned __int8)v22[7] + 8;
      v7 = (unsigned __int64)&v22[v16];
      if ( (unsigned __int64)v14 <= v7 )
        v17 = v22[12];
      if ( (unsigned __int64)(v22 + 14) > v7 )
        v18 = 0;
      else
        v18 = *v14;
    }
    v13 = 1;
    goto LABEL_35;
  }
  v24 = 0LL;
  v30 = 0;
  if ( *(_DWORD *)(v20 + 20) )
    goto LABEL_11;
  v25 = 0;
  v31 = *(_DWORD *)(v20 + 56);
  if ( !v31 )
    goto LABEL_11;
  while ( 1 )
  {
    v7 = *(unsigned int *)(v20 + 4LL * v25 + 120);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v26 = *(unsigned int *)(v20 + 16);
      if ( (unsigned int)v7 < (unsigned int)v26 )
        break;
    }
LABEL_65:
    if ( ++v25 >= v31 )
      goto LABEL_72;
  }
  v27 = (unsigned int)v7;
  v28 = *(_DWORD *)(v7 + v20) - 64;
  if ( v28 )
  {
    v7 = (unsigned int)(v28 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        v7 = v27 + 40;
        if ( v27 + 40 <= v26 )
        {
          if ( *(_DWORD *)(v27 + v20 + 12) )
            v24 = (char *)(v27 + v20 + 32);
          v22 = *(_BYTE **)(v27 + v20 + 24);
          goto LABEL_71;
        }
      }
    }
    else
    {
      v7 = v27 + 56;
      if ( v27 + 56 <= v26 )
      {
        v30 = 1;
        if ( *(_BYTE *)(v27 + v20 + 10) )
          v24 = (char *)(v27 + v20 + 24);
        v21 = *(_BYTE *)(v27 + v20 + 8);
        v22 = *(_BYTE **)(v27 + v20 + 16);
        v23 = *(_BYTE *)(v27 + v20 + 9);
      }
    }
    goto LABEL_64;
  }
  v7 = v27 + 40;
  if ( v27 + 40 > v26 )
  {
LABEL_64:
    if ( v30 )
      goto LABEL_72;
    goto LABEL_65;
  }
  if ( *(_BYTE *)(v27 + v20 + 10) )
    v24 = (char *)(v27 + v20 + 24);
  v22 = *(_BYTE **)(v27 + v20 + 16);
LABEL_71:
  v23 = *(_BYTE *)(v27 + v20 + 9);
  v21 = *(_BYTE *)(v27 + v20 + 8);
LABEL_72:
  if ( v24 )
  {
    v29 = *v24;
    v19 = 0;
    goto LABEL_75;
  }
LABEL_11:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
