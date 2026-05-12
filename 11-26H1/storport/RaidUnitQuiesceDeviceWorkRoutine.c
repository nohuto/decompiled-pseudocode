/*
 * XREFs of RaidUnitQuiesceDeviceWorkRoutine @ 0x140055EE0
 * Callers:
 *     <none>
 * Callees:
 *     RaidLunQueueWaitForQuiescence @ 0x14002DD9C (RaidLunQueueWaitForQuiescence.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaUnitWaitForForwardIoQuiescence @ 0x14005CF04 (RaUnitWaitForForwardIoQuiescence.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall RaidUnitQuiesceDeviceWorkRoutine(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  char *DeviceExtension; // r13
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rsi
  int v8; // edi
  int v9; // edx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  char v12; // al
  bool v13; // zf
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  void *v18; // rdx
  __int64 v19; // rdx
  _BYTE *v20; // r9
  unsigned __int8 v21; // bp
  char v22; // r10
  char v23; // si
  char v24; // r11
  char v25; // r14
  char *v26; // r14
  unsigned int v27; // r12d
  unsigned __int64 v28; // r15
  __int64 v29; // r8
  int v30; // ecx
  char v31; // r15
  char v32; // cl
  char v33; // r8
  char v34; // al
  char *v35; // r11
  unsigned int v36; // eax
  unsigned __int64 v37; // r8
  signed __int32 v38; // eax
  signed __int32 v39; // ett
  char v40; // [rsp+60h] [rbp-58h]
  char v41; // [rsp+61h] [rbp-57h]
  unsigned int v42; // [rsp+64h] [rbp-54h]
  __int128 v43; // [rsp+68h] [rbp-50h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v4 = 40LL;
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = *(_QWORD *)(*(_QWORD *)(Context[1] + 184LL) + 8LL);
  if ( *(_BYTE *)(v6 + 2) != 40 )
    v4 = 20LL;
  v7 = *(unsigned int *)(v4 + v6);
  LOBYTE(v8) = 0;
  v9 = RaidLunQueueWaitForQuiescence((__int64)(DeviceExtension + 720), v7);
  if ( v9 != 258 )
  {
    if ( (_DWORD)v7 )
    {
      v10 = (MEMORY[0xFFFFF78000000014] - v5) / 10000;
      if ( v10 >= 1000 * v7 )
        v11 = 1LL;
      else
        v11 = 1000 * v7 - v10;
    }
    else
    {
      v11 = 0LL;
    }
    v9 = RaUnitWaitForForwardIoQuiescence(DeviceExtension, v11);
  }
  v12 = 9;
  if ( v9 != 258 )
    v12 = 1;
  *(_BYTE *)(v6 + 3) = v12;
  v13 = StorEtwLoggingEnabled == 0;
  v14 = Context[1];
  *(_BYTE *)(v14 + 141) = -84;
  *(_DWORD *)(v14 + 48) = v9;
  if ( v13 )
    goto LABEL_78;
  v43 = 0LL;
  IoGetActivityIdIrp(v14, &v43);
  v16 = *(_QWORD *)(v14 + 184);
  if ( *(_BYTE *)v16 != 14 )
  {
    if ( *(_BYTE *)v16 != 15 )
    {
      if ( *(_BYTE *)v16 == 27 )
      {
        if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v17 = *(int **)(v14 + 56);
            if ( v17 )
              v8 = *v17;
            McTemplateK0pqd_EtwWriteTransfer(v15, v16, (unsigned int)&v43, v14, v8, *(_DWORD *)(v14 + 48));
          }
          goto LABEL_78;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v18 = &EventPnpRequestComplete;
LABEL_77:
          McTemplateK0pd_EtwWriteTransfer(v15, v18, &v43, v14, *(_DWORD *)(v14 + 48));
          goto LABEL_78;
        }
      }
      goto LABEL_78;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_78;
    v19 = *(_QWORD *)(v16 + 8);
    v20 = 0LL;
    v40 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    if ( *(_BYTE *)(v19 + 2) == 40 )
    {
      v26 = 0LL;
      v41 = 0;
      if ( *(_DWORD *)(v19 + 20) )
        goto LABEL_78;
      v27 = 0;
      v42 = *(_DWORD *)(v19 + 56);
      if ( !v42 )
        goto LABEL_78;
      do
      {
        v15 = *(unsigned int *)(v19 + 4LL * v27 + 120);
        if ( (unsigned int)v15 >= 0x80 )
        {
          v28 = *(unsigned int *)(v19 + 16);
          if ( (unsigned int)v15 < (unsigned int)v28 )
          {
            v29 = (unsigned int)v15;
            v30 = *(_DWORD *)(v15 + v19) - 64;
            if ( v30 )
            {
              LODWORD(v15) = v30 - 1;
              if ( (_DWORD)v15 )
              {
                if ( (_DWORD)v15 == 1 )
                {
                  LODWORD(v15) = v29 + 40;
                  if ( v29 + 40 <= v28 )
                  {
                    if ( *(_DWORD *)(v29 + v19 + 12) )
                      v26 = (char *)(v29 + v19 + 32);
                    v20 = *(_BYTE **)(v29 + v19 + 24);
LABEL_37:
                    v31 = *(_BYTE *)(v29 + v19 + 8);
                    v21 = *(_BYTE *)(v29 + v19 + 9);
                    goto LABEL_46;
                  }
                }
              }
              else
              {
                LODWORD(v15) = v29 + 56;
                if ( v29 + 56 <= v28 )
                {
                  v41 = 1;
                  if ( *(_BYTE *)(v29 + v19 + 10) )
                    v26 = (char *)(v29 + v19 + 24);
                  v20 = *(_BYTE **)(v29 + v19 + 16);
                  v21 = *(_BYTE *)(v29 + v19 + 9);
                  v40 = *(_BYTE *)(v29 + v19 + 8);
                }
              }
            }
            else
            {
              LODWORD(v15) = v29 + 40;
              if ( v29 + 40 <= v28 )
              {
                if ( *(_BYTE *)(v29 + v19 + 10) )
                  v26 = (char *)(v29 + v19 + 24);
                v20 = *(_BYTE **)(v29 + v19 + 16);
                goto LABEL_37;
              }
            }
            if ( v41 )
              break;
          }
        }
        ++v27;
      }
      while ( v27 < v42 );
      v31 = v40;
LABEL_46:
      if ( !v26 )
        goto LABEL_78;
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
        goto LABEL_78;
    }
    LOBYTE(v15) = v32 - 8;
    if ( (v15 & 0x5D) != 0 )
      goto LABEL_78;
    v33 = *(_BYTE *)(v19 + 3);
    if ( v33 == 1 || !v20 || !v21 )
    {
LABEL_71:
      if ( byte_140173441 < 0 )
      {
        if ( !v25 )
        {
          v24 = 0;
          v23 = 0;
          v22 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v15,
          v19,
          (unsigned int)&v43,
          v14,
          *(_DWORD *)(v14 + 48),
          v33,
          v31,
          v22,
          v23,
          v24,
          v14);
      }
      goto LABEL_78;
    }
    v34 = *v20 & 0x7F;
    if ( v34 == 114 || v34 == 115 )
    {
      v15 = (unsigned __int64)&v20[v21];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_69;
      v23 = v20[2];
      v22 = v20[1] & 0xF;
      v24 = v20[3];
    }
    else
    {
      v15 = (unsigned __int64)&v20[v21];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_69;
      v35 = v20 + 13;
      v22 = v20[2] & 0xF;
      v36 = v21;
      if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
        v36 = (unsigned __int8)v20[7] + 8;
      v15 = (unsigned __int64)&v20[v36];
      if ( (unsigned __int64)v35 <= v15 )
        v23 = v20[12];
      if ( (unsigned __int64)(v20 + 14) > v15 )
        v24 = 0;
      else
        v24 = *v35;
    }
    LOBYTE(v19) = 1;
LABEL_69:
    if ( (_BYTE)v19 )
      v25 = 1;
    goto LABEL_71;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v18 = &EventNonReadWriteRequestComplete;
    goto LABEL_77;
  }
LABEL_78:
  IofCompleteRequest((PIRP)v14, 0);
  v37 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v38 = *(_DWORD *)(v37 + *((_QWORD *)DeviceExtension + 5));
  while ( (v38 & 1) == 0 )
  {
    v39 = v38;
    v38 = _InterlockedCompareExchange((volatile signed __int32 *)(v37 + *((_QWORD *)DeviceExtension + 5)), v38 - 2, v38);
    if ( v39 == v38 )
      return;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 258, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
}
