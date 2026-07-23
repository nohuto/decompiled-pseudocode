/*
 * XREFs of PipUnloadEarlyLaunchDrivers @ 0x140CC96B0
 * Callers:
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x14072BB40 (ZwUnloadKey2.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 */

NTSTATUS __fastcall PipUnloadEarlyLaunchDrivers(UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING *v2; // rdi
  UNICODE_STRING *v3; // rbx
  UNICODE_STRING *v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+30h] [rbp-30h] BYREF

  result = 0;
  v2 = a1 + 4;
  v3 = *(UNICODE_STRING **)&a1[4].Length;
  *(&TargetKey.Length + 1) = 0;
  *(&TargetKey.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( v3 != &a1[4] )
  {
    do
    {
      v4 = v3;
      v3 = *(UNICODE_STRING **)&v3->Length;
      if ( SLODWORD(v4[3].Buffer) >= 0 )
        IopUnloadDriver(v4 + 2, 1);
    }
    while ( v3 != v2 );
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\ELAM");
    TargetKey.Length = 48;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.RootDirectory = 0LL;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    return ZwUnloadKey2(&TargetKey, 1u);
  }
  return result;
}
