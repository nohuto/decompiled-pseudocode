/*
 * XREFs of PiDrvDbLoadHive @ 0x140B1F060
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x1407B7DA0 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140B1EEB0 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwLoadKeyEx @ 0x140725650 (ZwLoadKeyEx.c)
 *     ZwUnloadKey2 @ 0x140726F70 (ZwUnloadKey2.c)
 */

__int64 __fastcall PiDrvDbLoadHive(UNICODE_STRING *a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  int Key; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v8[4]; // [rsp+78h] [rbp+27h] BYREF
  __int128 v9; // [rsp+98h] [rbp+47h]

  ObjectAttributes.ObjectName = a1;
  *a4 = 0LL;
  v8[2] = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v8[0] = 48LL;
  v8[3] = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8[1] = 0LL;
  v9 = 0LL;
  Key = ZwLoadKeyEx((__int64)&ObjectAttributes, (__int64)v8);
  if ( Key >= 0 )
  {
    Key = ZwOpenKey(a4, 0x2000000u, &ObjectAttributes);
    if ( Key < 0 )
      ZwUnloadKey2((__int64)&ObjectAttributes, 0LL);
  }
  return (unsigned int)Key;
}
