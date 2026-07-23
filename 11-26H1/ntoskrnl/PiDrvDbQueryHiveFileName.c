/*
 * XREFs of PiDrvDbQueryHiveFileName @ 0x1407B936C
 * Callers:
 *     PiDrvDbMountNode @ 0x140B686B4 (PiDrvDbMountNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall PiDrvDbQueryHiveFileName(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  wchar_t *Buffer; // rdi
  unsigned __int16 MaximumLength; // si
  int v8; // eax
  unsigned __int16 v9; // bx
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  int v13; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v14; // [rsp+A8h] [rbp+58h] BYREF

  Handle = 0LL;
  v14 = 0;
  v13 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v5 = PnpCtxRegOpenKey(
         0,
         -2147483646,
         (unsigned int)L"SYSTEM\\CurrentControlSet\\Control\\HiveList",
         0,
         1,
         (__int64)&Handle);
  if ( v5 >= 0 )
  {
    Buffer = DestinationString.Buffer;
    MaximumLength = DestinationString.MaximumLength;
    while ( 1 )
    {
      v8 = PnpCtxRegQueryValue(v4, Handle, *(_QWORD *)(a1 + 8), &v13, Buffer, &v14);
      v5 = v8;
      if ( v8 != -1073741789 )
        break;
      if ( v13 != 1 )
        goto LABEL_17;
      v9 = v14;
      if ( v14 < 2 || v14 < MaximumLength || v14 > 0xFFFE )
        goto LABEL_17;
      if ( Buffer )
        ExFreePool(Buffer);
      DestinationString.MaximumLength = v9;
      MaximumLength = v9;
      DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
      {
        v5 = -1073741801;
        goto LABEL_18;
      }
    }
    if ( v8 < 0 )
      goto LABEL_18;
    if ( v13 == 1 && v14 - 2 <= 0xFFFC && !Buffer[((unsigned __int64)v14 >> 1) - 1] )
    {
      DestinationString.MaximumLength = v14;
      DestinationString.Length = v14 - 2;
      *a2 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      goto LABEL_18;
    }
LABEL_17:
    v5 = -1073741823;
  }
LABEL_18:
  RtlFreeAnsiString(&DestinationString);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
