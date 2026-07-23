/*
 * XREFs of PfTInitialize @ 0x1407C9604
 * Callers:
 *     PfTStart @ 0x1407C9844 (PfTStart.c)
 *     PfpPartitionInitialize @ 0x1407CA2CC (PfpPartitionInitialize.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeInitializeGuardedMutex @ 0x14048BDA0 (KeInitializeGuardedMutex.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     PfFbBufferListInitialize @ 0x1407CB328 (PfFbBufferListInitialize.c)
 *     PfTAccessTracingInitialize @ 0x140BEF5CC (PfTAccessTracingInitialize.c)
 */

__int64 __fastcall PfTInitialize(__int64 a1, char a2)
{
  struct _FAST_MUTEX *v4; // rsi
  struct _FAST_MUTEX *v5; // rcx
  struct _KEVENT *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  int v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+24h] [rbp-2Ch]
  __int64 v12; // [rsp+28h] [rbp-28h]
  int v13; // [rsp+30h] [rbp-20h]
  int v14; // [rsp+34h] [rbp-1Ch]
  __int64 v15; // [rsp+38h] [rbp-18h]
  __int64 (__fastcall *v16)(__int64, struct _EX_RUNDOWN_REF *); // [rsp+40h] [rbp-10h]
  unsigned int (__fastcall *v17)(__int64); // [rsp+48h] [rbp-8h]

  if ( !a2 )
    *(_QWORD *)(a1 + 64) = 0LL;
  v4 = (struct _FAST_MUTEX *)(a1 + 624);
  *(_OWORD *)(a1 + 712) = 0LL;
  *(_OWORD *)(a1 + 688) = 0LL;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = a1 + 112;
  *(_QWORD *)(a1 + 112) = a1 + 112;
  *(_DWORD *)(a1 + 88) &= 0xFFFFFFF0;
  *(_WORD *)(a1 + 96) = 2;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 160) = a1 + 152;
  *(_QWORD *)(a1 + 152) = a1 + 152;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a1 + 128) & 0xFFFFFFF0 | 1;
  *(_WORD *)(a1 + 136) = 0;
  v5 = (struct _FAST_MUTEX *)(a1 + 624);
  if ( a2 )
    ExAcquireFastMutex(v5);
  else
    KeInitializeGuardedMutex(v5);
  *(_QWORD *)(a1 + 576) = a1 + 568;
  *(_QWORD *)(a1 + 568) = a1 + 568;
  *(_QWORD *)(a1 + 592) = a1 + 584;
  *(_QWORD *)(a1 + 584) = a1 + 584;
  if ( a2 )
    KeReleaseGuardedMutex(v4);
  else
    PfTAccessTracingInitialize(a1, 0LL);
  v6 = (struct _KEVENT *)(a1 + 200);
  if ( a2 )
  {
    KeResetEvent(v6);
    KeResetEvent((PRKEVENT)(a1 + 224));
    KeResetEvent((PRKEVENT)(a1 + 176));
    KeResetEvent((PRKEVENT)(a1 + 264));
  }
  else
  {
    KeInitializeEvent(v6, NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 224), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 176), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 264), NotificationEvent, 0);
  }
  v15 = 0LL;
  v17 = (unsigned int (__fastcall *)(__int64))&PfpSectInfoHandleFullBuffer;
  v10 = -827260927;
  v16 = (__int64 (__fastcall *)(__int64, struct _EX_RUNDOWN_REF *))&PfpSectInfoHandleOutOfBuffers;
  LOBYTE(v7) = a2;
  v11 = 1280206416;
  v12 = 256LL;
  v13 = 64;
  v14 = 64;
  PfFbBufferListInitialize(a1 + 288, &v10, v7);
  InitializeSListHead((PSLIST_HEADER)(a1 + 544));
  *(_DWORD *)(a1 + 560) = -1;
  v17 = PfpEventHandleFullBuffer;
  v15 = 0LL;
  LOBYTE(v8) = a2;
  v16 = PfpEventHandleOutOfBuffers;
  v10 = -827260926;
  v11 = 1279616592;
  v12 = 64LL;
  v13 = 48;
  v14 = 64;
  return PfFbBufferListInitialize(a1 + 416, &v10, v8);
}
