/*
 * XREFs of CiNdisOpenDevice @ 0x14000DC9C
 * Callers:
 *     DriverEntry @ 0x140010540 (DriverEntry.c)
 * Callees:
 *     WPP_SF_d @ 0x140004844 (WPP_SF_d.c)
 */

__int64 CiNdisOpenDevice()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  struct _IO_STATUS_BLOCK v3; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v4; // [rsp+40h] [rbp-38h] BYREF

  *(_QWORD *)&v4.Length = 48LL;
  v4.RootDirectory = 0LL;
  *(_QWORD *)&v4.Attributes = 576LL;
  v4.ObjectName = (PUNICODE_STRING)&CiNdisDevceName;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  v3 = 0LL;
  v0 = ZwOpenFile(&CiNdisDeviceHandle, 0x12019Fu, &v4, &v3, 7u, 0x20u);
  v1 = v0;
  if ( v0 < 0 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xCu,
      (__int64)&WPP_89c284160bb53783ce2da67874a87e3c_Traceguids,
      v0);
  return v1;
}
