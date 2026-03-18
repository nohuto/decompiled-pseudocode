/*
 * XREFs of PpmEventTracePreVetoAccounting @ 0x1404C5F1C
 * Callers:
 *     PpmEventPlatformVetoRundown @ 0x1404C5BDC (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x1404C5D28 (PpmEventProcessorVetoRundown.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventTracePreVetoAccounting(
        PCEVENT_DESCRIPTOR EventDescriptor,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        __int64 a3)
{
  __int64 v6; // rbx
  _DWORD *Pool2; // rdi
  KIRQL v8; // r12
  __int64 InterruptTimePrecise; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // r10d
  struct _EVENT_DATA_DESCRIPTOR v15; // xmm0
  __int64 v16; // r10
  int v17; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  int *v20; // [rsp+60h] [rbp+7h]
  __int64 v21; // [rsp+68h] [rbp+Fh]
  _DWORD *v22; // [rsp+70h] [rbp+17h]
  int v23; // [rsp+78h] [rbp+1Fh]
  int v24; // [rsp+7Ch] [rbp+23h]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled((REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink, EventDescriptor) )
    {
      if ( a3 )
      {
        v6 = *(unsigned int *)(a3 + 28);
        if ( (_DWORD)v6 )
        {
          Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
          if ( Pool2 )
          {
            v8 = KeAcquireSpinLockRaiseToDpc(&stru_140F10070.KcsanThread);
            InterruptTimePrecise = RtlGetInterruptTimePrecise(&v18);
            v10 = 0LL;
            v17 = 0;
            v11 = 0LL;
            v12 = v6;
            do
            {
              v13 = *(_QWORD *)(a3 + 32);
              v14 = *(_DWORD *)(v11 + v13 + 16);
              if ( v14 )
              {
                Pool2[5 * v10] = v14;
                *(_QWORD *)&Pool2[5 * v17 + 1] = *(_QWORD *)(v11 + v13 + 24);
                *(_QWORD *)&Pool2[5 * v17 + 3] = *(_QWORD *)(v11 + v13 + 40);
                v16 = *(_QWORD *)(v11 + v13 + 32);
                if ( v16 )
                  *(_QWORD *)&Pool2[5 * v17 + 3] += InterruptTimePrecise - v16;
                v10 = (unsigned int)++v17;
              }
              v11 += 64LL;
              --v12;
            }
            while ( v12 );
            KeReleaseSpinLock(&stru_140F10070.KcsanThread, v8);
            v15 = *a2;
            v21 = 4LL;
            v20 = &v17;
            v22 = Pool2;
            UserData = v15;
            v24 = 0;
            v23 = 20 * v17;
            EtwWriteEx(
              (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
              EventDescriptor,
              0LL,
              0,
              0LL,
              0LL,
              3u,
              &UserData);
            ExFreePoolWithTag(Pool2, 0x654D5050u);
          }
        }
      }
    }
  }
}
