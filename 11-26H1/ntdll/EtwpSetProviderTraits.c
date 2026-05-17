/*
 * XREFs of EtwpSetProviderTraits @ 0x1800577F0
 * Callers:
 *     EtwEventSetInformation @ 0x180117E20 (EtwEventSetInformation.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlSetLastWin32Error @ 0x180056610 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180058090 (EtwpUpdateEnableInfoAndCallback.c)
 *     ProviderHandleLookup @ 0x18006D200 (ProviderHandleLookup.c)
 *     NtTraceControl @ 0x180162A10 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpSetProviderTraits(__int64 a1, __int64 a2, __int16 a3)
{
  int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  ULONG v11; // ebx
  __int64 v12; // rax
  _BYTE *v13; // rsi
  int v14; // r15d
  NTSTATUS v15; // eax
  NTSTATUS v16; // ebx
  __int64 Heap_0; // rax
  int v19; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h]
  _BYTE v22[120]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = 120;
  memset_thunk_772440563353939046(v22, 0, 0x78uLL);
  v21 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v8 = ProviderHandleLookup(v7, (unsigned int)a1);
  v10 = v8;
  if ( !v8 || WORD2(a1) != *(_WORD *)(v8 + 84) )
  {
    v11 = 6;
LABEL_14:
    RtlSetLastWin32Error(v11);
    return v11;
  }
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v8 + 64), v9);
  *(_DWORD *)(v10 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  memset_thunk_772440563353939046(v22, 0, 0x78uLL);
  v12 = *(_QWORD *)(v10 + 88);
  v13 = v22;
  *((_QWORD *)&v20 + 1) = a2;
  v14 = 0;
  *(_QWORD *)&v20 = v12;
  LOWORD(v21) = a3;
  while ( 1 )
  {
    v15 = NtTraceControl(30LL, &v20, 24LL, v13, v6, &v19);
    v16 = v15;
    if ( v15 != -1073741789 )
      break;
    if ( v13 != v22 )
      RtlFreeHeap_0();
    Heap_0 = RtlAllocateHeap_0();
    v6 = v19;
    v13 = (_BYTE *)Heap_0;
    if ( !Heap_0 )
    {
      v16 = -1073741801;
      goto LABEL_16;
    }
    if ( (unsigned int)++v14 >= 0x10 )
      goto LABEL_16;
  }
  if ( !v15 )
  {
    v11 = 0;
    goto LABEL_8;
  }
LABEL_16:
  v11 = RtlNtStatusToDosError(v16);
  if ( v11 )
    goto LABEL_10;
LABEL_8:
  *(_WORD *)(v10 + 86) |= 0x4000u;
  if ( v19 )
    EtwpUpdateEnableInfoAndCallback(v10, v13);
LABEL_10:
  *(_DWORD *)(v10 + 80) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v10 + 64));
  if ( v13 && v13 != v22 )
    RtlFreeHeap_0();
  if ( v11 )
    goto LABEL_14;
  return v11;
}
