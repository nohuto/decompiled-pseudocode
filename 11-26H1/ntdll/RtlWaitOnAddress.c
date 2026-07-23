/*
 * XREFs of RtlWaitOnAddress @ 0x180069B00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpOptimizeWaitOnAddressWaitList @ 0x18006A040 (RtlpOptimizeWaitOnAddressWaitList.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18006A0A0 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     NtWaitForAlertByThreadId @ 0x180162AB0 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlWaitOnAddress(void *Address, PVOID CompareAddress, SIZE_T AddressSize, PLARGE_INTEGER Timeout)
{
  __int64 v4; // r15
  NTSTATUS v5; // edi
  struct _TEB *v10; // rcx
  __int64 WaitOnAddressHashTable; // r14
  unsigned __int64 v12; // rax
  signed __int64 v13; // rcx
  volatile signed __int64 *v14; // r9
  PVOID *v15; // rax
  unsigned __int64 v16; // r8
  signed __int64 v17; // rax
  SIZE_T v18; // rbx
  SIZE_T v19; // rbx
  SIZE_T v20; // rbx
  bool v23; // zf
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  int i; // edx
  PVOID v29; // rsi
  NTSTATUS v30; // ebx
  NTSTATUS v31; // eax
  PVOID Addressa[5]; // [rsp+20h] [rbp-48h] BYREF
  __int32 v33[2]; // [rsp+48h] [rbp-20h] BYREF

  v4 = (unsigned int)RtlpWaitOnAddressSpinCycleCount;
  v5 = 0;
  v33[1] = 0;
  if ( AddressSize - 1 <= 7 && ((AddressSize - 1) & AddressSize) == 0 )
  {
    Addressa[0] = Address;
    v33[0] = 1;
    Addressa[3] = 0LL;
    v10 = NtCurrentTeb();
    Addressa[1] = v10->ClientId.UniqueThread;
    WaitOnAddressHashTable = (__int64)v10->ProcessEnvironmentBlock->WaitOnAddressHashTable;
    v12 = ((unsigned __int64)Address >> 5) & 0x7F;
    v13 = *(_QWORD *)(WaitOnAddressHashTable + 8 * v12);
    v14 = (volatile signed __int64 *)(WaitOnAddressHashTable + 8 * v12);
    while ( 1 )
    {
      v15 = Addressa;
      v16 = v13 ^ ((unsigned __int64)Addressa ^ v13) & 0xFFFFFFFFFFFFFFFCuLL;
      Addressa[2] = (PVOID)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (v13 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        v15 = 0LL;
      Addressa[4] = v15;
      if ( (v13 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        v16 |= 2uLL;
      v17 = _InterlockedCompareExchange64(v14, v16, v13);
      if ( v13 == v17 )
        break;
      v13 = v17;
    }
    if ( (((unsigned __int8)v13 ^ (unsigned __int8)v16) & 2) != 0 )
      RtlpOptimizeWaitOnAddressWaitList(v14);
    v18 = AddressSize - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 2;
        if ( v20 )
        {
          if ( v20 != 4 )
          {
LABEL_15:
            RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, Addressa);
            return v5;
          }
          v23 = *(_QWORD *)Address == *(_QWORD *)CompareAddress;
        }
        else
        {
          v23 = *(_DWORD *)Address == *(_DWORD *)CompareAddress;
        }
      }
      else
      {
        v23 = *(_WORD *)Address == *(_WORD *)CompareAddress;
      }
      if ( !v23 )
        goto LABEL_15;
    }
    else if ( *(_BYTE *)Address != *(_BYTE *)CompareAddress )
    {
      goto LABEL_15;
    }
    if ( MEMORY[0x7FFE036A] > 1u )
    {
      if ( MEMORY[0x7FFE0297] )
      {
        v24 = __rdtsc();
        v25 = v24 + v4;
        while ( 1 )
        {
          __asm { monitorx rax, rcx, rdx }
          if ( (v33[0] & 1) == 0 )
            break;
          v26 = v24;
          v27 = __rdtsc();
          v24 = v27;
          if ( v27 < v26 || v27 >= v25 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0; (v33[0] & 1) != 0 && i != (unsigned int)v4 / MEMORY[0x7FFE02D6]; ++i )
          _mm_pause();
      }
    }
    if ( !_interlockedbittestandreset(v33, 0) )
      return v5;
    v29 = Addressa[0];
    v30 = NtWaitForAlertByThreadId(Addressa[0], Timeout);
    if ( v30 == 258 )
    {
      if ( _InterlockedExchange(v33, 4) == 2 )
      {
        v31 = NtWaitForAlertByThreadId(v29, 0LL);
        if ( v31 != 257 )
          return v31;
        return v5;
      }
      RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, Addressa);
    }
    if ( v30 != 257 )
      return v30;
    return v5;
  }
  return -1073741811;
}
