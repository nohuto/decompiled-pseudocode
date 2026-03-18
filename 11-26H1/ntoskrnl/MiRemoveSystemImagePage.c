/*
 * XREFs of MiRemoveSystemImagePage @ 0x14038A3F4
 * Callers:
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiMakeDriverPageStayResident @ 0x14038A698 (MiMakeDriverPageStayResident.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiTerminateWsle @ 0x140324930 (MiTerminateWsle.c)
 */

__int64 __fastcall MiRemoveSystemImagePage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  unsigned int *p_UserTime; // rax
  __int64 result; // rax
  int v7; // [rsp+48h] [rbp+10h] BYREF

  *(_BYTE *)(a3 + 35) |= 8u;
  v7 = 0;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = a2 << 25 >> 16;
  if ( PsNtosImageBase && (v4 < PsNtosImageEnd && v4 >= PsNtosImageBase || v4 < PsHalImageEnd && v4 >= PsHalImageBase) )
    p_UserTime = (unsigned int *)&stru_140E2D150.SchedulerApcFill5[80];
  else
    p_UserTime = &stru_140E2D150.UserTime;
  _InterlockedDecrement((volatile signed __int32 *)p_UserTime);
  result = MiTerminateWsle(a1, v4, 0, 1, &v7);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v7);
      result = *(_QWORD *)(a3 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
