/*
 * XREFs of PopAdaptiveGetConsoleSessionState @ 0x140A3DFD8
 * Callers:
 *     PopAdaptiveGetSessionStateUnsafe @ 0x140A3D93C (PopAdaptiveGetSessionStateUnsafe.c)
 * Callees:
 *     PopAdaptiveConsoleSessionOverrideClear @ 0x1407DDAD4 (PopAdaptiveConsoleSessionOverrideClear.c)
 *     PopAdaptiveCalculateInputRelativeTimeout @ 0x140A3D82C (PopAdaptiveCalculateInputRelativeTimeout.c)
 *     PopSetSessionUserStatus @ 0x140A3E39C (PopSetSessionUserStatus.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 */

__int64 __fastcall PopAdaptiveGetConsoleSessionState(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, _DWORD *a5)
{
  char v5; // r15
  unsigned int v8; // esi
  char IsEnabled; // al
  int v10; // r10d
  unsigned int v11; // r11d
  unsigned int KernelWaitTime_high; // ebx
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rdi
  unsigned int v14; // r14d
  unsigned int i; // r15d
  int v16; // ebp
  unsigned int KernelWaitTime; // eax
  unsigned int v18; // eax
  unsigned __int64 Next; // r10
  unsigned int Next_high; // edx
  unsigned int v22; // edx
  unsigned int v23; // eax
  bool v24; // cc
  _SINGLE_LIST_ENTRY *v25; // rdi
  unsigned int j; // ebp
  unsigned int v27; // eax
  unsigned int ReservedPreviousReadyTimeValue; // [rsp+30h] [rbp-48h] BYREF
  unsigned int UserWaitTime; // [rsp+34h] [rbp-44h]
  unsigned int v30; // [rsp+80h] [rbp+8h]
  char v31; // [rsp+88h] [rbp+10h]

  v30 = a1;
  v5 = 0;
  v31 = 0;
  UserWaitTime = PopAdaptiveStandbyLock.UserWaitTime;
  v8 = 3;
  IsEnabled = TtmIsEnabled(a1, a2, a3);
  v10 = *(_DWORD *)(a2 + 24);
  v11 = 0;
  if ( IsEnabled )
  {
    KernelWaitTime_high = HIDWORD(PopAdaptiveStandbyLock.KernelWaitTime);
    v14 = 0;
    UserWaitTime = 0;
    ReservedPreviousReadyTimeValue = HIDWORD(PopAdaptiveStandbyLock.KernelWaitTime);
    v8 = v10 == 0 ? 2 : 0;
    *a4 = 256;
    *a5 = 258;
  }
  else if ( v10 )
  {
    if ( !BYTE1(PopAdaptiveStandbyLock.ThreadListEntry.Blink)
      || BYTE2(PopAdaptiveStandbyLock.ThreadListEntry.Blink)
      || (KernelWaitTime_high = PopAdaptiveStandbyLock.ReservedPreviousReadyTimeValue,
          v24 = PopAdaptiveStandbyLock.ReservedPreviousReadyTimeValue <= HIDWORD(PopAdaptiveStandbyLock.KernelWaitTime),
          ReservedPreviousReadyTimeValue = PopAdaptiveStandbyLock.ReservedPreviousReadyTimeValue,
          *a4 = 257,
          !v24)
      && !PopEnforceConsoleLockScreenTimeout )
    {
      KernelWaitTime_high = HIDWORD(PopAdaptiveStandbyLock.KernelWaitTime);
      ReservedPreviousReadyTimeValue = HIDWORD(PopAdaptiveStandbyLock.KernelWaitTime);
      *a4 = 256;
    }
    p_PropagateBoostsEntry = &PopAdaptiveStandbyLock.PropagateBoostsEntry;
    v14 = 0;
    for ( i = 0; i < 2; ++i )
    {
      if ( LOBYTE(p_PropagateBoostsEntry[-1].Next) != (_BYTE)v11 )
      {
        Next = (unsigned __int64)p_PropagateBoostsEntry->Next;
        if ( p_PropagateBoostsEntry->Next < (struct _SINGLE_LIST_ENTRY *)*(_QWORD *)(a2 + 8) )
        {
          PopAdaptiveConsoleSessionOverrideClear(i, 1);
          v11 = 0;
        }
        else
        {
          Next_high = HIDWORD(p_PropagateBoostsEntry[1].Next);
          v31 = 1;
          if ( Next_high )
          {
            v27 = PopAdaptiveCalculateInputRelativeTimeout(Next, Next_high, *(_QWORD *)a2);
            if ( !v14 || v27 < v14 )
            {
              v14 = v27;
              *a5 = i;
            }
          }
          v22 = (unsigned int)p_PropagateBoostsEntry[1].Next;
          if ( v22 )
          {
            v23 = PopAdaptiveCalculateInputRelativeTimeout(Next, v22, *(_QWORD *)a2);
            if ( !KernelWaitTime_high || v23 < KernelWaitTime_high )
            {
              KernelWaitTime_high = v23;
              *a4 = i;
            }
            v8 = 2;
          }
        }
      }
      p_PropagateBoostsEntry += 3;
    }
    ReservedPreviousReadyTimeValue = KernelWaitTime_high;
    v16 = 256;
    if ( v8 == 3 )
    {
      if ( (struct _LIST_ENTRY *)*(_QWORD *)a2 <= PopAdaptiveStandbyLock.MutantListHead.Blink
        || (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                            - *(_QWORD *)a2)
         / 0x3E8 >= LODWORD(PopAdaptiveStandbyLock.UserWaitTime)
        && LODWORD(PopAdaptiveStandbyLock.UserWaitTime) )
      {
        v8 = 2;
        v31 = 1;
      }
      else
      {
        v8 = v11;
      }
    }
    KernelWaitTime = PopAdaptiveStandbyLock.KernelWaitTime;
    if ( LODWORD(PopAdaptiveStandbyLock.KernelWaitTime) )
    {
      if ( *(&PopAdaptiveStandbyLock.ReservedPreviousReadyTimeValue + 1) == v11 )
        KernelWaitTime = KernelWaitTime_high > 0x3C ? KernelWaitTime_high - 15 : v11;
      else
        v16 = 258;
      if ( KernelWaitTime && (!v14 || KernelWaitTime < v14) )
      {
        v14 = KernelWaitTime;
        *a5 = v16;
      }
    }
    v5 = v31;
  }
  else
  {
    v14 = 0;
    KernelWaitTime_high = HIDWORD(PopAdaptiveStandbyLock.ThreadListEntry.Blink);
    v8 = 2;
    ReservedPreviousReadyTimeValue = HIDWORD(PopAdaptiveStandbyLock.ThreadListEntry.Blink);
    *a4 = 256;
    *a5 = 258;
    if ( PopAdaptiveStandbyLock.MutantListHead.Blink != *(struct _LIST_ENTRY **)(a2 + 16) )
    {
      PopAdaptiveStandbyLock.MutantListHead.Blink = *(struct _LIST_ENTRY **)(a2 + 16);
      v25 = &PopAdaptiveStandbyLock.PropagateBoostsEntry;
      for ( j = 0; j < 2; ++j )
      {
        if ( LOBYTE(v25[-1].Next) && v25->Next <= (struct _SINGLE_LIST_ENTRY *)*(_QWORD *)(a2 + 16) )
        {
          PopAdaptiveConsoleSessionOverrideClear(j, 0);
          v11 = 0;
        }
        v25 += 3;
      }
    }
  }
  HIDWORD(PopAdaptiveStandbyLock.ThreadListEntry.Blink) = KernelWaitTime_high;
  PopAdaptiveStandbyLock.MutantListHead.Flink = *(struct _LIST_ENTRY **)a2;
  v18 = UserWaitTime;
  *(_DWORD *)a3 = KernelWaitTime_high;
  if ( v8 )
    v18 = v11;
  *(_DWORD *)(a3 + 4) = v14;
  *(_BYTE *)(a3 + 12) = v5;
  *(_DWORD *)(a3 + 8) = v18;
  PopSetSessionUserStatus(v30, v8);
  PopSetPowerSettingValue(&GUID_CONSOLE_VIDEO_TIMEOUT, 0xFFFFFFFFLL, 0LL, 4LL, &ReservedPreviousReadyTimeValue);
  return PopSetPowerSettingValue(&GUID_CONSOLE_VIDEO_TIMEOUT, 0xFFFFFFFFLL, 1LL, 4LL, &ReservedPreviousReadyTimeValue);
}
