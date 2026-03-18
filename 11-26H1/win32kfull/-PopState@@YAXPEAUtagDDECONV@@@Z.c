/*
 * XREFs of ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1402CCA14
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CCD80 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD040 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD3C0 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD520 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD880 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD950 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CDBF0 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxFreeDdeConv @ 0x1402CE020 (xxxFreeDdeConv.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     FreeDdeXact @ 0x1402930F0 (FreeDdeXact.c)
 */

void __fastcall PopState(struct tagDDECONV *a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rbx
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  char *v8; // rcx
  struct _HEAD *v9; // rax
  _QWORD *v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = (_QWORD *)((char *)a1 + 56);
  v3 = *((_QWORD *)a1 + 7);
  v4 = PtiCurrent((__int64)a1);
  Win32HM_LockIntoThread<0>((__int64)v4, v3, BugCheckParameter3);
  v5 = *v1;
  v10 = v1;
  v11 = *(_QWORD *)(v5 + 24);
  v6 = v11;
  v7 = HMAssignmentLock(&v10, 0LL);
  v8 = (char *)a1 + 64;
  if ( v6 )
    v8 = (char *)(v7 + 24);
  HMAssignmentUnlock(v8);
  v9 = (struct _HEAD *)Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3);
  if ( v9 )
    FreeDdeXact(v9);
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
}
