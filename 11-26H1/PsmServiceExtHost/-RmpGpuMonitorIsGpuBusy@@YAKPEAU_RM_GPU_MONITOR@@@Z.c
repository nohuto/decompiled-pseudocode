/*
 * XREFs of ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x18008A048
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008A1B0 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

_BOOL8 __fastcall RmpGpuMonitorIsGpuBusy(struct _RM_GPU_MONITOR *a1)
{
  BOOL v2; // ebx
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int8 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // r8
  int v12; // r9d
  bool v14; // [rsp+38h] [rbp-29h] BYREF
  char v15; // [rsp+39h] [rbp-28h] BYREF
  int v16; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v17; // [rsp+40h] [rbp-21h] BYREF
  __int64 v18; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+58h] [rbp-9h] BYREF
  int *v20; // [rsp+78h] [rbp+17h]
  __int64 v21; // [rsp+80h] [rbp+1Fh]
  char *v22; // [rsp+88h] [rbp+27h]
  __int64 v23; // [rsp+90h] [rbp+2Fh]
  bool *v24; // [rsp+98h] [rbp+37h]
  __int64 v25; // [rsp+A0h] [rbp+3Fh]

  v17 = 0LL;
  v18 = 0LL;
  if ( (int)MemUtilQueryGpuUtilization(&v18) < 0
    || (RtlQueryUnbiasedInterruptTime(&v17), v3 = v17 - *((_QWORD *)a1 + 3), v17 == *((_QWORD *)a1 + 3)) )
  {
    v2 = 1;
  }
  else
  {
    v4 = v18;
    v5 = v18;
    *((_QWORD *)a1 + 3) = v17;
    v6 = v5 - *((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 2) = v4;
    v7 = 100 * v6 / v3;
    v8 = 100;
    if ( v7 < 0x64 )
      v8 = v7;
    v2 = v8 > *((_BYTE *)a1 + 48);
  }
  if ( (unsigned int)dword_1800E1278 > 5 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
  {
    v15 = v11;
    v24 = &v14;
    v16 = v12;
    v22 = &v15;
    v25 = v9;
    v20 = &v16;
    v23 = v9;
    v14 = v2;
    v21 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v10, byte_1800D35EE, 0LL, 0LL, 5u, &v19);
  }
  return v2;
}
