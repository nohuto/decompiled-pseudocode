/*
 * XREFs of RaidUpdateUnitIdentityWorkRoutine @ 0x1400AA530
 * Callers:
 *     <none>
 * Callees:
 *     RaidBusEnumeratorVisitUnit @ 0x140009CE4 (RaidBusEnumeratorVisitUnit.c)
 *     RaidLogRequestComplete @ 0x14002A288 (RaidLogRequestComplete.c)
 *     RaidDeleteBusEnumerator @ 0x1400370BC (RaidDeleteBusEnumerator.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall RaidUpdateUnitIdentityWorkRoutine(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  char *DeviceExtension; // rsi
  PIO_WORKITEM *v3; // r14
  int v4; // ebx
  bool v5; // zf
  PIO_WORKITEM v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rdx
  _BYTE *v13; // r9
  unsigned __int8 v14; // r11
  char v15; // r14
  char v16; // r15
  char v17; // r10
  char v18; // r12
  char *v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  __int64 v22; // r8
  int v23; // ecx
  char v24; // r13
  char v25; // cl
  char v26; // al
  char v27; // r8
  char *v28; // r10
  unsigned int v29; // eax
  unsigned __int64 v30; // r8
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  __int64 v33; // [rsp+20h] [rbp-E0h]
  __int64 v34; // [rsp+28h] [rbp-D8h]
  char v35; // [rsp+60h] [rbp-A0h]
  char v36; // [rsp+61h] [rbp-9Fh]
  CCHAR PriorityBoost; // [rsp+62h] [rbp-9Eh]
  int v39; // [rsp+70h] [rbp-90h]
  unsigned int v40; // [rsp+74h] [rbp-8Ch]
  __int64 v41[15]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v42[3]; // [rsp+F8h] [rbp-8h] BYREF
  GUID v43; // [rsp+110h] [rbp+10h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v3 = Context;
  memset_0(v41, 0, sizeof(v41));
  v42[1] = v42;
  v42[0] = v42;
  v41[0] = *((_QWORD *)DeviceExtension + 3);
  RaidBusEnumeratorVisitUnit(v41, *((_DWORD *)DeviceExtension + 26));
  RaidDeleteBusEnumerator((__int64)v41);
  v4 = 0;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)DeviceExtension + 3) + 5848LL), 0, 0) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Cu,
        (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
        DeviceExtension,
        v3[1],
        *((_DWORD *)v3[1] + 12));
    }
    if ( (qword_140172448 & 0x10) != 0 )
      RaidLogRequestComplete(
        *((_QWORD *)DeviceExtension + 3),
        (__int64)v3[1],
        *(_QWORD *)(*((_QWORD *)v3[1] + 23) + 8LL));
    PriorityBoost = 1;
    goto LABEL_15;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)DeviceExtension + 3) + 5848LL), 0xFFFFFFFF) == 1 )
  {
    *((_QWORD *)v3[1] + 7) = 0LL;
    *((_DWORD *)v3[1] + 12) = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Du,
        (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
        *((_QWORD *)DeviceExtension + 3),
        v3[1],
        *((_DWORD *)v3[1] + 12));
    }
    PriorityBoost = 0;
LABEL_15:
    v5 = StorEtwLoggingEnabled == 0;
    v6 = v3[1];
    v7 = *((_DWORD *)v6 + 12);
    *((_BYTE *)v6 + 141) = -84;
    *((_DWORD *)v6 + 12) = v7;
    if ( v5 )
      goto LABEL_80;
    v43 = 0LL;
    IoGetActivityIdIrp(v6, &v43);
    v9 = *((_QWORD *)v6 + 23);
    if ( *(_BYTE *)v9 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_80;
      v11 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_27;
    }
    if ( *(_BYTE *)v9 != 15 )
    {
      if ( *(_BYTE *)v9 == 27 )
      {
        if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v10 = (int *)*((_QWORD *)v6 + 7);
            if ( v10 )
              v4 = *v10;
            LODWORD(v34) = *((_DWORD *)v6 + 12);
            LODWORD(v33) = v4;
            McTemplateK0pqd_EtwWriteTransfer(v8, v9, &v43, v6, v33, v34);
          }
          goto LABEL_80;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v11 = &EventPnpRequestComplete;
LABEL_27:
          LODWORD(v33) = *((_DWORD *)v6 + 12);
          McTemplateK0pd_EtwWriteTransfer(v8, v11, &v43, v6, v33);
        }
      }
LABEL_80:
      IofCompleteRequest((PIRP)v6, PriorityBoost);
      goto LABEL_81;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_80;
    v12 = *(_QWORD *)(v9 + 8);
    v13 = 0LL;
    v35 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    if ( *(_BYTE *)(v12 + 2) == 40 )
    {
      v19 = 0LL;
      v36 = 0;
      if ( *(_DWORD *)(v12 + 20) )
        goto LABEL_79;
      v20 = 0LL;
      v39 = 0;
      v40 = *(_DWORD *)(v12 + 56);
      if ( !v40 )
        goto LABEL_79;
      do
      {
        v8 = *(unsigned int *)(v12 + 4 * v20 + 120);
        if ( (unsigned int)v8 >= 0x80 )
        {
          v21 = *(unsigned int *)(v12 + 16);
          if ( (unsigned int)v8 < (unsigned int)v21 )
          {
            v22 = (unsigned int)v8;
            v23 = *(_DWORD *)(v8 + v12) - 64;
            if ( v23 )
            {
              v8 = (unsigned int)(v23 - 1);
              if ( (_DWORD)v8 )
              {
                if ( (_DWORD)v8 == 1 )
                {
                  v8 = v22 + 40;
                  if ( v22 + 40 <= v21 )
                  {
                    if ( *(_DWORD *)(v22 + v12 + 12) )
                      v19 = (char *)(v22 + v12 + 32);
                    v13 = *(_BYTE **)(v22 + v12 + 24);
LABEL_41:
                    v24 = *(_BYTE *)(v22 + v12 + 8);
                    v14 = *(_BYTE *)(v22 + v12 + 9);
                    goto LABEL_50;
                  }
                }
              }
              else
              {
                v8 = v22 + 56;
                if ( v22 + 56 <= v21 )
                {
                  v36 = 1;
                  if ( *(_BYTE *)(v22 + v12 + 10) )
                    v19 = (char *)(v22 + v12 + 24);
                  v13 = *(_BYTE **)(v22 + v12 + 16);
                  v14 = *(_BYTE *)(v22 + v12 + 9);
                  v35 = *(_BYTE *)(v22 + v12 + 8);
                }
              }
            }
            else
            {
              v8 = v22 + 40;
              if ( v22 + 40 <= v21 )
              {
                if ( *(_BYTE *)(v22 + v12 + 10) )
                  v19 = (char *)(v22 + v12 + 24);
                v13 = *(_BYTE **)(v22 + v12 + 16);
                goto LABEL_41;
              }
            }
            if ( v36 )
              break;
          }
        }
        v20 = (unsigned int)(v39 + 1);
        v39 = v20;
      }
      while ( (unsigned int)v20 < v40 );
      v24 = v35;
LABEL_50:
      if ( !v19 )
        goto LABEL_79;
      v25 = *v19;
      v18 = 0;
    }
    else
    {
      v25 = *(_BYTE *)(v12 + 72);
      v13 = *(_BYTE **)(v12 + 32);
      v14 = *(_BYTE *)(v12 + 11);
      v24 = *(_BYTE *)(v12 + 4);
      if ( *(_BYTE *)(v12 + 2) )
        goto LABEL_79;
    }
    LOBYTE(v8) = v25 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v12 + 3) == 1 || !v13 || !v14 )
      {
LABEL_75:
        if ( byte_140173441 < 0 )
        {
          if ( !v18 )
          {
            v17 = 0;
            v16 = 0;
            v15 = 0;
          }
          LOBYTE(v34) = *(_BYTE *)(v12 + 3);
          LODWORD(v33) = *((_DWORD *)v6 + 12);
          McTemplateK0pduuuuup_EtwWriteTransfer(v8, v12, &v43, v6, v33, v34, v24, v15, v16, v17, v6);
        }
        goto LABEL_79;
      }
      v26 = *v13 & 0x7F;
      if ( v26 == 114 || v26 == 115 )
      {
        v8 = (unsigned __int64)&v13[v14];
        v27 = 0;
        if ( (unsigned __int64)(v13 + 8) > v8 )
          goto LABEL_73;
        v16 = v13[2];
        v15 = v13[1] & 0xF;
        v17 = v13[3];
      }
      else
      {
        v8 = (unsigned __int64)&v13[v14];
        v27 = 0;
        if ( (unsigned __int64)(v13 + 8) > v8 )
          goto LABEL_73;
        v28 = v13 + 13;
        v15 = v13[2] & 0xF;
        v29 = v14;
        if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
          v29 = (unsigned __int8)v13[7] + 8;
        v8 = (unsigned __int64)&v13[v29];
        if ( (unsigned __int64)v28 <= v8 )
          v16 = v13[12];
        if ( (unsigned __int64)(v13 + 14) > v8 )
          v17 = 0;
        else
          v17 = *v28;
      }
      v27 = 1;
LABEL_73:
      if ( v27 )
        v18 = 1;
      goto LABEL_75;
    }
LABEL_79:
    v3 = Context;
    goto LABEL_80;
  }
LABEL_81:
  IoFreeWorkItem(*v3);
  ExFreePoolWithTag(v3, 0x49576152u);
  v30 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v31 = *(_DWORD *)(v30 + *((_QWORD *)DeviceExtension + 5));
  while ( (v31 & 1) == 0 )
  {
    v32 = v31;
    v31 = _InterlockedCompareExchange((volatile signed __int32 *)(v30 + *((_QWORD *)DeviceExtension + 5)), v31 - 2, v31);
    if ( v32 == v31 )
      return;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 258, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
}
