/*
 * XREFs of PpmParkSetLpiCap @ 0x1404BBB5C
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     PpmParkApplyPolicy @ 0x1402592F0 (PpmParkApplyPolicy.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x1404BBD70 (PpmCheckCustomRun.c)
 *     PpmCheckReInit @ 0x140A9D410 (PpmCheckReInit.c)
 */

__int64 __fastcall PpmParkSetLpiCap(int a1, __int64 a2, unsigned int *a3)
{
  int v4; // edi
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  __int64 SystemCallNumber; // r9
  unsigned __int16 *v10; // rdx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r10
  unsigned __int16 *v15; // r8
  int v16; // eax
  char v17; // al

  v4 = a2;
  if ( KeGetCurrentPrcb()->PowerState.Hypervisor >= ProcHypervisorPower && (HvlEnlightenments & 0x40000) == 0 )
    return 3221225473LL;
  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, (unsigned int)a3);
  v7 = LOWORD(PopModernStandbyStateNotify.ThreadLock)
     + a1
     - 1
     - ((unsigned int)LOWORD(PopModernStandbyStateNotify.ThreadLock) + a1 - 1)
     % LOWORD(PopModernStandbyStateNotify.ThreadLock);
  if ( v7 )
  {
    v8 = 0;
    if ( !PopModernStandbyStateNotify.SystemCallNumber )
      goto LABEL_11;
    SystemCallNumber = PopModernStandbyStateNotify.SystemCallNumber;
    v10 = (unsigned __int16 *)(*(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 8LL);
    do
    {
      v11 = *v10;
      if ( (unsigned __int16)v11 > LOWORD(PopModernStandbyStateNotify.ThreadLock) )
        v8 += v11 - LOWORD(PopModernStandbyStateNotify.ThreadLock);
      v10 += 632;
      --SystemCallNumber;
    }
    while ( SystemCallNumber );
    if ( v7 > v8 )
LABEL_11:
      v7 = v8;
  }
  v12 = LOWORD(PopModernStandbyStateNotify.ThreadLock)
      + v4
      - 1
      - ((unsigned int)LOWORD(PopModernStandbyStateNotify.ThreadLock) + v4 - 1)
      % LOWORD(PopModernStandbyStateNotify.ThreadLock);
  if ( v12 )
  {
    v13 = 0;
    if ( !PopModernStandbyStateNotify.SystemCallNumber )
      goto LABEL_19;
    v14 = PopModernStandbyStateNotify.SystemCallNumber;
    v15 = (unsigned __int16 *)(*(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 8LL);
    do
    {
      v16 = *v15;
      if ( (unsigned __int16)v16 > LOWORD(PopModernStandbyStateNotify.ThreadLock) )
        v13 += v16 - LOWORD(PopModernStandbyStateNotify.ThreadLock);
      v15 += 632;
      --v14;
    }
    while ( v14 );
    if ( v12 > v13 )
LABEL_19:
      v12 = v13;
  }
  v17 = 0;
  if ( v7 != PpmParkLpiCap )
  {
    PpmParkLpiCap = v7;
    v17 = 1;
    PpmParkLpiCapChanged = 1;
  }
  if ( v12 == PpmParkThermalCap )
  {
    if ( !v17 )
    {
      PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
      goto LABEL_27;
    }
  }
  else
  {
    PpmParkThermalCap = v12;
  }
  PpmParkApplyPolicy();
  PpmCheckReInit();
  PpmCheckCustomRun(4LL);
LABEL_27:
  *a3 = v7;
  return 0LL;
}
