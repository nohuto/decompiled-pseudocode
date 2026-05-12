/*
 * XREFs of RaUnitDeleteDeviceIrp @ 0x14009A2C0
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x14009EC3C (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidAdapterRemoveUnit @ 0x1400373E8 (RaidAdapterRemoveUnit.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     RaidDeleteUnit @ 0x1400459EC (RaidDeleteUnit.c)
 *     RaUnitWaitForRemoveLock @ 0x14004B798 (RaUnitWaitForRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterRemoveZombieUnit @ 0x140065694 (RaidAdapterRemoveZombieUnit.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1400AA334 (RaidUnitUnRegisterInterfaces.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitDeleteDeviceIrp(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned int v7; // eax
  __int64 v8; // r14
  int v9; // edi
  unsigned int v10; // r13d
  __int16 v11; // ax
  int v12; // eax
  __int64 v13; // rcx
  char v14; // bl
  struct _DEVICE_OBJECT *v15; // rcx
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  const EVENT_DESCRIPTOR *v20; // rdx
  __int64 v21; // rdx
  _BYTE *v22; // r9
  unsigned __int8 v23; // si
  char v24; // bl
  char v25; // r11
  char v26; // r10
  char v27; // r14
  char *v28; // r14
  unsigned int v29; // r13d
  unsigned __int64 v30; // r12
  __int64 v31; // r8
  int v32; // ecx
  char v33; // r12
  char v34; // cl
  char v35; // r8
  char v36; // al
  char *v37; // r10
  unsigned int v38; // eax
  char v40; // [rsp+60h] [rbp-9h]
  char v41; // [rsp+61h] [rbp-8h]
  unsigned int v42; // [rsp+64h] [rbp-5h]
  unsigned int v43; // [rsp+68h] [rbp-1h]
  GUID v44; // [rsp+70h] [rbp+7h] BYREF

  if ( ((_InterlockedExchange((volatile __int32 *)(a1 + 56), 6) - 5) & 0xFFFFFFFD) != 0 )
    RaidUnitUnRegisterInterfaces();
  v4 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v5 = *(_DWORD *)(v4 + *(_QWORD *)(a1 + 40));
  while ( (v5 & 1) == 0 )
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + *(_QWORD *)(a1 + 40)), v5 - 2, v5);
    if ( v6 == v5 )
      goto LABEL_9;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_9:
  v7 = RaUnitWaitForRemoveLock(a1);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = 0;
  v10 = v7;
  v42 = v7;
  if ( *(_DWORD *)(v8 + 88) != 5 )
  {
    if ( RaidIsUnitControlSupported(a1, 9) )
    {
      v11 = *(_WORD *)(v8 + 56);
      v44 = 0LL;
      HIWORD(v44.Data1) = v11;
      *(_WORD *)v44.Data4 = *(_WORD *)(a1 + 104);
      v44.Data4[2] = *(_BYTE *)(a1 + 106);
      v12 = *(_DWORD *)v8;
      LOWORD(v44.Data1) = 1;
      *(_DWORD *)&v44.Data2 = 4;
      if ( v12 == 1094997074 )
      {
        v13 = v8 + 376;
      }
      else
      {
        v13 = v8 + 168;
        if ( v12 != 1314275652 )
          v13 = 0LL;
      }
      RaCallMiniportUnitControl(v13);
    }
    if ( (*(_BYTE *)(a1 + 504) & 0x20) != 0 )
      RaidAdapterRemoveZombieUnit(v8, a1);
    else
      RaidAdapterRemoveUnit(v8, a1);
  }
  v14 = *(_BYTE *)(a1 + 504);
  RaidDeleteUnit(a1);
  if ( (v14 & 0x40) != 0 && v8 )
  {
    v15 = *(struct _DEVICE_OBJECT **)(v8 + 32);
    *(_BYTE *)(v8 + 106) = 1;
    IoInvalidateDeviceRelations(v15, BusRelations);
  }
  v16 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v10;
  if ( !v16 )
  {
    v44 = 0LL;
    IoGetActivityIdIrp(a2, &v44);
    v18 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v18 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_88;
      v20 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_87;
    }
    if ( *(_BYTE *)v18 != 15 )
    {
      if ( *(_BYTE *)v18 != 27 )
        goto LABEL_88;
      if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v19 = *(int **)(a2 + 56);
          if ( v19 )
            v9 = *v19;
          McTemplateK0pqd_EtwWriteTransfer(v17, v18, &v44, a2, v9, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_88;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_88;
      v20 = &EventPnpRequestComplete;
LABEL_87:
      McTemplateK0pd_EtwWriteTransfer(v17, v20, &v44, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_88;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_88;
    v21 = *(_QWORD *)(v18 + 8);
    v22 = 0LL;
    v40 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    if ( *(_BYTE *)(v21 + 2) != 40 )
    {
      v34 = *(_BYTE *)(v21 + 72);
      v22 = *(_BYTE **)(v21 + 32);
      v23 = *(_BYTE *)(v21 + 11);
      v33 = *(_BYTE *)(v21 + 4);
      if ( *(_BYTE *)(v21 + 2) )
        goto LABEL_88;
LABEL_62:
      LOBYTE(v17) = v34 - 8;
      if ( (v17 & 0x5D) != 0 )
        goto LABEL_88;
      v35 = *(_BYTE *)(v21 + 3);
      if ( v35 == 1 || !v22 || !v23 )
        goto LABEL_81;
      v36 = *v22 & 0x7F;
      if ( v36 == 114 || v36 == 115 )
      {
        v17 = (unsigned __int64)&v22[v23];
        LOBYTE(v21) = 0;
        if ( (unsigned __int64)(v22 + 8) > v17 )
          goto LABEL_79;
        v25 = v22[2];
        v24 = v22[1] & 0xF;
        v26 = v22[3];
      }
      else
      {
        v17 = (unsigned __int64)&v22[v23];
        LOBYTE(v21) = 0;
        if ( (unsigned __int64)(v22 + 8) > v17 )
          goto LABEL_79;
        v37 = v22 + 13;
        v24 = v22[2] & 0xF;
        v38 = v23;
        if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
          v38 = (unsigned __int8)v22[7] + 8;
        v17 = (unsigned __int64)&v22[v38];
        if ( (unsigned __int64)v37 <= v17 )
          v25 = v22[12];
        if ( (unsigned __int64)(v22 + 14) > v17 )
          v26 = 0;
        else
          v26 = *v37;
      }
      LOBYTE(v21) = 1;
LABEL_79:
      if ( (_BYTE)v21 )
        v27 = 1;
LABEL_81:
      if ( byte_140173441 < 0 )
      {
        if ( !v27 )
        {
          v26 = 0;
          v25 = 0;
          v24 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v17, v21, &v44, a2, *(_DWORD *)(a2 + 48), v35, v33, v24, v25, v26, a2);
      }
      goto LABEL_88;
    }
    v28 = 0LL;
    v41 = 0;
    if ( !*(_DWORD *)(v21 + 20) )
    {
      v29 = 0;
      v43 = *(_DWORD *)(v21 + 56);
      if ( v43 )
      {
        do
        {
          v17 = *(unsigned int *)(v21 + 4LL * v29 + 120);
          if ( (unsigned int)v17 >= 0x80 )
          {
            v30 = *(unsigned int *)(v21 + 16);
            if ( (unsigned int)v17 < (unsigned int)v30 )
            {
              v31 = (unsigned int)v17;
              v32 = *(_DWORD *)(v17 + v21) - 64;
              if ( v32 )
              {
                v17 = (unsigned int)(v32 - 1);
                if ( (_DWORD)v17 )
                {
                  if ( (_DWORD)v17 == 1 )
                  {
                    v17 = v31 + 40;
                    if ( v31 + 40 <= v30 )
                    {
                      if ( *(_DWORD *)(v31 + v21 + 12) )
                        v28 = (char *)(v31 + v21 + 32);
                      v22 = *(_BYTE **)(v31 + v21 + 24);
LABEL_47:
                      v33 = *(_BYTE *)(v31 + v21 + 8);
                      v23 = *(_BYTE *)(v31 + v21 + 9);
                      goto LABEL_56;
                    }
                  }
                }
                else
                {
                  v17 = v31 + 56;
                  if ( v31 + 56 <= v30 )
                  {
                    v41 = 1;
                    if ( *(_BYTE *)(v31 + v21 + 10) )
                      v28 = (char *)(v31 + v21 + 24);
                    v22 = *(_BYTE **)(v31 + v21 + 16);
                    v23 = *(_BYTE *)(v31 + v21 + 9);
                    v40 = *(_BYTE *)(v31 + v21 + 8);
                  }
                }
              }
              else
              {
                v17 = v31 + 40;
                if ( v31 + 40 <= v30 )
                {
                  if ( *(_BYTE *)(v31 + v21 + 10) )
                    v28 = (char *)(v31 + v21 + 24);
                  v22 = *(_BYTE **)(v31 + v21 + 16);
                  goto LABEL_47;
                }
              }
              if ( v41 )
                break;
            }
          }
          ++v29;
        }
        while ( v29 < v43 );
        v33 = v40;
LABEL_56:
        if ( v28 )
        {
          v34 = *v28;
          v27 = 0;
          goto LABEL_62;
        }
      }
    }
  }
LABEL_88:
  IofCompleteRequest((PIRP)a2, 0);
  return v42;
}
