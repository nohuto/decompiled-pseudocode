/*
 * XREFs of RIMSuppressAllActiveContacts @ 0x14007B620
 * Callers:
 *     RIMResetPointerDevices @ 0x14005EF00 (RIMResetPointerDevices.c)
 *     RIMSetDeviceOutputConfig @ 0x14007B81C (RIMSetDeviceOutputConfig.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x14008D0F8 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 * Callees:
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 *     RIMCmActiveContactsNext @ 0x140074BA4 (RIMCmActiveContactsNext.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x140074E60 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCmActiveContactsBegin @ 0x140075F1C (RIMCmActiveContactsBegin.c)
 *     RIMAbandonPointerDeviceFrame @ 0x140079770 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCmActiveContactsEnd @ 0x14007B47C (RIMCmActiveContactsEnd.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x14007B554 (RIMCmIsContactDeliveringAnyData.c)
 *     ?SuppressAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x14007B7A4 (-SuppressAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     RIMStartPointerDeviceFrame @ 0x1400F9BCC (RIMStartPointerDeviceFrame.c)
 *     RIMCmAddContactSuppressionReasons @ 0x14012C734 (RIMCmAddContactSuppressionReasons.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x14019D2A0 (RIMInsertSimulatedContactEndStateInFrame.c)
 */

__int64 __fastcall RIMSuppressAllActiveContacts(struct RawInputManagerObject *a1, __int64 a2, unsigned int a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // rsi
  LARGE_INTEGER v7; // rbx
  int v8; // r13d
  int v9; // r12d
  __int64 **v10; // rax
  __int64 *v11; // xmm1_8
  __int64 active; // rax
  __int128 v13; // xmm1
  __int64 *v14; // xmm0_8
  __int64 v15; // rax
  __int64 result; // rax
  __int64 *v17; // r14
  __int128 v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v19; // [rsp+40h] [rbp-40h]
  __int128 v20; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-28h]
  char v22[32]; // [rsp+60h] [rbp-20h] BYREF
  int v23; // [rsp+C8h] [rbp+48h]
  __int64 v25; // [rsp+D8h] [rbp+58h]

  InputTraceLogging::RIM::SuppressAllActiveContacts(*(const struct RIMDEV **)(a2 + 16), a3);
  v25 = *(_QWORD *)(a2 + 872) + 1LL;
  v23 = *(_DWORD *)(a2 + 844) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = PerformanceCounter;
  RIMAbandonPointerDeviceFrame(a1, v6);
  v8 = 0;
  v9 = 0;
  v10 = RIMCmActiveContactsBegin((__int64 **)&v20, a2);
  v11 = v10[2];
  v18 = *(_OWORD *)v10;
  v19 = v11;
  while ( 1 )
  {
    active = RIMCmActiveContactsEnd((__int64)v22, a2);
    v13 = *(_OWORD *)active;
    v14 = *(__int64 **)(active + 16);
    v15 = *(_QWORD *)active;
    v21 = v14;
    v20 = v13;
    if ( (_QWORD)v18 == v15 )
    {
      result = DWORD2(v20);
      if ( DWORD2(v18) == DWORD2(v20) && v19 == v21 )
        break;
    }
    v17 = v19 - 2;
    if ( (unsigned int)RIMCmIsContactDeliveringAnyData((__int64)(v19 - 2)) )
    {
      RIMCmAddContactSuppressionReasons(a2, v17, a3);
      if ( !v8 )
      {
        v8 = 1;
        v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
               a1,
               v6,
               (LARGE_INTEGER)v7.QuadPart);
      }
      if ( v9 )
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, v6, (_DWORD)v17, v25, v23, 1);
    }
    RIMCmActiveContactsNext(a2, (__int64 **)&v18);
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, v6);
    return RIMCompletePointerDeviceFrame(a1, v6, 4u);
  }
  return result;
}
