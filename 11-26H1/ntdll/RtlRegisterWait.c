/*
 * XREFs of RtlRegisterWait @ 0x180039430
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpTpResumeImpersonation @ 0x1800397B8 (RtlpTpResumeImpersonation.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180039890 (TpSetDefaultPoolMaxThreads.c)
 *     TpAllocWait @ 0x1800399E0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     RtlpTpDeleteData @ 0x180087894 (RtlpTpDeleteData.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenThreadToken @ 0x18015F2C0 (NtOpenThreadToken.c)
 *     NtDuplicateToken @ 0x18015F680 (NtDuplicateToken.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlRegisterWait(
        PHANDLE WaitHandle,
        HANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG Milliseconds,
        ULONG Flags)
{
  char v9; // r15
  _QWORD *NewTokenHandle; // rbx
  int v11; // edi
  _QWORD *Heap_0; // rax
  HANDLE v13; // rdi
  int v14; // eax
  HANDLE TokenHandle; // [rsp+38h] [rbp-90h] BYREF
  _QWORD *v17; // [rsp+40h] [rbp-88h]
  __int64 ThreadInformation; // [rsp+48h] [rbp-80h] BYREF
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+50h] [rbp-78h] BYREF

  v9 = 0;
  *(&CallbackEnviron.Version + 1) = 0;
  memset_thunk_772440563353939046(&CallbackEnviron, 0, 0x44uLL);
  TokenHandle = 0LL;
  NewTokenHandle = 0LL;
  v17 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( (char *)Handle - 1 > (char *)0xFFFFFFFFFFFFFFFCLL || !Function )
    return -1073741811;
  *WaitHandle = 0LL;
  ThreadInformation = 0LL;
  TokenHandle = 0LL;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v11 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, (Flags & 0x100 | 0x200) >> 7, 1u, &TokenHandle);
    if ( v11 >= 0 )
    {
      ThreadInformation = 0LL;
      v11 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      if ( v11 < 0 )
      {
        NtClose(TokenHandle);
        TokenHandle = 0LL;
      }
      else
      {
        v11 = 0;
      }
    }
  }
  else
  {
    v11 = 0;
  }
  if ( v11 >= 0 )
  {
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    NewTokenHandle = Heap_0;
    v17 = Heap_0;
    if ( Heap_0 )
    {
      Heap_0[6] = 0LL;
      v13 = TokenHandle;
      *((_DWORD *)Heap_0 + 2) = Flags;
      *Heap_0 = 0LL;
      if ( (Flags & 0xFFFF0000) != 0 )
        TpSetDefaultPoolMaxThreads(HIWORD(Flags));
      if ( !v13
        || (Flags & 0x100) == 0
        || (v11 = NtDuplicateToken(v13, 4u, 0LL, 0, TokenImpersonation, (PHANDLE)NewTokenHandle), v11 >= 0) )
      {
        v11 = 0;
      }
      if ( v11 < 0 )
      {
        v9 = 0;
      }
      else
      {
        NewTokenHandle[2] = 0LL;
        *((_DWORD *)NewTokenHandle + 6) = 0;
        NewTokenHandle[4] = Function;
        NewTokenHandle[5] = Context;
        NewTokenHandle[7] = Handle;
        if ( Milliseconds == -1 )
        {
          NewTokenHandle[8] = 0LL;
          NewTokenHandle[9] = 0LL;
        }
        else
        {
          NewTokenHandle[8] = Milliseconds;
          NewTokenHandle[8] = -10000LL * Milliseconds;
          NewTokenHandle[9] = NewTokenHandle + 8;
        }
        NewTokenHandle[10] = 0LL;
        *((_DWORD *)NewTokenHandle + 22) = 0;
        CallbackEnviron.Version = 3;
        memset(&CallbackEnviron.Pool, 0, 52);
        CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
        CallbackEnviron.Size = 72;
        v14 = 0;
        if ( (Flags & 0xC4) != 0 )
        {
          CallbackEnviron.u.Flags = 2;
          v14 = 2;
        }
        if ( (Flags & 0x10) != 0 )
          CallbackEnviron.u.Flags = v14 | 1;
        CallbackEnviron.FinalizationCallback = (void (__fastcall *)(_TP_CALLBACK_INSTANCE *, void *))&RtlpTpWaitFinalizationCallback;
        v11 = TpAllocWait((PTP_WAIT *)NewTokenHandle + 6, RtlpTpWaitCallback, NewTokenHandle, &CallbackEnviron);
        if ( v11 >= 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)NewTokenHandle + 2);
          *WaitHandle = NewTokenHandle;
          TpSetWaitEx((PTP_WAIT)NewTokenHandle[6], Handle, (PLARGE_INTEGER)NewTokenHandle[9], 0LL);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)NewTokenHandle + 2);
          NewTokenHandle = 0LL;
          v17 = 0LL;
          v11 = 0;
        }
        v9 = 1;
      }
    }
    else
    {
      v11 = -1073741801;
    }
  }
  if ( NewTokenHandle )
  {
    if ( v9 )
      RtlpTpDeleteData(NewTokenHandle);
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, NewTokenHandle);
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v11;
}
