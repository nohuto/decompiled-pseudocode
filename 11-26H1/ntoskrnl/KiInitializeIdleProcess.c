/*
 * XREFs of KiInitializeIdleProcess @ 0x140CCE294
 * Callers:
 *     KiInitSystem @ 0x140CCFE5C (KiInitSystem.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 */

void **__fastcall KiInitializeIdleProcess(struct _KPROCESS *a1)
{
  void **result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v4; // [rsp+30h] [rbp-D0h]
  __int64 v5; // [rsp+40h] [rbp-C0h]
  void *v6; // [rsp+48h] [rbp-B8h]
  __int64 v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v9[264]; // [rsp+68h] [rbp-98h] BYREF

  memset_0(v9, 0, 0x100uLL);
  v8 = 2097153LL;
  qword_140FC9F10 = 1LL;
  memset_0(v9, 0, 0x100uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)&v8, 0);
  v3[0] = 0LL;
  v3[1] = &v8;
  v5 = 1LL;
  v6 = &unk_140FCA780;
  v7 = 1384LL;
  v4 = 0LL;
  KeInitializeProcess(a1, (__int64)v3);
  result = &a1[1].UserCetLogging;
  a1->QuantumReset = 127;
  a1[1].CpuPartitionList.Flink = (struct _LIST_ENTRY *)&a1[1].UserCetLogging;
  a1[1].UserCetLogging = &a1[1].UserCetLogging;
  _InterlockedOr(dword_140FCA130, 0x8000u);
  _InterlockedOr(dword_140FCA53C, 0x400000u);
  WORD2(a1[3].PerProcessorCycleTimes) = -31132;
  return result;
}
