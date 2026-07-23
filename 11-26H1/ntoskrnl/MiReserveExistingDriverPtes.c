/*
 * XREFs of MiReserveExistingDriverPtes @ 0x140B0C144
 * Callers:
 *     MiReserveDriverPtes @ 0x140B0C074 (MiReserveDriverPtes.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1402A4624 (MiMakeZeroedPageTables.c)
 *     RtlFindClearBits @ 0x14035A520 (RtlFindClearBits.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     RtlAreBitsSet @ 0x14046FAA0 (RtlAreBitsSet.c)
 */

unsigned __int64 __fastcall MiReserveExistingDriverPtes(ULONG NumberToFind)
{
  char *SystemArgument1; // rbx
  ULONG ClearBits; // esi
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r8
  __int64 PteAddress; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  ULONG v12; // r15d

  SystemArgument1 = (char *)stru_140E2D2D0.SchedulerApc.SystemArgument1;
  ClearBits = -1;
  if ( !stru_140E2D2D0.SchedulerApc.SystemArgument1 )
    return 0LL;
  do
  {
    if ( *((_QWORD *)SystemArgument1 + 6) )
    {
      if ( *((_DWORD *)SystemArgument1 + 4) >= NumberToFind )
      {
        ClearBits = RtlFindClearBits((PRTL_BITMAP)SystemArgument1 + 1, NumberToFind, *((_DWORD *)SystemArgument1 + 8));
        if ( ClearBits != -1 )
          break;
      }
    }
    SystemArgument1 = *(char **)SystemArgument1;
  }
  while ( SystemArgument1 );
  if ( !SystemArgument1 )
    return 0LL;
  v5 = *((_QWORD *)SystemArgument1 + 1) + ((unsigned __int64)ClearBits << 7);
  MiGetPteAddress(v5);
  PteAddress = MiGetPteAddress(v6);
  v9 = (v8 - PteAddress) >> 3;
  v10 = MiGetPteAddress(v5 + 128LL * NumberToFind - 8);
  v12 = ((v10 - v11) >> 3) + 1;
  if ( !RtlAreBitsSet((PRTL_BITMAP)(SystemArgument1 + 40), v9, v12) )
  {
    if ( (unsigned int)MiMakeZeroedPageTables(v5, (unsigned int)v5 + (NumberToFind << 7) - 8, 1, 11) )
    {
      RtlSetBits((PRTL_BITMAP)(SystemArgument1 + 40), v9, v12);
      goto LABEL_9;
    }
    return 0LL;
  }
LABEL_9:
  RtlSetBits((PRTL_BITMAP)SystemArgument1 + 1, ClearBits, NumberToFind);
  result = v5;
  *((_DWORD *)SystemArgument1 + 8) = ClearBits + NumberToFind;
  return result;
}
