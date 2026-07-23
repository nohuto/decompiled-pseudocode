/*
 * XREFs of CcPerfLogWorkItemEnqueue @ 0x14038B878
 * Callers:
 *     CcPostWorkQueueCachemapUninit @ 0x140384FA0 (CcPostWorkQueueCachemapUninit.c)
 *     CcAsyncLazywriteWorker @ 0x140387600 (CcAsyncLazywriteWorker.c)
 *     CcPostWorkQueueRegular @ 0x1403881CC (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140389A38 (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140389E24 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcPostWorkQueueSpecial @ 0x1404E8124 (CcPostWorkQueueSpecial.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1405B3E18 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14039CB54 (CcReferenceSharedCacheMapFileObject.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogWorkItemEnqueue(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // r10
  char v7; // di
  int v8; // eax
  unsigned __int8 CurrentIrql; // al
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rbx
  ULONG_PTR v14; // rax
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  _QWORD v17[2]; // [rsp+48h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a2 + 152);
  v16 = 0LL;
  v15 = 0LL;
  if ( a1 == v4 + 72 )
  {
    v7 = 1;
  }
  else if ( a1 == v4 + 120 )
  {
    v7 = 7;
  }
  else if ( a1 == v4 + 88 )
  {
    v7 = 2;
  }
  else
  {
    if ( a1 == v4 + 104 )
      goto LABEL_28;
    if ( a1 == *(_QWORD *)(a2 + 136) + 848LL )
    {
      v7 = 4;
      goto LABEL_5;
    }
    if ( a1 == v4 + 312 || a1 == v4 + 384 )
    {
LABEL_28:
      v7 = 3;
    }
    else
    {
      v12 = *(_QWORD *)(v4 + 256);
      if ( a1 == v12 || a1 == v12 + 16 || a1 == v12 + 32 )
        v7 = 5;
      else
        v7 = a1 == 0 ? 6 : 0;
    }
  }
LABEL_5:
  v8 = *(_DWORD *)(a2 + 128);
  switch ( v8 )
  {
    case 2:
    case 7:
      BYTE1(v16) = 2;
      v11 = 16LL;
      if ( a4 )
      {
        if ( v8 != 2 )
          v11 = 24LL;
        *((_QWORD *)&v15 + 1) = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v11 + a2) + 96LL) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      }
      else
      {
        if ( v8 != 2 )
          v11 = 24LL;
        v13 = *(_QWORD *)(v11 + a2);
        v14 = CcReferenceSharedCacheMapFileObject(v13);
        *((_QWORD *)&v15 + 1) = *(_QWORD *)(v14 + 24);
        ObFastDereferenceObjectDeferDelete((signed __int64 *)(v13 + 96), v14, 0x63536343u);
      }
      break;
    case 1:
      BYTE1(v16) = 1;
      *((_QWORD *)&v15 + 1) = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
      break;
    case 3:
      BYTE1(v16) = 3;
      break;
    case 4:
      BYTE1(v16) = 4;
      break;
  }
  LOBYTE(v16) = v7;
  *(_QWORD *)&v15 = a2;
  BYTE2(v16) = a3;
  CurrentIrql = KeGetCurrentIrql();
  v17[1] = 24LL;
  v17[0] = &v15;
  if ( CurrentIrql >= 2u )
    return EtwTraceKernelEvent((int)v17, 1, 0x80020000, 5632, 5243138);
  else
    return EtwTraceKernelEvent((int)v17, 1, 0x80020000, 5632, 5249282);
}
