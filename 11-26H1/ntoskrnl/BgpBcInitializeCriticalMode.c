/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x140D148A4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140C545B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140355EBC (BgpFwAllocateMemory.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlUShortAdd @ 0x140481650 (RtlUShortAdd.c)
 *     BcpGetMaxResourceProfile @ 0x140717B50 (BcpGetMaxResourceProfile.c)
 *     BcpGetProgressMessages @ 0x140717C10 (BcpGetProgressMessages.c)
 *     Feature_50070238__private_IsEnabledDeviceUsageNoInline @ 0x140718908 (Feature_50070238__private_IsEnabledDeviceUsageNoInline.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140C4FB88 (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x140C4FBB4 (BgpDisplayCharacterGetContext.c)
 *     BgpFoDetermineFontInformation @ 0x140D139B0 (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x140D146E4 (BcpFindMessage.c)
 */

__int64 __fastcall BgpBcInitializeCriticalMode(__int64 a1, int a2)
{
  bool v4; // zf
  int v5; // eax
  PCWSTR v6; // rbx
  const wchar_t *Message; // rax
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  USHORT CycleTime; // ax
  USHORT KernelStack; // dx
  USHORT *v14; // r8
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  const wchar_t *v22; // rax
  USHORT *v23; // r8
  const wchar_t *v24; // rax
  int ProgressMessages; // eax
  USHORT *v26; // r8
  USHORT *v27; // r8
  USHORT *v28; // r8
  USHORT *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 i; // rdi
  __int64 j; // rsi
  volatile __int64 v34; // rdi
  __int64 Memory; // rax
  __int64 v37; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-38h] BYREF
  int v39; // [rsp+40h] [rbp-30h]
  __int128 v40; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v41[2]; // [rsp+58h] [rbp-18h] BYREF
  __int128 v42; // [rsp+60h] [rbp-10h] BYREF
  PCWSTR v43; // [rsp+A0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+40h] BYREF
  PCWSTR v45; // [rsp+B8h] [rbp+48h] BYREF

  v38 = 0LL;
  v39 = 0;
  v40 = 0LL;
  v37 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v4 = (unsigned int)Feature_50070238__private_IsEnabledDeviceUsageNoInline() == 0;
  v5 = *(_DWORD *)(a1 + 120);
  BYTE1(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink) = !v4;
  if ( (v5 & 0x400000) != 0 )
  {
    *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0x400000u;
  }
  else
  {
    if ( (v5 & 0x2000000) != 0 )
      WheapPfaLock.SchedulerApcFill3[40] = 1;
    v6 = 0LL;
    v45 = 0LL;
    SourceString = 0LL;
    if ( a2 != -1 )
    {
      Message = BcpFindMessage(0xC1008001);
      RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.SListFaultAddress, Message);
      v8 = BcpFindMessage(0xC1008008);
      RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.StackBase, v8);
      v9 = BcpFindMessage(0x41008009u);
      RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.CycleTime, v9);
      v10 = BcpFindMessage(0x41008010u);
      RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.KernelStack, v10);
      v11 = BcpFindMessage(0x41008011u);
      RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.SchedulingGroup, v11);
      if ( !BYTE1(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink) )
        goto LABEL_64;
      CycleTime = stru_140E3E928.CycleTime;
      if ( LOWORD(stru_140E3E928.CycleTime) < LOWORD(stru_140E3E928.SchedulingGroup) )
        CycleTime = (USHORT)stru_140E3E928.SchedulingGroup;
      KernelStack = (USHORT)stru_140E3E928.KernelStack;
      if ( CycleTime >= LOWORD(stru_140E3E928.KernelStack) )
        KernelStack = CycleTime;
      if ( RtlUShortAdd(
             (USHORT)stru_140E3E928.SListFaultAddress,
             KernelStack,
             (USHORT *)&stru_140E3E928.WaitBlockFill11[64]) >= 0
        && RtlUShortAdd(*(USHORT *)&stru_140E3E928.WaitBlockFill11[64], 4u, v14) >= 0 )
      {
        stru_140E3E928.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)BgpFwAllocateMemory(*(unsigned __int16 *)&stru_140E3E928.WaitBlockFill11[64]);
        if ( stru_140E3E928.WaitBlock[1].WaitListEntry.Blink )
        {
LABEL_64:
          v15 = BcpFindMessage(0xC1008003);
          RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.InitialStack, v15);
          v16 = BcpFindMessage(0x41008014u);
          RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.ApcStateFill[32], v16);
          v17 = BcpFindMessage(0x41008015u);
          RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.WaitStatus, v17);
          v18 = BcpFindMessage(0x41008016u);
          RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.216, v18);
          v19 = BcpFindMessage(0x41008018u);
          RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.Queue, v19);
          v20 = BcpFindMessage(0x41008017u);
          RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.RelativeTimerBias, v20);
          v21 = BcpFindMessage(0x41008019u);
          RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.Timer.Header.WaitListHead, v21);
          v22 = BcpFindMessage(0x41008020u);
          RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.Timer.DueTime, v22);
          if ( !BYTE1(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink)
            || RtlUShortAdd(
                 (USHORT)stru_140E3E928.Timer.Header.WaitListHead.Flink,
                 stru_140E3E928.Timer.DueTime.QuadPart,
                 (USHORT *)&stru_140E3E928.WaitBlockFill11[48]) >= 0
            && RtlUShortAdd(*(USHORT *)&stru_140E3E928.WaitBlockFill11[48], 4u, v23) >= 0
            && (stru_140E3E928.WaitBlock[0].SparePtr = (PVOID)BgpFwAllocateMemory(*(unsigned __int16 *)&stru_140E3E928.WaitBlockFill11[48])) != 0LL )
          {
            v24 = BcpFindMessage(0x41008021u);
            RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.Timer.TimerListEntry.Blink, v24);
            if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v43) >= 0 )
            {
              RtlInitUnicodeString((PUNICODE_STRING)((char *)&stru_140E3E928.116 + 4), SourceString);
              RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.FirstArgument, v43);
              ProgressMessages = BcpGetProgressMessages(3238035475LL, &v45, &v43);
              v6 = v45;
              if ( ProgressMessages >= 0 )
              {
                RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.152, v45);
                RtlInitUnicodeString((PUNICODE_STRING)&stru_140E3E928.ApcStateFill[16], v43);
                if ( !BYTE1(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink)
                  || RtlUShortAdd(
                       *((USHORT *)&stru_140E3E928.MiscFlags + 2),
                       (USHORT)stru_140E3E928.FirstArgument,
                       (USHORT *)&stru_140E3E928.WaitBlockFill11[16]) >= 0
                  && RtlUShortAdd(
                       *(USHORT *)&stru_140E3E928.WaitBlockFill11[16],
                       (USHORT)stru_140E3E928.ApcState.ApcListHead[0].Flink,
                       v26) >= 0
                  && RtlUShortAdd(
                       *(USHORT *)&stru_140E3E928.WaitBlockFill11[16],
                       *(USHORT *)&stru_140E3E928.ApcStateFill[16],
                       v27) >= 0
                  && RtlUShortAdd(*(USHORT *)&stru_140E3E928.WaitBlockFill11[16], 8u, v28) >= 0
                  && (stru_140E3E928.WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)BgpFwAllocateMemory(*(unsigned __int16 *)&stru_140E3E928.WaitBlockFill11[16])) != 0LL
                  && (stru_140E3E928.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)BgpFwAllocateMemory(0x400uLL)) != 0LL
                  && RtlUShortAdd(
                       *(USHORT *)&stru_140E3E928.ApcStateFill[32],
                       4u,
                       (USHORT *)&stru_140E3E928.WaitBlockFill11[32]) >= 0
                  && RtlUShortAdd(*(USHORT *)&stru_140E3E928.WaitBlockFill11[32], 0x100u, v29) >= 0
                  && (stru_140E3E928.WaitBlock[0].Thread = (struct _KTHREAD *)BgpFwAllocateMemory(*(unsigned __int16 *)&stru_140E3E928.WaitBlockFill11[32])) != 0LL )
                {
                  if ( *BcpFindMessage(0x41008006u) == 48 )
                    *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0x20000u;
                  v41[0] = (*(_DWORD *)(a1 + 120) & 0x10000000) != 0
                         ? -14389468
                         : BYTE1(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink) != 0
                         ? -16777216
                         : -16761454;
                  v41[1] = -1;
                  for ( i = 0LL; i < 105; i += 21LL )
                  {
                    for ( j = 0LL; j < 4; ++j )
                    {
                      if ( (int)BgpFoDetermineFontInformation(
                                  dword_140E0F020[i + j],
                                  v30,
                                  v31,
                                  &v37,
                                  (unsigned int *)&v42 + 2,
                                  (__int64 **)&v42) < 0 )
                        goto LABEL_46;
                      dword_140E0F020[i + j] = DWORD2(v42);
                    }
                  }
                  HIDWORD(v42) = 0;
                  if ( (int)BcpGetMaxResourceProfile((__int128 *)v41, (unsigned __int64 *)&v40) >= 0 )
                  {
                    v34 = v40;
                    Memory = BgpFwAllocateMemory(v40);
                    if ( Memory )
                    {
                      *(_QWORD *)&gLoadedDiffHivesLock.ApcStateFill[40] = Memory;
                      v38 = __PAIR64__(HIDWORD(v37), DWORD2(v40));
                      gLoadedDiffHivesLock.WaitStatus = v34;
                      gLoadedDiffHivesLock.WaitBlockList = 0LL;
                      *(_QWORD *)&stru_140E3E928.Timer.Processor = BgpDisplayCharacterGetContext(
                                                                     (__int64)v41,
                                                                     (int *)&v38,
                                                                     3);
                      if ( *(_QWORD *)&stru_140E3E928.Timer.Processor )
                      {
                        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0x10u;
                        return 0LL;
                      }
                    }
                  }
                }
              }
            }
LABEL_46:
            if ( SourceString )
              BgpFwFreeMemory((__int64)SourceString);
            if ( v6 )
              BgpFwFreeMemory((__int64)v6);
          }
        }
      }
      if ( BYTE1(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink) )
      {
        if ( stru_140E3E928.WaitBlock[0].SparePtr )
          BgpFwFreeMemory((__int64)stru_140E3E928.WaitBlock[0].SparePtr);
        if ( stru_140E3E928.WaitBlock[0].WaitListEntry.Blink )
          BgpFwFreeMemory((__int64)stru_140E3E928.WaitBlock[0].WaitListEntry.Blink);
        if ( stru_140E3E928.WaitBlock[0].WaitListEntry.Flink )
          BgpFwFreeMemory((__int64)stru_140E3E928.WaitBlock[0].WaitListEntry.Flink);
        if ( stru_140E3E928.WaitBlock[0].Thread )
          BgpFwFreeMemory((__int64)stru_140E3E928.WaitBlock[0].Thread);
      }
      if ( *(_QWORD *)&stru_140E3E928.Timer.Processor )
        BgpDisplayCharacterDestroyContext(*(__int64 *)&stru_140E3E928.Timer.Processor);
    }
  }
  return 0LL;
}
