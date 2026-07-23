/*
 * XREFs of PopPlRegisterDeviceIterator @ 0x140615840
 * Callers:
 *     <none>
 * Callees:
 *     PopPlRegisterComponent @ 0x1404DC810 (PopPlRegisterComponent.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     PopPlRegisterDevice @ 0x1404E8C8C (PopPlRegisterDevice.c)
 *     PopPlCalculateDevicePowerDraw @ 0x140615364 (PopPlCalculateDevicePowerDraw.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopPlRegisterDeviceIterator(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  int v6; // r8d
  unsigned __int64 i; // rdi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rax
  int v13; // [rsp+20h] [rbp-99h]
  int v14; // [rsp+28h] [rbp-91h]
  unsigned int v15; // [rsp+40h] [rbp-79h] BYREF
  int v16; // [rsp+44h] [rbp-75h] BYREF
  int v17; // [rsp+48h] [rbp-71h] BYREF
  int v18; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v19; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-59h] BYREF
  unsigned int *v21; // [rsp+80h] [rbp-39h]
  __int64 v22; // [rsp+88h] [rbp-31h]
  _DWORD *v23; // [rsp+90h] [rbp-29h]
  __int64 v24; // [rsp+98h] [rbp-21h]
  __int64 v25; // [rsp+A0h] [rbp-19h]
  _DWORD v26[2]; // [rsp+A8h] [rbp-11h] BYREF
  int *v27; // [rsp+B0h] [rbp-9h]
  __int64 v28; // [rsp+B8h] [rbp-1h]
  int *v29; // [rsp+C0h] [rbp+7h]
  __int64 v30; // [rsp+C8h] [rbp+Fh]
  int *v31; // [rsp+D0h] [rbp+17h]
  __int64 v32; // [rsp+D8h] [rbp+1Fh]
  int *v33; // [rsp+E0h] [rbp+27h]
  __int64 v34; // [rsp+E8h] [rbp+2Fh]

  v3 = *(_QWORD *)(a1 + 32);
  if ( PopPlRegisterDevice(v3, (__int64)a2, a3) )
  {
    for ( i = 0LL;
          i < *(unsigned int *)(v3 + 868);
          PopPlRegisterComponent(*(_QWORD *)(*(_QWORD *)(v3 + 872) + 8 * i++), v5, v6) )
    {
      ;
    }
    v8 = *(_QWORD *)(v3 + 1224);
    v15 = 0;
    v16 = 1;
    v9 = PopPlCalculateDevicePowerDraw(v3, &v16, &v15, 0LL);
    *(_DWORD *)(v8 + 32) = v9;
    if ( (unsigned int)dword_140E07560 > 5 )
    {
      v17 = v9;
      v21 = &v15;
      LOWORD(v15) = 1;
      v23 = v26;
      v25 = *(_QWORD *)(v3 + 224);
      v26[0] = *(unsigned __int16 *)(v3 + 216);
      v27 = &v16;
      v29 = &v17;
      v31 = &v18;
      v11 = *(_QWORD *)(v8 + 16);
      v22 = 2LL;
      v24 = 2LL;
      v26[1] = 0;
      v16 = 0;
      v28 = 4LL;
      v30 = 4LL;
      v18 = 0;
      v32 = 4LL;
      v19 = *(_DWORD *)(v11 + 28);
      v33 = &v19;
      v34 = 4LL;
      tlgWriteEx_EtwWriteEx((__int64)&dword_140E07560, (unsigned __int8 *)&byte_1400510B1, v10, 1u, v13, v14, 9u, &v20);
    }
    *a2 += *(_DWORD *)(v8 + 32);
  }
  return 1;
}
