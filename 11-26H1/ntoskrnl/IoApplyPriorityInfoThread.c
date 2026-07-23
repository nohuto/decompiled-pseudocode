/*
 * XREFs of IoApplyPriorityInfoThread @ 0x140239AF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTracePriority @ 0x140202938 (EtwTracePriority.c)
 *     PsSetIoPriorityThread @ 0x140239BF4 (PsSetIoPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 */

NTSTATUS __stdcall IoApplyPriorityInfoThread(
        PIO_PRIORITY_INFO InputPriorityInfo,
        PIO_PRIORITY_INFO OutputPriorityInfo,
        PETHREAD Thread)
{
  _IO_PRIORITY_HINT v6; // eax
  unsigned int PagePriority; // r9d
  signed __int32 v8; // eax
  unsigned __int32 v9; // edi
  int v10; // edi
  struct _IO_PRIORITY_INFO v12; // [rsp+30h] [rbp-18h]

  if ( InputPriorityInfo->ThreadPriority == 0xFFFF )
    return -1073741585;
  v6 = (unsigned int)PsSetIoPriorityThread((LegacyAutoBoost *)Thread);
  PagePriority = InputPriorityInfo->PagePriority;
  v12.IoPriority = v6;
  if ( PagePriority == -1 )
  {
    v12.PagePriority = -1;
  }
  else
  {
    v8 = *((_DWORD *)&Thread[1].SwapListEntry + 2);
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&Thread[1].SwapListEntry + 2,
             (PagePriority << 12) | v8 & 0xFFFF8FFF,
             v8);
    }
    while ( v8 != v9 );
    v10 = (v9 >> 12) & 7;
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
      EtwTracePriority((__int64)Thread, 0x533u, v10, PagePriority, 0LL);
    v12.PagePriority = v10;
  }
  if ( InputPriorityInfo->ThreadPriority == -1 )
  {
    v12.ThreadPriority = -1;
  }
  else
  {
    v12.ThreadPriority = Thread->BasePriority;
    KeSetActualBasePriorityThread((ULONG_PTR)Thread);
  }
  if ( OutputPriorityInfo )
  {
    v12.Size = 16;
    *OutputPriorityInfo = v12;
  }
  return 0;
}
