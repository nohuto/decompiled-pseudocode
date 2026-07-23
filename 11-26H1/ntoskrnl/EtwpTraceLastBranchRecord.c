/*
 * XREFs of EtwpTraceLastBranchRecord @ 0x140263280
 * Callers:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1404075AC (EtwpLogContextSwapEvent.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x14072BF60 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall EtwpTraceLastBranchRecord(int *a1, _QWORD *a2, struct _KTHREAD *a3, int a4)
{
  struct _KTHREAD *v6; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 result; // rax
  __int64 CurrentStackPointer; // rax
  int v11; // ecx
  char v12; // r15
  __int64 v13; // rbx
  PSLIST_ENTRY v14; // rax
  __int64 v15; // rax
  void *v16; // rsp
  _SLIST_ENTRY *v17; // rdi
  __int64 v18; // rax
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rdx
  __int16 v22; // [rsp+20h] [rbp-10h]
  unsigned int v23; // [rsp+28h] [rbp-8h]
  int v24; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v25; // [rsp+34h] [rbp+4h] BYREF
  __int64 v26; // [rsp+38h] [rbp+8h] BYREF
  __int64 v27; // [rsp+40h] [rbp+10h] BYREF
  __int128 v28; // [rsp+48h] [rbp+18h] BYREF
  __int128 v29; // [rsp+58h] [rbp+28h]
  __int128 v30; // [rsp+68h] [rbp+38h]
  _QWORD v31[3]; // [rsp+78h] [rbp+48h] BYREF
  int v32; // [rsp+90h] [rbp+60h]
  int v33; // [rsp+94h] [rbp+64h]

  v24 = 0;
  v28 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v6 = a3;
  v30 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  result = (unsigned __int64)KeGetCurrentPrcb();
  if ( *(struct _KTHREAD **)(result + 24) != CurrentThread && (a4 & 0x1800) != 0 )
  {
    if ( !a3 )
      v6 = CurrentThread;
    CurrentStackPointer = KeGetCurrentStackPointer();
    result = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v25, &v26, &v27);
    if ( (_BYTE)result )
    {
      result = v25;
      if ( v25 > 9 || (v11 = 929, !_bittest(&v11, v25)) )
      {
        v12 = 0;
        v13 = (unsigned int)(24 * EtwpLastBranchStackSize);
        v14 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E285C0.IoSelfBoostsEntry);
        if ( !v14 || (v17 = v14 + 1, v14 == (PSLIST_ENTRY)-16LL) )
        {
          result = KeGetCurrentStackPointer() - v26;
          if ( result <= v13 + 3632 )
            return result;
          v15 = v13 + 15;
          if ( v13 + 15 <= (unsigned __int64)(unsigned int)v13 )
            v15 = 0xFFFFFFFFFFFFFF0LL;
          v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
          v12 = 1;
          v17 = (_SLIST_ENTRY *)&v24;
        }
        result = guard_dispatch_icall_no_overrides((unsigned int)v13, v17, &v24);
        if ( (result & 0x80000000) == 0LL && v24 )
        {
          DWORD2(v28) = v6[1].CycleTime;
          HIDWORD(v28) = v6[1].CurrentRunTime;
          *(_QWORD *)&v28 = *a2;
          v18 = *((_QWORD *)a1 + 134);
          v23 = a4 & 0xFFFFE600 | 2;
          v22 = 3104;
          v19 = *(_DWORD *)(v18 + 4);
          v20 = *a1;
          v21 = *((_QWORD *)a1 + 170);
          v31[0] = &v28;
          LODWORD(v29) = v19;
          v32 = v24;
          v31[1] = 24LL;
          v31[2] = v17;
          v33 = 0;
          result = EtwpLogKernelEvent((unsigned int)v31, v21, v20, 2, 3104, v23);
        }
        if ( !v12 )
          return (unsigned __int64)RtlpInterlockedPushEntrySList(
                                     (PSLIST_HEADER)&stru_140E285C0.IoSelfBoostsEntry,
                                     v17 - 1);
      }
    }
  }
  return result;
}
