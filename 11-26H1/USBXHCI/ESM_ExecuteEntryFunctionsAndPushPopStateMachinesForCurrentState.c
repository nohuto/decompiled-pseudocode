/*
 * XREFs of ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1400215A0
 * Callers:
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 *     ESM_RunStateMachine @ 0x140020FDC (ESM_RunStateMachine.c)
 *     ESM_SmWorker @ 0x140055C50 (ESM_SmWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_qLLL @ 0x140022A88 (WPP_RECORDER_SF_qLLL.c)
 *     ESM_ShouldQueueWorkItem @ 0x14002ECC8 (ESM_ShouldQueueWorkItem.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(unsigned int *Context)
{
  __int64 v1; // r14
  __int64 v3; // r12
  unsigned int v4; // ebp
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // edx
  KIRQL v9; // r14
  __int64 v10; // r13
  int *v11; // rax
  __int64 result; // rax
  char v13; // r9
  char v14; // cl
  unsigned __int8 v15; // r8
  int j; // eax
  char v17; // r8
  unsigned int v18; // r10d
  __int64 v19; // rcx
  __int64 i; // r8
  unsigned int v21; // ebx
  __int64 v22; // rax
  unsigned int *v23; // r15
  unsigned int v24; // edi
  unsigned int v25; // [rsp+90h] [rbp+8h]
  __int64 v26; // [rsp+A0h] [rbp+18h]

  v1 = *((_QWORD *)Context + 121);
  v3 = Context[220];
  v4 = Context[244];
  v26 = v1;
  v5 = *(_QWORD *)(v1 + 8LL * (Context[v3 + 213] - v4));
  while ( 1 )
  {
    v6 = (*(__int64 (__fastcall **)(unsigned int *))(v5 + 8))(Context);
    v7 = *(_QWORD *)(v5 + 24);
    v25 = v6;
    if ( !v7 )
      break;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v21 = *(_DWORD *)(v7 + 8 * i + 4);
      if ( v21 == 1002 )
      {
        v25 = 1001;
        goto LABEL_3;
      }
      if ( (*(_DWORD *)(v7 + 8 * i) & Context[238]) == Context[238] )
        break;
    }
    v3 = (unsigned int)(v3 + 1);
    Context[v3 + 213] = v21;
    Context[220] = v3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && Context[244] == 2000 )
      WPP_RECORDER_SF_qLLL(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        17,
        12,
        (__int64)&WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids,
        *((_QWORD *)Context + 120),
        Context[3 * ((*((_BYTE *)Context + 832) - 1) & 0x3F) + 1],
        232,
        v21);
    Context[3 * *((unsigned __int8 *)Context + 832) + 1] = v21;
    Context[3 * *((unsigned __int8 *)Context + 832) + 2] = v3;
    Context[3 * *((unsigned __int8 *)Context + 832)] = 1000;
    *((_BYTE *)Context + 832) = (*((_BYTE *)Context + 832) + 1) & 0x3F;
    v5 = *(_QWORD *)(v1 + 8LL * (v21 - v4));
    if ( (unsigned __int8)ESM_ShouldQueueWorkItem(Context, *(_BYTE *)(v5 + 16) & 0x10) )
    {
      IoQueueWorkItem(*((PIO_WORKITEM *)Context + 123), ESM_SmWorker, DelayedWorkQueue, Context);
      return 1003LL;
    }
  }
LABEL_3:
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
  while ( 1 )
  {
    LODWORD(v10) = 0;
    if ( *(_DWORD *)(v5 + 32) != 1000 )
    {
      v11 = (int *)(v5 + 32);
      do
      {
        if ( v11[1] != 1000 )
          break;
        v8 = *((unsigned __int8 *)Context + 948);
        v13 = 0;
        v14 = *((_BYTE *)Context + 949);
        v15 = v8;
        for ( j = *v11; v15 != v14; v15 = (v15 + 1) & 0xF )
        {
          v18 = Context[v15 + 221];
          if ( v18 == j )
          {
            v13 = 1;
          }
          else
          {
            v19 = (unsigned __int8)v8;
            LOBYTE(v8) = (v8 + 1) & 0xF;
            Context[v19 + 221] = v18;
          }
          v14 = *((_BYTE *)Context + 949);
        }
        v17 = v8;
        if ( (_BYTE)v8 != v14 )
        {
          do
          {
            v22 = v17 & 0xF;
            v17 = (v17 + 1) & 0xF;
            Context[v22 + 221] = 1000;
          }
          while ( v17 != *((_BYTE *)Context + 949) );
        }
        *((_BYTE *)Context + 949) = v8;
        if ( v13 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, v9);
          v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
        }
        v10 = (unsigned int)(v10 + 1);
        v11 = (int *)(v5 + 32 + 8 * v10);
      }
      while ( *v11 != 1000 );
    }
    if ( (*(_DWORD *)(v5 + 16) & 8) == 0 )
      break;
    v3 = (unsigned int)(v3 - 1);
    v23 = &Context[v3];
    v24 = v23[213];
    if ( Context[244] == 2000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLLL(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        17,
        12,
        (__int64)&WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids,
        *((_QWORD *)Context + 120),
        Context[3 * ((*((_BYTE *)Context + 832) - 1) & 0x3F) + 1],
        232,
        v23[213]);
    Context[3 * *((unsigned __int8 *)Context + 832) + 1] = v24;
    Context[3 * *((unsigned __int8 *)Context + 832) + 2] = v3;
    Context[3 * *((unsigned __int8 *)Context + 832)] = 1000;
    *((_BYTE *)Context + 832) = (*((_BYTE *)Context + 832) + 1) & 0x3F;
    v5 = *(_QWORD *)(v26 + 8LL * (v23[213] - v4));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, v9);
  result = v25;
  Context[220] = v3;
  return result;
}
