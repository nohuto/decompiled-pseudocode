/*
 * XREFs of SmpDestroyControlBlock @ 0x1400075E8
 * Callers:
 *     SmpStartCsr @ 0x1400032A0 (SmpStartCsr.c)
 *     SmpApiCallback @ 0x140005930 (SmpApiCallback.c)
 *     SmpHandleConnectionRequest @ 0x1400060A0 (SmpHandleConnectionRequest.c)
 *     SmpStopCsr @ 0x140007420 (SmpStopCsr.c)
 * Callees:
 *     SmpReleaseControlBlock @ 0x140003C60 (SmpReleaseControlBlock.c)
 *     SmpTerminateCSR @ 0x1400056C0 (SmpTerminateCSR.c)
 *     SmLogFailureInt @ 0x140007A08 (SmLogFailureInt.c)
 *     SmpSessionIdToInitialSessionIndex @ 0x1400094C0 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpSessionIdIsInitialSessions @ 0x14000B530 (SmpSessionIdIsInitialSessions.c)
 *     SmpTerminate @ 0x140018DC4 (SmpTerminate.c)
 */

__int64 __fastcall SmpDestroyControlBlock(HANDLE *BaseAddress, int a2)
{
  unsigned int v2; // ebx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  HANDLE v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 Parameters[4]; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  if ( (*(_BYTE *)BaseAddress & 2) == 0 )
  {
    _m_prefetchw(BaseAddress);
    v5 = *(_DWORD *)BaseAddress;
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)BaseAddress, v5 | 2, v5);
    }
    while ( v6 != v5 );
    if ( (v5 & 2) == 0 )
    {
      v7 = *((unsigned int *)BaseAddress + 2);
      SmpReleaseControlBlock((char *)BaseAddress);
      if ( a2 )
      {
        if ( (unsigned __int8)SmpSessionIdIsInitialSessions((unsigned int)v7)
          && !*(_DWORD *)(SmpCoreProcessIds
                        + 40LL * (unsigned int)SmpSessionIdToInitialSessionIndex((unsigned int)v7)
                        + 4) )
        {
          v8 = (unsigned __int64)BaseAddress[2];
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"initial session process or");
          v9 = BaseAddress[7];
          Parameters[0] = (unsigned __int64)&DestinationString;
          Parameters[1] = *(int *)(v8 + 4);
          Parameters[2] = v7;
          Parameters[3] = v8;
          SmLogFailureInt((unsigned int)"SmpDestroyControlBlock", 675, (_DWORD)v9, 0, *(_DWORD *)(v8 + 4));
          SmpTerminate(Parameters, 1u, 4u);
          __debugbreak();
        }
        NtTerminateProcess(BaseAddress[6], -1073741823);
        v2 = SmpTerminateCSR(v7, v10, v11);
      }
    }
  }
  NtWaitForSingleObject(BaseAddress[6], 0, 0LL);
  return v2;
}
