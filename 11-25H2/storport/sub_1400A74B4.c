/*
 * XREFs of sub_1400A74B4 @ 0x1400A74B4
 * Callers:
 *     sub_140010CA0 @ 0x140010CA0 (sub_140010CA0.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 * Callees:
 *     sub_1400A6D60 @ 0x1400A6D60 (sub_1400A6D60.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400A74B4(__int64 a1, char a2, unsigned __int64 a3)
{
  char v6; // r14
  int v7; // r12d
  LARGE_INTEGER v8; // rax
  unsigned __int64 v9; // r8
  NTSTATUS result; // eax
  __int64 v11; // r15
  __int64 v12; // rsi
  const EVENT_DESCRIPTOR *v13; // rdx
  char v14; // [rsp+48h] [rbp-51h]
  char v15; // [rsp+50h] [rbp-49h]
  char v16; // [rsp+58h] [rbp-41h]
  int v17; // [rsp+68h] [rbp-31h]
  unsigned __int64 v18; // [rsp+78h] [rbp-21h]
  unsigned __int64 QpcTimeStamp; // [rsp+80h] [rbp-19h] BYREF
  __int64 v20; // [rsp+88h] [rbp-11h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp-9h] BYREF
  __int64 v22; // [rsp+98h] [rbp-1h] BYREF
  GUID v23; // [rsp+A0h] [rbp+7h] BYREF

  QpcTimeStamp = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v22 = 0LL;
  v6 = 0;
  v7 = 0;
  v23 = 0LL;
  if ( !a2 )
  {
    v20 = *(_QWORD *)(a1 + 168);
    if ( (int)IoGetIoAttributionHandle(a1, &v22) < 0 )
    {
      if ( byte_140168724 )
        v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v8.QuadPart = KeQueryUnbiasedInterruptTime();
      QpcTimeStamp = v8.QuadPart;
      if ( v8.QuadPart <= 0 || v8.QuadPart >= v20 )
        v9 = v8.QuadPart - v20;
      else
        v9 = v8.QuadPart - v20 - 1;
      if ( byte_140168724 )
      {
        a3 = 0LL;
        if ( PerformanceFrequency.QuadPart && v9 )
          a3 = 10000
             * (1000 * (v9 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
             / PerformanceFrequency.QuadPart
             + 10000
             * (1000 * (v9 / PerformanceFrequency.QuadPart)
              + 1000 * (v9 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart);
      }
      else
      {
        a3 = v9;
      }
    }
    else
    {
      QpcTimeStamp = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      a3 = QpcTimeStamp - v20;
    }
  }
  result = qword_140168DA0;
  if ( qword_140168DA0 && a3 < qword_140168DA0 )
    return result;
  v11 = *(_QWORD *)(a1 + 184);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 40) + 64LL);
  result = IoGetActivityIdIrp(a1, &v23);
  if ( *(_BYTE *)v11 == 3 )
  {
    v6 = 40;
  }
  else
  {
    if ( *(_BYTE *)v11 != 4 )
    {
      if ( *(_BYTE *)v11 == 9 )
        v6 = 53;
      goto LABEL_25;
    }
    v6 = 42;
  }
  v7 = *(_DWORD *)(v11 + 8);
LABEL_25:
  if ( a2 )
  {
    if ( (byte_1401694F1 & 1) == 0 )
      return result;
    v18 = a3;
    v17 = v7;
    v16 = *(_BYTE *)(v12 + 106);
    v15 = *(_BYTE *)(v12 + 105);
    v14 = *(_BYTE *)(v12 + 104);
    v13 = (const EVENT_DESCRIPTOR *)&unk_14014A680;
  }
  else
  {
    if ( (byte_1401694F1 & 1) == 0 )
      return result;
    v18 = a3;
    v17 = v7;
    v16 = *(_BYTE *)(v12 + 106);
    v15 = *(_BYTE *)(v12 + 105);
    v14 = *(_BYTE *)(v12 + 104);
    v13 = (const EVENT_DESCRIPTOR *)&unk_14014B168;
  }
  return sub_1400A6D60(
           0LL,
           v13,
           &v23,
           a3,
           a1,
           v6,
           1,
           a1,
           *(_BYTE *)(*(_QWORD *)(v12 + 24) + 56LL),
           v14,
           v15,
           v16,
           0,
           v17,
           0LL,
           v18,
           QpcTimeStamp);
}
