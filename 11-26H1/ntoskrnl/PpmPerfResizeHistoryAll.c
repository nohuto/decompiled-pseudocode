/*
 * XREFs of PpmPerfResizeHistoryAll @ 0x140B40594
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140A9D088 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PpmPerfResizeHistory @ 0x140B40670 (PpmPerfResizeHistory.c)
 */

void __fastcall PpmPerfResizeHistoryAll(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 Prcb; // rax
  __int64 v6; // rdx
  PBOOLEAN i; // rbx
  unsigned int j; // edi
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = qword_140E0B638[0];
  LOWORD(v3) = 0;
  while ( 1 )
  {
    while ( v2 )
    {
      _BitScanForward64(&v4, v2);
      v2 &= ~(1LL << v4);
      Prcb = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                       + 64 * (unsigned __int16)v3
                       + (unsigned int)(unsigned __int8)v4));
      PpmPerfResizeHistory(Prcb + 35264, v6);
    }
    v3 = (unsigned __int16)(v3 + 1);
    if ( (unsigned int)v3 >= LOWORD(PpmCheckRegistered[0]) )
      break;
    v2 = qword_140E0B638[v3];
  }
  for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
        i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
        i = *(PBOOLEAN *)i )
  {
    for ( j = 0; j < *((_DWORD *)i + 74); ++j )
    {
      v9 = 1224LL * j;
      v10 = *((_QWORD *)i + 39);
      if ( *(_DWORD *)(v9 + v10 + 16) == 1 )
        PpmPerfResizeHistory(*(_QWORD *)(v9 + v10), a2);
    }
  }
}
