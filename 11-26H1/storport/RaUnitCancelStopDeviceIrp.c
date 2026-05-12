/*
 * XREFs of RaUnitCancelStopDeviceIrp @ 0x140188C5C
 * Callers:
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidUnitConvertToNormalUnit @ 0x1400A709C (RaidUnitConvertToNormalUnit.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitCancelStopDeviceIrp(__int64 a1, __int64 a2)
{
  int v3; // ebx
  bool v4; // zf
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  int *v7; // rax
  const EVENT_DESCRIPTOR *v8; // rdx
  __int64 v9; // rdx
  char v10; // r13
  _BYTE *v11; // r9
  unsigned __int8 v12; // bp
  char v13; // r11
  char v14; // si
  char v15; // r10
  char v16; // r14
  char *v17; // r14
  unsigned int v18; // r12d
  unsigned __int64 v19; // r15
  __int64 v20; // r8
  int v21; // ecx
  char v22; // cl
  char v23; // r8
  char v24; // al
  char *v25; // r10
  unsigned int v26; // eax
  char v28; // [rsp+60h] [rbp-58h]
  unsigned int v29; // [rsp+64h] [rbp-54h]
  GUID v30; // [rsp+68h] [rbp-50h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 56), 1);
  RaidUnitConvertToNormalUnit(a1);
  v3 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v4 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v4 )
    goto LABEL_67;
  v30 = 0LL;
  IoGetActivityIdIrp(a2, &v30);
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v6 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_67;
    v8 = &EventNonReadWriteRequestComplete;
    goto LABEL_66;
  }
  if ( *(_BYTE *)v6 != 15 )
  {
    if ( *(_BYTE *)v6 != 27 )
      goto LABEL_67;
    if ( *(_BYTE *)(v6 + 1) == 7 && !*(_DWORD *)(v6 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v7 = *(int **)(a2 + 56);
        if ( v7 )
          v3 = *v7;
        McTemplateK0pqd_EtwWriteTransfer(v5, v6, &v30, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_67;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_67;
    v8 = &EventPnpRequestComplete;
LABEL_66:
    McTemplateK0pd_EtwWriteTransfer(v5, v8, &v30, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_67;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_67;
  v9 = *(_QWORD *)(v6 + 8);
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( *(_BYTE *)(v9 + 2) != 40 )
  {
    v22 = *(_BYTE *)(v9 + 72);
    v11 = *(_BYTE **)(v9 + 32);
    v12 = *(_BYTE *)(v9 + 11);
    v10 = *(_BYTE *)(v9 + 4);
    if ( *(_BYTE *)(v9 + 2) )
      goto LABEL_67;
LABEL_41:
    LOBYTE(v5) = v22 - 8;
    if ( (v5 & 0x5D) != 0 )
      goto LABEL_67;
    v23 = *(_BYTE *)(v9 + 3);
    if ( v23 == 1 || !v11 || !v12 )
      goto LABEL_60;
    v24 = *v11 & 0x7F;
    if ( v24 == 114 || v24 == 115 )
    {
      v5 = (unsigned __int64)&v11[v12];
      LOBYTE(v9) = 0;
      if ( (unsigned __int64)(v11 + 8) > v5 )
        goto LABEL_58;
      v14 = v11[2];
      v13 = v11[1] & 0xF;
      v15 = v11[3];
    }
    else
    {
      v5 = (unsigned __int64)&v11[v12];
      LOBYTE(v9) = 0;
      if ( (unsigned __int64)(v11 + 8) > v5 )
        goto LABEL_58;
      v25 = v11 + 13;
      v13 = v11[2] & 0xF;
      v26 = v12;
      if ( (unsigned int)(unsigned __int8)v11[7] + 8 <= v12 )
        v26 = (unsigned __int8)v11[7] + 8;
      v5 = (unsigned __int64)&v11[v26];
      if ( (unsigned __int64)v25 <= v5 )
        v14 = v11[12];
      if ( (unsigned __int64)(v11 + 14) > v5 )
        v15 = 0;
      else
        v15 = *v25;
    }
    LOBYTE(v9) = 1;
LABEL_58:
    if ( (_BYTE)v9 )
      v16 = 1;
LABEL_60:
    if ( byte_140173441 < 0 )
    {
      if ( !v16 )
      {
        v15 = 0;
        v14 = 0;
        v13 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v5, v9, &v30, a2, *(_DWORD *)(a2 + 48), v23, v10, v13, v14, v15, a2);
    }
    goto LABEL_67;
  }
  v17 = 0LL;
  v28 = 0;
  if ( *(_DWORD *)(v9 + 20) )
    goto LABEL_67;
  v18 = 0;
  v29 = *(_DWORD *)(v9 + 56);
  if ( !v29 )
    goto LABEL_67;
  while ( 1 )
  {
    v5 = *(unsigned int *)(v9 + 4LL * v18 + 120);
    if ( (unsigned int)v5 >= 0x80 )
    {
      v19 = *(unsigned int *)(v9 + 16);
      if ( (unsigned int)v5 < (unsigned int)v19 )
        break;
    }
LABEL_32:
    if ( ++v18 >= v29 )
      goto LABEL_38;
  }
  v20 = (unsigned int)v5;
  v21 = *(_DWORD *)(v5 + v9) - 64;
  if ( v21 )
  {
    v5 = (unsigned int)(v21 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v5 = v20 + 40;
        if ( v20 + 40 <= v19 )
        {
          if ( *(_DWORD *)(v20 + v9 + 12) )
            v17 = (char *)(v20 + v9 + 32);
          v11 = *(_BYTE **)(v20 + v9 + 24);
          goto LABEL_37;
        }
      }
    }
    else
    {
      v5 = v20 + 56;
      if ( v20 + 56 <= v19 )
      {
        v28 = 1;
        if ( *(_BYTE *)(v20 + v9 + 10) )
          v17 = (char *)(v20 + v9 + 24);
        v10 = *(_BYTE *)(v20 + v9 + 8);
        v11 = *(_BYTE **)(v20 + v9 + 16);
        v12 = *(_BYTE *)(v20 + v9 + 9);
      }
    }
    goto LABEL_31;
  }
  v5 = v20 + 40;
  if ( v20 + 40 > v19 )
  {
LABEL_31:
    if ( v28 )
      goto LABEL_38;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(v20 + v9 + 10) )
    v17 = (char *)(v20 + v9 + 24);
  v11 = *(_BYTE **)(v20 + v9 + 16);
LABEL_37:
  v12 = *(_BYTE *)(v20 + v9 + 9);
  v10 = *(_BYTE *)(v20 + v9 + 8);
LABEL_38:
  if ( v17 )
  {
    v22 = *v17;
    v16 = 0;
    goto LABEL_41;
  }
LABEL_67:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
