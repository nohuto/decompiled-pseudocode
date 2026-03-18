/*
 * XREFs of ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x14000AF30
 * Callers:
 *     PowerDimUndimResend @ 0x14000AD94 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1401D6144 (PowerDimMonitor.c)
 *     PowerUnDimMonitor @ 0x1401D6960 (PowerUnDimMonitor.c)
 * Callees:
 *     _tlgWriteAgg @ 0x14000B178 (_tlgWriteAgg.c)
 *     TlgAggregateFlush @ 0x140196790 (TlgAggregateFlush.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall PowerMonitorDimStateTelemetry(struct _DIM_UNDIM_TELEMETRY_DATA *a1)
{
  int v2; // ecx
  bool v3; // zf
  __int64 v4; // rbx
  __int64 v5; // rbx
  char v6; // [rsp+38h] [rbp-D0h] BYREF
  char v7; // [rsp+39h] [rbp-CFh] BYREF
  char v8; // [rsp+3Ah] [rbp-CEh] BYREF
  bool v9; // [rsp+3Bh] [rbp-CDh] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v16; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+80h] [rbp-88h]
  __int64 *v18; // [rsp+88h] [rbp-80h]
  __int64 v19; // [rsp+90h] [rbp-78h]
  int *v20; // [rsp+98h] [rbp-70h]
  __int64 v21; // [rsp+A0h] [rbp-68h]
  int *v22; // [rsp+A8h] [rbp-60h]
  __int64 v23; // [rsp+B0h] [rbp-58h]
  bool *v24; // [rsp+B8h] [rbp-50h]
  __int64 v25; // [rsp+C0h] [rbp-48h]
  char *v26; // [rsp+C8h] [rbp-40h]
  __int64 v27; // [rsp+D0h] [rbp-38h]
  char *v28; // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  char *v30; // [rsp+E8h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  int *v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]

  if ( (unsigned int)dword_1402A9E08 > 5
    && (qword_1402A9E18 & 0x400000000100LL) != 0
    && (qword_1402A9E20 & 0x400000000100LL) == qword_1402A9E20 )
  {
    v2 = *(_DWORD *)(W32GetUserSessionState() + 2888);
    v6 = *((_BYTE *)a1 + 6);
    v7 = *((_BYTE *)a1 + 5);
    v8 = *((_BYTE *)a1 + 4);
    v11 = v2;
    v9 = *(_DWORD *)(W32GetUserGdiSessionState() + 36) != 0;
    v33 = 4LL;
    v31 = 1LL;
    v29 = 1LL;
    v3 = *(_WORD *)(W32GetUserSessionState() + 68744) == 0;
    v12 = *(_DWORD *)a1;
    LOBYTE(v10) = v3;
    v14 = 1LL;
    v32 = &v11;
    v27 = 1LL;
    v30 = &v6;
    v28 = &v7;
    v26 = &v8;
    v24 = &v9;
    v22 = &v10;
    v20 = &v12;
    v18 = &v13;
    v16 = &v14;
    v25 = 1LL;
    v23 = 1LL;
    v13 = 16779264LL;
    v21 = 4LL;
    v19 = 8LL;
    v17 = 8LL;
    tlgWriteAgg((int)&dword_1402A9E08, (int)&dword_140282753, 0, 11, &v15);
  }
  if ( !*(_QWORD *)(W32GetUserSessionState() + 608) )
  {
    v4 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
    *(_QWORD *)(W32GetUserSessionState() + 608) = v4;
  }
  if ( MEMORY[0xFFFFF78000000008] > *(_QWORD *)(W32GetUserSessionState() + 608) )
  {
    v5 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
    *(_QWORD *)(W32GetUserSessionState() + 608) = v5;
    TlgAggregateFlush();
  }
}
