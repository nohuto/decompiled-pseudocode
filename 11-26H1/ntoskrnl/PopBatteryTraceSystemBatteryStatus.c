/*
 * XREFs of PopBatteryTraceSystemBatteryStatus @ 0x1404F0044
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 *     PopBatteryEtwCallback @ 0x140B4FC50 (PopBatteryEtwCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall PopBatteryTraceSystemBatteryStatus(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  unsigned __int64 v3; // rax
  int ThreadLock_high; // ecx
  int ThreadLock; // edx
  int StackBase_high; // r8d
  int StackBase; // r9d
  int StackLimit_high; // r10d
  int StackLimit; // r11d
  int QuantumTarget; // edi
  int CycleTime; // eax
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+4Ch] [rbp-BCh] BYREF
  int v15; // [rsp+54h] [rbp-B4h] BYREF
  int v16; // [rsp+58h] [rbp-B0h] BYREF
  int v17; // [rsp+5Ch] [rbp-ACh] BYREF
  int v18; // [rsp+60h] [rbp-A8h] BYREF
  int v19; // [rsp+64h] [rbp-A4h] BYREF
  int v20; // [rsp+68h] [rbp-A0h] BYREF
  int v21; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v22; // [rsp+70h] [rbp-98h] BYREF
  int v23; // [rsp+74h] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  char *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  int *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  int *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  int *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  int *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  int *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  int *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  int *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  int *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  int *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]

  v1 = &BATTERY_EVT_SYSTEM_BATTERY_STATUS_RUNDOWN;
  v2 = (const EVENT_DESCRIPTOR *)BATTERY_EVT_SYSTEM_BATTERY_STATUS_CHANGE;
  if ( a1 )
    v2 = &BATTERY_EVT_SYSTEM_BATTERY_STATUS_RUNDOWN;
  if ( PopBatteryEtwRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled((REGHANDLE)PopWeakChargerLock.Header.WaitListHead.Blink, v2);
    if ( (_BYTE)v1 )
    {
      if ( BYTE1(stru_140F10070.Header.WaitListHead.Blink) )
      {
        v14 = xmmword_140F0FEA0;
        v13 = 1;
        if ( LODWORD(stru_140F10070.SListFaultAddress) )
          v3 = 100000
             * (unsigned __int64)HIDWORD(stru_140F10070.SListFaultAddress)
             / LODWORD(stru_140F10070.SListFaultAddress);
        else
          LODWORD(v3) = 0;
        ThreadLock_high = HIDWORD(stru_140F10070.ThreadLock);
        ThreadLock = stru_140F10070.ThreadLock;
        StackBase_high = HIDWORD(stru_140F10070.StackBase);
        StackBase = (int)stru_140F10070.StackBase;
        StackLimit_high = HIDWORD(stru_140F10070.StackLimit);
        StackLimit = (int)stru_140F10070.StackLimit;
        QuantumTarget = stru_140F10070.QuantumTarget;
        v15 = v3;
        CycleTime = stru_140F10070.CycleTime;
      }
      else
      {
        CycleTime = -1;
        v13 = 0;
        ThreadLock_high = -1;
        v14 = 0LL;
        ThreadLock = -1;
        StackBase_high = -1;
        v15 = 0;
        StackBase = -1;
        StackLimit_high = -1;
        StackLimit = -1;
        QuantumTarget = 0;
      }
      v23 = CycleTime;
      UserData.Ptr = (ULONGLONG)&v13;
      v25 = &v14;
      v27 = (char *)&v14 + 4;
      v29 = &v15;
      v31 = &v16;
      v33 = &v17;
      v35 = &v18;
      v37 = &v19;
      v39 = &v20;
      v41 = &v21;
      v43 = &v22;
      v45 = &v23;
      v19 = StackBase;
      v20 = StackBase_high;
      v21 = ThreadLock;
      v22 = ThreadLock_high;
      v16 = QuantumTarget;
      v17 = StackLimit;
      v18 = StackLimit_high;
      *(_QWORD *)&UserData.Size = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      LOBYTE(v1) = EtwWriteEx(
                     (REGHANDLE)PopWeakChargerLock.Header.WaitListHead.Blink,
                     v2,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     0xCu,
                     &UserData);
    }
  }
  return (char)v1;
}
