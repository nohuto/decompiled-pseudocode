/*
 * XREFs of StorPortInitialize @ 0x14006FFB0
 * Callers:
 *     sub_140183060 @ 0x140183060 (sub_140183060.c)
 * Callees:
 *     sub_140033DA4 @ 0x140033DA4 (sub_140033DA4.c)
 *     sub_14006ECD0 @ 0x14006ECD0 (sub_14006ECD0.c)
 *     sub_14006EDA8 @ 0x14006EDA8 (sub_14006EDA8.c)
 *     sub_1400715A8 @ 0x1400715A8 (sub_1400715A8.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     sub_140178190 @ 0x140178190 (sub_140178190.c)
 *     sub_14017B104 @ 0x14017B104 (sub_14017B104.c)
 *     sub_14017B158 @ 0x14017B158 (sub_14017B158.c)
 *     sub_14017B29C @ 0x14017B29C (sub_14017B29C.c)
 *     sub_14017B33C @ 0x14017B33C (sub_14017B33C.c)
 *     sub_14017B628 @ 0x14017B628 (sub_14017B628.c)
 *     sub_14017B6B8 @ 0x14017B6B8 (sub_14017B6B8.c)
 *     sub_1401B9044 @ 0x1401B9044 (sub_1401B9044.c)
 */

