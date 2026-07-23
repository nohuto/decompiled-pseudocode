/*
 * XREFs of KsepGetShimCallbacksForDriver @ 0x140A387F0
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140A39400 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     KsepLogInfo @ 0x1404C6324 (KsepLogInfo.c)
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KsepIsModuleShimmed @ 0x140A388F4 (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KsepGetShimCallbacksForDriver(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r12
  _DWORD *v17; // rdx
  unsigned int v18; // r15d
  __int64 v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF
  __int64 v25; // [rsp+80h] [rbp+18h]
  __int64 v26; // [rsp+88h] [rbp+20h]

  v2 = 0;
  v24 = 0LL;
  if ( !a2 )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v6) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v6) = 459517;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("IoCallbacks != NULL", "minkernel\\ntos\\kshim\\kseloader.c", 0x2FDu, 0LL);
  }
  memset_0(a2, 0, 0x100uLL);
  if ( !(unsigned int)KsepIsModuleShimmed(&KseEngine, a1, &v24) )
    return (unsigned int)-1073741275;
  v7 = *(_DWORD *)(v24 + 24);
  v8 = *(_QWORD *)(v24 + 32);
  if ( v7 )
  {
    v9 = v8 + 72;
    v25 = *(unsigned int *)(v24 + 24);
    v26 = v8 + 72;
    v10 = v7;
    while ( 1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v9 + 28LL) & 4) == 0 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
        if ( !v11 )
        {
          v12 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                    1u)
               + 1) & 0x3F;
          *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v12) = -1073740768;
          *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v12) = 459570;
          if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
          {
            RtlAssert("CurrentShim != NULL", "minkernel\\ntos\\kshim\\kseloader.c", 0x332u, 0LL);
            v10 = v25;
          }
        }
        v13 = *(_DWORD **)(v11 + 48);
        LODWORD(v14) = 0;
        LODWORD(v24) = 0;
        if ( *v13 != 4 )
          break;
      }
LABEL_48:
      v9 += 80LL;
      --v10;
      v26 = v9;
      v25 = v10;
      if ( !v10 )
        goto LABEL_49;
    }
    v15 = 0LL;
    v16 = v11;
    while ( 1 )
    {
      v17 = v13;
      if ( v13[v15] == 3 )
      {
        v18 = 0;
        if ( **(_DWORD **)&v13[v15 + 4] != 2 )
          break;
      }
LABEL_46:
      v14 = (unsigned int)(v14 + 1);
      LODWORD(v24) = v14;
      v15 = 6 * v14;
      v13 = v17;
      if ( v17[6 * v14] == 4 )
      {
        v9 = v26;
        v10 = v25;
        goto LABEL_48;
      }
    }
    v19 = 0LL;
    while ( 1 )
    {
      v20 = *(_QWORD *)&v13[v15 + 4];
      switch ( *(_DWORD *)(v19 + v20 + 8) )
      {
        case 1:
          if ( *a2 )
          {
            v22 = ((unsigned __int8)_InterlockedExchangeAdd(
                                      (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                      1u)
                 + 1) & 0x3F;
            *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * (unsigned int)v22) = 459598;
            goto LABEL_40;
          }
          *a2 = *(_QWORD *)(v19 + v20 + 16);
          break;
        case 2:
          if ( a2[1] )
          {
            v22 = ((unsigned __int8)_InterlockedExchangeAdd(
                                      (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                      1u)
                 + 1) & 0x3F;
            *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * (unsigned int)v22) = 459613;
            goto LABEL_40;
          }
          a2[1] = *(_QWORD *)(v19 + v20 + 16);
          break;
        case 3:
          if ( a2[2] )
          {
            v22 = ((unsigned __int8)_InterlockedExchangeAdd(
                                      (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                      1u)
                 + 1) & 0x3F;
            *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * (unsigned int)v22) = 459628;
            goto LABEL_40;
          }
          a2[2] = *(_QWORD *)(v19 + v20 + 16);
          break;
        case 4:
          if ( a2[3] )
          {
            v22 = ((unsigned __int8)_InterlockedExchangeAdd(
                                      (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                      1u)
                 + 1) & 0x3F;
            *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * (unsigned int)v22) = 459643;
            goto LABEL_40;
          }
          a2[3] = *(_QWORD *)(v19 + v20 + 16);
          break;
        default:
          v21 = (unsigned int)(*(_DWORD *)(v19 + v20 + 8) - 100);
          if ( (unsigned int)v21 > 0x1B )
          {
            v23 = ((unsigned __int8)_InterlockedExchangeAdd(
                                      (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                      1u)
                 + 1) & 0x3F;
            *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v23) = -1073741811;
            *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v23) = 459674;
            if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
              KsepDebugPrint(9LL, (int)"KSE: Invalid callback code encountered: %u\n", *(unsigned int *)(v19 + v20 + 8));
            KsepLogError(9LL, (__int64)"KSE: Invalid callback code encountered: %u\n", *(_DWORD *)(v19 + v20 + 8));
            break;
          }
          if ( a2[v21 + 4] )
          {
            v22 = ((unsigned __int8)_InterlockedExchangeAdd(
                                      (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                      1u)
                 + 1) & 0x3F;
            *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * (unsigned int)v22) = 459661;
LABEL_40:
            *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v22) = -1073741823;
            if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
              KsepDebugPrint(9LL, (int)"KSE: Two shims are hooking same callback! \n");
            KsepLogError(9LL, (__int64)"KSE: Two shims are hooking same callback! \n");
            break;
          }
          a2[(unsigned int)v21 + 4] = *(_QWORD *)(v19 + v20 + 16);
          break;
      }
      v17 = *(_DWORD **)(v16 + 48);
      ++v18;
      v13 = v17;
      v19 = 32LL * v18;
      if ( *(_DWORD *)(v19 + *(_QWORD *)&v17[v15 + 4]) == 2 )
      {
        LODWORD(v14) = v24;
        goto LABEL_46;
      }
    }
  }
LABEL_49:
  *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                    * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                           &KsepHistoryMessagesIndex,
                                                                           1u)
                                                      + 1) & 0x3F)] = 459694LL;
  if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
    KsepDebugPrint(9LL, (int)"KSE: GetShimCallbacks succeeded\n");
  KsepLogInfo(9LL, (__int64)"KSE: GetShimCallbacks succeeded\n");
  return v2;
}
