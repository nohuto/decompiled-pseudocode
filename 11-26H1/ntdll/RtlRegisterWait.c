/*
 * XREFs of RtlRegisterWait @ 0x18004EEB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpTpResumeImpersonation @ 0x18004F238 (RtlpTpResumeImpersonation.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18004F310 (TpSetDefaultPoolMaxThreads.c)
 *     TpAllocWait @ 0x18004F460 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18004F8E0 (TpSetWaitEx.c)
 *     RtlpTpDeleteData @ 0x180067444 (RtlpTpDeleteData.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenThreadToken @ 0x18015F3C0 (NtOpenThreadToken.c)
 *     NtDuplicateToken @ 0x18015F780 (NtDuplicateToken.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlRegisterWait(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  char v9; // r15
  __int64 v10; // r8
  __int64 v11; // rbx
  int v12; // edi
  __int64 Heap_0; // rax
  HANDLE v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  HANDLE Handle; // [rsp+38h] [rbp-90h] BYREF
  __int64 v19; // [rsp+40h] [rbp-88h]
  __int64 v20; // [rsp+48h] [rbp-80h] BYREF
  _DWORD v21[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v22; // [rsp+58h] [rbp-70h]
  __int64 v23; // [rsp+60h] [rbp-68h]
  __int64 v24; // [rsp+68h] [rbp-60h]
  __int128 v25; // [rsp+70h] [rbp-58h]
  __int64 (__fastcall *v26)(); // [rsp+80h] [rbp-48h]
  int v27; // [rsp+88h] [rbp-40h]
  int v28; // [rsp+8Ch] [rbp-3Ch]
  int v29; // [rsp+90h] [rbp-38h]

  v9 = 0;
  v21[1] = 0;
  memset_thunk_772440563353939046(v21, 0, 0x44uLL);
  Handle = 0LL;
  v11 = 0LL;
  v19 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFCuLL || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    LOBYTE(v10) = 1;
    v12 = NtOpenThreadToken(-2LL, (a6 & 0x100 | 0x200) >> 7, v10, &Handle);
    if ( v12 >= 0 )
    {
      v20 = 0LL;
      v12 = NtSetInformationThread(-2LL, 5LL, &v20, 8LL);
      if ( v12 < 0 )
      {
        NtClose(Handle);
        Handle = 0LL;
      }
      else
      {
        v12 = 0;
      }
    }
  }
  else
  {
    v12 = 0;
  }
  if ( v12 >= 0 )
  {
    Heap_0 = RtlAllocateHeap_0();
    v11 = Heap_0;
    v19 = Heap_0;
    if ( Heap_0 )
    {
      *(_QWORD *)(Heap_0 + 48) = 0LL;
      v14 = Handle;
      *(_DWORD *)(Heap_0 + 8) = a6;
      *(_QWORD *)Heap_0 = 0LL;
      if ( (a6 & 0xFFFF0000) != 0 )
        TpSetDefaultPoolMaxThreads(HIWORD(a6));
      if ( !v14 || (a6 & 0x100) == 0 || (v12 = NtDuplicateToken(v14, 4LL, 0LL, 0LL, 2, v11), v12 >= 0) )
        v12 = 0;
      if ( v12 < 0 )
      {
        v9 = 0;
      }
      else
      {
        *(_QWORD *)(v11 + 16) = 0LL;
        *(_DWORD *)(v11 + 24) = 0;
        *(_QWORD *)(v11 + 32) = a3;
        *(_QWORD *)(v11 + 40) = a4;
        *(_QWORD *)(v11 + 56) = a2;
        if ( a5 == -1 )
        {
          *(_QWORD *)(v11 + 64) = 0LL;
          *(_QWORD *)(v11 + 72) = 0LL;
        }
        else
        {
          *(_QWORD *)(v11 + 64) = a5;
          *(_QWORD *)(v11 + 64) = -10000LL * a5;
          *(_QWORD *)(v11 + 72) = v11 + 64;
        }
        *(_QWORD *)(v11 + 80) = 0LL;
        *(_DWORD *)(v11 + 88) = 0;
        v21[0] = 3;
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0;
        v28 = 1;
        v29 = 72;
        v15 = 0;
        if ( (a6 & 0xC4) != 0 )
        {
          v27 = 2;
          v15 = 2;
        }
        if ( (a6 & 0x10) != 0 )
          v27 = v15 | 1;
        v26 = RtlpTpWaitFinalizationCallback;
        v12 = TpAllocWait(v11 + 48, RtlpTpWaitCallback, v11, v21);
        if ( v12 >= 0 )
        {
          RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v11 + 16), v16);
          *a1 = v11;
          TpSetWaitEx(*(_QWORD *)(v11 + 48), a2, *(_QWORD *)(v11 + 72), 0LL);
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v11 + 16));
          v11 = 0LL;
          v19 = 0LL;
          v12 = 0;
        }
        v9 = 1;
      }
    }
    else
    {
      v12 = -1073741801;
    }
  }
  if ( v11 )
  {
    if ( v9 )
      RtlpTpDeleteData(v11);
    RtlFreeHeap_0();
  }
  RtlpTpResumeImpersonation(Handle);
  return (unsigned int)v12;
}
