/*
 * XREFs of DrvDbGetObjectDatabaseNodeName @ 0x140B55104
 * Callers:
 *     DrvDbGetDeviceIdMappedProperty @ 0x140976018 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14097690C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x140B64C8C (DrvDbGetDriverFileMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbGetObjectDatabaseNodeName(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v11; // [rsp+50h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-10h] BYREF

  Handle = 0LL;
  v11 = 0LL;
  *a6 = 0;
  v7 = DrvDbOpenObjectRegKey(a1, 0LL, a2, a3, 1u, 0, &Handle, 0LL, &v11);
  if ( v7 >= 0 )
  {
    v8 = v11;
    v9 = *(unsigned __int16 *)(v11 + 16) + 2;
    *a6 = v9;
    if ( a4 && a5 >= v9 )
      memmove(a4, *(const void **)(v8 + 24), v9);
    else
      v7 = -1073741789;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v7;
}
