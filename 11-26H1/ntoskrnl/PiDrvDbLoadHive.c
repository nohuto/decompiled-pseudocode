/*
 * XREFs of PiDrvDbLoadHive @ 0x140B210E0
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x1407BAE00 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140B20F30 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwLoadKeyEx @ 0x14072A220 (ZwLoadKeyEx.c)
 *     ZwUnloadKey2 @ 0x14072BB40 (ZwUnloadKey2.c)
 */

__int64 __fastcall PiDrvDbLoadHive(UNICODE_STRING *a1, UNICODE_STRING *a2, int a3, HANDLE *a4)
{
  NTSTATUS v5; // ebx
  OBJECT_ATTRIBUTES TargetKey; // [rsp+48h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES SourceFile; // [rsp+78h] [rbp+27h] BYREF

  TargetKey.ObjectName = a1;
  *a4 = 0LL;
  SourceFile.ObjectName = a2;
  *(_QWORD *)&TargetKey.Length = 48LL;
  *(_QWORD *)&TargetKey.Attributes = 576LL;
  *(_QWORD *)&SourceFile.Length = 48LL;
  *(_QWORD *)&SourceFile.Attributes = 576LL;
  TargetKey.RootDirectory = 0LL;
  *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
  SourceFile.RootDirectory = 0LL;
  *(_OWORD *)&SourceFile.SecurityDescriptor = 0LL;
  v5 = ZwLoadKeyEx(&TargetKey, &SourceFile, a3 | 0x80, 0LL, 0LL, 0, 0LL, 0LL);
  if ( v5 >= 0 )
  {
    v5 = ZwOpenKey(a4, 0x2000000u, &TargetKey);
    if ( v5 < 0 )
      ZwUnloadKey2(&TargetKey, 0);
  }
  return (unsigned int)v5;
}
