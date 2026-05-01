/*
 * XREFs of ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180089054
 * Callers:
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180088D30 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006C548 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogPendingEnd(ExecutionModel::ResourceSet *this)
{
  int v2; // r8d
  __int64 v3; // r9
  int v4; // ecx
  int v5; // r8d
  int v6; // ecx
  int v7; // [rsp+30h] [rbp-69h] BYREF
  int v8; // [rsp+34h] [rbp-65h] BYREF
  int v9; // [rsp+38h] [rbp-61h] BYREF
  __int64 v10; // [rsp+40h] [rbp-59h] BYREF
  int *v11; // [rsp+48h] [rbp-51h] BYREF
  __int64 v12; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+60h] [rbp-39h] BYREF
  __int64 v14; // [rsp+78h] [rbp-21h]
  __int64 *v15; // [rsp+80h] [rbp-19h]
  __int64 v16; // [rsp+88h] [rbp-11h]
  int *v17; // [rsp+90h] [rbp-9h]
  __int64 v18; // [rsp+98h] [rbp-1h]
  int **v19; // [rsp+A0h] [rbp+7h]
  __int64 v20; // [rsp+A8h] [rbp+Fh]
  __int64 *v21; // [rsp+B0h] [rbp+17h]
  __int64 v22; // [rsp+B8h] [rbp+1Fh]
  int *v23; // [rsp+C0h] [rbp+27h]
  __int64 v24; // [rsp+C8h] [rbp+2Fh]
  int *v25; // [rsp+D0h] [rbp+37h]
  __int64 v26; // [rsp+D8h] [rbp+3Fh]

  memset_0(&v13, 0, 0x50uLL);
  if ( dword_1800E1278 )
  {
    RmpSystemMemoryMetricsQuery((struct _RM_SYSTEM_MEMORY_METRICS *)&v13);
    CempQueryUnbiasedInterruptTimeMs64();
    if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
    {
      v4 = *((_DWORD *)this + 433);
      v5 = v2 - v4;
      v6 = v4 - *((_DWORD *)this + 432);
      v10 = v14;
      v11 = v17;
      v9 = *((_DWORD *)this + 334);
      v12 = *((_QWORD *)this + 215);
      v25 = &v7;
      v23 = &v8;
      v21 = &v10;
      v19 = &v11;
      v17 = &v9;
      v15 = &v12;
      v7 = v5;
      v8 = v6;
      v26 = v3;
      v24 = v3;
      v22 = (unsigned int)(v3 + 4);
      v20 = v22;
      v18 = v3;
      v16 = v22;
      tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E1278, byte_1800D3324, 0LL, 0LL, v3 + 4, &v13);
    }
  }
}
