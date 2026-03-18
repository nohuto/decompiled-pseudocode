/*
 * XREFs of PoDeviceReleaseIrp @ 0x140212C90
 * Callers:
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     PoHandleIrp @ 0x140486AFC (PoHandleIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PoDeviceReleaseIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // [rsp+40h] [rbp-48h] BYREF
  __int64 v6; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-28h]
  __int64 v9; // [rsp+68h] [rbp-20h]

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    v3 = *(char *)(a1 + 66);
    v6 = a3;
    v4 = *(_QWORD *)(a1 + 72 * v3 + 200);
    v5 = a1;
    if ( byte_140E67628 )
    {
      if ( EtwEventEnabled(
             *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
             &POP_ETW_EVENT_IRP_DRIVERRELEASE) )
      {
        UserData.Ptr = (ULONGLONG)&v5;
        *(_QWORD *)&UserData.Size = 8LL;
        v8 = &v6;
        v9 = 8LL;
        EtwWriteEx(
          *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
          &POP_ETW_EVENT_IRP_DRIVERRELEASE,
          0LL,
          0,
          0LL,
          0LL,
          2u,
          &UserData);
      }
    }
    *(_QWORD *)(v4 + 40) = 0LL;
  }
}
