/*
 * XREFs of IoGetDriverDirectory @ 0x140B00ED0
 * Callers:
 *     DifIoGetDriverDirectoryWrapper @ 0x140660480 (DifIoGetDriverDirectoryWrapper.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiGetDriverMutableStateDirectory @ 0x1407A3DC4 (PiGetDriverMutableStateDirectory.c)
 *     PiGetServiceNameInfo @ 0x140A10FA4 (PiGetServiceNameInfo.c)
 *     PiGetDriverImageDirectory @ 0x140B01014 (PiGetDriverImageDirectory.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall IoGetDriverDirectory(__int64 a1, int a2, int a3, _QWORD *a4)
{
  void *v6; // rdi
  __int64 v9; // rax
  int ServiceNameInfo; // ebx
  int v12; // ebx
  const wchar_t *v13; // rdx
  char v14; // r8
  int DriverImageDirectory; // eax
  void *v16; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  char v18; // [rsp+70h] [rbp+30h] BYREF

  v16 = 0LL;
  v18 = 0;
  DestinationString = 0LL;
  v6 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a1 )
    goto LABEL_4;
  v9 = *(_QWORD *)(a1 + 48);
  if ( !v9 || !*(_QWORD *)(v9 + 32) || !*(_WORD *)(v9 + 24) || a3 || !a4 )
    goto LABEL_4;
  if ( !a2 )
  {
    DriverImageDirectory = PiGetDriverImageDirectory(a1, &v16);
    goto LABEL_21;
  }
  v12 = a2 - 1;
  if ( !v12 )
  {
    ServiceNameInfo = PiGetServiceNameInfo(a1, &DestinationString, &v18);
    if ( ServiceNameInfo < 0 )
      goto LABEL_5;
    v13 = L"Data";
    if ( v18 )
      v13 = L"UniqueData";
    v14 = 0;
    goto LABEL_29;
  }
  if ( v12 != 1 )
  {
LABEL_4:
    ServiceNameInfo = -1073741811;
    goto LABEL_5;
  }
  ServiceNameInfo = PiGetServiceNameInfo(a1, &DestinationString, &v18);
  if ( ServiceNameInfo < 0 )
    goto LABEL_5;
  v13 = L"SharedData";
  v14 = 1;
  if ( v18 )
    v13 = L"UniqueSharedData";
LABEL_29:
  DriverImageDirectory = PiGetDriverMutableStateDirectory(&DestinationString.Length, (__int64)v13, v14, &v16);
LABEL_21:
  ServiceNameInfo = DriverImageDirectory;
  if ( DriverImageDirectory < 0 )
    v6 = v16;
  else
    *a4 = v16;
LABEL_5:
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)ServiceNameInfo;
}
