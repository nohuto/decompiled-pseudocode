/*
 * XREFs of RtlpWakeByAddress @ 0x180035FC0
 * Callers:
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180031C30 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlWakeAddressAll @ 0x180037B30 (RtlWakeAddressAll.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x18008E680 (RtlpDereferenceWnfUserSubscription.c)
 *     RtlWakeAddressSingle @ 0x1800E1450 (RtlWakeAddressSingle.c)
 *     RtlpUnWaitCriticalSection @ 0x18013DF00 (RtlpUnWaitCriticalSection.c)
 *     RtlWakeAddressAllNoFence @ 0x18014CC10 (RtlWakeAddressAllNoFence.c)
 *     RtlWakeAddressSingleNoFence @ 0x18014CC20 (RtlWakeAddressSingleNoFence.c)
 * Callees:
 *     RtlpWaitOnAddressWakeEntireList @ 0x18006A234 (RtlpWaitOnAddressWakeEntireList.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FC70 (ZwAlertThreadByThreadIdEx.c)
 */

signed __int64 __fastcall RtlpWakeByAddress(unsigned __int64 a1, char a2, __int64 a3)
{
  bool v3; // bp
  __int64 v4; // rdi
  _PEB *ProcessEnvironmentBlock; // rbx
  __int64 v9; // r10
  signed __int64 result; // rax
  signed __int64 v11; // rdx
  signed __int64 v12; // rtt
  signed __int64 v13; // rtt
  __int64 v14; // r8
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  char v21; // r8
  signed __int64 v22; // rtt
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  _QWORD *v26; // r8

  v3 = 0;
  v4 = (a1 >> 5) & 0x7F;
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  v9 = 0LL;
  result = (signed __int64)ProcessEnvironmentBlock->WaitOnAddressHashTable[v4];
  while ( result && (result & 1) == 0 )
  {
    if ( (result & 2) != 0 )
    {
      v13 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v4],
                 result | 1,
                 result);
      if ( v13 == result )
        return result;
    }
    else
    {
      v11 = result | 2;
      v12 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v4],
                 result | 2,
                 result);
      if ( v12 == result )
      {
LABEL_38:
        v25 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
        v26 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !*(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
        {
          do
          {
            result = (signed __int64)v26;
            v26 = (_QWORD *)v26[2];
            v26[3] = result;
          }
          while ( !v26[4] );
        }
        v14 = v26[4];
        *(_QWORD *)(v25 + 32) = v14;
        while ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 24);
          if ( *(_QWORD *)v14 == a1 )
          {
            v16 = *(_QWORD *)(v14 + 16);
            if ( v14 == v25 )
            {
              if ( v16 )
                v16 = v11 ^ (v11 ^ v16) & 0xFFFFFFFFFFFFFFFCuLL;
              result = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v4],
                         v16,
                         v11);
              if ( v11 != result )
              {
                v11 = result;
                goto LABEL_38;
              }
              v17 = *(_QWORD *)(v14 + 16);
              v3 = v16 == 0;
              if ( v17 )
              {
                *(_QWORD *)(v17 + 24) = 0LL;
                *(_QWORD *)(v17 + 32) = *(_QWORD *)(v14 + 32);
              }
            }
            else
            {
              *(_QWORD *)(v15 + 16) = v16;
              v23 = *(_QWORD *)(v14 + 16);
              v24 = *(_QWORD *)(v14 + 24);
              if ( v23 )
              {
                *(_QWORD *)(v23 + 24) = v24;
              }
              else
              {
                *(_QWORD *)(v25 + 32) = v24;
                *(_QWORD *)(*(_QWORD *)(v14 + 24) + 32LL) = *(_QWORD *)(v14 + 24);
              }
            }
            result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v14 + 40), 2);
            if ( (_DWORD)result != 2 )
            {
              if ( !(_DWORD)result )
              {
                *(_QWORD *)(v14 + 16) = v9;
                v9 = v14;
              }
              if ( !a2 )
                break;
            }
          }
          v14 = v15;
        }
        v18 = 0LL;
        if ( !a2 )
          v18 = a3;
        if ( v9 )
        {
          do
          {
            v19 = *(_QWORD *)(v9 + 16);
            result = ZwAlertThreadByThreadIdEx(*(_QWORD *)(v9 + 8), v18, v14);
            v9 = v19;
          }
          while ( v19 );
        }
        if ( !v3 )
        {
          result = (signed __int64)ProcessEnvironmentBlock->WaitOnAddressHashTable[v4];
          do
          {
            v20 = 0LL;
            v21 = result & 1;
            if ( (result & 1) == 0 )
              v20 = result & 0xFFFFFFFFFFFFFFFCuLL;
            v22 = result;
            result = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v4],
                       v20,
                       result);
          }
          while ( v22 != result );
          if ( v21 )
            return RtlpWaitOnAddressWakeEntireList(result);
        }
        return result;
      }
    }
  }
  return result;
}
