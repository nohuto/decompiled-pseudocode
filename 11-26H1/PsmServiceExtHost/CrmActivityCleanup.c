/*
 * XREFs of CrmActivityCleanup @ 0x180022350
 * Callers:
 *     CrmRpcSrvActivityStop @ 0x18001BB00 (CrmRpcSrvActivityStop.c)
 *     CrmSrvActivityStop @ 0x18001BD90 (CrmSrvActivityStop.c)
 *     CrmSrvActivityFree @ 0x180020838 (CrmSrvActivityFree.c)
 *     CrmActivityDereference @ 0x180020BC8 (CrmActivityDereference.c)
 *     CrmRpcSrvActivityStart @ 0x1800216B0 (CrmRpcSrvActivityStart.c)
 *     CrmSrvActivityStart @ 0x180021C10 (CrmSrvActivityStart.c)
 *     CrmSrvActivityAllocate @ 0x180034360 (CrmSrvActivityAllocate.c)
 *     CrmRpcSrvActivityAllocate @ 0x180034760 (CrmRpcSrvActivityAllocate.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800227B0 (CrmStateMonitorListenerRemove.c)
 *     CrmLogActivityStop @ 0x180022ABC (CrmLogActivityStop.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CrmActivityTelemetryUpdate @ 0x180022CC0 (CrmActivityTelemetryUpdate.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmActivityCleanup(__int64 a1)
{
  unsigned int i; // edi
  void *v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 UnbiasedInterruptTimeMs64; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rbp
  unsigned __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rcx
  void *v15; // r8
  void *v16; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v23[32]; // [rsp+50h] [rbp-88h] BYREF
  UUID *v24; // [rsp+70h] [rbp-68h]
  __int64 v25; // [rsp+78h] [rbp-60h]
  __int64 *v26; // [rsp+80h] [rbp-58h]
  __int64 v27; // [rsp+88h] [rbp-50h]
  __int64 *v28; // [rsp+90h] [rbp-48h]
  __int64 v29; // [rsp+98h] [rbp-40h]
  __int64 *v30; // [rsp+A0h] [rbp-38h]
  __int64 v31; // [rsp+A8h] [rbp-30h]

  for ( i = 0; i < *(_DWORD *)(a1 + 108); ++i )
    CrmStateMonitorListenerRemove(*(&qword_1800E37D0 + *(unsigned int *)(*(_QWORD *)(a1 + 112) + 56LL * i + 32)));
  v3 = *(void **)(a1 + 112);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  RtlAcquireSRWLockExclusive(&unk_1800E3958);
  dword_1800E3960 = GetCurrentThreadId();
  if ( *(_QWORD *)(a1 + 40) == -1LL )
  {
    dword_1800E3960 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E3958);
  }
  else
  {
    RtlRbRemoveNode(&xmmword_1800E3968, a1 + 24);
    *(_QWORD *)(a1 + 40) = -1LL;
    v4 = *(_QWORD *)(a1 + 48);
    RtlAcquireSRWLockExclusive(v4);
    *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
    if ( *(_DWORD *)(a1 + 64) == 1301 )
    {
      v5 = *(_QWORD *)(a1 + 264);
      v6 = *(_QWORD *)(a1 + 288);
      UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
      v8 = *(_QWORD *)(a1 + 336);
      v9 = UnbiasedInterruptTimeMs64 - v6;
      *(_QWORD *)(a1 + 312) += UnbiasedInterruptTimeMs64 - v6;
      v10 = UnbiasedInterruptTimeMs64 - v5;
      if ( v8 <= UnbiasedInterruptTimeMs64 - v5 )
        v8 = UnbiasedInterruptTimeMs64 - v5;
      *(_QWORD *)(a1 + 336) = v8;
      RtlAcquireSRWLockExclusive(&unk_1800E3A08);
      GetCurrentThreadId();
      qword_1800E3A60 += v9;
      dword_1800E3A10 = 0;
      if ( qword_1800E3A78 > v10 )
        v10 = qword_1800E3A78;
      qword_1800E3A78 = v10;
      RtlReleaseSRWLockExclusive(&unk_1800E3A08);
      *(_QWORD *)(a1 + 264) = -1LL;
      *(_QWORD *)(a1 + 288) = -1LL;
    }
    v11 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(v11 + 8) = 0;
    RtlReleaseSRWLockExclusive(v11);
    v12 = *(_QWORD *)(a1 + 128);
    dword_1800E3960 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E3958);
    if ( (unsigned int)dword_1800E12E8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800E12E8, 1LL) )
    {
      v25 = 16LL;
      v24 = &Uuid;
      v18 = *(_QWORD *)(a1 + 48);
      v27 = 8LL;
      v29 = 8LL;
      v22 = v12;
      v19 = *(_QWORD *)(v18 + 16);
      v26 = &v20;
      v21 = *(_QWORD *)(a1 + 56);
      v28 = &v21;
      v30 = &v22;
      v20 = v19;
      v31 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CC0B4, 0LL, 0LL, 6, v23);
    }
  }
  v13 = *(_QWORD *)(a1 + 48);
  RtlAcquireSRWLockExclusive(v13);
  *(_DWORD *)(v13 + 8) = GetCurrentThreadId();
  if ( *(_DWORD *)(a1 + 64) == 1301 )
  {
    if ( *(_QWORD *)(a1 + 248) != -1LL )
      CrmActivityTelemetryUpdate(a1, 0LL);
    if ( *(_QWORD *)(a1 + 256) != -1LL )
      CrmActivityTelemetryUpdate(a1, 1LL);
    if ( *(_QWORD *)(a1 + 264) != -1LL )
      CrmActivityTelemetryUpdate(a1, 2LL);
  }
  v14 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(v14 + 8) = 0;
  RtlReleaseSRWLockExclusive(v14);
  if ( *(_DWORD *)(a1 + 152) || *(_DWORD *)(a1 + 156) )
    NtDeleteWnfStateName(a1 + 152);
  if ( *(_DWORD *)(a1 + 144) || *(_DWORD *)(a1 + 148) )
    NtDeleteWnfStateName(a1 + 144);
  v15 = *(void **)(a1 + 224);
  if ( v15 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  v16 = *(void **)(a1 + 232);
  if ( v16 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
  return CrmLogActivityStop(a1);
}
