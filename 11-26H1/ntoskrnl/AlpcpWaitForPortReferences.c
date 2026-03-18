/*
 * XREFs of AlpcpWaitForPortReferences @ 0x140B532D4
 * Callers:
 *     NtAlpcQueryInformation @ 0x140A6BBE0 (NtAlpcQueryInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall AlpcpWaitForPortReferences(__int64 a1, unsigned int *a2, int a3, _DWORD *a4, char a5)
{
  unsigned int ULongFromUser; // eax
  volatile signed __int64 *v9; // rdi
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbx
  unsigned int v14; // esi
  struct _KLOCK_ENTRIES *v15; // r9
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // r15
  __int128 Event; // [rsp+38h] [rbp-30h] BYREF
  __int128 Event_16; // [rsp+48h] [rbp-20h]

  Event = 0LL;
  Event_16 = 0LL;
  if ( !a1 || a3 != 4 )
    return 3221225485LL;
  if ( a5 )
    ULongFromUser = RtlReadULongFromUser(a2);
  else
    ULongFromUser = *a2;
  DWORD2(Event_16) = ULongFromUser;
  if ( a4 )
  {
    if ( a5 )
      RtlWriteULongToUser(a4, 0);
    else
      *a4 = 0;
  }
  if ( *(_DWORD *)(a1 + 404) == DWORD2(Event_16) )
    return 0LL;
  KeInitializeEvent((PRKEVENT)&Event, SynchronizationEvent, 0);
  v9 = (volatile signed __int64 *)(a1 + 352);
  v11 = (AutoBoost *)KeAbPreAcquire(a1 + 352, 0LL, 0LL, v10);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v11, a1 + 352);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  if ( *(_QWORD *)(a1 + 408) )
  {
    v14 = -1073741811;
  }
  else if ( *(_DWORD *)(a1 + 404) == DWORD2(Event_16) )
  {
    v14 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 408) = &Event;
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    while ( 1 )
    {
      v14 = KeWaitForSingleObject(&Event, WrUserRequest, 0, 1u, 0LL);
      if ( !v14 )
        break;
      if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
      {
        v14 = -1073741749;
        break;
      }
    }
    v16 = (AutoBoost *)KeAbPreAcquire(a1 + 352, 0LL, 0LL, v15);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v16, a1 + 352);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  return v14;
}
