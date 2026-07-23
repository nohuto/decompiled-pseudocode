/*
 * XREFs of PopPlRegisterComponent @ 0x1404DC810
 * Callers:
 *     PopPlRegisterDeviceIterator @ 0x140615840 (PopPlRegisterDeviceIterator.c)
 *     PopFxRegisterDeviceWorker @ 0x140B1DC50 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     PopPlLookupComponentPowerProfile @ 0x1406154B0 (PopPlLookupComponentPowerProfile.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopPlRegisterComponent(__int64 a1, __int64 a2, int a3)
{
  bool v4; // zf
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-69h]
  int v11; // [rsp+28h] [rbp-61h]
  __int16 v12; // [rsp+40h] [rbp-49h] BYREF
  BOOL v13; // [rsp+44h] [rbp-45h] BYREF
  int v14; // [rsp+48h] [rbp-41h] BYREF
  __int64 v15[15]; // [rsp+50h] [rbp-39h] BYREF
  _DWORD v16[2]; // [rsp+C8h] [rbp+3Fh] BYREF

  if ( PopPowerPlane )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1224LL);
    if ( v8 )
    {
      v9 = PopPlLookupComponentPowerProfile(v8, a1);
      if ( v9 )
        *(_QWORD *)(a1 + 432) = v9;
    }
  }
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    v15[5] = 2LL;
    v15[4] = (__int64)&v12;
    v12 = 1;
    v4 = *(_QWORD *)(a1 + 432) == 0LL;
    v15[6] = a1;
    v15[7] = 16LL;
    v13 = !v4;
    v15[8] = (__int64)&v13;
    v14 = *(_DWORD *)(a1 + 156);
    v15[10] = (__int64)&v14;
    v5 = *(_QWORD *)(a1 + 80);
    v15[9] = 4LL;
    v15[11] = 4LL;
    v6 = *(unsigned __int16 *)(v5 + 216);
    v7 = *(_QWORD *)(v5 + 224);
    v15[12] = (__int64)v16;
    v15[14] = v7;
    v16[0] = v6;
    v15[13] = 2LL;
    v16[1] = 0;
    tlgWriteEx_EtwWriteEx((int)&dword_140E07560, (int)&word_140051202, a3, 1, v10, v11, 8u, (__int64)v15);
  }
}
