/*
 * XREFs of PfSnBeginScenario @ 0x1409D16A0
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1409D1320 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x140ACAAC0 (PfSnOperationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     PfSnStartTraceTimer @ 0x1404C7858 (PfSnStartTraceTimer.c)
 *     PfSnLogScenarioMeasures @ 0x1404D1D2C (PfSnLogScenarioMeasures.c)
 *     PfSnGetPrefetchInstructions @ 0x140987060 (PfSnGetPrefetchInstructions.c)
 *     PfSnLogIdentifier @ 0x1409CFD94 (PfSnLogIdentifier.c)
 *     PfSnPrefetchScenario @ 0x1409CFF44 (PfSnPrefetchScenario.c)
 *     PfSnBeginTrace @ 0x1409D002C (PfSnBeginTrace.c)
 *     PfSnLogScenarioDecision @ 0x1409D199C (PfSnLogScenarioDecision.c)
 *     PfSnCheckActionsNeeded @ 0x1409D21C0 (PfSnCheckActionsNeeded.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginScenario(
        void *a1,
        _OWORD *a2,
        unsigned int a3,
        unsigned int a4,
        const void **a5,
        _OWORD *a6)
{
  int v6; // esi
  UCHAR *v7; // r13
  struct _EX_RUNDOWN_REF *v8; // r15
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rdi
  int v12; // r10d
  int v13; // r12d
  char v14; // bl
  struct _KLOCK_ENTRIES *v15; // r9
  unsigned int started; // r14d
  bool v17; // zf
  int v19; // eax
  UCHAR *v20; // rcx
  unsigned int v21; // edx
  int PrefetchInstructions; // eax
  char PreviousMode; // [rsp+40h] [rbp-38h]
  int v24; // [rsp+44h] [rbp-34h]
  int v25; // [rsp+48h] [rbp-30h] BYREF
  int v26; // [rsp+4Ch] [rbp-2Ch] BYREF
  int v27; // [rsp+50h] [rbp-28h]
  UCHAR *v28; // [rsp+58h] [rbp-20h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+60h] [rbp-18h] BYREF
  struct _KTHREAD *v30; // [rsp+68h] [rbp-10h]

  v6 = 0;
  v26 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v25 = 0;
  CurrentThread = KeGetCurrentThread();
  v28 = 0LL;
  v10 = a4;
  v29 = 0LL;
  v11 = -1LL;
  PreviousMode = CurrentThread->PreviousMode;
  v27 = -1;
  v30 = CurrentThread;
  CurrentThread->PreviousMode = 0;
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
  {
    v13 = 0;
    started = 1075380276;
    goto LABEL_17;
  }
  v13 = 1;
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&stru_140E67200.ApcStateFill[40]) < LODWORD(stru_140E66D40.LastXStateSaveDebugInfo) )
  {
    v14 = PfSnCheckActionsNeeded((_DWORD)a2, a3, v12, (unsigned int)&v25, (__int64)&v26);
    if ( (v10 & 2) != 0 )
    {
      v14 &= ~2u;
      v24 = 9;
    }
    else
    {
      v24 = v26;
      v10 = a4;
    }
    if ( (v14 & 2) != 0 )
    {
      PrefetchInstructions = PfSnGetPrefetchInstructions((__int64)a2, a3, &v28, v15);
      v7 = v28;
      if ( PrefetchInstructions >= 0 )
      {
        v6 = v25;
        v11 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)v28 + 16);
        if ( v11 < *((_QWORD *)v28 + 24) && v25 != 22 )
        {
          v14 &= ~1u;
          v6 = 11;
        }
        v27 = *((_DWORD *)v28 + 50);
LABEL_7:
        if ( (v10 & 4) != 0 )
        {
          v14 &= ~1u;
          v6 = 8;
        }
        if ( (v14 & 1) != 0 )
        {
          v19 = PfSnBeginTrace(
                  a2,
                  a3,
                  a1,
                  (struct _KTHREAD *)((unsigned __int64)v30 & -(__int64)((v10 & 1) != 0)),
                  (v10 >> 3) & 1,
                  (__int64 *)&v29);
          if ( v19 < 0 )
          {
            switch ( v19 )
            {
              case -1073741618:
                v6 = 16;
                break;
              case -1073741670:
                v6 = 17;
                break;
              case -1072037882:
                v6 = 18;
                break;
              case -1073741791:
                v6 = 19;
                break;
              default:
                v6 = (v19 != -1073741661) + 20;
                break;
            }
          }
          v8 = v29;
          if ( v29 )
          {
            if ( a5 )
              PfSnLogIdentifier((__int64)v29, a5);
            if ( a6 )
              PfSnLogScenarioMeasures((__int64)v8, a6);
          }
        }
        if ( (v14 & 2) != 0 )
        {
          v20 = v7;
          v21 = v10 | 0x10;
          if ( (v7[208] & 3) == 0 )
            v21 = v10;
          v7 = 0LL;
          LOBYTE(v13) = (int)PfSnPrefetchScenario(v20, v21) < 0;
        }
        started = 0;
        v17 = (_BYTE)v13 == 0;
        v13 = v24;
        if ( v17 )
          goto LABEL_13;
        goto LABEL_12;
      }
      v14 &= ~2u;
      v24 = 10;
    }
    v6 = v25;
    goto LABEL_7;
  }
  v6 = 1;
  started = -1073741631;
LABEL_12:
  _InterlockedDecrement((volatile signed __int32 *)&stru_140E67200.ApcStateFill[40]);
LABEL_13:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
  {
    started = PfSnStartTraceTimer(v8);
    ExReleaseRundownProtection_0(v8 + 45);
  }
LABEL_17:
  PfSnLogScenarioDecision((ULONG_PTR)a1, v6, v13, v27, v11);
  v30->PreviousMode = PreviousMode;
  return started;
}
