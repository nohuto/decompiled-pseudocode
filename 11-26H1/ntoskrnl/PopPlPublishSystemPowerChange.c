/*
 * XREFs of PopPlPublishSystemPowerChange @ 0x140615730
 * Callers:
 *     PopPlNotifyDeviceFState @ 0x1403B7D3C (PopPlNotifyDeviceFState.c)
 *     PopPlNotifyDeviceDState @ 0x1403BD6EC (PopPlNotifyDeviceDState.c)
 *     PopPlUnregisterDevice @ 0x140509DE4 (PopPlUnregisterDevice.c)
 *     PopPlPublishInitialPowerDraw @ 0x1406155C0 (PopPlPublishInitialPowerDraw.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPlPublishSystemPowerChange(unsigned __int16 *a1, int a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-59h]
  int v9; // [rsp+28h] [rbp-51h]
  __int16 v10; // [rsp+40h] [rbp-39h] BYREF
  int v11; // [rsp+44h] [rbp-35h] BYREF
  int v12; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-29h] BYREF
  __int16 *v14; // [rsp+70h] [rbp-9h]
  __int64 v15; // [rsp+78h] [rbp-1h]
  _DWORD *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  __int64 v18; // [rsp+90h] [rbp+17h]
  _DWORD v19[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v20; // [rsp+A0h] [rbp+27h]
  __int64 v21; // [rsp+A8h] [rbp+2Fh]
  int *v22; // [rsp+B0h] [rbp+37h]
  __int64 v23; // [rsp+B8h] [rbp+3Fh]

  if ( a2 )
  {
    if ( (unsigned int)dword_140E07560 > 5 )
    {
      v19[1] = 0;
      v10 = 1;
      v14 = &v10;
      v15 = 2LL;
      v16 = v19;
      v18 = *((_QWORD *)a1 + 1);
      v19[0] = *a1;
      v20 = &v11;
      v5 = *((_DWORD *)a1 + 7);
      v17 = 2LL;
      v12 = a2 + v5;
      v22 = &v12;
      v11 = a2;
      v21 = 4LL;
      v23 = 4LL;
      tlgWriteEx_EtwWriteEx((__int64)&dword_140E07560, (unsigned __int8 *)&byte_140051369, a3, 1u, v8, v9, 7u, &v13);
    }
    v6 = *((_QWORD *)a1 + 4);
    *((_DWORD *)a1 + 7) += a2;
    return guard_dispatch_icall_no_overrides(v6, *((unsigned int *)a1 + 7));
  }
  return result;
}
