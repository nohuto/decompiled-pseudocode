/*
 * XREFs of BapdpRecordIumStatus @ 0x140CE9478
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     BapdRegisterEtwProvider @ 0x140504704 (BapdRegisterEtwProvider.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 */

int BapdpRecordIumStatus()
{
  int result; // eax
  const EVENT_DESCRIPTOR *v1; // rdx
  ULONGLONG v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  REGHANDLE RegHandle; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v7; // [rsp+58h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp-10h]

  RegHandle = 0LL;
  result = BapdRegisterEtwProvider(&BOOTENV_ETW_PROVIDER, 1, &RegHandle);
  if ( result >= 0 )
  {
    v1 = (const EVENT_DESCRIPTOR *)BOOT_ENVIRONMENT_VSM_POLICY_ENABLEMENT;
    v2 = *(_QWORD *)(KeLoaderBlock_0 + 240) + 2896LL;
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = v2;
    v3 = *(_QWORD *)(KeLoaderBlock_0 + 240) + 2888LL;
    v8 = 4LL;
    v7 = v3;
    v4 = *(_QWORD *)(KeLoaderBlock_0 + 240) + 2892LL;
    v10 = 4LL;
    v9 = v4;
    if ( *(int *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2896LL) < 0 )
      v1 = &BOOT_ENVIRONMENT_VSM_POLICY_ENABLEMENT_FAILURE;
    result = EtwWriteEx(RegHandle, v1, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  if ( RegHandle )
    return EtwUnregister(RegHandle);
  return result;
}
