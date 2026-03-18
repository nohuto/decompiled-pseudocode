/*
 * XREFs of PfSnBeginScenario @ 0x14096F3B8
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1409E9DD0 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x140A43E74 (PfSnOperationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     PsGetIoPriorityThread @ 0x1403750A0 (PsGetIoPriorityThread.c)
 *     PfSnStartTraceTimer @ 0x1404CDE28 (PfSnStartTraceTimer.c)
 *     PfSnLogScenarioMeasures @ 0x1404D855C (PfSnLogScenarioMeasures.c)
 *     PfSnLogScenarioDecision @ 0x14096F6B4 (PfSnLogScenarioDecision.c)
 *     PfSnCheckActionsNeeded @ 0x14096FED8 (PfSnCheckActionsNeeded.c)
 *     PfSnGetPrefetchInstructions @ 0x1409B5FA0 (PfSnGetPrefetchInstructions.c)
 *     PfSnBeginTrace @ 0x140AA32C0 (PfSnBeginTrace.c)
 *     PfSnPrefetchScenario @ 0x140AE0674 (PfSnPrefetchScenario.c)
 *     PfSnLogIdentifier @ 0x140AFBCF4 (PfSnLogIdentifier.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginScenario(
        ULONG_PTR a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        _OWORD *a6)
{
  int v6; // esi
  void *v7; // r13
  struct _EX_RUNDOWN_REF *v8; // r15
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rdi
  int v12; // r10d
  int v13; // r12d
  char v14; // bl
  unsigned int started; // r14d
  bool v16; // zf
  int v18; // eax
  int v19; // eax
  int PrefetchInstructions; // eax
  char PreviousMode; // [rsp+40h] [rbp-38h]
  int v22; // [rsp+44h] [rbp-34h]
  int v23; // [rsp+48h] [rbp-30h] BYREF
  int v24; // [rsp+4Ch] [rbp-2Ch] BYREF
  int v25; // [rsp+50h] [rbp-28h]
  __int64 v26; // [rsp+58h] [rbp-20h] BYREF
  struct _EX_RUNDOWN_REF *v27; // [rsp+60h] [rbp-18h] BYREF
  struct _KTHREAD *v28; // [rsp+68h] [rbp-10h]

  v6 = 0;
  v24 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v23 = 0;
  CurrentThread = KeGetCurrentThread();
  v26 = 0LL;
  v10 = a4;
  v27 = 0LL;
  v11 = -1LL;
  PreviousMode = CurrentThread->PreviousMode;
  v25 = -1;
  v28 = CurrentThread;
  CurrentThread->PreviousMode = 0;
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
  {
    v13 = 0;
    started = 1075380276;
    goto LABEL_18;
  }
  v13 = 1;
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&stru_140E66FF0.ApcStateFill[40]) < LODWORD(stru_140E66B30.LastXStateSaveDebugInfo) )
  {
    v14 = PfSnCheckActionsNeeded(a2, a3, v12, (unsigned int)&v23, (__int64)&v24);
    if ( (v10 & 2) != 0 )
    {
      v14 &= ~2u;
      v22 = 9;
    }
    else
    {
      v22 = v24;
      v10 = a4;
    }
    if ( (v14 & 2) != 0 )
    {
      PrefetchInstructions = PfSnGetPrefetchInstructions(a2, a3, &v26);
      v7 = (void *)v26;
      if ( PrefetchInstructions >= 0 )
      {
        v6 = v23;
        v11 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v26 + 128);
        if ( v11 < *(_QWORD *)(v26 + 192) && v23 != 22 )
        {
          v14 &= ~1u;
          v6 = 11;
        }
        v25 = *(_DWORD *)(v26 + 200);
LABEL_7:
        if ( (v10 & 4) != 0 )
        {
          v14 &= ~1u;
          v6 = 8;
        }
        if ( (v14 & 1) != 0 )
        {
          v18 = PfSnBeginTrace(a2, a3, a1, (unsigned __int64)v28 & -(__int64)((v10 & 1) != 0), (v10 >> 3) & 1, &v27);
          if ( v18 < 0 )
          {
            switch ( v18 )
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
                v6 = (v18 != -1073741661) + 20;
                break;
            }
          }
          v8 = v27;
          if ( v27 )
          {
            if ( a5 )
              PfSnLogIdentifier(v27);
            if ( a6 )
              PfSnLogScenarioMeasures((__int64)v8, a6);
          }
        }
        if ( (v14 & 2) != 0 )
        {
          v19 = PfSnPrefetchScenario(v7);
          v7 = 0LL;
          LOBYTE(v13) = v19 < 0;
        }
        started = 0;
        v16 = (_BYTE)v13 == 0;
        v13 = v22;
        if ( v16 )
          goto LABEL_14;
        goto LABEL_13;
      }
      v14 &= ~2u;
      v22 = 10;
    }
    v6 = v23;
    goto LABEL_7;
  }
  v6 = 1;
  started = -1073741631;
LABEL_13:
  _InterlockedDecrement((volatile signed __int32 *)&stru_140E66FF0.ApcStateFill[40]);
LABEL_14:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
  {
    started = PfSnStartTraceTimer(v8);
    ExReleaseRundownProtection_0(v8 + 45);
  }
LABEL_18:
  PfSnLogScenarioDecision(a1, v6, v13, v25, v11);
  v28->PreviousMode = PreviousMode;
  return started;
}
