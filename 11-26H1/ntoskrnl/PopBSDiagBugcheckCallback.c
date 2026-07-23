/*
 * XREFs of PopBSDiagBugcheckCallback @ 0x140610A90
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTriageDumpDataArray @ 0x1404EA880 (KeInitializeTriageDumpDataArray.c)
 *     IopAddBugcheckTriageThread @ 0x1405D6CDC (IopAddBugcheckTriageThread.c)
 *     KeAddTriageDumpDataBlock @ 0x1405E8760 (KeAddTriageDumpDataBlock.c)
 */

void __fastcall PopBSDiagBugcheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  int v4; // eax
  struct _KTRIAGE_DUMP_DATA_ARRAY *p_CallbackRoutine; // rsi
  SIZE_T v8; // r9
  KBUGCHECK_CALLBACK_REASON *p_Reason; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 *v12; // rbx
  __int64 v13; // rdi

  v4 = ReasonSpecificData[4];
  if ( v4 == 456 || v4 == 4552 )
  {
    p_CallbackRoutine = (struct _KTRIAGE_DUMP_DATA_ARRAY *)&Record[6].CallbackRoutine;
    KeInitializeTriageDumpDataArray((PKTRIAGE_DUMP_DATA_ARRAY)&Record[6].CallbackRoutine, 0xE0u);
    p_Reason = &Record[1].Reason;
    v10 = 11LL;
    do
    {
      v11 = *((_QWORD *)p_Reason - 1);
      if ( v11 )
        KeAddTriageDumpDataBlock(p_CallbackRoutine, v11, (PVOID)*(unsigned int *)p_Reason, v8);
      p_Reason += 4;
      --v10;
    }
    while ( v10 );
    v12 = (__int64 *)&Record[5].CallbackRoutine;
    v13 = 4LL;
    do
    {
      if ( *v12 )
        IopAddBugcheckTriageThread(*v12);
      ++v12;
      --v13;
    }
    while ( v13 );
    *(_QWORD *)ReasonSpecificData = p_CallbackRoutine;
  }
}
