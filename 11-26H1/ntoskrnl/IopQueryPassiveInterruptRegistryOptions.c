/*
 * XREFs of IopQueryPassiveInterruptRegistryOptions @ 0x1407A6724
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 */

__int64 IopQueryPassiveInterruptRegistryOptions()
{
  int RegistryValues; // r8d
  char v1; // cl
  char v2; // al
  ULONG v4; // [rsp+20h] [rbp-E0h]
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8[4]; // [rsp+40h] [rbp-C0h] BYREF
  const wchar_t *v9; // [rsp+50h] [rbp-B0h]
  int *v10; // [rsp+58h] [rbp-A8h]
  int v11; // [rsp+60h] [rbp-A0h]
  int *v12; // [rsp+68h] [rbp-98h]
  int v13; // [rsp+70h] [rbp-90h]
  int v14; // [rsp+80h] [rbp-80h]
  const wchar_t *v15; // [rsp+88h] [rbp-78h]
  int *v16; // [rsp+90h] [rbp-70h]
  int v17; // [rsp+98h] [rbp-68h]
  int *v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  int v20; // [rsp+B8h] [rbp-48h]
  const wchar_t *v21; // [rsp+C0h] [rbp-40h]
  int *v22; // [rsp+C8h] [rbp-38h]
  int v23; // [rsp+D0h] [rbp-30h]
  int *v24; // [rsp+D8h] [rbp-28h]
  int v25; // [rsp+E0h] [rbp-20h]

  memset_0(v8, 0, 0xE0uLL);
  v7 = (unsigned __int8)PassiveInterruptForceCriticalWorker;
  v5 = (unsigned __int8)PassiveInterruptRealtimeWorkerCount;
  v6 = (unsigned __int8)PassiveInterruptRealtimeWorkerPriority;
  v9 = L"PassiveIntRealTimeWorkerCount";
  v10 = &v5;
  v12 = &v5;
  v15 = L"PassiveIntRealTimeWorkerPriority";
  v16 = &v6;
  v18 = &v6;
  v21 = L"PassiveIntForceCriticalWorker";
  v22 = &v7;
  v8[2] = 288;
  v11 = 67108868;
  v14 = 288;
  v17 = 67108868;
  v20 = 288;
  v23 = 67108868;
  v24 = &v7;
  v13 = 0;
  v19 = 0;
  v25 = 0;
  RegistryValues = RtlpQueryRegistryValues(2, (int)L"Session Manager\\I/O System", (int)v8, 0, v4, 1);
  if ( RegistryValues >= 0 )
  {
    if ( (_BYTE)v5 )
    {
      v1 = v5;
      if ( (unsigned __int8)v5 > 0x10u )
        v1 = 16;
      PassiveInterruptRealtimeWorkerCount = v1;
    }
    if ( (unsigned __int8)v6 > 0x10u )
    {
      v2 = v6;
      if ( (unsigned __int8)v6 > 0x15u )
        v2 = 21;
      PassiveInterruptRealtimeWorkerPriority = v2;
    }
  }
  return (unsigned int)RegistryValues;
}
