/*
 * XREFs of sub_1401B06F4 @ 0x1401B06F4
 * Callers:
 *     sub_14003A894 @ 0x14003A894 (sub_14003A894.c)
 *     sub_14003C2CC @ 0x14003C2CC (sub_14003C2CC.c)
 *     sub_14003F914 @ 0x14003F914 (sub_14003F914.c)
 *     sub_140044660 @ 0x140044660 (sub_140044660.c)
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 *     sub_1400BBFCC @ 0x1400BBFCC (sub_1400BBFCC.c)
 *     sub_1401926C4 @ 0x1401926C4 (sub_1401926C4.c)
 *     sub_1401B34BC @ 0x1401B34BC (sub_1401B34BC.c)
 * Callees:
 *     sub_1401B0EEC @ 0x1401B0EEC (sub_1401B0EEC.c)
 */

__int64 __fastcall sub_1401B06F4(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  NTSTATUS v9; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  Handle = 0LL;
  v9 = IoOpenDeviceRegistryKey(a1, 1u, 0x20006u, &Handle);
  if ( v9 >= 0 )
  {
    v9 = sub_1401B0EEC(Handle, a2, a3, a4, a5, a6);
    ZwClose(Handle);
  }
  return (unsigned int)v9;
}
