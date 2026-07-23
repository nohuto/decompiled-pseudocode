/*
 * XREFs of RtlpEnumProcessHeaps @ 0x180076180
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x180075B50 (RtlQueryProcessHeapInformation.c)
 *     LdrpEnableUMGLTracingStateSync @ 0x18008FEAC (LdrpEnableUMGLTracingStateSync.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x1800925A0 (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlHeapsStackCollection @ 0x180096678 (RtlHeapsStackCollection.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180100FC8 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHpGCTimerCallback @ 0x180101FC0 (RtlpHpGCTimerCallback.c)
 *     RtlFlushHeaps @ 0x18010DE70 (RtlFlushHeaps.c)
 *     RtlGetProcessHeaps @ 0x18010FBA0 (RtlGetProcessHeaps.c)
 *     RtlHeapTrkInitialize @ 0x180110640 (RtlHeapTrkInitialize.c)
 *     RtlSetHeapInformation @ 0x180110BC0 (RtlSetHeapInformation.c)
 *     RtlSetHeapDebuggingInformation @ 0x180114660 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHpStackTraceSerialize @ 0x180122180 (RtlpHpStackTraceSerialize.c)
 *     RtlpHpStackTraceEnable @ 0x180122A60 (RtlpHpStackTraceEnable.c)
 *     RtlEnumProcessHeaps @ 0x180144280 (RtlEnumProcessHeaps.c)
 *     RtlValidateProcessHeaps @ 0x180144570 (RtlValidateProcessHeaps.c)
 *     RtlpHpStackTraceDisable @ 0x18014F848 (RtlpHpStackTraceDisable.c)
 *     LdrpUMGLTracingStateChangeNotification @ 0x18015C160 (LdrpUMGLTracingStateChangeNotification.c)
 * Callees:
 *     RtlpReleaseHeapListLock @ 0x1800762B0 (RtlpReleaseHeapListLock.c)
 *     RtlpAcquireHeapListLock @ 0x1800762FC (RtlpAcquireHeapListLock.c)
 *     RtlpIsProtectedHeap @ 0x18007653C (RtlpIsProtectedHeap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpEnumProcessHeaps(__int64 (__fastcall *a1)(__int64, _QWORD, __int64), __int64 a2, int a3)
{
  int v6; // esi
  int v7; // r12d
  __int64 v8; // rdi
  __int64 *v9; // rdx
  __int64 v10; // r8
  int IsProtectedHeap; // eax
  int v12; // ecx
  unsigned int i; // ebx
  __int64 v14; // rcx

  v6 = -1073741823;
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlpAcquireHeapListLock();
  v8 = RtlpProcessHeaps;
  v9 = &RtlpProcessHeaps;
  v10 = 2LL;
  while ( 1 )
  {
    if ( (__int64 *)v8 == v9 )
      v8 = 0LL;
    if ( !v8 )
      break;
    IsProtectedHeap = RtlpIsProtectedHeap(*(_QWORD *)(v8 + 16), v9, v10);
    v12 = 0;
    if ( IsProtectedHeap )
      v12 = v10;
    if ( (*(_BYTE *)(v8 + 24) & 1) != 0 )
      v12 |= 4u;
    if ( (a3 & v12) == v12 )
    {
      v6 = ((__int64 (__fastcall *)(_QWORD, __int64))a1)(*(_QWORD *)(v8 + 16), a2);
      if ( v6 < 0 )
        goto LABEL_22;
      v9 = &RtlpProcessHeaps;
      v10 = 2LL;
    }
    v8 = *(_QWORD *)v8;
  }
  if ( (a3 & 4) != 0 )
  {
    for ( i = 0; i < 4; ++i )
    {
      v14 = qword_1801CA198[2 * i];
      if ( v14 )
      {
        v6 = a1(v14, a2, v10);
        if ( v6 < 0 )
          goto LABEL_22;
      }
    }
    v6 = 0;
  }
LABEL_22:
  if ( !v7 )
    RtlpReleaseHeapListLock(0LL);
  return (unsigned int)v6;
}
