/*
 * XREFs of MiProcessWsInSwapFault @ 0x14029E50C
 * Callers:
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetVaAge @ 0x14029BC40 (MiGetVaAge.c)
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14029E62C (MiReleaseWsSwapReservationPfn.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

char __fastcall MiProcessWsInSwapFault(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 PteShadow; // rax
  char result; // al
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  v8 = MiReleaseWsSwapReservationPfn(a2);
  v9 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 )
    MiReleasePageFileInfo(v9, v8, 1LL);
  if ( a4 )
  {
    PteShadow = *a4;
    if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a4, *a4);
    return MiWriteValidPteNewProtection(a4, PteShadow & 0xFFFFFFFFFFFFFFDFuLL);
  }
  else
  {
    result = MiGetVaAge(v9, a3);
    if ( (unsigned __int8)result < 7u && result != 1 )
      return MiSetVaAgeListEx(a1, a3, 1u, 1u, 0);
  }
  return result;
}
