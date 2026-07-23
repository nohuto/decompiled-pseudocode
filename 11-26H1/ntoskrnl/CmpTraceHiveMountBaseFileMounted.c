/*
 * XREFs of CmpTraceHiveMountBaseFileMounted @ 0x140A80588
 * Callers:
 *     HvLoadHive @ 0x140AC4740 (HvLoadHive.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpQueryNameString @ 0x140A80688 (CmpQueryNameString.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

void __fastcall CmpTraceHiveMountBaseFileMounted(__int64 a1, int a2)
{
  PVOID v3; // rbx
  __int16 v4; // [rsp+38h] [rbp-9h] BYREF
  _DWORD v5[2]; // [rsp+40h] [rbp-1h] BYREF
  PVOID P; // [rsp+48h] [rbp+7h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+1Fh] BYREF
  __int16 *v9; // [rsp+70h] [rbp+2Fh]
  __int64 v10; // [rsp+78h] [rbp+37h]
  int *v11; // [rsp+80h] [rbp+3Fh]
  __int64 v12; // [rsp+88h] [rbp+47h]
  int v13; // [rsp+B0h] [rbp+6Fh] BYREF

  v13 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_MOUNT_BASE_FILE_MOUNTED;
  v5[1] = 0;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    P = 0LL;
    v5[0] = 0;
    if ( (int)CmpQueryNameString(a1, v5) >= 0 )
    {
      v3 = P;
      UserData.Size = LOWORD(v5[0]);
      v9 = &v4;
      v11 = &v13;
      UserData.Ptr = (ULONGLONG)P;
      UserData.Reserved = 0;
      v4 = 0;
      v10 = 2LL;
      v12 = 4LL;
      EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 3u, &UserData);
      if ( v3 )
        ExFreePool(v3);
    }
  }
}
