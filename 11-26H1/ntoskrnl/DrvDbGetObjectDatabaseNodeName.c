/*
 * XREFs of DrvDbGetObjectDatabaseNodeName @ 0x140B52864
 * Callers:
 *     DrvDbGetDeviceIdMappedProperty @ 0x14091B5B8 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14091BEAC (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14091C280 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x140B61BEC (DrvDbGetDriverFileMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbGetObjectDatabaseNodeName(
        _QWORD *a1,
        unsigned int a2,
        wchar_t *a3,
        void *a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v11; // [rsp+50h] [rbp-18h] BYREF
  HANDLE Handle[2]; // [rsp+58h] [rbp-10h] BYREF

  Handle[0] = 0LL;
  v11 = 0LL;
  *a6 = 0;
  v7 = DrvDbOpenObjectRegKey(a1, 0LL, a2, a3, 1u, 0, (__int64)Handle, 0LL, &v11);
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
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v7;
}
