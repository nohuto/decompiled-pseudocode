/*
 * XREFs of KitLogFeatureUsage @ 0x1406D6580
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     RtlPcToFileName @ 0x14040DB30 (RtlPcToFileName.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlPcToFilePath @ 0x140B129A0 (RtlPcToFilePath.c)
 */

NTSTATUS __fastcall KitLogFeatureUsage(ULONGLONG a1, unsigned __int64 a2, int a3)
{
  int v6; // ebx
  int v7; // eax
  __int16 v9; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+4Ch] [rbp-BCh] BYREF
  UNICODE_STRING v11; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  int *v13; // [rsp+78h] [rbp-90h]
  __int64 v14; // [rsp+80h] [rbp-88h]
  __int16 *v15; // [rsp+88h] [rbp-80h]
  __int64 v16; // [rsp+90h] [rbp-78h]
  wchar_t *Buffer; // [rsp+98h] [rbp-70h]
  int Length; // [rsp+A0h] [rbp-68h]
  int v19; // [rsp+A4h] [rbp-64h]
  _BYTE v20[512]; // [rsp+A8h] [rbp-60h] BYREF

  v10 = a3;
  v11 = 0LL;
  if ( ExpUuidLock.Header.WaitListHead.Flink
    && EtwEventEnabled((REGHANDLE)ExpUuidLock.Header.WaitListHead.Flink, &KitFeatureIdUsedEvent) )
  {
    if ( a3 )
    {
      v6 = a3 - 1;
      if ( v6 )
      {
        if ( v6 != 1 || (a2 = *(_QWORD *)(a2 + 8)) == 0 )
        {
LABEL_13:
          v10 = 3;
          v11 = *(UNICODE_STRING *)NoCallerIdString;
LABEL_14:
          v13 = &v10;
          v9 = v11.Length >> 1;
          v15 = &v9;
          Buffer = v11.Buffer;
          Length = v11.Length;
          v14 = 4LL;
          UserData.Ptr = a1;
          *(_QWORD *)&UserData.Size = 16LL;
          v16 = 2LL;
          v19 = 0;
          return EtwWriteEx(
                   (REGHANDLE)ExpUuidLock.Header.WaitListHead.Flink,
                   &KitFeatureIdUsedEvent,
                   0LL,
                   0,
                   0LL,
                   0LL,
                   4u,
                   &UserData);
        }
      }
      a2 = *(_QWORD *)(a2 + 24);
    }
    if ( a2 )
    {
      memset_0(v20, 0, 0x1FEuLL);
      v11.MaximumLength = 510;
      v11.Buffer = (wchar_t *)v20;
      v7 = KeGetCurrentIrql() > 1u ? RtlPcToFileName(a2, &v11) : RtlPcToFilePath(a2, &v11);
      if ( v7 >= 0 )
        goto LABEL_14;
    }
    goto LABEL_13;
  }
  return 0;
}
