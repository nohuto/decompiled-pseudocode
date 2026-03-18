/*
 * XREFs of PopInitializeHibernateGlobals @ 0x1407D0394
 * Callers:
 *     PoInitHiberServices @ 0x1407C8370 (PoInitHiberServices.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 *     PoDisableSleepStates @ 0x1407CC6C0 (PoDisableSleepStates.c)
 *     PopInitHiberPersistedRegValues @ 0x1407D02A4 (PopInitHiberPersistedRegValues.c)
 *     PopValidateWinresume @ 0x1407D0A04 (PopValidateWinresume.c)
 *     PoShutdownBugCheck @ 0x1407D0FB0 (PoShutdownBugCheck.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void PopInitializeHibernateGlobals()
{
  _DWORD *v0; // rbx
  __int64 Pool2; // rax
  unsigned int v2; // eax
  __int64 i; // rdi
  __int64 v4; // rcx
  char v5; // [rsp+50h] [rbp+20h] BYREF
  int v6; // [rsp+58h] [rbp+28h]
  __int64 v7; // [rsp+60h] [rbp+30h] BYREF

  v5 = 0;
  v0 = 0LL;
  v6 = 0;
  PopInitHiberPersistedRegValues();
  if ( (unsigned int)ZwQuerySystemInformation(112LL, 0LL) == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v0 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      if ( (int)ZwQuerySystemInformation(112LL, Pool2) >= 0 )
      {
        v2 = v6 - 2;
        v6 -= 2;
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
    if ( *(_DWORD *)&stru_140FC01F0.WaitBlockFill11[4 * i + 88] )
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
