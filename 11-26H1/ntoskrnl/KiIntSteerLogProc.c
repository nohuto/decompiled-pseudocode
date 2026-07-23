/*
 * XREFs of KiIntSteerLogProc @ 0x140256278
 * Callers:
 *     KiIntSteerLogStatus @ 0x140256580 (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KiIntSteerEtwEventEnabled @ 0x140256674 (KiIntSteerEtwEventEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiIntSteerLogProc(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rsi
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int16 i; // di
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-40h] BYREF
  __int64 v10; // [rsp+58h] [rbp-30h]
  __int64 v11; // [rsp+60h] [rbp-28h]

  v8 = 0;
  v1 = (const EVENT_DESCRIPTOR *)PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE;
  if ( a1 )
    v1 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  result = KiIntSteerEtwEventEnabled(v1);
  if ( (_BYTE)result )
  {
    v3 = *(unsigned __int64 *)((char *)&stru_140FC11F0.116 + 4);
    for ( i = 0; ; v3 = *(unsigned __int64 *)((char *)&stru_140FC11F0.116 + 8 * i + 4) )
    {
      while ( v3 )
      {
        _BitScanForward64(&v5, v3);
        v6 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * i].Flink
             + (unsigned __int8)v5);
        UserData.Ptr = (ULONGLONG)&v8;
        v8 = v6;
        v7 = KiProcessorBlock[v6];
        *(_QWORD *)&UserData.Size = 4LL;
        v10 = v7 + 11672;
        v11 = 4LL;
        EtwWriteEx(KiIntSteerEtwHandle, v1, 0LL, 0, 0LL, 0LL, 2u, &UserData);
        v3 &= ~(1LL << v5);
      }
      result = ++i;
      if ( i >= (unsigned int)*(unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags )
        break;
    }
  }
  return result;
}
