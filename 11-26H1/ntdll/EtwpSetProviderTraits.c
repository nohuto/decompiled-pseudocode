/*
 * XREFs of EtwpSetProviderTraits @ 0x180041D70
 * Callers:
 *     EtwEventSetInformation @ 0x180117BD0 (EtwEventSetInformation.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlSetLastWin32Error @ 0x180040B90 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180042610 (EtwpUpdateEnableInfoAndCallback.c)
 *     ProviderHandleLookup @ 0x18008D650 (ProviderHandleLookup.c)
 *     NtTraceControl @ 0x180162910 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpSetProviderTraits(__int64 a1, __int64 a2, __int16 a3)
{
  ULONG OutputBufferLength; // ebp
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int32 v10; // ebx
  __int64 v11; // rax
  _BYTE *v12; // rsi
  int v13; // r15d
  NTSTATUS v14; // eax
  NTSTATUS v15; // ebx
  _BYTE *Heap_0; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp-D8h] BYREF
  __int128 InputBuffer; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h]
  _BYTE OutputBuffer[120]; // [rsp+50h] [rbp-B8h] BYREF

  OutputBufferLength = 120;
  memset_thunk_772440563353939046(OutputBuffer, 0, 0x78uLL);
  v20 = 0LL;
  ReturnLength = 0;
  InputBuffer = 0LL;
  v8 = ProviderHandleLookup(v7, (unsigned int)a1);
  v9 = v8;
  if ( !v8 || WORD2(a1) != *(_WORD *)(v8 + 84) )
  {
    v10 = 6;
LABEL_14:
    RtlSetLastWin32Error(v10);
    return v10;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v8 + 64));
  *(_DWORD *)(v9 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  memset_thunk_772440563353939046(OutputBuffer, 0, 0x78uLL);
  v11 = *(_QWORD *)(v9 + 88);
  v12 = OutputBuffer;
  *((_QWORD *)&InputBuffer + 1) = a2;
  v13 = 0;
  *(_QWORD *)&InputBuffer = v11;
  LOWORD(v20) = a3;
  while ( 1 )
  {
    v14 = NtTraceControl(EtwSetProviderTraitsCode, &InputBuffer, 0x18u, v12, OutputBufferLength, &ReturnLength);
    v15 = v14;
    if ( v14 != -1073741789 )
      break;
    if ( v12 != OutputBuffer )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v12);
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
    OutputBufferLength = ReturnLength;
    v12 = Heap_0;
    if ( !Heap_0 )
    {
      v15 = -1073741801;
      goto LABEL_16;
    }
    if ( (unsigned int)++v13 >= 0x10 )
      goto LABEL_16;
  }
  if ( !v14 )
  {
    v10 = 0;
    goto LABEL_8;
  }
LABEL_16:
  v10 = RtlNtStatusToDosError(v15);
  if ( v10 )
    goto LABEL_10;
LABEL_8:
  *(_WORD *)(v9 + 86) |= 0x4000u;
  if ( ReturnLength )
    EtwpUpdateEnableInfoAndCallback(v9, v12);
LABEL_10:
  *(_DWORD *)(v9 + 80) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v9 + 64));
  if ( v12 && v12 != OutputBuffer )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v12);
  if ( v10 )
    goto LABEL_14;
  return v10;
}
