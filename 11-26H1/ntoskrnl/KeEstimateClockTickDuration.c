/*
 * XREFs of KeEstimateClockTickDuration @ 0x1404F5AD4
 * Callers:
 *     PpmEstimateIdleDuration @ 0x1404F57EC (PpmEstimateIdleDuration.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiGetClockTimerEarliestDeadline @ 0x14040D660 (KiGetClockTimerEarliestDeadline.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1404F5E20 (KiGetNextTimerExpirationDueTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

int *__fastcall KeEstimateClockTickDuration(
        __int64 a1,
        char a2,
        char a3,
        char a4,
        char a5,
        unsigned __int64 a6,
        _QWORD *a7,
        int *a8)
{
  __int64 v8; // rsi
  __int64 v11; // r14
  int v12; // eax
  int ClockTimerEarliestDeadline; // eax
  int v14; // edi
  unsigned __int64 v15; // rbx
  bool v16; // zf
  unsigned __int64 v17; // rax
  int *result; // rax
  char v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20; // [rsp+51h] [rbp-AFh] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  char v22; // [rsp+58h] [rbp-A8h] BYREF
  char v23; // [rsp+59h] [rbp-A7h] BYREF
  char v24; // [rsp+5Ah] [rbp-A6h] BYREF
  int v25; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v27; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h] BYREF
  int *v30; // [rsp+80h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+90h] [rbp-70h] BYREF
  _QWORD **v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  char *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  __int64 *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  int *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  char *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  char *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  char *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  char *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]

  v8 = -1LL;
  v27 = a7;
  v30 = a8;
  v11 = -1LL;
  v12 = KiClockState;
  v20 = a4;
  v19 = a3;
  v21 = KiClockState;
  v26 = -1LL;
  v25 = 7;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    ClockTimerEarliestDeadline = KiGetClockTimerEarliestDeadline(a1, 0);
    v25 = ClockTimerEarliestDeadline;
    if ( ClockTimerEarliestDeadline >= 7 )
    {
      v15 = -1LL;
      v14 = 0;
    }
    else
    {
      v14 = 2;
      v15 = *(_QWORD *)(16LL * ClockTimerEarliestDeadline + a1 + 38360)
          + *(unsigned int *)(16LL * ClockTimerEarliestDeadline + a1 + 38368);
    }
    v12 = v21;
    a4 = v20;
    a3 = v19;
  }
  else
  {
    v15 = KiClockTimerNextTickTime;
    v14 = 2;
  }
  v16 = *(_BYTE *)(a1 + 33) == 0;
  v21 = v14;
  if ( v16 )
  {
    KiGetNextTimerExpirationDueTime(a1, 0, a6, a3, a4, a5, (__int64)&v26, (__int64)&v21, 0LL);
    v11 = v26;
    if ( v15 != -1LL && v15 >= v26 )
    {
      v14 = 2;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !a2 )
      goto LABEL_20;
    if ( (_BYTE)KiDynamicTickDisableReason || v12 )
    {
      a2 = 0;
      goto LABEL_20;
    }
    KiGetNextTimerExpirationDueTime(a1, 1, a6, a3, a4, a5, (__int64)&v26, (__int64)&v21, 0LL);
    v11 = v26;
    if ( a6 + (unsigned int)KiLastRequestedTimeIncrement >= v26 )
    {
      v14 = 2;
      goto LABEL_20;
    }
  }
  v14 = v21;
  v15 = v11;
LABEL_20:
  if ( v15 == -1LL )
  {
    v17 = a6;
    v14 = 0;
    goto LABEL_23;
  }
LABEL_17:
  v17 = a6;
  if ( v15 <= a6 )
    v8 = 0LL;
  else
    v8 = v15 - a6;
LABEL_23:
  *v27 = v8;
  if ( (unsigned int)dword_140E06F90 > 5 )
  {
    v27 = (_QWORD *)v17;
    v33 = 8LL;
    v32 = &v27;
    v22 = *(_BYTE *)(a1 + 33);
    v35 = 1LL;
    v34 = &v22;
    v36 = &v26;
    v38 = &v28;
    v40 = &v21;
    v42 = &v29;
    v44 = &v25;
    v46 = &v23;
    v48 = &v19;
    v50 = &v20;
    v24 = a5;
    v52 = &v24;
    v26 = v8;
    v37 = 8LL;
    v28 = v15;
    v39 = 8LL;
    v21 = v14;
    v41 = 4LL;
    v29 = v11;
    v43 = 8LL;
    v45 = 4LL;
    v23 = a2;
    v47 = 1LL;
    v49 = 1LL;
    v51 = 1LL;
    v53 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06F90,
      (unsigned __int8 *)byte_1400495A0,
      0LL,
      0LL,
      0xDu,
      &v31);
  }
  result = v30;
  *v30 = v14;
  return result;
}
