/*
 * XREFs of NtCreateThread @ 0x1407F57E0
 * Callers:
 *     DifNtCreateThreadWrapper @ 0x140677C10 (DifNtCreateThreadWrapper.c)
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x1403D6D60 (RtlpSanitizeContextFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PspCreateThread @ 0x140A7A214 (PspCreateThread.c)
 */

NTSTATUS __cdecl NtCreateThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PCONTEXT ThreadContext,
        PINITIAL_TEB InitialTeb,
        BOOLEAN CreateSuspended)
{
  PCONTEXT v9; // rbx
  NTSTATUS result; // eax
  char PreviousMode; // r15
  __int64 ULong64FromUser; // rax
  _OWORD *v13; // rax
  __int64 v14; // rcx
  _INITIAL_TEB::$51A6825BF626353FB0168B5A96FF6713 OldInitialTeb; // xmm0
  _KPROCESS *Process; // rcx
  __int16 v17; // ax
  bool v18; // zf
  char v19; // al
  _INITIAL_TEB::$51A6825BF626353FB0168B5A96FF6713 v23; // [rsp+B0h] [rbp-588h] BYREF
  __int128 v24; // [rsp+C0h] [rbp-578h]
  PVOID StackAllocationBase; // [rsp+D0h] [rbp-568h]
  __int128 v26; // [rsp+D8h] [rbp-560h]
  PVOID v27; // [rsp+E8h] [rbp-550h]
  char v28; // [rsp+100h] [rbp-538h] BYREF
  __int128 v29; // [rsp+101h] [rbp-537h]
  __int64 v30; // [rsp+111h] [rbp-527h]
  _BYTE v31[152]; // [rsp+120h] [rbp-518h] BYREF
  unsigned __int64 v32; // [rsp+1B8h] [rbp-480h]

  v9 = ThreadContext;
  memset_0(&v23, 0, 0x48uLL);
  v29 = 0LL;
  v30 = 0LL;
  if ( !ThreadContext )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(ThreadHandle);
    RtlWriteULong64ToUser(ThreadHandle, ULong64FromUser);
    if ( ClientId )
      ProbeForWrite(ClientId, 0x10uLL, 4u);
    ProbeForRead(ThreadContext, 1uLL, 0x10u);
    v13 = v31;
    v14 = 9LL;
    do
    {
      *v13 = *(_OWORD *)&v9->P1Home;
      v13[1] = *(_OWORD *)&v9->P3Home;
      v13[2] = *(_OWORD *)&v9->P5Home;
      v13[3] = *(_OWORD *)&v9->ContextFlags;
      v13[4] = *(_OWORD *)&v9->SegGs;
      v13[5] = *(_OWORD *)&v9->Dr1;
      v13[6] = *(_OWORD *)&v9->Dr3;
      v13 += 8;
      *(v13 - 1) = *(_OWORD *)&v9->Dr7;
      v9 = (PCONTEXT)((char *)v9 + 128);
      --v14;
    }
    while ( v14 );
    *v13 = *(_OWORD *)&v9->P1Home;
    v13[1] = *(_OWORD *)&v9->P3Home;
    v13[2] = *(_OWORD *)&v9->P5Home;
    v13[3] = *(_OWORD *)&v9->ContextFlags;
    v13[4] = *(_OWORD *)&v9->SegGs;
    v9 = (PCONTEXT)v31;
    v32 = (v32 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
    ProbeForRead(InitialTeb, 1uLL, 4u);
  }
  result = RtlpSanitizeContextFlags(&v9->ContextFlags, PreviousMode);
  if ( result >= 0 )
  {
    v9->ContextFlags &= 0x10001Fu;
    *ThreadHandle = 0LL;
    OldInitialTeb = InitialTeb->OldInitialTeb;
    v23 = InitialTeb->OldInitialTeb;
    if ( *(_OWORD *)&v23 == 0LL )
    {
      v23 = OldInitialTeb;
      v24 = *(_OWORD *)&InitialTeb->StackBase;
      StackAllocationBase = InitialTeb->StackAllocationBase;
      if ( StackAllocationBase )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process[1].ReadyTime )
        {
          v17 = WORD2(Process[3].PerProcessorCycleTimes);
          if ( v17 == 332 || (v18 = v17 == 452, v19 = 0, v18) )
            v19 = 1;
          if ( v19 )
          {
            v27 = StackAllocationBase;
            v26 = v24;
            StackAllocationBase = 0LL;
            v24 = 0LL;
          }
        }
        v28 = 1;
        return PspCreateThread(
                 ThreadHandle,
                 DesiredAccess,
                 ObjectAttributes,
                 ProcessHandle,
                 0LL,
                 0LL,
                 ClientId,
                 v9,
                 &v23,
                 CreateSuspended == 1,
                 0LL,
                 0LL,
                 &v28);
      }
      else
      {
        return -1073741811;
      }
    }
    else
    {
      return -1073741637;
    }
  }
  return result;
}
