/*
 * XREFs of PpmEventHgsHardwareTableResonChanged @ 0x140502714
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x14025B888 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmEventTraceControlCallback @ 0x1407DCAD0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventHgsHardwareTableResonChanged(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  _BYTE *Pool2; // rdi
  _BYTE *KernelStack; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  char v6; // al
  unsigned int v7; // [rsp+40h] [rbp-40h] BYREF
  int v8; // [rsp+44h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *i; // [rsp+58h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp-20h]
  _BYTE *v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+74h] [rbp-Ch]

  v1 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_DYNAMIC_UPDATE_REASON_RUNDOWN;
  if ( !a1 )
    v1 = &PPM_ETW_WPS_DYNAMIC_UPDATE_REASON;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled((REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink, v1) )
    {
      v7 = PpmHeteroWorkloadClasses;
      v8 = PpmHeteroWorkloadClasses;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        KernelStack = PopSleepstudySessionLock.KernelStack;
        if ( PopSleepstudySessionLock.KernelStack && *(_QWORD *)&PopSleepstudySessionLock.CurrentRunTime )
        {
          *(_QWORD *)&UserData.Size = 4LL;
          UserData.Ptr = (ULONGLONG)&v7;
          v4 = 0LL;
          v11 = 4LL;
          for ( i = &v8; (unsigned int)v4 < v7; Pool2[2 * v5 + 5] = v6 )
          {
            v5 = 3 * v4;
            *(_DWORD *)&Pool2[2 * v5] = v4;
            Pool2[2 * v5 + 4] = KernelStack[2 * v4];
            v6 = KernelStack[2 * v4 + 1];
            v4 = (unsigned int)(v4 + 1);
          }
          v12 = Pool2;
          v14 = 0;
          v13 = 6 * v8;
          EtwWriteEx(
            (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
            v1,
            0LL,
            0,
            0LL,
            0LL,
            3u,
            &UserData);
        }
        ExFreePoolWithTag(Pool2, 0x654D5050u);
      }
    }
  }
}
