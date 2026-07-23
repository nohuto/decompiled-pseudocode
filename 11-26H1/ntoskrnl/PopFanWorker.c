/*
 * XREFs of PopFanWorker @ 0x140B36AD0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoReuseIrp @ 0x140267BC0 (IoReuseIrp.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopFanSetNoiseImpact @ 0x1407DEF20 (PopFanSetNoiseImpact.c)
 *     PopFanUpdateRunningState @ 0x1407DEF44 (PopFanUpdateRunningState.c)
 *     PopFanUpdateSpeed @ 0x1407DEFE0 (PopFanUpdateSpeed.c)
 *     PopPrepareIoctl @ 0x140AFD904 (PopPrepareIoctl.c)
 *     PopFanSetupRpmBuckets @ 0x140B37048 (PopFanSetupRpmBuckets.c)
 */

__int64 __fastcall PopFanWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  IRP *v4; // r13
  unsigned __int8 v6; // si
  char v7; // r15
  char v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  int Status; // eax
  __int64 *v13; // rax
  unsigned __int8 *v14; // rdx
  char v15; // al
  IRP *v16; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v18; // rax
  struct _DEVICE_OBJECT *v19; // rcx
  __int64 v21; // [rsp+38h] [rbp-49h] BYREF
  __int64 v22; // [rsp+40h] [rbp-41h] BYREF
  int v23; // [rsp+48h] [rbp-39h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v25[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 *v26; // [rsp+78h] [rbp-9h]
  __int64 v27; // [rsp+80h] [rbp-1h]
  __int64 *v28; // [rsp+88h] [rbp+7h]
  __int64 v29; // [rsp+90h] [rbp+Fh]
  __int64 *v30; // [rsp+98h] [rbp+17h]
  __int64 v31; // [rsp+A0h] [rbp+1Fh]

  v4 = *(IRP **)(a1 + 56);
  DeviceObject = *(PDEVICE_OBJECT *)(a1 + 48);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 400), a2, a3, a4);
  if ( *(_BYTE *)(a1 + 440) )
  {
    *(_BYTE *)(a1 + 64) = 4;
LABEL_3:
    if ( *(_BYTE *)(a1 + 80) )
    {
      v8 = 1;
      *(_BYTE *)(a1 + 80) = 0;
    }
    KeSetEvent((PRKEVENT)(a1 + 416), 0, 0);
    goto LABEL_59;
  }
  Status = v4->IoStatus.Status;
  if ( Status >= 0 )
  {
    if ( (unsigned int)dword_140E07560 > 5 )
    {
      v21 = a1;
      v26 = &v21;
      v23 = *(unsigned __int8 *)(a1 + 64);
      v27 = 8LL;
      v28 = (__int64 *)&v23;
      v29 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004EFED, 0LL, 0LL, 4u, v25);
    }
    if ( !*(_BYTE *)(a1 + 64) )
    {
      if ( (unsigned int)dword_140E07560 <= 2 )
        goto LABEL_47;
      v22 = a1;
      v13 = &v22;
      v14 = (unsigned __int8 *)&word_14004EF16;
      goto LABEL_32;
    }
    if ( *(_BYTE *)(a1 + 64) != 1 )
    {
      if ( *(_BYTE *)(a1 + 64) != 2 )
      {
        if ( *(_BYTE *)(a1 + 64) != 3 )
        {
          if ( *(_BYTE *)(a1 + 64) == 4 )
          {
            if ( (unsigned int)dword_140E07560 <= 2 )
              goto LABEL_47;
            v21 = a1;
            v13 = &v21;
            v14 = (unsigned __int8 *)qword_14004EF40;
          }
          else
          {
            if ( (unsigned int)dword_140E07560 <= 2 )
              goto LABEL_47;
            v21 = a1;
            v13 = &v21;
            v14 = (unsigned __int8 *)&dword_14004EEAC;
          }
LABEL_32:
          v26 = v13;
          v27 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, v14, 0LL, 0LL, 3u, v25);
          goto LABEL_47;
        }
        if ( (unsigned int)dword_140E07560 > 5 )
        {
          v22 = a1;
          v26 = &v22;
          v23 = *(_DWORD *)(a1 + 92);
          v27 = 8LL;
          v28 = (__int64 *)&v23;
          LODWORD(v21) = *(_DWORD *)(a1 + 96);
          v30 = &v21;
          v29 = 4LL;
          v31 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E07560,
            (unsigned __int8 *)byte_14004EFA3,
            0LL,
            0LL,
            5u,
            v25);
        }
        *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 92);
        *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 96);
        goto LABEL_43;
      }
      if ( (unsigned int)dword_140E07560 > 5 )
      {
        v22 = a1;
        v26 = &v22;
        LODWORD(v21) = *(unsigned __int8 *)(a1 + 72);
        v27 = 8LL;
        v28 = &v21;
        v23 = *(_DWORD *)(a1 + 76);
        v30 = (__int64 *)&v23;
        v29 = 4LL;
        v31 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07560,
          (unsigned __int8 *)&byte_14004EF67,
          0LL,
          0LL,
          5u,
          v25);
      }
      v15 = *(_BYTE *)(a1 + 72);
      if ( *(_BYTE *)(a1 + 80) )
      {
        if ( !v15 )
        {
LABEL_27:
          v8 = 1;
          *(_BYTE *)(a1 + 80) = v15;
          v7 = v15;
        }
      }
      else if ( v15 )
      {
        goto LABEL_27;
      }
      PopFanUpdateSpeed(a1, *(_DWORD *)(a1 + 76));
      v6 = (*(_BYTE *)(a1 + 88) != 0) + 2;
      goto LABEL_47;
    }
    PopFanSetupRpmBuckets(a1);
