/*
 * XREFs of RtlpInitCodePageTables @ 0x140802074
 * Callers:
 *     ExInitializeNls @ 0x140B6CCE4 (ExInitializeNls.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 *     RtlInitCodePageTable @ 0x140801C90 (RtlInitCodePageTable.c)
 *     NtGetNlsSectionPtr @ 0x140A97650 (NtGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpInitCodePageTables(unsigned __int16 a1, unsigned __int16 a2)
{
  int v2; // ebp
  int v3; // r15d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY **p_Blink; // rdi
  PUSHORT *v6; // r14
  PUSHORT *v7; // rbx
  struct _LIST_ENTRY **v8; // rsi
  unsigned __int64 CurrentServerSilo; // rbx
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *v11; // rax

  v2 = a2;
  v3 = a1;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  p_Blink = &CurrentServerSiloGlobals[64].Blink;
  v6 = (PUSHORT *)&CurrentServerSiloGlobals[72].Blink;
  v7 = (PUSHORT *)&CurrentServerSiloGlobals[73];
  v8 = &CurrentServerSiloGlobals[68].Blink;
  if ( (_WORD)v3 != 0xFDE9 && (_WORD)v2 != 0xFDE9 )
  {
    if ( (int)NtGetNlsSectionPtr(11, v3, 0, (int)CurrentServerSiloGlobals + 1160, 0LL) < 0 )
      goto LABEL_7;
    if ( (_WORD)v2 == (_WORD)v3 )
    {
      *v7 = *v6;
      goto LABEL_8;
    }
    if ( (int)NtGetNlsSectionPtr(11, v2, 0, (_DWORD)v7, 0LL) < 0 )
    {
LABEL_7:
      *v6 = 0LL;
      *v7 = 0LL;
    }
  }
LABEL_8:
  RtlInitCodePageTable(*v6, (PCPTABLEINFO)p_Blink);
  RtlInitCodePageTable(*v7, (PCPTABLEINFO)v8);
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo == HalSystemVectorDispatchEntry() )
  {
    if ( *(_WORD *)p_Blink == 0xFDE9 || *(_WORD *)v8 == 0xFDE9 )
    {
      LOWORD(ExpPlatformBinaryLock.Header.WaitListHead.Blink) = -535;
      WORD2(ExpPlatformBinaryLock.Header.WaitListHead.Blink) = -535;
      LOBYTE(NlsMbCodePageTag) = 0;
      LOBYTE(NlsMbOemCodePageTag) = 0;
    }
    else
    {
      LOWORD(ExpPlatformBinaryLock.Header.WaitListHead.Blink) = *(_WORD *)p_Blink;
      v10 = (struct _LIST_ENTRY *)&NlsEmptyLeadByteInfoTable;
      if ( *((_WORD *)p_Blink + 6) )
      {
        ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Flink = p_Blink[7];
        v11 = p_Blink[7];
      }
      else
      {
        ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Flink = (struct _LIST_ENTRY *)&NlsEmptyLeadByteInfoTable;
        v11 = (struct _LIST_ENTRY *)&NlsEmptyLeadByteInfoTable;
      }
      p_Blink[18] = v11;
      LOBYTE(NlsMbCodePageTag) = *((_WORD *)p_Blink + 6) != 0;
      WORD2(ExpPlatformBinaryLock.Header.WaitListHead.Blink) = *(_WORD *)v8;
      if ( *((_WORD *)v8 + 6) )
      {
        NlsOemLeadByteInfo = (PUSHORT *)v8[7];
        v10 = v8[7];
      }
      else
      {
        NlsOemLeadByteInfo = (PUSHORT *)&NlsEmptyLeadByteInfoTable;
      }
      p_Blink[19] = v10;
      LOBYTE(NlsMbOemCodePageTag) = *((_WORD *)v8 + 6) != 0;
    }
  }
  return 0LL;
}
