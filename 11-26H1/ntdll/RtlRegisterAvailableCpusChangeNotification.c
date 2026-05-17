/*
 * XREFs of RtlRegisterAvailableCpusChangeNotification @ 0x180149170
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006E03C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlQueryProcessAvailableCpusCount @ 0x1801490F0 (RtlQueryProcessAvailableCpusCount.c)
 *     ZwQueryWnfStateData @ 0x180161D50 (ZwQueryWnfStateData.c)
 */

__int64 __fastcall RtlRegisterAvailableCpusChangeNotification(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *Heap_0; // rdi
  int v9; // ebx
  int v11; // [rsp+50h] [rbp-38h] BYREF
  int v12; // [rsp+54h] [rbp-34h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF
  _DWORD v14[4]; // [rsp+60h] [rbp-28h] BYREF

  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  Heap_0 = (_QWORD *)RtlAllocateHeap_0();
  if ( Heap_0 )
  {
    v9 = ZwQueryWnfStateData(&WNF_PS_PROCESS_AVAILABLE_CPUS_CHANGE, 0LL, 0LL, &v11, 0LL, &v12);
    if ( v9 < 0 )
      goto LABEL_10;
    v9 = RtlQueryProcessAvailableCpusCount((void *)0xFFFFFFFFFFFFFFFFLL, v14, &v13);
    if ( v9 < 0 )
      goto LABEL_10;
    if ( a3 && *a3 != v13 )
      v11 = 0;
    Heap_0[1] = a1;
    Heap_0[2] = a2;
    v9 = RtlpSubscribeWnfStateChangeNotificationInternal(
           Heap_0,
           WNF_PS_PROCESS_AVAILABLE_CPUS_CHANGE,
           v11,
           (int)RtlpProcessAvailableCpusNotificationCallback,
           (__int64)Heap_0,
           0LL,
           0,
           4,
           17);
    if ( v9 < 0 )
LABEL_10:
      RtlFreeHeap_0();
    else
      *a4 = Heap_0;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