LABEL_43:
    v6 = 2;
    goto LABEL_47;
  }
  if ( Status == -1073741667 || Status == -1073741536 )
  {
    if ( *(_BYTE *)(a1 + 64) == 1 )
      PopFanSetNoiseImpact(a1, 0);
    v6 = *(_BYTE *)(a1 + 64);
  }
  else
  {
    if ( (unsigned int)dword_140E07560 > 5 )
    {
      v22 = a1;
      v26 = &v22;
      LODWORD(v21) = *(unsigned __int8 *)(a1 + 64);
      v27 = 8LL;
      v28 = &v21;
      v29 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004EEDB, 0LL, 0LL, 4u, v25);
    }
    switch ( *(_BYTE *)(a1 + 64) )
    {
      case 1:
        goto LABEL_42;
      case 2:
        goto LABEL_3;
      case 3:
        if ( (unsigned int)dword_140E07560 > 2 )
        {
          v22 = a1;
          v26 = &v22;
          v27 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E07560,
            (unsigned __int8 *)word_14004F3AA,
            0LL,
            0LL,
            3u,
            v25);
        }
LABEL_42:
        PopFanSetNoiseImpact(a1, 0);
        goto LABEL_43;
    }
  }
LABEL_47:
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    v22 = a1;
    v26 = &v22;
    v27 = 8LL;
    v28 = &v21;
    LODWORD(v21) = v6;
    v29 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004F3DD, 0LL, 0LL, 4u, v25);
  }
  switch ( v6 )
  {
    case 1u:
      v16 = *(IRP **)(a1 + 56);
      IoReuseIrp(v16, -1073741637);
      CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MajorFunction = 15;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2703940;
      CurrentStackLocation[-1].Parameters.Create.Options = 0;
      CurrentStackLocation[-1].Parameters.Read.Length = 20;
      v16->AssociatedIrp.MasterIrp = (struct _IRP *)(a1 + 108);
      goto LABEL_58;
    case 2u:
      PopPrepareIoctl(*(IRP **)(a1 + 56), 0x294240u, 1, (struct _IRP *)(a1 + 68), 0xCu, 0xCu);
      goto LABEL_58;
    case 3u:
      PopPrepareIoctl(*(IRP **)(a1 + 56), 0x298248u, 1, (struct _IRP *)(a1 + 92), 8u, 0);
LABEL_58:
      v18 = v4->Tail.Overlay.CurrentStackLocation;
      v18[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopFanIrpComplete;
      v19 = DeviceObject;
      v18[-1].Context = (PVOID)a1;
      v18[-1].Control = -32;
      *(_BYTE *)(a1 + 64) = v6;
      IofCallDriver(v19, v4);
      goto LABEL_59;
  }
  if ( (unsigned int)dword_140E07560 > 2 )
  {
    v22 = a1;
    v26 = &v22;
    LODWORD(v21) = *(unsigned __int8 *)(a1 + 64);
    v27 = 8LL;
    v28 = &v21;
    v29 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)&unk_14004F320, 0LL, 0LL, 4u, v25);
  }
LABEL_59:
  if ( v8 )
    PopFanUpdateRunningState(v7, v9, v10, v11);
  return PopReleaseRwLock((struct _KTHREAD *)(a1 + 400));
}
