/*
 * XREFs of PopInitializeHibernateGlobals @ 0x1407D3434
 * Callers:
 *     PoInitHiberServices @ 0x1407CB3D0 (PoInitHiberServices.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     PoDisableSleepStates @ 0x1407CF760 (PoDisableSleepStates.c)
 *     PopInitHiberPersistedRegValues @ 0x1407D3344 (PopInitHiberPersistedRegValues.c)
 *     PopValidateWinresume @ 0x1407D3AA4 (PopValidateWinresume.c)
 *     PoShutdownBugCheck @ 0x1407D4050 (PoShutdownBugCheck.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PopInitializeHibernateGlobals()
{
  _DWORD *v0; // rbx
  _DWORD *Pool2; // rax
  ULONG v2; // eax
  __int64 i; // rdi
  __int64 v4; // rcx
  char v5; // [rsp+50h] [rbp+20h] BYREF
  ULONG ReturnLength; // [rsp+58h] [rbp+28h] BYREF
  __int64 v7; // [rsp+60h] [rbp+30h] BYREF

  v5 = 0;
  v0 = 0LL;
  ReturnLength = 0;
  PopInitHiberPersistedRegValues();
  if ( ZwQuerySystemInformation(SystemVhdBootInformation, 0LL, 0, &ReturnLength) == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v0 = Pool2;
    if ( Pool2 )
    {
      if ( ZwQuerySystemInformation(SystemVhdBootInformation, Pool2, ReturnLength, &ReturnLength) >= 0 )
      {
        v2 = ReturnLength - 2;
        ReturnLength -= 2;
        if ( *(_BYTE *)v0 )
        {
          if ( v0[1] <= v2 )
          {
            PopBootFromVHD = 1;
            PoDisableSleepStates(2, 8, &v7);
          }
        }
      }
    }
  }
  PopValidateWinresume(&v5);
  if ( v5 )
    PoDisableSleepStates(4, 8, &v7);
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)&stru_140FC11F0.WaitBlockFill11[4 * i + 88] )
    {
      if ( (int)PoDisableSleepStates(PopHiberForceDisabledReasonMap[i], 8, &v7) < 0 )
      {
        LOBYTE(v4) = 1;
        PoShutdownBugCheck(v4, 160LL, 272LL, 0LL, 0LL, 0LL);
      }
    }
  }
  if ( v0 )
    ExFreePoolWithTag(v0, 0x72626968u);
}
