/*
 * XREFs of sub_1400E2610 @ 0x1400E2610
 * Callers:
 *     <none>
 * Callees:
 *     sub_14008BAE8 @ 0x14008BAE8 (sub_14008BAE8.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E4D1C @ 0x1400E4D1C (sub_1400E4D1C.c)
 *     sub_1400E50B4 @ 0x1400E50B4 (sub_1400E50B4.c)
 *     sub_1400F320C @ 0x1400F320C (sub_1400F320C.c)
 */

void __fastcall sub_1400E2610(PDEVICE_OBJECT DeviceObject, char *Context)
{
  int v2; // eax
  char v4; // r12
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rsi
  char v7; // r15
  LARGE_INTEGER v8; // rax
  LARGE_INTEGER v9; // rbx
  __int64 v10; // rax
  __int64 QuadPart; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  _DWORD *v14; // rbp
  unsigned __int64 v15; // r8
  bool v16; // zf
  unsigned __int64 v17; // rsi
  union _LARGE_INTEGER v18; // [rsp+D8h] [rbp+10h] BYREF

  v2 = *((_DWORD *)Context + 34);
  v18.QuadPart = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 1LL;
  v7 = 1;
  if ( (v2 & 0x400) != 0 )
    goto LABEL_26;
  if ( byte_140168724 )
    v8 = KeQueryPerformanceCounter(&v18);
  else
    v8.QuadPart = KeQueryUnbiasedInterruptTime();
  v9 = v8;
  v10 = *((_QWORD *)Context + 135);
  if ( v10 <= 0 )
  {
    v14 = Context + 1076;
LABEL_30:
    if ( (int)sub_1400E50B4(Context) < 0 )
      v4 = 1;
    else
      *((LARGE_INTEGER *)Context + 135) = v9;
    goto LABEL_33;
  }
  QuadPart = *((_QWORD *)Context + 136);
  if ( QuadPart <= v10 )
  {
    v7 = 0;
    if ( v9.QuadPart > 0 && v9.QuadPart < v10 )
    {
      v12 = v9.QuadPart - v10 - 1;
      goto LABEL_12;
    }
    QuadPart = v9.QuadPart;
  }
  v12 = QuadPart - v10;
LABEL_12:
  if ( byte_140168724 )
  {
    v13 = 0LL;
    if ( v18.QuadPart && v12 )
      v13 = 10000 * (1000 * (v12 % v18.QuadPart) % v18.QuadPart) / v18.QuadPart
          + 10000 * (1000 * (v12 / v18.QuadPart) + 1000 * (v12 % v18.QuadPart) / v18.QuadPart);
  }
  else
  {
    v13 = v12;
  }
  v14 = Context + 1076;
  v15 = *((unsigned int *)Context + 269);
  v5 = v13 / 0x2710;
  if ( v13 / 0x2710 >= v15 )
  {
    *((_QWORD *)Context + 17) |= 0x20000000uLL;
    v16 = (Context[1344] & 0x20) == 0;
    *((_DWORD *)Context + 142) = 4;
    *((_DWORD *)Context + 294) = 34;
    if ( !v16 )
      sub_1400F320C((_DWORD)Context, 1, v15, v13 / 0x2710, 0LL, 0LL);
    if ( (dword_140168408 & 4) != 0 )
      sub_14008BAE8(3, (__int64)Context, 0LL);
    sub_1400A870C(
      (__int64)Context,
      1,
      2,
      (__int64)L"Keep Alive timeout expired",
      L"KeepAliveTimeout msecs",
      *v14,
      L"Wait time",
      v5,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    if ( (*((_DWORD *)Context + 34) & 0x400LL) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 192LL) )
      {
        KeCancelTimer((PKTIMER)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 128LL));
        KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 64LL));
        _InterlockedCompareExchange(
          (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 192LL),
          0,
          1);
      }
      KeClearEvent((PRKEVENT)(Context + 232));
      IoQueueWorkItem(*((PIO_WORKITEM *)Context + 20), sub_1400E2990, DelayedWorkQueue, Context);
    }
    goto LABEL_26;
  }
  if ( v7 )
    goto LABEL_30;
LABEL_33:
  if ( (*((_DWORD *)Context + 34) & 0x400LL) != 0 )
  {
LABEL_26:
    KeSetEvent((PRKEVENT)(Context + 208), 0, 0);
    return;
  }
  if ( !v4 )
  {
    v17 = (unsigned int)*v14;
    if ( (*(_DWORD *)(*((_QWORD *)Context + 74) + 96LL) & 0x40) != 0 )
      v6 = v17 >> 2;
    else
      v6 = v17 >> 1;
  }
  if ( !v7 && v6 >= (unsigned int)*v14 - v5 )
    v6 = (unsigned int)*v14 - v5;
  sub_1400E4D1C(Context, v6);
}
