/*
 * XREFs of NVMeCompletePendingForwardIoRequests @ 0x140016528
 * Callers:
 *     IoQueuesFreeResources @ 0x14000D2C0 (IoQueuesFreeResources.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x14001679C (NVMeCompleteSubmissionQueueRequests.c)
 *     ProcessForwardIoControl @ 0x14002B318 (ProcessForwardIoControl.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall NVMeCompletePendingForwardIoRequests(__int64 a1, _QWORD *a2, int a3, char a4, char a5)
{
  _UNKNOWN **result; // rax
  __int64 v6; // rsi
  _QWORD *v7; // r14
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbx
  _QWORD v20[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v21; // [rsp+40h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = 0LL;
  v20[0] = 1LL;
  v7 = a2 + 8;
  v20[1] = 0LL;
  v21 = 0LL;
  if ( a2[20] )
  {
    StorPortExtendedFunction(93LL, a1, 1LL, v7);
    v12 = a2[20];
    if ( v12 )
    {
      if ( a2[18] )
        *(_QWORD *)(a2[19] + 8LL) = v12;
      else
        a2[18] = v12;
      a2[19] = a2[21];
      a2[20] = 0LL;
      a2[21] = 0LL;
    }
    result = (_UNKNOWN **)StorPortNotification(4100LL, a1, v20);
  }
  if ( a2[18] )
  {
    v13 = 0LL;
    StorPortExtendedFunction(93LL, a1, 1LL, v7);
    v14 = a2[18];
    if ( v14 )
    {
      do
      {
        v15 = *(_QWORD *)(v14 + 8);
        if ( a4 == 1 || *(unsigned __int8 *)(v14 + 3) == a3 )
        {
          if ( v13 )
            *(_QWORD *)(v13 + 8) = v15;
          else
            a2[18] = v15;
          if ( !v15 )
            a2[19] = v13;
          *(_QWORD *)(v14 + 8) = v6;
          v6 = v14;
        }
        else
        {
          v13 = v14;
        }
        v14 = v15;
      }
      while ( v15 );
    }
    result = (_UNKNOWN **)StorPortNotification(4100LL, a1, v20);
  }
  if ( a5 && a2[22] )
  {
    v16 = 0LL;
    StorPortExtendedFunction(93LL, a1, 1LL, v7);
    v17 = a2[22];
    if ( v17 )
    {
      do
      {
        v18 = *(_QWORD *)(v17 + 8);
        if ( a4 == 1 || *(unsigned __int8 *)(v17 + 3) == a3 )
        {
          if ( v16 )
            *(_QWORD *)(v16 + 8) = v18;
          else
            a2[22] = v18;
          if ( !v18 )
            a2[23] = v16;
          *(_QWORD *)(v17 + 8) = v6;
          v6 = v17;
        }
        else
        {
          v16 = v17;
        }
        v17 = v18;
      }
      while ( v18 );
    }
    result = (_UNKNOWN **)StorPortNotification(4100LL, a1, v20);
  }
  if ( v6 )
  {
    do
    {
      v19 = *(_QWORD *)(v6 + 8);
      result = (_UNKNOWN **)StorPortNotification(0x2000LL, a1, v6);
      v6 = v19;
    }
    while ( v19 );
  }
  return result;
}
