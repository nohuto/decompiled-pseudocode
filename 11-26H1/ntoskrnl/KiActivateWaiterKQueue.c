/*
 * XREFs of KiActivateWaiterKQueue @ 0x1403F0370
 * Callers:
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402249B0 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1403EFFA0 (KiActivateWaiterQueueWithThreadLock.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1403F07C0 (KiWakeQueueWaiter.c)
 */

unsigned __int64 __fastcall KiActivateWaiterKQueue(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v3; // rsi
  unsigned __int64 *v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 **v6; // rcx

  result = *(unsigned int *)(a1 + 40);
  if ( (unsigned int)result < *(_DWORD *)(a1 + 44) )
  {
    v3 = *(unsigned __int64 **)(a1 + 24);
    v4 = (unsigned __int64 *)(a1 + 24);
    if ( v3 != (unsigned __int64 *)(a1 + 24) )
    {
      result = a1 + 8;
      if ( *(_QWORD *)result != result )
      {
        v5 = *v3;
        v6 = (unsigned __int64 **)v3[1];
        if ( *(unsigned __int64 **)(*v3 + 8) == v3 && *v6 == v3 )
        {
          *v6 = (unsigned __int64 *)v5;
          *(_QWORD *)(v5 + 8) = v6;
          *v3 = 0LL;
          if ( (unsigned __int8)KiWakeQueueWaiter(KeGetCurrentPrcb(), a1, v3) )
          {
            result = (unsigned int)(*(_DWORD *)(a1 + 4) - 1);
            *(_DWORD *)(a1 + 4) = result;
            goto LABEL_3;
          }
          result = *v4;
          if ( *(unsigned __int64 **)(*v4 + 8) == v4 )
          {
            *v3 = result;
            v3[1] = (unsigned __int64)v4;
            *(_QWORD *)(result + 8) = v3;
            *v4 = (unsigned __int64)v3;
            goto LABEL_3;
          }
        }
        __fastfail(3u);
      }
    }
  }
LABEL_3:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return result;
}