__int64 __fastcall StorPortInitialize(__int64 DriverObject, _DWORD *a2, unsigned int *a3, __int64 a4)
{
  _DWORD *v6; // r15
  struct _DRIVER_OBJECT *v7; // r14
  char v8; // r12
  NTSTATUS v9; // ebx
  void (__fastcall *v10)(struct _DRIVER_OBJECT *, _DWORD *); // rax
  __int64 v11; // rsi
  __int64 v12; // r8
  int v13; // r9d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  NTSTATUS v17; // r9d
  void (__fastcall *v18)(struct _DRIVER_OBJECT *); // rax
  __int64 v20; // [rsp+58h] [rbp-61h]
  __int64 v21; // [rsp+60h] [rbp-59h]
  __int64 v22; // [rsp+68h] [rbp-51h]
  __int64 v23; // [rsp+70h] [rbp-49h]
  __int64 v24; // [rsp+78h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-39h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+90h] [rbp-29h] BYREF
  _PCW_REGISTRATION_INFORMATION Info; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v28; // [rsp+D0h] [rbp+17h]
  PVOID DriverObjectExtension; // [rsp+120h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+128h] [rbp+6Fh] BYREF

  DeviceObject = 0LL;
  DriverObjectExtension = 0LL;
  v6 = a2;
  LODWORD(v28) = 0;
  v7 = (struct _DRIVER_OBJECT *)DriverObject;
  DestinationString = 0LL;
  v8 = 0;
  SymbolicLinkName = 0LL;
  memset(&Info, 0, sizeof(Info));
  if ( !byte_1401687F0 )
  {
    sub_1401B9044();
    byte_1401687F0 = 1;
  }
  if ( !v7 || !v6 || !a3 )
    goto LABEL_68;
  DriverObject = *a3;
  if ( (_DWORD)DriverObject != 208 && (_DWORD)DriverObject != 176 && (_DWORD)DriverObject != 136
    || !*((_QWORD *)a3 + 1)
    || !*((_QWORD *)a3 + 4)
    || !*((_QWORD *)a3 + 5) )
  {
    goto LABEL_9;
  }
  a2 = a3 + 46;
  if ( (_DWORD)DriverObject == 208 && (*a2 & 0x40000) != 0 )
  {
    if ( *((_QWORD *)a3 + 2) )
      goto LABEL_9;
    goto LABEL_19;
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
LABEL_9:
    v9 = -1073741735;
    goto LABEL_69;
  }
  if ( (_DWORD)DriverObject == 208 )
  {
LABEL_19:
    if ( (*a2 & 0x4000) == 0 || (a3[47] & 2) != 0 )
      goto LABEL_21;
LABEL_68:
    v9 = -1073741811;
LABEL_69:
    if ( _InterlockedExchangeAdd(&dword_140168758, 0xFFFFFFFF) == 1 && byte_140168749 )
    {
      sub_14017B33C(DriverObject, a2);
      byte_140168749 = 0;
    }
    if ( DriverObjectExtension )
      sub_140178190(DriverObjectExtension);
    DriverObjectExtension = 0LL;
    if ( v8 )
    {
      v18 = (void (__fastcall *)(struct _DRIVER_OBJECT *))*((_QWORD *)a3 + 21);
      if ( v18 )
        v18(v7);
    }
    return (unsigned int)v9;
  }
LABEL_21:
  if ( _InterlockedIncrement(&dword_140168758) == 1 )
  {
    if ( !byte_140168749 )
    {
      *(_QWORD *)&stru_1401692A0.Type = 0LL;
      stru_1401692A0.DriverObject = (struct _DRIVER_OBJECT *)&unk_14014B0E0;
      stru_1401692A0.NextDevice = 0LL;
      stru_1401692A0.CurrentIrp = 0LL;
      stru_1401692A0.Timer = (PIO_TIMER)1;
      sub_14017B6B8(DriverObject, a2);
      stru_1401692A0.CurrentIrp = 0LL;
      sub_14017B628();
      byte_140168749 = 1;
    }
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (PCUNICODE_STRING)L"&(";
    *(_QWORD *)&Info.CounterCount = 56LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&unk_14014AAB0;
    v28 = 0LL;
    Info.Callback = (PPCW_CALLBACK)sub_140032F80;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&Registration, &Info) < 0 )
      Registration = 0LL;
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (PCUNICODE_STRING)L"(*";
    *(_QWORD *)&Info.CounterCount = 56LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&unk_14014AAB0;
    v28 = 0LL;
    Info.Callback = (PPCW_CALLBACK)sub_140032DC0;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&qword_1401685C0, &Info) < 0 )
      qword_1401685C0 = 0LL;
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (PCUNICODE_STRING)L".0";
    *(_QWORD *)&Info.CounterCount = 56LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&unk_14014AAB0;
    v28 = 0LL;
    Info.Callback = (PPCW_CALLBACK)sub_140033020;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&qword_1401686E8, &Info) < 0 )
      qword_1401686E8 = 0LL;
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (PCUNICODE_STRING)L"&(";
    *(_QWORD *)&Info.CounterCount = 2LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&unk_14014A1B8;
    v28 = 0LL;
    Info.Callback = (PPCW_CALLBACK)sub_140032F40;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&qword_140168538, &Info) < 0 )
      qword_140168538 = 0LL;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 2) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400715A8(off_140168120->AttachedDevice, 10LL, &unk_14014C488, v7, v6, a3, a4);
  }
  if ( *a3 == 176 || *a3 == 208 && (a3[46] & 1) != 0 )
  {
    v10 = (void (__fastcall *)(struct _DRIVER_OBJECT *, _DWORD *))*((_QWORD *)a3 + 20);
    if ( v10 )
    {
      v10(v7, v6);
      v8 = 1;
    }
  }
  v11 = sub_140033DA4();
  if ( !v11 )
  {
    v9 = -1073741801;
    goto LABEL_69;
  }
  DriverObjectExtension = IoGetDriverObjectExtension(v7, StorPortGetSrb);
  if ( !DriverObjectExtension )
  {
    v9 = IoAllocateDriverObjectExtension(v7, StorPortGetSrb, 0x70u, &DriverObjectExtension);
    if ( v9 < 0 )
      goto LABEL_69;
    sub_14017B104(DriverObjectExtension);
    v9 = sub_14017B158(DriverObjectExtension, v7, v11, v6);
    if ( v9 < 0 )
      goto LABEL_69;
  }
  v13 = *a3;
  if ( *a3 == 208 )
  {
    if ( (byte_1401694F0 & 0x10) != 0 )
      sub_14006EDA8(
        DriverObject,
        (__int64)a2,
        v12,
        208,
        a3[1],
        a3[16],
        a3[17],
        a3[18],
        a3[46],
        a3[47],
        a3[48],
        *((_QWORD *)a3 + 17),
        *((_QWORD *)a3 + 18),
        *((_QWORD *)a3 + 19),
        *((_QWORD *)a3 + 20),
        *((_QWORD *)a3 + 21));
  }
  else
  {
    if ( v13 == 176 )
    {
      if ( (byte_1401694F0 & 0x10) == 0 )
        goto LABEL_55;
      v24 = *((_QWORD *)a3 + 21);
      v23 = *((_QWORD *)a3 + 20);
      v22 = *((_QWORD *)a3 + 19);
      v21 = *((_QWORD *)a3 + 18);
      v20 = *((_QWORD *)a3 + 17);
    }
    else
    {
      if ( (byte_1401694F0 & 0x10) == 0 )
        goto LABEL_55;
      LOBYTE(v24) = 0;
      LOBYTE(v23) = 0;
      LOBYTE(v22) = 0;
      LOBYTE(v21) = 0;
      LOBYTE(v20) = 0;
    }
    sub_14006EDA8(DriverObject, (__int64)a2, v12, v13, a3[1], a3[16], a3[17], a3[18], 0, 0, 0, v20, v21, v22, v23, v24);
  }
LABEL_55:
  v14 = sub_14017B29C(DriverObjectExtension, a3);
  v9 = v14;
  if ( v14 >= 0 )
    v8 = 0;
  *((_WORD *)a3 + 52) |= 0x10u;
  if ( !byte_1401687B0 || *a3 != 208 || (a3[46] & 0x8000) == 0 || ::DeviceObject )
  {
    if ( v14 >= 0 )
      return (unsigned int)v9;
    goto LABEL_69;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device\\StorportControl");
  v17 = IoCreateDevice(v7, 4u, &DestinationString, 0x15u, 0x100u, 0, &DeviceObject);
  if ( v17 < 0 )
  {
    if ( (byte_1401694F7 & 1) != 0 )
      sub_14006ECD0(v15, &stru_14014A760, v16, v17);
  }
  else
  {
    ::DeviceObject = DeviceObject;
    *(_DWORD *)DeviceObject->DeviceExtension = 1146246738;
    RtlInitUnicodeString(&SymbolicLinkName, L"\\DosDevices\\StorportControl");
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
  }
  return 0;
}
