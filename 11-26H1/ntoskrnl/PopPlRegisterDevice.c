/*
 * XREFs of PopPlRegisterDevice @ 0x1404E8C8C
 * Callers:
 *     PopPlRegisterDeviceIterator @ 0x140615840 (PopPlRegisterDeviceIterator.c)
 *     PopFxRegisterDeviceWorker @ 0x140B1DC50 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     PopPlLookupDevicePowerProfile @ 0x140615500 (PopPlLookupDevicePowerProfile.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

bool __fastcall PopPlRegisterDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  bool v6; // zf
  int v7; // [rsp+20h] [rbp-59h]
  int v8; // [rsp+28h] [rbp-51h]
  __int16 v9; // [rsp+40h] [rbp-39h] BYREF
  BOOL v10; // [rsp+44h] [rbp-35h] BYREF
  int v11; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-29h] BYREF
  __int16 *v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  _DWORD *v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  __int64 v17; // [rsp+90h] [rbp+17h]
  _DWORD v18[2]; // [rsp+98h] [rbp+1Fh] BYREF
  BOOL *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  int *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  if ( PopPowerPlane )
  {
    v5 = PopPlLookupDevicePowerProfile(PopPowerPlane, a1 + 216);
    if ( v5 )
    {
      *(_QWORD *)(v5 + 24) = a1;
      *(_QWORD *)(a1 + 1224) = v5;
    }
  }
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    v14 = 2LL;
    v13 = &v9;
    v16 = 2LL;
    v15 = v18;
    v17 = *(_QWORD *)(a1 + 224);
    v18[0] = *(unsigned __int16 *)(a1 + 216);
    v6 = *(_QWORD *)(a1 + 1224) == 0LL;
    v9 = 1;
    v18[1] = 0;
    v10 = !v6;
    v19 = &v10;
    v11 = *(_DWORD *)(a1 + 868);
    v21 = &v11;
    v20 = 4LL;
    v22 = 4LL;
    tlgWriteEx_EtwWriteEx((__int64)&dword_140E07560, (unsigned __int8 *)&byte_140051277, a3, 1u, v7, v8, 7u, &v12);
  }
  return *(_QWORD *)(a1 + 1224) != 0LL;
}
