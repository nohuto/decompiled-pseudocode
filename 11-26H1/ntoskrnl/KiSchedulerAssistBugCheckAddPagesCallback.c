/*
 * XREFs of KiSchedulerAssistBugCheckAddPagesCallback @ 0x1405EE5D0
 * Callers:
 *     <none>
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 */

void __fastcall KiSchedulerAssistBugCheckAddPagesCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  int v4; // eax
  __int64 v6; // rsi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *Blink; // r14
  struct _LIST_ENTRY **p_Blink; // rbp
  __int64 v10; // rcx
  struct _LIST_ENTRY **v11; // rcx

  v4 = ReasonSpecificData[3];
  *((_QWORD *)ReasonSpecificData + 3) = 0LL;
  ReasonSpecificData[2] = 0;
  if ( v4 == 159 || v4 == 226 || v4 == 456 )
  {
    v6 = *(_QWORD *)ReasonSpecificData;
    if ( *(_QWORD *)ReasonSpecificData )
    {
      Flink = *(struct _LIST_ENTRY **)v6;
      if ( *(_DWORD *)(v6 + 16) >= (unsigned int)(10 * KeNumberProcessors_0) )
        return;
    }
    else
    {
      Flink = PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry.Flink;
    }
    while ( Flink != (struct _LIST_ENTRY *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[96]
         && MmIsAddressValidEx((__int64)&Flink[-30].Blink) )
    {
      if ( (HIDWORD(Flink[66].Flink) & 0x800000) != 0 )
      {
        if ( v6 )
        {
          Blink = *(struct _LIST_ENTRY **)(v6 + 8);
          v6 = 0LL;
        }
        else
        {
          Blink = Flink[25].Blink;
        }
        while ( Blink != (struct _LIST_ENTRY *)&Flink[25].Blink )
        {
          p_Blink = &Blink[-88].Blink;
          if ( !MmIsAddressValidEx((__int64)&Blink[-88].Blink) )
            return;
          v10 = (__int64)p_Blink[121];
          Blink = Blink->Flink;
          if ( v10 && MmIsAddressValidEx(v10) )
          {
            v11 = *(struct _LIST_ENTRY ***)ReasonSpecificData;
            *((_QWORD *)ReasonSpecificData + 2) = p_Blink[121];
            *((_QWORD *)ReasonSpecificData + 3) = 1LL;
            ReasonSpecificData[2] = -2147483647;
            if ( !v11 )
            {
              dword_140F27050 = 0;
              v11 = (struct _LIST_ENTRY **)&KiSchedulerAssistAddPagesCallbackContext;
              *(_QWORD *)ReasonSpecificData = &KiSchedulerAssistAddPagesCallbackContext;
            }
            *v11 = Flink;
            v11[1] = Blink;
            *((_DWORD *)v11 + 4) += ReasonSpecificData[6];
            return;
          }
        }
      }
      Flink = Flink->Flink;
    }
  }
}
