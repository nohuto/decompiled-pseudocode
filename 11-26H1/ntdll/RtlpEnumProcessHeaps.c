/*
 * XREFs of RtlpEnumProcessHeaps @ 0x180091420
 * Callers:
 *     LdrpEnableUMGLTracingStateSync @ 0x18006FA5C (LdrpEnableUMGLTracingStateSync.c)
 *     RtlHeapsStackCollection @ 0x180075A88 (RtlHeapsStackCollection.c)
 *     RtlQueryProcessHeapInformation @ 0x180090DF0 (RtlQueryProcessHeapInformation.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x180091D10 (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpHpGCTimerCallback @ 0x1800924E0 (RtlpHpGCTimerCallback.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180101878 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlFlushHeaps @ 0x18010E320 (RtlFlushHeaps.c)
 *     RtlGetProcessHeaps @ 0x180110010 (RtlGetProcessHeaps.c)
 *     RtlHeapTrkInitialize @ 0x180110AB0 (RtlHeapTrkInitialize.c)
 *     RtlSetHeapInformation @ 0x180111030 (RtlSetHeapInformation.c)
 *     RtlSetHeapDebuggingInformation @ 0x180114E70 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHpStackTraceSerialize @ 0x1801223E0 (RtlpHpStackTraceSerialize.c)
 *     RtlpHpStackTraceEnable @ 0x180122CF0 (RtlpHpStackTraceEnable.c)
 *     RtlEnumProcessHeaps @ 0x180144380 (RtlEnumProcessHeaps.c)
 *     RtlValidateProcessHeaps @ 0x1801446C0 (RtlValidateProcessHeaps.c)
 *     RtlpHpStackTraceDisable @ 0x18014F998 (RtlpHpStackTraceDisable.c)
 *     LdrpUMGLTracingStateChangeNotification @ 0x18015C2A0 (LdrpUMGLTracingStateChangeNotification.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpIsProtectedHeap @ 0x18009178C (RtlpIsProtectedHeap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
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
      v14 = qword_1801CB148[2 * i];
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
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  return (unsigned int)v6;
}
