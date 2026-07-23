/*
 * XREFs of EtwpLogMemInfo @ 0x14034A4BC
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1404BD840 (EtwpLogMemInfoTimerCallback.c)
 *     EtwpLogMemInfoRundown @ 0x140835768 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall EtwpLogMemInfo(__int64 a1, __int64 a2)
{
  char v5; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v7[176]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v9[4]; // [rsp+110h] [rbp+10h] BYREF

  LODWORD(v6) = 0;
  memset_0(v7, 0, sizeof(v7));
  v5 = 8;
  UserData.Ptr = (ULONGLONG)&v5;
  *(_QWORD *)&UserData.Size = 1LL;
  MmQueryMemoryListInformation(0LL, v7, (__int64)&v6);
  v9[1] = 176LL;
  v9[0] = v7;
  v9[2] = a2;
  v9[3] = 32LL;
  if ( a1 )
    return EtwpLogKernelEvent((__int64)v9, *(_QWORD *)(a1 + 1360), *(_DWORD *)a1, 2u, 0x270u, 0x501803u);
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4816) & 0x80000) != 0 )
    EtwWriteEx(
      (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink,
      &KERNEL_MEM_EVENT_MEMINFO,
      0LL,
      0,
      0LL,
      0LL,
      3u,
      &UserData);
  return EtwTraceKernelEvent((int)v9, 2, 0x20080000u, 624, 5249027);
}
