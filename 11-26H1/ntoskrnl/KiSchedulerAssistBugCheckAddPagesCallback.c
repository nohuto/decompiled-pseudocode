/*
 * XREFs of KiSchedulerAssistBugCheckAddPagesCallback @ 0x1405EBC60
 * Callers:
 *     <none>
 * Callees:
 *     MmIsAddressValidEx @ 0x14034DFD0 (MmIsAddressValidEx.c)
 */

void __fastcall KiSchedulerAssistBugCheckAddPagesCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  int v4; // eax
  __int64 v6; // rsi
  struct _KTHREAD *Thread; // rbx
  unsigned __int8 *SparePtr; // r14
  unsigned __int8 *v9; // rbp
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rcx

  v4 = ReasonSpecificData[3];
  *((_QWORD *)ReasonSpecificData + 3) = 0LL;
  ReasonSpecificData[2] = 0;
  if ( v4 == 159 || v4 == 226 || v4 == 456 )
  {
    v6 = *(_QWORD *)ReasonSpecificData;
    if ( *(_QWORD *)ReasonSpecificData )
    {
      Thread = *(struct _KTHREAD **)v6;
      if ( *(_DWORD *)(v6 + 16) >= (unsigned int)(10 * KeNumberProcessors_0) )
        return;
    }
    else
    {
      Thread = PsAltSystemCallRegistrationLock.WaitBlock[0].Thread;
    }
    while ( Thread != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[24]
         && MmIsAddressValidEx((__int64)&Thread[-1].SuspendEvent.Header.WaitListHead) )
    {
      if ( (*((_DWORD *)&Thread->KernelShadowStackLimit.1 + 1) & 0x800000) != 0 )
      {
        if ( v6 )
        {
          SparePtr = *(unsigned __int8 **)(v6 + 8);
          v6 = 0LL;
        }
        else
        {
          SparePtr = (unsigned __int8 *)Thread->WaitBlock[1].SparePtr;
        }
        while ( SparePtr != &Thread->WaitBlockFill11[88] )
        {
          v9 = SparePtr - 1400;
          if ( !MmIsAddressValidEx((__int64)(SparePtr - 1400)) )
            return;
          v10 = *((_QWORD *)v9 + 121);
          SparePtr = *(unsigned __int8 **)SparePtr;
          if ( v10 && MmIsAddressValidEx(v10) )
          {
            v11 = *(struct _KTHREAD ***)ReasonSpecificData;
            *((_QWORD *)ReasonSpecificData + 2) = *((_QWORD *)v9 + 121);
            *((_QWORD *)ReasonSpecificData + 3) = 1LL;
            ReasonSpecificData[2] = -2147483647;
            if ( !v11 )
            {
              dword_140F26D30 = 0;
              v11 = (struct _KTHREAD **)&KiSchedulerAssistAddPagesCallbackContext;
              *(_QWORD *)ReasonSpecificData = &KiSchedulerAssistAddPagesCallbackContext;
            }
            *v11 = Thread;
            v11[1] = (struct _KTHREAD *)SparePtr;
            *((_DWORD *)v11 + 4) += ReasonSpecificData[6];
            return;
          }
        }
      }
      Thread = *(struct _KTHREAD **)&Thread->Header.Lock;
    }
  }
}
